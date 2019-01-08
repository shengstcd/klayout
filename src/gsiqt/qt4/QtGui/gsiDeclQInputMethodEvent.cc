
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
*  @file gsiDeclQInputMethodEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QInputMethodEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QInputMethodEvent

//  Constructor QInputMethodEvent::QInputMethodEvent()


static void _init_ctor_QInputMethodEvent_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QInputMethodEvent> ();
}

static void _call_ctor_QInputMethodEvent_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QInputMethodEvent *> (new QInputMethodEvent ());
}


//  Constructor QInputMethodEvent::QInputMethodEvent(const QString &preeditText, const QList<QInputMethodEvent::Attribute> &attributes)


static void _init_ctor_QInputMethodEvent_6641 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("preeditText");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("attributes");
  decl->add_arg<const QList<QInputMethodEvent::Attribute> & > (argspec_1);
  decl->set_return_new<QInputMethodEvent> ();
}

static void _call_ctor_QInputMethodEvent_6641 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QList<QInputMethodEvent::Attribute> &arg2 = args.read<const QList<QInputMethodEvent::Attribute> & > (heap);
  ret.write<QInputMethodEvent *> (new QInputMethodEvent (arg1, arg2));
}


//  Constructor QInputMethodEvent::QInputMethodEvent(const QInputMethodEvent &other)


static void _init_ctor_QInputMethodEvent_3045 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QInputMethodEvent & > (argspec_0);
  decl->set_return_new<QInputMethodEvent> ();
}

static void _call_ctor_QInputMethodEvent_3045 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QInputMethodEvent &arg1 = args.read<const QInputMethodEvent & > (heap);
  ret.write<QInputMethodEvent *> (new QInputMethodEvent (arg1));
}


// const QList<QInputMethodEvent::Attribute> &QInputMethodEvent::attributes()


static void _init_f_attributes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QList<QInputMethodEvent::Attribute> & > ();
}

static void _call_f_attributes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QList<QInputMethodEvent::Attribute> & > ((const QList<QInputMethodEvent::Attribute> &)((QInputMethodEvent *)cls)->attributes ());
}


// const QString &QInputMethodEvent::commitString()


static void _init_f_commitString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QString & > ();
}

static void _call_f_commitString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QString & > ((const QString &)((QInputMethodEvent *)cls)->commitString ());
}


// const QString &QInputMethodEvent::preeditString()


static void _init_f_preeditString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QString & > ();
}

static void _call_f_preeditString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QString & > ((const QString &)((QInputMethodEvent *)cls)->preeditString ());
}


// int QInputMethodEvent::replacementLength()


static void _init_f_replacementLength_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_replacementLength_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QInputMethodEvent *)cls)->replacementLength ());
}


// int QInputMethodEvent::replacementStart()


static void _init_f_replacementStart_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_replacementStart_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QInputMethodEvent *)cls)->replacementStart ());
}


// void QInputMethodEvent::setCommitString(const QString &commitString, int replaceFrom, int replaceLength)


static void _init_f_setCommitString_3343 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("commitString");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("replaceFrom", true, "0");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("replaceLength", true, "0");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setCommitString_3343 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  int arg2 = args ? args.read<int > (heap) : (int)(0);
  int arg3 = args ? args.read<int > (heap) : (int)(0);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethodEvent *)cls)->setCommitString (arg1, arg2, arg3);
}



