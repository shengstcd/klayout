
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
*  @file gsiDeclQContextMenuEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QContextMenuEvent>
#include <QPoint>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QContextMenuEvent

// const QPoint &QContextMenuEvent::globalPos()


static void _init_f_globalPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_globalPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QContextMenuEvent *)cls)->globalPos ());
}


// int QContextMenuEvent::globalX()


static void _init_f_globalX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QContextMenuEvent *)cls)->globalX ());
}


// int QContextMenuEvent::globalY()


static void _init_f_globalY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QContextMenuEvent *)cls)->globalY ());
}


// const QPoint &QContextMenuEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QContextMenuEvent *)cls)->pos ());
}


// QContextMenuEvent::Reason QContextMenuEvent::reason()


static void _init_f_reason_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QContextMenuEvent::Reason>::target_type > ();
}

static void _call_f_reason_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QContextMenuEvent::Reason>::target_type > ((qt_gsi::Converter<QContextMenuEvent::Reason>::target_type)qt_gsi::CppToQtAdaptor<QContextMenuEvent::Reason>(((QContextMenuEvent *)cls)->reason ()));
}


// int QContextMenuEvent::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QContextMenuEvent *)cls)->x ());
}


// int QContextMenuEvent::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QContextMenuEvent *)cls)->y ());
}


namespace gsi
{

static gsi::Methods methods_QContextMenuEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("globalPos", "@brief Method const QPoint &QContextMenuEvent::globalPos()\n", true, &_init_f_globalPos_c0, &_call_f_globalPos_c0);
  methods += new qt_gsi::GenericMethod ("globalX", "@brief Method int QContextMenuEvent::globalX()\n", true, &_init_f_globalX_c0, &_call_f_globalX_c0);
  methods += new qt_gsi::GenericMethod ("globalY", "@brief Method int QContextMenuEvent::globalY()\n", true, &_init_f_globalY_c0, &_call_f_globalY_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method const QPoint &QContextMenuEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("reason", "@brief Method QContextMenuEvent::Reason QContextMenuEvent::reason()\n", true, &_init_f_reason_c0, &_call_f_reason_c0);
  methods += new qt_gsi::GenericMethod ("x", "@brief Method int QContextMenuEvent::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod ("y", "@brief Method int QContextMenuEvent::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  return methods;
}

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

gsi::Class<QContextMenuEvent> decl_QContextMenuEvent (qtdecl_QInputEvent (), "QContextMenuEvent_Native",
  methods_QContextMenuEvent (),
  "@hide\n@alias QContextMenuEvent");

GSIQT_PUBLIC gsi::Class<QContextMenuEvent> &qtdecl_QContextMenuEvent () { return decl_QContextMenuEvent; }

}


class QContextMenuEvent_Adaptor : public QContextMenuEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QContextMenuEvent_Adaptor();

  //  [adaptor ctor] QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint &pos, const QPoint &globalPos, QFlags<Qt::KeyboardModifier> modifiers)
  QContextMenuEvent_Adaptor(QContextMenuEvent::Reason reason, const QPoint &pos, const QPoint &globalPos, QFlags<Qt::KeyboardModifier> modifiers) : QContextMenuEvent(reason, pos, globalPos, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint &pos, const QPoint &globalPos)
  QContextMenuEvent_Adaptor(QContextMenuEvent::Reason reason, const QPoint &pos, const QPoint &globalPos) : QContextMenuEvent(reason, pos, globalPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint &pos)
  QContextMenuEvent_Adaptor(QContextMenuEvent::Reason reason, const QPoint &pos) : QContextMenuEvent(reason, pos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QContextMenuEvent_Adaptor::~QContextMenuEvent_Adaptor() { }

//  Constructor QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint &pos, const QPoint &globalPos, QFlags<Qt::KeyboardModifier> modifiers) (adaptor class)

static void _init_ctor_QContextMenuEvent_Adaptor_9494 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("reason");
  decl->add_arg<const qt_gsi::Converter<QContextMenuEvent::Reason>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPoint & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("globalPos");
  decl->add_arg<const QPoint & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_3);
  decl->set_return_new<QContextMenuEvent_Adaptor> ();
}

static void _call_ctor_QContextMenuEvent_Adaptor_9494 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QContextMenuEvent::Reason>::target_type & arg1 = args.read<const qt_gsi::Converter<QContextMenuEvent::Reason>::target_type & > (heap);
  const QPoint &arg2 = args.read<const QPoint & > (heap);
  const QPoint &arg3 = args.read<const QPoint & > (heap);
  QFlags<Qt::KeyboardModifier> arg4 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  ret.write<QContextMenuEvent_Adaptor *> (new QContextMenuEvent_Adaptor (qt_gsi::QtToCppAdaptor<QContextMenuEvent::Reason>(arg1).cref(), arg2, arg3, arg4));
}


