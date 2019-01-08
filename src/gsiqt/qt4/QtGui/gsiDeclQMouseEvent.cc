
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
*  @file gsiDeclQMouseEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMouseEvent>
#include <QPoint>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMouseEvent

// Qt::MouseButton QMouseEvent::button()


static void _init_f_button_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::MouseButton>::target_type > ();
}

static void _call_f_button_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::MouseButton>::target_type > ((qt_gsi::Converter<Qt::MouseButton>::target_type)qt_gsi::CppToQtAdaptor<Qt::MouseButton>(((QMouseEvent *)cls)->button ()));
}


// QFlags<Qt::MouseButton> QMouseEvent::buttons()


static void _init_f_buttons_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::MouseButton> > ();
}

static void _call_f_buttons_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::MouseButton> > ((QFlags<Qt::MouseButton>)((QMouseEvent *)cls)->buttons ());
}


// const QPoint &QMouseEvent::globalPos()


static void _init_f_globalPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_globalPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QMouseEvent *)cls)->globalPos ());
}


// int QMouseEvent::globalX()


static void _init_f_globalX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMouseEvent *)cls)->globalX ());
}


// int QMouseEvent::globalY()


static void _init_f_globalY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMouseEvent *)cls)->globalY ());
}


// bool QMouseEvent::hasExtendedInfo()


static void _init_f_hasExtendedInfo_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasExtendedInfo_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMouseEvent *)cls)->hasExtendedInfo ());
}


// const QPoint &QMouseEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QMouseEvent *)cls)->pos ());
}


// QPointF QMouseEvent::posF()


static void _init_f_posF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_posF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QMouseEvent *)cls)->posF ());
}


// int QMouseEvent::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMouseEvent *)cls)->x ());
}


// int QMouseEvent::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMouseEvent *)cls)->y ());
}


// static QMouseEvent *QMouseEvent::createExtendedMouseEvent(QEvent::Type type, const QPointF &pos, const QPoint &globalPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)


static void _init_f_createExtendedMouseEvent_12512 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("globalPos");
  decl->add_arg<const QPoint & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("button");
  decl->add_arg<const qt_gsi::Converter<Qt::MouseButton>::target_type & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_5);
  decl->set_return<QMouseEvent * > ();
}

static void _call_f_createExtendedMouseEvent_12512 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap);
  const QPointF &arg2 = args.read<const QPointF & > (heap);
  const QPoint &arg3 = args.read<const QPoint & > (heap);
  const qt_gsi::Converter<Qt::MouseButton>::target_type & arg4 = args.read<const qt_gsi::Converter<Qt::MouseButton>::target_type & > (heap);
  QFlags<Qt::MouseButton> arg5 = args.read<QFlags<Qt::MouseButton> > (heap);
  QFlags<Qt::KeyboardModifier> arg6 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  ret.write<QMouseEvent * > ((QMouseEvent *)QMouseEvent::createExtendedMouseEvent (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, qt_gsi::QtToCppAdaptor<Qt::MouseButton>(arg4).cref(), arg5, arg6));
}


namespace gsi
{

static gsi::Methods methods_QMouseEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("button", "@brief Method Qt::MouseButton QMouseEvent::button()\n", true, &_init_f_button_c0, &_call_f_button_c0);
  methods += new qt_gsi::GenericMethod ("buttons", "@brief Method QFlags<Qt::MouseButton> QMouseEvent::buttons()\n", true, &_init_f_buttons_c0, &_call_f_buttons_c0);
  methods += new qt_gsi::GenericMethod ("globalPos", "@brief Method const QPoint &QMouseEvent::globalPos()\n", true, &_init_f_globalPos_c0, &_call_f_globalPos_c0);
  methods += new qt_gsi::GenericMethod ("globalX", "@brief Method int QMouseEvent::globalX()\n", true, &_init_f_globalX_c0, &_call_f_globalX_c0);
  methods += new qt_gsi::GenericMethod ("globalY", "@brief Method int QMouseEvent::globalY()\n", true, &_init_f_globalY_c0, &_call_f_globalY_c0);
  methods += new qt_gsi::GenericMethod ("hasExtendedInfo", "@brief Method bool QMouseEvent::hasExtendedInfo()\n", true, &_init_f_hasExtendedInfo_c0, &_call_f_hasExtendedInfo_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method const QPoint &QMouseEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("posF", "@brief Method QPointF QMouseEvent::posF()\n", true, &_init_f_posF_c0, &_call_f_posF_c0);
  methods += new qt_gsi::GenericMethod ("x", "@brief Method int QMouseEvent::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod ("y", "@brief Method int QMouseEvent::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  methods += new qt_gsi::GenericStaticMethod ("createExtendedMouseEvent", "@brief Static method QMouseEvent *QMouseEvent::createExtendedMouseEvent(QEvent::Type type, const QPointF &pos, const QPoint &globalPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)\nThis method is static and can be called without an instance.", &_init_f_createExtendedMouseEvent_12512, &_call_f_createExtendedMouseEvent_12512);
  return methods;
}

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

gsi::Class<QMouseEvent> decl_QMouseEvent (qtdecl_QInputEvent (), "QtGui", "QMouseEvent_Native",
  methods_QMouseEvent (),
  "@hide\n@alias QMouseEvent");

GSI_QTGUI_PUBLIC gsi::Class<QMouseEvent> &qtdecl_QMouseEvent () { return decl_QMouseEvent; }

}


class QMouseEvent_Adaptor : public QMouseEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMouseEvent_Adaptor();

