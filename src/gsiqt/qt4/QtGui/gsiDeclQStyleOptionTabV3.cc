
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
*  @file gsiDeclQStyleOptionTabV3.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionTabV3>
#include <QStyleOptionTab>
#include <QStyleOptionTabV2>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionTabV3

//  Constructor QStyleOptionTabV3::QStyleOptionTabV3()


static void _init_ctor_QStyleOptionTabV3_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionTabV3> ();
}

static void _call_ctor_QStyleOptionTabV3_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionTabV3 *> (new QStyleOptionTabV3 ());
}


//  Constructor QStyleOptionTabV3::QStyleOptionTabV3(const QStyleOptionTabV3 &other)


static void _init_ctor_QStyleOptionTabV3_2972 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionTabV3 & > (argspec_0);
  decl->set_return_new<QStyleOptionTabV3> ();
}

static void _call_ctor_QStyleOptionTabV3_2972 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionTabV3 &arg1 = args.read<const QStyleOptionTabV3 & > (heap);
  ret.write<QStyleOptionTabV3 *> (new QStyleOptionTabV3 (arg1));
}


//  Constructor QStyleOptionTabV3::QStyleOptionTabV3(const QStyleOptionTabV2 &other)


static void _init_ctor_QStyleOptionTabV3_2971 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionTabV2 & > (argspec_0);
  decl->set_return_new<QStyleOptionTabV3> ();
}

static void _call_ctor_QStyleOptionTabV3_2971 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionTabV2 &arg1 = args.read<const QStyleOptionTabV2 & > (heap);
  ret.write<QStyleOptionTabV3 *> (new QStyleOptionTabV3 (arg1));
}


//  Constructor QStyleOptionTabV3::QStyleOptionTabV3(const QStyleOptionTab &other)


static void _init_ctor_QStyleOptionTabV3_2835 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionTab & > (argspec_0);
  decl->set_return_new<QStyleOptionTabV3> ();
}

static void _call_ctor_QStyleOptionTabV3_2835 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionTab &arg1 = args.read<const QStyleOptionTab & > (heap);
  ret.write<QStyleOptionTabV3 *> (new QStyleOptionTabV3 (arg1));
}


// QStyleOptionTabV3 &QStyleOptionTabV3::operator=(const QStyleOptionTab &other)


static void _init_f_operator_eq__2835 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionTab & > (argspec_0);
  decl->set_return<QStyleOptionTabV3 & > ();
}

static void _call_f_operator_eq__2835 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionTab &arg1 = args.read<const QStyleOptionTab & > (heap);
  ret.write<QStyleOptionTabV3 & > ((QStyleOptionTabV3 &)((QStyleOptionTabV3 *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionTabV3 () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTabV3::QStyleOptionTabV3()\nThis method creates an object of class QStyleOptionTabV3.", &_init_ctor_QStyleOptionTabV3_0, &_call_ctor_QStyleOptionTabV3_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTabV3::QStyleOptionTabV3(const QStyleOptionTabV3 &other)\nThis method creates an object of class QStyleOptionTabV3.", &_init_ctor_QStyleOptionTabV3_2972, &_call_ctor_QStyleOptionTabV3_2972);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTabV3::QStyleOptionTabV3(const QStyleOptionTabV2 &other)\nThis method creates an object of class QStyleOptionTabV3.", &_init_ctor_QStyleOptionTabV3_2971, &_call_ctor_QStyleOptionTabV3_2971);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTabV3::QStyleOptionTabV3(const QStyleOptionTab &other)\nThis method creates an object of class QStyleOptionTabV3.", &_init_ctor_QStyleOptionTabV3_2835, &_call_ctor_QStyleOptionTabV3_2835);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionTabV3 &QStyleOptionTabV3::operator=(const QStyleOptionTab &other)\n", false, &_init_f_operator_eq__2835, &_call_f_operator_eq__2835);
  return methods;
}

gsi::Class<QStyleOptionTabV2> &qtdecl_QStyleOptionTabV2 ();

gsi::Class<QStyleOptionTabV3> decl_QStyleOptionTabV3 (qtdecl_QStyleOptionTabV2 (), "QtGui", "QStyleOptionTabV3",
  methods_QStyleOptionTabV3 (),
  "@qt\n@brief Binding of QStyleOptionTabV3");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionTabV3> &qtdecl_QStyleOptionTabV3 () { return decl_QStyleOptionTabV3; }

}

