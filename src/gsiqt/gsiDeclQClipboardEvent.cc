
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
*  @file gsiDeclQClipboardEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QClipboardEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QClipboardEvent

namespace gsi
{

static gsi::Methods methods_QClipboardEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QClipboardEvent> decl_QClipboardEvent (qtdecl_QEvent (), "QClipboardEvent_Native",
  methods_QClipboardEvent (),
  "@hide\n@alias QClipboardEvent");

GSIQT_PUBLIC gsi::Class<QClipboardEvent> &qtdecl_QClipboardEvent () { return decl_QClipboardEvent; }

}


class QClipboardEvent_Adaptor : public QClipboardEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QClipboardEvent_Adaptor();

  
};

QClipboardEvent_Adaptor::~QClipboardEvent_Adaptor() { }

namespace gsi
{

gsi::Class<QClipboardEvent> &qtdecl_QClipboardEvent ();

static gsi::Methods methods_QClipboardEvent_Adaptor () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QClipboardEvent_Adaptor> decl_QClipboardEvent_Adaptor (qtdecl_QClipboardEvent (), "QClipboardEvent",
  methods_QClipboardEvent_Adaptor (),
  "@qt\n@brief Binding of QClipboardEvent");

}