  //  [adaptor ctor] QMouseEvent::QMouseEvent(QEvent::Type type, const QPoint &pos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)
  QMouseEvent_Adaptor(QEvent::Type type, const QPoint &pos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type, pos, button, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QMouseEvent::QMouseEvent(QEvent::Type type, const QPoint &pos, const QPoint &globalPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)
  QMouseEvent_Adaptor(QEvent::Type type, const QPoint &pos, const QPoint &globalPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type, pos, globalPos, button, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QMouseEvent_Adaptor::~QMouseEvent_Adaptor() { }

//  Constructor QMouseEvent::QMouseEvent(QEvent::Type type, const QPoint &pos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) (adaptor class)

static void _init_ctor_QMouseEvent_Adaptor_10634 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPoint & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("button");
  decl->add_arg<const qt_gsi::Converter<Qt::MouseButton>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_4);
  decl->set_return_new<QMouseEvent_Adaptor> ();
}

static void _call_ctor_QMouseEvent_Adaptor_10634 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap);
  const QPoint &arg2 = args.read<const QPoint & > (heap);
  const qt_gsi::Converter<Qt::MouseButton>::target_type & arg3 = args.read<const qt_gsi::Converter<Qt::MouseButton>::target_type & > (heap);
  QFlags<Qt::MouseButton> arg4 = args.read<QFlags<Qt::MouseButton> > (heap);
  QFlags<Qt::KeyboardModifier> arg5 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  ret.write<QMouseEvent_Adaptor *> (new QMouseEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, qt_gsi::QtToCppAdaptor<Qt::MouseButton>(arg3).cref(), arg4, arg5));
}


//  Constructor QMouseEvent::QMouseEvent(QEvent::Type type, const QPoint &pos, const QPoint &globalPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) (adaptor class)

static void _init_ctor_QMouseEvent_Adaptor_12442 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPoint & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("globalPos");
  decl->add_arg<const QPoint & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("button");
  decl->add_arg<const qt_gsi::Converter<Qt::MouseButton>::target_type & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_5);
  decl->set_return_new<QMouseEvent_Adaptor> ();
}

static void _call_ctor_QMouseEvent_Adaptor_12442 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap);
  const QPoint &arg2 = args.read<const QPoint & > (heap);
  const QPoint &arg3 = args.read<const QPoint & > (heap);
  const qt_gsi::Converter<Qt::MouseButton>::target_type & arg4 = args.read<const qt_gsi::Converter<Qt::MouseButton>::target_type & > (heap);
  QFlags<Qt::MouseButton> arg5 = args.read<QFlags<Qt::MouseButton> > (heap);
  QFlags<Qt::KeyboardModifier> arg6 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  ret.write<QMouseEvent_Adaptor *> (new QMouseEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, qt_gsi::QtToCppAdaptor<Qt::MouseButton>(arg4).cref(), arg5, arg6));
}


namespace gsi
{

gsi::Class<QMouseEvent> &qtdecl_QMouseEvent ();

static gsi::Methods methods_QMouseEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMouseEvent::QMouseEvent(QEvent::Type type, const QPoint &pos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)\nThis method creates an object of class QMouseEvent.", &_init_ctor_QMouseEvent_Adaptor_10634, &_call_ctor_QMouseEvent_Adaptor_10634);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMouseEvent::QMouseEvent(QEvent::Type type, const QPoint &pos, const QPoint &globalPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)\nThis method creates an object of class QMouseEvent.", &_init_ctor_QMouseEvent_Adaptor_12442, &_call_ctor_QMouseEvent_Adaptor_12442);
  return methods;
}

gsi::Class<QMouseEvent_Adaptor> decl_QMouseEvent_Adaptor (qtdecl_QMouseEvent (), "QtGui", "QMouseEvent",
  methods_QMouseEvent_Adaptor (),
  "@qt\n@brief Binding of QMouseEvent");

}