//  Constructor QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint &pos, const QPoint &globalPos) (adaptor class)

static void _init_ctor_QContextMenuEvent_Adaptor_6525 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("reason");
  decl->add_arg<const qt_gsi::Converter<QContextMenuEvent::Reason>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPoint & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("globalPos");
  decl->add_arg<const QPoint & > (argspec_2);
  decl->set_return_new<QContextMenuEvent_Adaptor> ();
}

static void _call_ctor_QContextMenuEvent_Adaptor_6525 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QContextMenuEvent::Reason>::target_type & arg1 = args.read<const qt_gsi::Converter<QContextMenuEvent::Reason>::target_type & > (heap);
  const QPoint &arg2 = args.read<const QPoint & > (heap);
  const QPoint &arg3 = args.read<const QPoint & > (heap);
  ret.write<QContextMenuEvent_Adaptor *> (new QContextMenuEvent_Adaptor (qt_gsi::QtToCppAdaptor<QContextMenuEvent::Reason>(arg1).cref(), arg2, arg3));
}


//  Constructor QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint &pos) (adaptor class)

static void _init_ctor_QContextMenuEvent_Adaptor_4717 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("reason");
  decl->add_arg<const qt_gsi::Converter<QContextMenuEvent::Reason>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPoint & > (argspec_1);
  decl->set_return_new<QContextMenuEvent_Adaptor> ();
}

static void _call_ctor_QContextMenuEvent_Adaptor_4717 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QContextMenuEvent::Reason>::target_type & arg1 = args.read<const qt_gsi::Converter<QContextMenuEvent::Reason>::target_type & > (heap);
  const QPoint &arg2 = args.read<const QPoint & > (heap);
  ret.write<QContextMenuEvent_Adaptor *> (new QContextMenuEvent_Adaptor (qt_gsi::QtToCppAdaptor<QContextMenuEvent::Reason>(arg1).cref(), arg2));
}


namespace gsi
{

gsi::Class<QContextMenuEvent> &qtdecl_QContextMenuEvent ();

static gsi::Methods methods_QContextMenuEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint &pos, const QPoint &globalPos, QFlags<Qt::KeyboardModifier> modifiers)\nThis method creates an object of class QContextMenuEvent.", &_init_ctor_QContextMenuEvent_Adaptor_9494, &_call_ctor_QContextMenuEvent_Adaptor_9494);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint &pos, const QPoint &globalPos)\nThis method creates an object of class QContextMenuEvent.", &_init_ctor_QContextMenuEvent_Adaptor_6525, &_call_ctor_QContextMenuEvent_Adaptor_6525);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QContextMenuEvent::QContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint &pos)\nThis method creates an object of class QContextMenuEvent.", &_init_ctor_QContextMenuEvent_Adaptor_4717, &_call_ctor_QContextMenuEvent_Adaptor_4717);
  return methods;
}

gsi::Class<QContextMenuEvent_Adaptor> decl_QContextMenuEvent_Adaptor (qtdecl_QContextMenuEvent (), "QContextMenuEvent",
  methods_QContextMenuEvent_Adaptor (),
  "@qt\n@brief Binding of QContextMenuEvent");

}


//  Implementation of the enum wrapper class for QContextMenuEvent::Reason
namespace qt_gsi
{

static gsi::Enum<QContextMenuEvent::Reason> decl_QContextMenuEvent_Reason_Enum ("QContextMenuEvent_Reason",
    gsi::enum_const ("Mouse", QContextMenuEvent::Mouse, "@brief Enum constant QContextMenuEvent::Mouse") +
    gsi::enum_const ("Keyboard", QContextMenuEvent::Keyboard, "@brief Enum constant QContextMenuEvent::Keyboard") +
    gsi::enum_const ("Other", QContextMenuEvent::Other, "@brief Enum constant QContextMenuEvent::Other"),
  "@qt\n@brief This class represents the QContextMenuEvent::Reason enum");

static gsi::QFlagsClass<QContextMenuEvent::Reason > decl_QContextMenuEvent_Reason_Enums ("QContextMenuEvent_QFlags_Reason",
  "@qt\n@brief This class represents the QFlags<QContextMenuEvent::Reason> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QContextMenuEvent> inject_QContextMenuEvent_Reason_Enum_in_parent (decl_QContextMenuEvent_Reason_Enum.defs ());
static gsi::ClassExt<QContextMenuEvent> decl_QContextMenuEvent_Reason_Enum_as_child (decl_QContextMenuEvent_Reason_Enum, "Reason");
static gsi::ClassExt<QContextMenuEvent> decl_QContextMenuEvent_Reason_Enums_as_child (decl_QContextMenuEvent_Reason_Enums, "QFlags_Reason");

}

