
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
*  @file gsiDeclQStyleOptionFrameV3.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionFrameV3>
#include <QStyleOptionFrame>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionFrameV3

//  Constructor QStyleOptionFrameV3::QStyleOptionFrameV3()


static void _init_ctor_QStyleOptionFrameV3_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionFrameV3> ();
}

static void _call_ctor_QStyleOptionFrameV3_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionFrameV3 *> (new QStyleOptionFrameV3 ());
}


//  Constructor QStyleOptionFrameV3::QStyleOptionFrameV3(const QStyleOptionFrameV3 &other)


static void _init_ctor_QStyleOptionFrameV3_3184 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionFrameV3 & > (argspec_0);
  decl->set_return_new<QStyleOptionFrameV3> ();
}

static void _call_ctor_QStyleOptionFrameV3_3184 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionFrameV3 &arg1 = args.read<const QStyleOptionFrameV3 & > (heap);
  ret.write<QStyleOptionFrameV3 *> (new QStyleOptionFrameV3 (arg1));
}


//  Constructor QStyleOptionFrameV3::QStyleOptionFrameV3(const QStyleOptionFrame &other)


static void _init_ctor_QStyleOptionFrameV3_3047 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionFrame & > (argspec_0);
  decl->set_return_new<QStyleOptionFrameV3> ();
}

static void _call_ctor_QStyleOptionFrameV3_3047 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionFrame &arg1 = args.read<const QStyleOptionFrame & > (heap);
  ret.write<QStyleOptionFrameV3 *> (new QStyleOptionFrameV3 (arg1));
}


// QStyleOptionFrameV3 &QStyleOptionFrameV3::operator=(const QStyleOptionFrame &other)


static void _init_f_operator_eq__3047 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionFrame & > (argspec_0);
  decl->set_return<QStyleOptionFrameV3 & > ();
}

static void _call_f_operator_eq__3047 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionFrame &arg1 = args.read<const QStyleOptionFrame & > (heap);
  ret.write<QStyleOptionFrameV3 & > ((QStyleOptionFrameV3 &)((QStyleOptionFrameV3 *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionFrameV3 () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionFrameV3::QStyleOptionFrameV3()\nThis method creates an object of class QStyleOptionFrameV3.", &_init_ctor_QStyleOptionFrameV3_0, &_call_ctor_QStyleOptionFrameV3_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionFrameV3::QStyleOptionFrameV3(const QStyleOptionFrameV3 &other)\nThis method creates an object of class QStyleOptionFrameV3.", &_init_ctor_QStyleOptionFrameV3_3184, &_call_ctor_QStyleOptionFrameV3_3184);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionFrameV3::QStyleOptionFrameV3(const QStyleOptionFrame &other)\nThis method creates an object of class QStyleOptionFrameV3.", &_init_ctor_QStyleOptionFrameV3_3047, &_call_ctor_QStyleOptionFrameV3_3047);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionFrameV3 &QStyleOptionFrameV3::operator=(const QStyleOptionFrame &other)\n", false, &_init_f_operator_eq__3047, &_call_f_operator_eq__3047);
  return methods;
}

gsi::Class<QStyleOptionFrameV2> &qtdecl_QStyleOptionFrameV2 ();

gsi::Class<QStyleOptionFrameV3> decl_QStyleOptionFrameV3 (qtdecl_QStyleOptionFrameV2 (), "QtGui", "QStyleOptionFrameV3",
  methods_QStyleOptionFrameV3 (),
  "@qt\n@brief Binding of QStyleOptionFrameV3");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionFrameV3> &qtdecl_QStyleOptionFrameV3 () { return decl_QStyleOptionFrameV3; }

}

