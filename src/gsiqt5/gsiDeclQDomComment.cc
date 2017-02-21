
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
*  @file gsiDeclQDomComment.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomComment>
#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomCharacterData>
#include <QDomDocument>
#include <QDomDocumentFragment>
#include <QDomDocumentType>
#include <QDomElement>
#include <QDomEntity>
#include <QDomEntityReference>
#include <QDomNamedNodeMap>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomNotation>
#include <QDomProcessingInstruction>
#include <QDomText>
#include <QTextStream>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomComment

//  Constructor QDomComment::QDomComment()


static void _init_ctor_QDomComment_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomComment> ();
}

static void _call_ctor_QDomComment_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomComment *> (new QDomComment ());
}


//  Constructor QDomComment::QDomComment(const QDomComment &x)


static void _init_ctor_QDomComment_2405 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomComment & > (argspec_0);
  decl->set_return_new<QDomComment> ();
}

static void _call_ctor_QDomComment_2405 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomComment &arg1 = args.read<const QDomComment & > (heap);
  ret.write<QDomComment *> (new QDomComment (arg1));
}


// () const


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomComment *)cls)->nodeType ()));
}


// (const QDomComment &)


static void _init_f_operator_eq__2405 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomComment & > (argspec_0);
  decl->set_return<QDomComment & > ();
}

static void _call_f_operator_eq__2405 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomComment &arg1 = args.read<const QDomComment & > (heap);
  ret.write<QDomComment & > ((QDomComment &)((QDomComment *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QDomComment () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomComment::QDomComment()\nThis method creates an object of class QDomComment.", &_init_ctor_QDomComment_0, &_call_ctor_QDomComment_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomComment::QDomComment(const QDomComment &x)\nThis method creates an object of class QDomComment.", &_init_ctor_QDomComment_2405, &_call_ctor_QDomComment_2405);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method () const\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method (const QDomComment &)\n", false, &_init_f_operator_eq__2405, &_call_f_operator_eq__2405);
  return methods;
}

gsi::Class<QDomCharacterData> &qtdecl_QDomCharacterData ();

gsi::Class<QDomComment> decl_QDomComment (qtdecl_QDomCharacterData (), "QDomComment",
  methods_QDomComment (),
  "@qt\n@brief Binding of QDomComment");


GSIQT_PUBLIC gsi::Class<QDomComment> &qtdecl_QDomComment () { return decl_QDomComment; }

}

