
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#include "layBookmarksView.h"
#include "layLayoutView.h"

#include <QVBoxLayout>

namespace lay
{

// --------------------------------------------------------------------------------------------

class BookmarkListModel
  : public QAbstractItemModel
{
public:
  BookmarkListModel (const lay::BookmarkList *bookmarks)
    : mp_bookmarks (bookmarks)
  {
    //  .. nothing yet ..
  }

  int rowCount (const QModelIndex &index) const
  {
    return index.isValid () ? 0 : int (mp_bookmarks->size ());
  }

  int columnCount (const QModelIndex &) const
  {
    return 1;
  }

  QVariant data (const QModelIndex &index, int role) const
  {
    if (role == Qt::DisplayRole && index.row () >= 0 && index.row () < int (mp_bookmarks->size ())) {
      return tl::to_qstring (mp_bookmarks->name (size_t (index.row ())));
    }

    return QVariant ();
  }

  QModelIndex index (int row, int column, const QModelIndex &parent) const
  {
    if (parent.isValid ()) {
      return QModelIndex ();
    } else {
      return createIndex (row, column, 0);
    }
  }

  QModelIndex parent(const QModelIndex &) const
  {
    return QModelIndex ();
  }

  void refresh ()
  {
    dataChanged (createIndex (0, 0, 0), createIndex (rowCount (QModelIndex ()), 1, 0));
  }

private:
  const lay::BookmarkList *mp_bookmarks;
};

// --------------------------------------------------------------------------------------------

BookmarksView::BookmarksView (LayoutView *view, QWidget *parent, const char *name)
  : QFrame (parent)
{
  setObjectName (QString::fromUtf8 (name));

  mp_view = view;

  QVBoxLayout *layout = new QVBoxLayout ();
  layout->setMargin (0);
  setLayout (layout);

  mp_bookmarks = new QListView (this);
  layout->addWidget (mp_bookmarks);

  mp_bookmarks->setModel (new BookmarkListModel (&view->bookmarks ()));

  connect (mp_bookmarks, SIGNAL (doubleClicked (const QModelIndex &)), this, SLOT (bookmark_triggered (const QModelIndex &)));
}

BookmarksView::~BookmarksView ()
{
  //  .. nothing yet ..
}

void
BookmarksView::set_background_color (QColor c)
{
  QPalette pl (mp_bookmarks->palette ());
  pl.setColor (QPalette::Base, c);
  mp_bookmarks->setPalette (pl);
}

void
BookmarksView::set_text_color (QColor c)
{
  QPalette pl (mp_bookmarks->palette ());
  pl.setColor (QPalette::Text, c);
  mp_bookmarks->setPalette (pl);
}

void
BookmarksView::refresh ()
{
  BookmarkListModel *model = dynamic_cast<BookmarkListModel *> (mp_bookmarks->model ());
  if (model) {
    model->refresh ();
  }
}

void
BookmarksView::bookmark_triggered (const QModelIndex &index)
{
  if (index.row () >= 0 && index.row () < int (mp_view->bookmarks ().size ())) {
    mp_view->goto_view (mp_view->bookmarks ().state (index.row ()));
  }
}

}

