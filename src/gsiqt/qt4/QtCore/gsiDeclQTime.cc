
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
*  @file gsiDeclQTime.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTime>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTime

//  Constructor QTime::QTime()


static void _init_ctor_QTime_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTime> ();
}

static void _call_ctor_QTime_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTime *> (new QTime ());
}


//  Constructor QTime::QTime(int h, int m, int s, int ms)


static void _init_ctor_QTime_2744 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("h");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("s", true, "0");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("ms", true, "0");
  decl->add_arg<int > (argspec_3);
  decl->set_return_new<QTime> ();
}

static void _call_ctor_QTime_2744 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args ? args.read<int > (heap) : (int)(0);
  int arg4 = args ? args.read<int > (heap) : (int)(0);
  ret.write<QTime *> (new QTime (arg1, arg2, arg3, arg4));
}


// QTime QTime::addMSecs(int ms)


static void _init_f_addMSecs_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ms");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTime > ();
}

static void _call_f_addMSecs_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QTime > ((QTime)((QTime *)cls)->addMSecs (arg1));
}


// QTime QTime::addSecs(int secs)


static void _init_f_addSecs_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("secs");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTime > ();
}

static void _call_f_addSecs_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QTime > ((QTime)((QTime *)cls)->addSecs (arg1));
}


// int QTime::elapsed()


static void _init_f_elapsed_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_elapsed_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTime *)cls)->elapsed ());
}


// int QTime::hour()


static void _init_f_hour_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_hour_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTime *)cls)->hour ());
}


// bool QTime::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTime *)cls)->isNull ());
}


// bool QTime::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTime *)cls)->isValid ());
}


// int QTime::minute()


static void _init_f_minute_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_minute_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTime *)cls)->minute ());
}


// int QTime::msec()


static void _init_f_msec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_msec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTime *)cls)->msec ());
}


// int QTime::msecsTo(const QTime &)


static void _init_f_msecsTo_c1793 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QTime & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_msecsTo_c1793 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTime &arg1 = args.read<const QTime & > (heap);
  ret.write<int > ((int)((QTime *)cls)->msecsTo (arg1));
}


// bool QTime::operator!=(const QTime &other)


static void _init_f_operator_excl__eq__c1793 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c1793 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTime &arg1 = args.read<const QTime & > (heap);
  ret.write<bool > ((bool)((QTime *)cls)->operator!= (arg1));
}


// bool QTime::operator<(const QTime &other)


static void _init_f_operator_lt__c1793 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c1793 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTime &arg1 = args.read<const QTime & > (heap);
  ret.write<bool > ((bool)((QTime *)cls)->operator< (arg1));
}


// bool QTime::operator<=(const QTime &other)


static void _init_f_operator_lt__eq__c1793 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__eq__c1793 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTime &arg1 = args.read<const QTime & > (heap);
  ret.write<bool > ((bool)((QTime *)cls)->operator<= (arg1));
}


// bool QTime::operator==(const QTime &other)


static void _init_f_operator_eq__eq__c1793 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c1793 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTime &arg1 = args.read<const QTime & > (heap);
  ret.write<bool > ((bool)((QTime *)cls)->operator== (arg1));
}


// bool QTime::operator>(const QTime &other)


static void _init_f_operator_gt__c1793 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__c1793 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTime &arg1 = args.read<const QTime & > (heap);
  ret.write<bool > ((bool)((QTime *)cls)->operator> (arg1));
}


// bool QTime::operator>=(const QTime &other)


static void _init_f_operator_gt__eq__c1793 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__eq__c1793 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTime &arg1 = args.read<const QTime & > (heap);
  ret.write<bool > ((bool)((QTime *)cls)->operator>= (arg1));
}


// int QTime::restart()


static void _init_f_restart_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_restart_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTime *)cls)->restart ());
}


// int QTime::second()


static void _init_f_second_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_second_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTime *)cls)->second ());
}


// int QTime::secsTo(const QTime &)


