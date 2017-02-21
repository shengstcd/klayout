
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
*  @file gsiDeclQStyleOptionProgressBarV2.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionProgressBarV2>
#include <QStyleOptionProgressBar>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionProgressBarV2

//  Constructor QStyleOptionProgressBarV2::QStyleOptionProgressBarV2()


static void _init_ctor_QStyleOptionProgressBarV2_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionProgressBarV2> ();
}

static void _call_ctor_QStyleOptionProgressBarV2_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionProgressBarV2 *> (new QStyleOptionProgressBarV2 ());
}


//  Constructor QStyleOptionProgressBarV2::QStyleOptionProgressBarV2(const QStyleOptionProgressBar &other)


static void _init_ctor_QStyleOptionProgressBarV2_3686 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionProgressBar & > (argspec_0);
  decl->set_return_new<QStyleOptionProgressBarV2> ();
}

static void _call_ctor_QStyleOptionProgressBarV2_3686 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionProgressBar &arg1 = args.read<const QStyleOptionProgressBar & > (heap);
  ret.write<QStyleOptionProgressBarV2 *> (new QStyleOptionProgressBarV2 (arg1));
}


//  Constructor QStyleOptionProgressBarV2::QStyleOptionProgressBarV2(const QStyleOptionProgressBarV2 &other)


static void _init_ctor_QStyleOptionProgressBarV2_3822 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionProgressBarV2 & > (argspec_0);
  decl->set_return_new<QStyleOptionProgressBarV2> ();
}

static void _call_ctor_QStyleOptionProgressBarV2_3822 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionProgressBarV2 &arg1 = args.read<const QStyleOptionProgressBarV2 & > (heap);
  ret.write<QStyleOptionProgressBarV2 *> (new QStyleOptionProgressBarV2 (arg1));
}


// (const QStyleOptionProgressBar &)


static void _init_f_operator_eq__3686 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionProgressBar & > (argspec_0);
  decl->set_return<QStyleOptionProgressBarV2 & > ();
}

static void _call_f_operator_eq__3686 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionProgressBar &arg1 = args.read<const QStyleOptionProgressBar & > (heap);
  ret.write<QStyleOptionProgressBarV2 & > ((QStyleOptionProgressBarV2 &)((QStyleOptionProgressBarV2 *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionProgressBarV2 () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionProgressBarV2::QStyleOptionProgressBarV2()\nThis method creates an object of class QStyleOptionProgressBarV2.", &_init_ctor_QStyleOptionProgressBarV2_0, &_call_ctor_QStyleOptionProgressBarV2_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionProgressBarV2::QStyleOptionProgressBarV2(const QStyleOptionProgressBar &other)\nThis method creates an object of class QStyleOptionProgressBarV2.", &_init_ctor_QStyleOptionProgressBarV2_3686, &_call_ctor_QStyleOptionProgressBarV2_3686);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionProgressBarV2::QStyleOptionProgressBarV2(const QStyleOptionProgressBarV2 &other)\nThis method creates an object of class QStyleOptionProgressBarV2.", &_init_ctor_QStyleOptionProgressBarV2_3822, &_call_ctor_QStyleOptionProgressBarV2_3822);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method (const QStyleOptionProgressBar &)\n", false, &_init_f_operator_eq__3686, &_call_f_operator_eq__3686);
  return methods;
}

gsi::Class<QStyleOptionProgressBar> &qtdecl_QStyleOptionProgressBar ();

gsi::Class<QStyleOptionProgressBarV2> decl_QStyleOptionProgressBarV2 (qtdecl_QStyleOptionProgressBar (), "QStyleOptionProgressBarV2",
  methods_QStyleOptionProgressBarV2 (),
  "@qt\n@brief Binding of QStyleOptionProgressBarV2");


GSIQT_PUBLIC gsi::Class<QStyleOptionProgressBarV2> &qtdecl_QStyleOptionProgressBarV2 () { return decl_QStyleOptionProgressBarV2; }

}

