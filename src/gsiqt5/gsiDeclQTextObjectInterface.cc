
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2017 Matthias Koefferlein

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

/**
*  @file gsiDeclQTextObjectInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextObjectInterface>
#include <QPainter>
#include <QRectF>
#include <QSizeF>
#include <QTextDocument>
#include <QTextFormat>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextObjectInterface

// void QTextObjectInterface::drawObject(QPainter *painter, const QRectF &rect, QTextDocument *doc, int posInDocument, const QTextFormat &format)


static void _init_f_drawObject_8010 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("rect");
  decl->add_arg<const QRectF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("doc");
  decl->add_arg<QTextDocument * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("posInDocument");
  decl->add_arg<int > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("format");
  decl->add_arg<const QTextFormat & > (argspec_4);
  decl->set_return<void > ();
}

static void _call_f_drawObject_8010 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = args.read<QPainter * > (heap);
  const QRectF &arg2 = args.read<const QRectF & > (heap);
  QTextDocument *arg3 = args.read<QTextDocument * > (heap);
  int arg4 = args.read<int > (heap);
  const QTextFormat &arg5 = args.read<const QTextFormat & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextObjectInterface *)cls)->drawObject (arg1, arg2, arg3, arg4, arg5);
}


// QSizeF QTextObjectInterface::intrinsicSize(QTextDocument *doc, int posInDocument, const QTextFormat &format)


static void _init_f_intrinsicSize_4938 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("doc");
  decl->add_arg<QTextDocument * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("posInDocument");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("format");
  decl->add_arg<const QTextFormat & > (argspec_2);
  decl->set_return<QSizeF > ();
}

static void _call_f_intrinsicSize_4938 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextDocument *arg1 = args.read<QTextDocument * > (heap);
  int arg2 = args.read<int > (heap);
  const QTextFormat &arg3 = args.read<const QTextFormat & > (heap);
  ret.write<QSizeF > ((QSizeF)((QTextObjectInterface *)cls)->intrinsicSize (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QTextObjectInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("drawObject", "@brief Method void QTextObjectInterface::drawObject(QPainter *painter, const QRectF &rect, QTextDocument *doc, int posInDocument, const QTextFormat &format)\n", false, &_init_f_drawObject_8010, &_call_f_drawObject_8010);
  methods += new qt_gsi::GenericMethod ("intrinsicSize", "@brief Method QSizeF QTextObjectInterface::intrinsicSize(QTextDocument *doc, int posInDocument, const QTextFormat &format)\n", false, &_init_f_intrinsicSize_4938, &_call_f_intrinsicSize_4938);
  return methods;
}

gsi::Class<QTextObjectInterface> decl_QTextObjectInterface ("QTextObjectInterface_Native",
  methods_QTextObjectInterface (),
  "@hide\n@alias QTextObjectInterface");

GSIQT_PUBLIC gsi::Class<QTextObjectInterface> &qtdecl_QTextObjectInterface () { return decl_QTextObjectInterface; }

}


class QTextObjectInterface_Adaptor : public QTextObjectInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTextObjectInterface_Adaptor();

  //  [adaptor ctor] QTextObjectInterface::QTextObjectInterface()
  QTextObjectInterface_Adaptor() : QTextObjectInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QTextObjectInterface::drawObject(QPainter *painter, const QRectF &rect, QTextDocument *doc, int posInDocument, const QTextFormat &format)
  void cbs_drawObject_8010_0(QPainter *painter, const QRectF &rect, QTextDocument *doc, int posInDocument, const QTextFormat &format)
  {
    __SUPPRESS_UNUSED_WARNING (painter);
    __SUPPRESS_UNUSED_WARNING (rect);
    __SUPPRESS_UNUSED_WARNING (doc);
    __SUPPRESS_UNUSED_WARNING (posInDocument);
    __SUPPRESS_UNUSED_WARNING (format);
    throw qt_gsi::AbstractMethodCalledException("drawObject");
  }

  virtual void drawObject(QPainter *painter, const QRectF &rect, QTextDocument *doc, int posInDocument, const QTextFormat &format)
  {
    if (cb_drawObject_8010_0.can_issue()) {
      cb_drawObject_8010_0.issue<QTextObjectInterface_Adaptor, QPainter *, const QRectF &, QTextDocument *, int, const QTextFormat &>(&QTextObjectInterface_Adaptor::cbs_drawObject_8010_0, painter, rect, doc, posInDocument, format);
    } else {
      throw qt_gsi::AbstractMethodCalledException("drawObject");
    }
  }

  //  [adaptor impl] QSizeF QTextObjectInterface::intrinsicSize(QTextDocument *doc, int posInDocument, const QTextFormat &format)
  QSizeF cbs_intrinsicSize_4938_0(QTextDocument *doc, int posInDocument, const QTextFormat &format)
  {
    __SUPPRESS_UNUSED_WARNING (doc);
    __SUPPRESS_UNUSED_WARNING (posInDocument);
    __SUPPRESS_UNUSED_WARNING (format);
    throw qt_gsi::AbstractMethodCalledException("intrinsicSize");
  }

  virtual QSizeF intrinsicSize(QTextDocument *doc, int posInDocument, const QTextFormat &format)
  {
    if (cb_intrinsicSize_4938_0.can_issue()) {
      return cb_intrinsicSize_4938_0.issue<QTextObjectInterface_Adaptor, QSizeF, QTextDocument *, int, const QTextFormat &>(&QTextObjectInterface_Adaptor::cbs_intrinsicSize_4938_0, doc, posInDocument, format);
    } else {
      throw qt_gsi::AbstractMethodCalledException("intrinsicSize");
    }
  }

  gsi::Callback cb_drawObject_8010_0;
  gsi::Callback cb_intrinsicSize_4938_0;
};

QTextObjectInterface_Adaptor::~QTextObjectInterface_Adaptor() { }

//  Constructor QTextObjectInterface::QTextObjectInterface() (adaptor class)

static void _init_ctor_QTextObjectInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextObjectInterface_Adaptor> ();
}

static void _call_ctor_QTextObjectInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextObjectInterface_Adaptor *> (new QTextObjectInterface_Adaptor ());
}


// void QTextObjectInterface::drawObject(QPainter *painter, const QRectF &rect, QTextDocument *doc, int posInDocument, const QTextFormat &format)

static void _init_cbs_drawObject_8010_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("rect");
  decl->add_arg<const QRectF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("doc");
  decl->add_arg<QTextDocument * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("posInDocument");
  decl->add_arg<int > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("format");
  decl->add_arg<const QTextFormat & > (argspec_4);
  decl->set_return<void > ();
}

static void _call_cbs_drawObject_8010_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = args.read<QPainter * > (heap);
  const QRectF &arg2 = args.read<const QRectF & > (heap);
  QTextDocument *arg3 = args.read<QTextDocument * > (heap);
  int arg4 = args.read<int > (heap);
  const QTextFormat &arg5 = args.read<const QTextFormat & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextObjectInterface_Adaptor *)cls)->cbs_drawObject_8010_0 (arg1, arg2, arg3, arg4, arg5);
}

static void _set_callback_cbs_drawObject_8010_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextObjectInterface_Adaptor *)cls)->cb_drawObject_8010_0 = cb;
}


// QSizeF QTextObjectInterface::intrinsicSize(QTextDocument *doc, int posInDocument, const QTextFormat &format)

static void _init_cbs_intrinsicSize_4938_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("doc");
  decl->add_arg<QTextDocument * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("posInDocument");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("format");
  decl->add_arg<const QTextFormat & > (argspec_2);
  decl->set_return<QSizeF > ();
}

static void _call_cbs_intrinsicSize_4938_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextDocument *arg1 = args.read<QTextDocument * > (heap);
  int arg2 = args.read<int > (heap);
  const QTextFormat &arg3 = args.read<const QTextFormat & > (heap);
  ret.write<QSizeF > ((QSizeF)((QTextObjectInterface_Adaptor *)cls)->cbs_intrinsicSize_4938_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_intrinsicSize_4938_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextObjectInterface_Adaptor *)cls)->cb_intrinsicSize_4938_0 = cb;
}


namespace gsi
{

gsi::Class<QTextObjectInterface> &qtdecl_QTextObjectInterface ();

static gsi::Methods methods_QTextObjectInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextObjectInterface::QTextObjectInterface()\nThis method creates an object of class QTextObjectInterface.", &_init_ctor_QTextObjectInterface_Adaptor_0, &_call_ctor_QTextObjectInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("drawObject", "@hide", false, &_init_cbs_drawObject_8010_0, &_call_cbs_drawObject_8010_0);
  methods += new qt_gsi::GenericMethod ("drawObject", "@brief Virtual method void QTextObjectInterface::drawObject(QPainter *painter, const QRectF &rect, QTextDocument *doc, int posInDocument, const QTextFormat &format)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_drawObject_8010_0, &_call_cbs_drawObject_8010_0, &_set_callback_cbs_drawObject_8010_0);
  methods += new qt_gsi::GenericMethod ("intrinsicSize", "@hide", false, &_init_cbs_intrinsicSize_4938_0, &_call_cbs_intrinsicSize_4938_0);
  methods += new qt_gsi::GenericMethod ("intrinsicSize", "@brief Virtual method QSizeF QTextObjectInterface::intrinsicSize(QTextDocument *doc, int posInDocument, const QTextFormat &format)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_intrinsicSize_4938_0, &_call_cbs_intrinsicSize_4938_0, &_set_callback_cbs_intrinsicSize_4938_0);
  return methods;
}

gsi::Class<QTextObjectInterface_Adaptor> decl_QTextObjectInterface_Adaptor (qtdecl_QTextObjectInterface (), "QTextObjectInterface",
  methods_QTextObjectInterface_Adaptor (),
  "@qt\n@brief Binding of QTextObjectInterface");

}

