
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
*  @file gsiDeclQLinearGradient.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QLinearGradient>
#include <QColor>
#include <QGradient>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QLinearGradient

//  Constructor QLinearGradient::QLinearGradient()


static void _init_ctor_QLinearGradient_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QLinearGradient> ();
}

static void _call_ctor_QLinearGradient_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLinearGradient *> (new QLinearGradient ());
}


//  Constructor QLinearGradient::QLinearGradient(const QPointF &start, const QPointF &finalStop)


static void _init_ctor_QLinearGradient_3864 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("start");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("finalStop");
  decl->add_arg<const QPointF & > (argspec_1);
  decl->set_return_new<QLinearGradient> ();
}

static void _call_ctor_QLinearGradient_3864 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  const QPointF &arg2 = args.read<const QPointF & > (heap);
  ret.write<QLinearGradient *> (new QLinearGradient (arg1, arg2));
}


//  Constructor QLinearGradient::QLinearGradient(double xStart, double yStart, double xFinalStop, double yFinalStop)


static void _init_ctor_QLinearGradient_3960 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("xStart");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("yStart");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("xFinalStop");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("yFinalStop");
  decl->add_arg<double > (argspec_3);
  decl->set_return_new<QLinearGradient> ();
}

static void _call_ctor_QLinearGradient_3960 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  double arg3 = args.read<double > (heap);
  double arg4 = args.read<double > (heap);
  ret.write<QLinearGradient *> (new QLinearGradient (arg1, arg2, arg3, arg4));
}


// QPointF QLinearGradient::finalStop()


static void _init_f_finalStop_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_finalStop_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QLinearGradient *)cls)->finalStop ());
}


// void QLinearGradient::setFinalStop(const QPointF &stop)


static void _init_f_setFinalStop_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stop");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFinalStop_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLinearGradient *)cls)->setFinalStop (arg1);
}


// void QLinearGradient::setFinalStop(double x, double y)


static void _init_f_setFinalStop_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setFinalStop_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLinearGradient *)cls)->setFinalStop (arg1, arg2);
}


// void QLinearGradient::setStart(const QPointF &start)


static void _init_f_setStart_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("start");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStart_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLinearGradient *)cls)->setStart (arg1);
}


// void QLinearGradient::setStart(double x, double y)


static void _init_f_setStart_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setStart_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLinearGradient *)cls)->setStart (arg1, arg2);
}


// QPointF QLinearGradient::start()


static void _init_f_start_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_start_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QLinearGradient *)cls)->start ());
}



namespace gsi
{

static gsi::Methods methods_QLinearGradient () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLinearGradient::QLinearGradient()\nThis method creates an object of class QLinearGradient.", &_init_ctor_QLinearGradient_0, &_call_ctor_QLinearGradient_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLinearGradient::QLinearGradient(const QPointF &start, const QPointF &finalStop)\nThis method creates an object of class QLinearGradient.", &_init_ctor_QLinearGradient_3864, &_call_ctor_QLinearGradient_3864);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLinearGradient::QLinearGradient(double xStart, double yStart, double xFinalStop, double yFinalStop)\nThis method creates an object of class QLinearGradient.", &_init_ctor_QLinearGradient_3960, &_call_ctor_QLinearGradient_3960);
  methods += new qt_gsi::GenericMethod (":finalStop", "@brief Method QPointF QLinearGradient::finalStop()\n", true, &_init_f_finalStop_c0, &_call_f_finalStop_c0);
  methods += new qt_gsi::GenericMethod ("setFinalStop|finalStop=", "@brief Method void QLinearGradient::setFinalStop(const QPointF &stop)\n", false, &_init_f_setFinalStop_1986, &_call_f_setFinalStop_1986);
  methods += new qt_gsi::GenericMethod ("setFinalStop", "@brief Method void QLinearGradient::setFinalStop(double x, double y)\n", false, &_init_f_setFinalStop_2034, &_call_f_setFinalStop_2034);
  methods += new qt_gsi::GenericMethod ("setStart|start=", "@brief Method void QLinearGradient::setStart(const QPointF &start)\n", false, &_init_f_setStart_1986, &_call_f_setStart_1986);
  methods += new qt_gsi::GenericMethod ("setStart", "@brief Method void QLinearGradient::setStart(double x, double y)\n", false, &_init_f_setStart_2034, &_call_f_setStart_2034);
  methods += new qt_gsi::GenericMethod (":start", "@brief Method QPointF QLinearGradient::start()\n", true, &_init_f_start_c0, &_call_f_start_c0);
  return methods;
}

gsi::Class<QGradient> &qtdecl_QGradient ();

gsi::Class<QLinearGradient> decl_QLinearGradient (qtdecl_QGradient (), "QtGui", "QLinearGradient",
  methods_QLinearGradient (),
  "@qt\n@brief Binding of QLinearGradient");


GSI_QTGUI_PUBLIC gsi::Class<QLinearGradient> &qtdecl_QLinearGradient () { return decl_QLinearGradient; }

}

