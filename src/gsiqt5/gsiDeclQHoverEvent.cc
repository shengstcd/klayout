
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
*  @file gsiDeclQHoverEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHoverEvent>
#include <QEvent>
#include <QPoint>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHoverEvent

// QPoint QHoverEvent::oldPos()


static void _init_f_oldPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_oldPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QHoverEvent *)cls)->oldPos ());
}


// const QPointF &QHoverEvent::oldPosF()


static void _init_f_oldPosF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPointF & > ();
}

static void _call_f_oldPosF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPointF & > ((const QPointF &)((QHoverEvent *)cls)->oldPosF ());
}


// QPoint QHoverEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QHoverEvent *)cls)->pos ());
}


// const QPointF &QHoverEvent::posF()


static void _init_f_posF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPointF & > ();
}

static void _call_f_posF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPointF & > ((const QPointF &)((QHoverEvent *)cls)->posF ());
}


namespace gsi
{

static gsi::Methods methods_QHoverEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("oldPos", "@brief Method QPoint QHoverEvent::oldPos()\n", true, &_init_f_oldPos_c0, &_call_f_oldPos_c0);
  methods += new qt_gsi::GenericMethod ("oldPosF", "@brief Method const QPointF &QHoverEvent::oldPosF()\n", true, &_init_f_oldPosF_c0, &_call_f_oldPosF_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method QPoint QHoverEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("posF", "@brief Method const QPointF &QHoverEvent::posF()\n", true, &_init_f_posF_c0, &_call_f_posF_c0);
  return methods;
}

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

gsi::Class<QHoverEvent> decl_QHoverEvent (qtdecl_QInputEvent (), "QHoverEvent_Native",
  methods_QHoverEvent (),
  "@hide\n@alias QHoverEvent");

GSIQT_PUBLIC gsi::Class<QHoverEvent> &qtdecl_QHoverEvent () { return decl_QHoverEvent; }

}


class QHoverEvent_Adaptor : public QHoverEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QHoverEvent_Adaptor();

  //  [adaptor ctor] QHoverEvent::QHoverEvent(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers)
  QHoverEvent_Adaptor(QEvent::Type type, const QPointF &pos, const QPointF &oldPos) : QHoverEvent(type, pos, oldPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QHoverEvent::QHoverEvent(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers)
  QHoverEvent_Adaptor(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers) : QHoverEvent(type, pos, oldPos, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QHoverEvent_Adaptor::~QHoverEvent_Adaptor() { }

//  Constructor QHoverEvent::QHoverEvent(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers) (adaptor class)

static void _init_ctor_QHoverEvent_Adaptor_8290 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("oldPos");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("modifiers", true, "Qt::NoModifier");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_3);
  decl->set_return_new<QHoverEvent_Adaptor> ();
}

static void _call_ctor_QHoverEvent_Adaptor_8290 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap);
  const QPointF &arg2 = args.read<const QPointF & > (heap);
  const QPointF &arg3 = args.read<const QPointF & > (heap);
  QFlags<Qt::KeyboardModifier> arg4 = args ? args.read<QFlags<Qt::KeyboardModifier> > (heap) : (QFlags<Qt::KeyboardModifier>)(Qt::NoModifier);
  ret.write<QHoverEvent_Adaptor *> (new QHoverEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, arg4));
}


namespace gsi
{

gsi::Class<QHoverEvent> &qtdecl_QHoverEvent ();

static gsi::Methods methods_QHoverEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHoverEvent::QHoverEvent(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers)\nThis method creates an object of class QHoverEvent.", &_init_ctor_QHoverEvent_Adaptor_8290, &_call_ctor_QHoverEvent_Adaptor_8290);
  return methods;
}

gsi::Class<QHoverEvent_Adaptor> decl_QHoverEvent_Adaptor (qtdecl_QHoverEvent (), "QHoverEvent",
  methods_QHoverEvent_Adaptor (),
  "@qt\n@brief Binding of QHoverEvent");

}