namespace gsi
{

static gsi::Methods methods_QInputMethodEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QInputMethodEvent::QInputMethodEvent()\nThis method creates an object of class QInputMethodEvent.", &_init_ctor_QInputMethodEvent_0, &_call_ctor_QInputMethodEvent_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QInputMethodEvent::QInputMethodEvent(const QString &preeditText, const QList<QInputMethodEvent::Attribute> &attributes)\nThis method creates an object of class QInputMethodEvent.", &_init_ctor_QInputMethodEvent_6641, &_call_ctor_QInputMethodEvent_6641);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QInputMethodEvent::QInputMethodEvent(const QInputMethodEvent &other)\nThis method creates an object of class QInputMethodEvent.", &_init_ctor_QInputMethodEvent_3045, &_call_ctor_QInputMethodEvent_3045);
  methods += new qt_gsi::GenericMethod ("attributes", "@brief Method const QList<QInputMethodEvent::Attribute> &QInputMethodEvent::attributes()\n", true, &_init_f_attributes_c0, &_call_f_attributes_c0);
  methods += new qt_gsi::GenericMethod (":commitString", "@brief Method const QString &QInputMethodEvent::commitString()\n", true, &_init_f_commitString_c0, &_call_f_commitString_c0);
  methods += new qt_gsi::GenericMethod ("preeditString", "@brief Method const QString &QInputMethodEvent::preeditString()\n", true, &_init_f_preeditString_c0, &_call_f_preeditString_c0);
  methods += new qt_gsi::GenericMethod ("replacementLength", "@brief Method int QInputMethodEvent::replacementLength()\n", true, &_init_f_replacementLength_c0, &_call_f_replacementLength_c0);
  methods += new qt_gsi::GenericMethod ("replacementStart", "@brief Method int QInputMethodEvent::replacementStart()\n", true, &_init_f_replacementStart_c0, &_call_f_replacementStart_c0);
  methods += new qt_gsi::GenericMethod ("setCommitString", "@brief Method void QInputMethodEvent::setCommitString(const QString &commitString, int replaceFrom, int replaceLength)\n", false, &_init_f_setCommitString_3343, &_call_f_setCommitString_3343);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QInputMethodEvent> decl_QInputMethodEvent (qtdecl_QEvent (), "QtGui", "QInputMethodEvent",
  methods_QInputMethodEvent (),
  "@qt\n@brief Binding of QInputMethodEvent");


GSI_QTGUI_PUBLIC gsi::Class<QInputMethodEvent> &qtdecl_QInputMethodEvent () { return decl_QInputMethodEvent; }

}


//  Implementation of the enum wrapper class for QInputMethodEvent::AttributeType
namespace qt_gsi
{

static gsi::Enum<QInputMethodEvent::AttributeType> decl_QInputMethodEvent_AttributeType_Enum ("QtGui", "QInputMethodEvent_AttributeType",
    gsi::enum_const ("TextFormat", QInputMethodEvent::TextFormat, "@brief Enum constant QInputMethodEvent::TextFormat") +
    gsi::enum_const ("Cursor", QInputMethodEvent::Cursor, "@brief Enum constant QInputMethodEvent::Cursor") +
    gsi::enum_const ("Language", QInputMethodEvent::Language, "@brief Enum constant QInputMethodEvent::Language") +
    gsi::enum_const ("Ruby", QInputMethodEvent::Ruby, "@brief Enum constant QInputMethodEvent::Ruby") +
    gsi::enum_const ("Selection", QInputMethodEvent::Selection, "@brief Enum constant QInputMethodEvent::Selection"),
  "@qt\n@brief This class represents the QInputMethodEvent::AttributeType enum");

static gsi::QFlagsClass<QInputMethodEvent::AttributeType > decl_QInputMethodEvent_AttributeType_Enums ("QtGui", "QInputMethodEvent_QFlags_AttributeType",
  "@qt\n@brief This class represents the QFlags<QInputMethodEvent::AttributeType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QInputMethodEvent> inject_QInputMethodEvent_AttributeType_Enum_in_parent (decl_QInputMethodEvent_AttributeType_Enum.defs ());
static gsi::ClassExt<QInputMethodEvent> decl_QInputMethodEvent_AttributeType_Enum_as_child (decl_QInputMethodEvent_AttributeType_Enum, "AttributeType");
static gsi::ClassExt<QInputMethodEvent> decl_QInputMethodEvent_AttributeType_Enums_as_child (decl_QInputMethodEvent_AttributeType_Enums, "QFlags_AttributeType");

}