static void _init_f_secsTo_c1793 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QTime & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_secsTo_c1793 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTime &arg1 = args.read<const QTime & > (heap);
  ret.write<int > ((int)((QTime *)cls)->secsTo (arg1));
}


// bool QTime::setHMS(int h, int m, int s, int ms)


static void _init_f_setHMS_2744 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("h");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("s");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("ms", true, "0");
  decl->add_arg<int > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_setHMS_2744 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args.read<int > (heap);
  int arg4 = args ? args.read<int > (heap) : (int)(0);
  ret.write<bool > ((bool)((QTime *)cls)->setHMS (arg1, arg2, arg3, arg4));
}


// void QTime::start()


static void _init_f_start_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_start_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTime *)cls)->start ();
}


// QString QTime::toString(Qt::DateFormat f)


static void _init_f_toString_c1748 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("f", true, "Qt::TextDate");
  decl->add_arg<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c1748 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::DateFormat>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (heap) : (const qt_gsi::Converter<Qt::DateFormat>::target_type &)(qt_gsi::CppToQtReadAdaptor<Qt::DateFormat>(heap, Qt::TextDate));
  ret.write<QString > ((QString)((QTime *)cls)->toString (qt_gsi::QtToCppAdaptor<Qt::DateFormat>(arg1).cref()));
}


// QString QTime::toString(const QString &format)


static void _init_f_toString_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QTime *)cls)->toString (arg1));
}


// static QTime QTime::currentTime()


static void _init_f_currentTime_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QTime > ();
}

static void _call_f_currentTime_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTime > ((QTime)QTime::currentTime ());
}


// static QTime QTime::fromString(const QString &s, Qt::DateFormat f)


static void _init_f_fromString_3665 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("f", true, "Qt::TextDate");
  decl->add_arg<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (argspec_1);
  decl->set_return<QTime > ();
}

static void _call_f_fromString_3665 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const qt_gsi::Converter<Qt::DateFormat>::target_type & arg2 = args ? args.read<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (heap) : (const qt_gsi::Converter<Qt::DateFormat>::target_type &)(qt_gsi::CppToQtReadAdaptor<Qt::DateFormat>(heap, Qt::TextDate));
  ret.write<QTime > ((QTime)QTime::fromString (arg1, qt_gsi::QtToCppAdaptor<Qt::DateFormat>(arg2).cref()));
}


// static QTime QTime::fromString(const QString &s, const QString &format)


static void _init_f_fromString_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QTime > ();
}

static void _call_f_fromString_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QTime > ((QTime)QTime::fromString (arg1, arg2));
}


// static bool QTime::isValid(int h, int m, int s, int ms)


static void _init_f_isValid_2744 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("h");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("s");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("ms", true, "0");
  decl->add_arg<int > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_isValid_2744 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args.read<int > (heap);
  int arg4 = args ? args.read<int > (heap) : (int)(0);
  ret.write<bool > ((bool)QTime::isValid (arg1, arg2, arg3, arg4));
}



