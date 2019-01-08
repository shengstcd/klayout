
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

/**
*  @file gsiDeclQSimpleXmlNodeModel.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSimpleXmlNodeModel>
#include <QAbstractXmlReceiver>
#include <QSourceLocation>
#include <QUrl>
#include <QXmlName>
#include <QXmlNamePool>
#include <QXmlNodeModelIndex>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include "gsiDeclQtXmlPatternsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSimpleXmlNodeModel

// QUrl QSimpleXmlNodeModel::baseUri(const QXmlNodeModelIndex &node)


static void _init_f_baseUri_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("node");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QUrl > ();
}

static void _call_f_baseUri_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = args.read<const QXmlNodeModelIndex & > (heap);
  ret.write<QUrl > ((QUrl)((QSimpleXmlNodeModel *)cls)->baseUri (arg1));
}


// QXmlNodeModelIndex QSimpleXmlNodeModel::elementById(const QXmlName &id)


static void _init_f_elementById_c2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<QXmlNodeModelIndex > ();
}

static void _call_f_elementById_c2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  ret.write<QXmlNodeModelIndex > ((QXmlNodeModelIndex)((QSimpleXmlNodeModel *)cls)->elementById (arg1));
}


// QXmlNamePool &QSimpleXmlNodeModel::namePool()


static void _init_f_namePool_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QXmlNamePool & > ();
}

static void _call_f_namePool_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlNamePool & > ((QXmlNamePool &)((QSimpleXmlNodeModel *)cls)->namePool ());
}


// QVector<QXmlName> QSimpleXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex &)


static void _init_f_namespaceBindings_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QVector<QXmlName> > ();
}

static void _call_f_namespaceBindings_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = args.read<const QXmlNodeModelIndex & > (heap);
  ret.write<QVector<QXmlName> > ((QVector<QXmlName>)((QSimpleXmlNodeModel *)cls)->namespaceBindings (arg1));
}


// QVector<QXmlNodeModelIndex> QSimpleXmlNodeModel::nodesByIdref(const QXmlName &idref)


static void _init_f_nodesByIdref_c2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("idref");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<QVector<QXmlNodeModelIndex> > ();
}

static void _call_f_nodesByIdref_c2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  ret.write<QVector<QXmlNodeModelIndex> > ((QVector<QXmlNodeModelIndex>)((QSimpleXmlNodeModel *)cls)->nodesByIdref (arg1));
}


// QString QSimpleXmlNodeModel::stringValue(const QXmlNodeModelIndex &node)


static void _init_f_stringValue_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("node");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_stringValue_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = args.read<const QXmlNodeModelIndex & > (heap);
  ret.write<QString > ((QString)((QSimpleXmlNodeModel *)cls)->stringValue (arg1));
}



namespace gsi
{

static gsi::Methods methods_QSimpleXmlNodeModel () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("baseUri", "@brief Method QUrl QSimpleXmlNodeModel::baseUri(const QXmlNodeModelIndex &node)\nThis is a reimplementation of QAbstractXmlNodeModel::baseUri", true, &_init_f_baseUri_c3090, &_call_f_baseUri_c3090);
  methods += new qt_gsi::GenericMethod ("elementById", "@brief Method QXmlNodeModelIndex QSimpleXmlNodeModel::elementById(const QXmlName &id)\nThis is a reimplementation of QAbstractXmlNodeModel::elementById", true, &_init_f_elementById_c2084, &_call_f_elementById_c2084);
  methods += new qt_gsi::GenericMethod ("namePool", "@brief Method QXmlNamePool &QSimpleXmlNodeModel::namePool()\n", true, &_init_f_namePool_c0, &_call_f_namePool_c0);
  methods += new qt_gsi::GenericMethod ("namespaceBindings", "@brief Method QVector<QXmlName> QSimpleXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex &)\nThis is a reimplementation of QAbstractXmlNodeModel::namespaceBindings", true, &_init_f_namespaceBindings_c3090, &_call_f_namespaceBindings_c3090);
  methods += new qt_gsi::GenericMethod ("nodesByIdref", "@brief Method QVector<QXmlNodeModelIndex> QSimpleXmlNodeModel::nodesByIdref(const QXmlName &idref)\nThis is a reimplementation of QAbstractXmlNodeModel::nodesByIdref", true, &_init_f_nodesByIdref_c2084, &_call_f_nodesByIdref_c2084);
  methods += new qt_gsi::GenericMethod ("stringValue", "@brief Method QString QSimpleXmlNodeModel::stringValue(const QXmlNodeModelIndex &node)\nThis is a reimplementation of QAbstractXmlNodeModel::stringValue", true, &_init_f_stringValue_c3090, &_call_f_stringValue_c3090);
  return methods;
}

gsi::Class<QAbstractXmlNodeModel> &qtdecl_QAbstractXmlNodeModel ();

gsi::Class<QSimpleXmlNodeModel> decl_QSimpleXmlNodeModel (qtdecl_QAbstractXmlNodeModel (), "QtXmlPatterns", "QSimpleXmlNodeModel",
  methods_QSimpleXmlNodeModel (),
  "@qt\n@brief Binding of QSimpleXmlNodeModel");


GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QSimpleXmlNodeModel> &qtdecl_QSimpleXmlNodeModel () { return decl_QSimpleXmlNodeModel; }

}

