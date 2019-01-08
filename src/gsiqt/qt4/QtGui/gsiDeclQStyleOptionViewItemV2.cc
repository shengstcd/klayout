
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
*  @file gsiDeclQStyleOptionViewItemV2.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionViewItemV2>
#include <QStyleOptionViewItem>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionViewItemV2

//  Constructor QStyleOptionViewItemV2::QStyleOptionViewItemV2()


static void _init_ctor_QStyleOptionViewItemV2_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionViewItemV2> ();
}

static void _call_ctor_QStyleOptionViewItemV2_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionViewItemV2 *> (new QStyleOptionViewItemV2 ());
}


//  Constructor QStyleOptionViewItemV2::QStyleOptionViewItemV2(const QStyleOptionViewItemV2 &other)


static void _init_ctor_QStyleOptionViewItemV2_3502 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionViewItemV2 & > (argspec_0);
  decl->set_return_new<QStyleOptionViewItemV2> ();
}

static void _call_ctor_QStyleOptionViewItemV2_3502 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionViewItemV2 &arg1 = args.read<const QStyleOptionViewItemV2 & > (heap);
  ret.write<QStyleOptionViewItemV2 *> (new QStyleOptionViewItemV2 (arg1));
}


//  Constructor QStyleOptionViewItemV2::QStyleOptionViewItemV2(const QStyleOptionViewItem &other)


static void _init_ctor_QStyleOptionViewItemV2_3366 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionViewItem & > (argspec_0);
  decl->set_return_new<QStyleOptionViewItemV2> ();
}

static void _call_ctor_QStyleOptionViewItemV2_3366 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionViewItem &arg1 = args.read<const QStyleOptionViewItem & > (heap);
  ret.write<QStyleOptionViewItemV2 *> (new QStyleOptionViewItemV2 (arg1));
}


// QStyleOptionViewItemV2 &QStyleOptionViewItemV2::operator=(const QStyleOptionViewItem &other)


static void _init_f_operator_eq__3366 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionViewItem & > (argspec_0);
  decl->set_return<QStyleOptionViewItemV2 & > ();
}

static void _call_f_operator_eq__3366 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionViewItem &arg1 = args.read<const QStyleOptionViewItem & > (heap);
  ret.write<QStyleOptionViewItemV2 & > ((QStyleOptionViewItemV2 &)((QStyleOptionViewItemV2 *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionViewItemV2 () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionViewItemV2::QStyleOptionViewItemV2()\nThis method creates an object of class QStyleOptionViewItemV2.", &_init_ctor_QStyleOptionViewItemV2_0, &_call_ctor_QStyleOptionViewItemV2_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionViewItemV2::QStyleOptionViewItemV2(const QStyleOptionViewItemV2 &other)\nThis method creates an object of class QStyleOptionViewItemV2.", &_init_ctor_QStyleOptionViewItemV2_3502, &_call_ctor_QStyleOptionViewItemV2_3502);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionViewItemV2::QStyleOptionViewItemV2(const QStyleOptionViewItem &other)\nThis method creates an object of class QStyleOptionViewItemV2.", &_init_ctor_QStyleOptionViewItemV2_3366, &_call_ctor_QStyleOptionViewItemV2_3366);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionViewItemV2 &QStyleOptionViewItemV2::operator=(const QStyleOptionViewItem &other)\n", false, &_init_f_operator_eq__3366, &_call_f_operator_eq__3366);
  return methods;
}

gsi::Class<QStyleOptionViewItem> &qtdecl_QStyleOptionViewItem ();

gsi::Class<QStyleOptionViewItemV2> decl_QStyleOptionViewItemV2 (qtdecl_QStyleOptionViewItem (), "QtGui", "QStyleOptionViewItemV2",
  methods_QStyleOptionViewItemV2 (),
  "@qt\n@brief Binding of QStyleOptionViewItemV2");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionViewItemV2> &qtdecl_QStyleOptionViewItemV2 () { return decl_QStyleOptionViewItemV2; }

}