namespace gsi
{

static gsi::Methods methods_QTime () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTime::QTime()\nThis method creates an object of class QTime.", &_init_ctor_QTime_0, &_call_ctor_QTime_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTime::QTime(int h, int m, int s, int ms)\nThis method creates an object of class QTime.", &_init_ctor_QTime_2744, &_call_ctor_QTime_2744);
  methods += new qt_gsi::GenericMethod ("addMSecs", "@brief Method QTime QTime::addMSecs(int ms)\n", true, &_init_f_addMSecs_c767, &_call_f_addMSecs_c767);
  methods += new qt_gsi::GenericMethod ("addSecs", "@brief Method QTime QTime::addSecs(int secs)\n", true, &_init_f_addSecs_c767, &_call_f_addSecs_c767);
  methods += new qt_gsi::GenericMethod ("elapsed", "@brief Method int QTime::elapsed()\n", true, &_init_f_elapsed_c0, &_call_f_elapsed_c0);
  methods += new qt_gsi::GenericMethod ("hour", "@brief Method int QTime::hour()\n", true, &_init_f_hour_c0, &_call_f_hour_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QTime::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTime::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("minute", "@brief Method int QTime::minute()\n", true, &_init_f_minute_c0, &_call_f_minute_c0);
  methods += new qt_gsi::GenericMethod ("msec", "@brief Method int QTime::msec()\n", true, &_init_f_msec_c0, &_call_f_msec_c0);
  methods += new qt_gsi::GenericMethod ("msecsTo", "@brief Method int QTime::msecsTo(const QTime &)\n", true, &_init_f_msecsTo_c1793, &_call_f_msecsTo_c1793);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QTime::operator!=(const QTime &other)\n", true, &_init_f_operator_excl__eq__c1793, &_call_f_operator_excl__eq__c1793);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QTime::operator<(const QTime &other)\n", true, &_init_f_operator_lt__c1793, &_call_f_operator_lt__c1793);
  methods += new qt_gsi::GenericMethod ("<=", "@brief Method bool QTime::operator<=(const QTime &other)\n", true, &_init_f_operator_lt__eq__c1793, &_call_f_operator_lt__eq__c1793);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QTime::operator==(const QTime &other)\n", true, &_init_f_operator_eq__eq__c1793, &_call_f_operator_eq__eq__c1793);
  methods += new qt_gsi::GenericMethod (">", "@brief Method bool QTime::operator>(const QTime &other)\n", true, &_init_f_operator_gt__c1793, &_call_f_operator_gt__c1793);
  methods += new qt_gsi::GenericMethod (">=", "@brief Method bool QTime::operator>=(const QTime &other)\n", true, &_init_f_operator_gt__eq__c1793, &_call_f_operator_gt__eq__c1793);
  methods += new qt_gsi::GenericMethod ("restart", "@brief Method int QTime::restart()\n", false, &_init_f_restart_0, &_call_f_restart_0);
  methods += new qt_gsi::GenericMethod ("second", "@brief Method int QTime::second()\n", true, &_init_f_second_c0, &_call_f_second_c0);
  methods += new qt_gsi::GenericMethod ("secsTo", "@brief Method int QTime::secsTo(const QTime &)\n", true, &_init_f_secsTo_c1793, &_call_f_secsTo_c1793);
  methods += new qt_gsi::GenericMethod ("setHMS", "@brief Method bool QTime::setHMS(int h, int m, int s, int ms)\n", false, &_init_f_setHMS_2744, &_call_f_setHMS_2744);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method void QTime::start()\n", false, &_init_f_start_0, &_call_f_start_0);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QTime::toString(Qt::DateFormat f)\n", true, &_init_f_toString_c1748, &_call_f_toString_c1748);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QTime::toString(const QString &format)\n", true, &_init_f_toString_c2025, &_call_f_toString_c2025);
  methods += new qt_gsi::GenericStaticMethod ("currentTime", "@brief Static method QTime QTime::currentTime()\nThis method is static and can be called without an instance.", &_init_f_currentTime_0, &_call_f_currentTime_0);
  methods += new qt_gsi::GenericStaticMethod ("fromString", "@brief Static method QTime QTime::fromString(const QString &s, Qt::DateFormat f)\nThis method is static and can be called without an instance.", &_init_f_fromString_3665, &_call_f_fromString_3665);
  methods += new qt_gsi::GenericStaticMethod ("fromString", "@brief Static method QTime QTime::fromString(const QString &s, const QString &format)\nThis method is static and can be called without an instance.", &_init_f_fromString_3942, &_call_f_fromString_3942);
  methods += new qt_gsi::GenericStaticMethod ("isValid?", "@brief Static method bool QTime::isValid(int h, int m, int s, int ms)\nThis method is static and can be called without an instance.", &_init_f_isValid_2744, &_call_f_isValid_2744);
  return methods;
}

gsi::Class<QTime> decl_QTime ("QtCore", "QTime",
  methods_QTime (),
  "@qt\n@brief Binding of QTime");


GSI_QTCORE_PUBLIC gsi::Class<QTime> &qtdecl_QTime () { return decl_QTime; }

}

