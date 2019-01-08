
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
*  @file gsiDeclQDnsServiceRecord.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDnsServiceRecord>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDnsServiceRecord

//  Constructor QDnsServiceRecord::QDnsServiceRecord()


static void _init_ctor_QDnsServiceRecord_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDnsServiceRecord> ();
}

static void _call_ctor_QDnsServiceRecord_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDnsServiceRecord *> (new QDnsServiceRecord ());
}


//  Constructor QDnsServiceRecord::QDnsServiceRecord(const QDnsServiceRecord &other)


static void _init_ctor_QDnsServiceRecord_3015 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsServiceRecord & > (argspec_0);
  decl->set_return_new<QDnsServiceRecord> ();
}

static void _call_ctor_QDnsServiceRecord_3015 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsServiceRecord &arg1 = args.read<const QDnsServiceRecord & > (heap);
  ret.write<QDnsServiceRecord *> (new QDnsServiceRecord (arg1));
}


// QString QDnsServiceRecord::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDnsServiceRecord *)cls)->name ());
}


// QDnsServiceRecord &QDnsServiceRecord::operator=(const QDnsServiceRecord &other)


static void _init_f_operator_eq__3015 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsServiceRecord & > (argspec_0);
  decl->set_return<QDnsServiceRecord & > ();
}

static void _call_f_operator_eq__3015 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsServiceRecord &arg1 = args.read<const QDnsServiceRecord & > (heap);
  ret.write<QDnsServiceRecord & > ((QDnsServiceRecord &)((QDnsServiceRecord *)cls)->operator= (arg1));
}


// quint16 QDnsServiceRecord::port()


static void _init_f_port_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint16 > ();
}

static void _call_f_port_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint16 > ((quint16)((QDnsServiceRecord *)cls)->port ());
}


// quint16 QDnsServiceRecord::priority()


static void _init_f_priority_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint16 > ();
}

static void _call_f_priority_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint16 > ((quint16)((QDnsServiceRecord *)cls)->priority ());
}


// void QDnsServiceRecord::swap(QDnsServiceRecord &other)


static void _init_f_swap_2320 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QDnsServiceRecord & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2320 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDnsServiceRecord &arg1 = args.read<QDnsServiceRecord & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDnsServiceRecord *)cls)->swap (arg1);
}


// QString QDnsServiceRecord::target()


static void _init_f_target_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_target_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDnsServiceRecord *)cls)->target ());
}


// quint32 QDnsServiceRecord::timeToLive()


static void _init_f_timeToLive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint32 > ();
}

static void _call_f_timeToLive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint32 > ((quint32)((QDnsServiceRecord *)cls)->timeToLive ());
}


// quint16 QDnsServiceRecord::weight()


static void _init_f_weight_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint16 > ();
}

static void _call_f_weight_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint16 > ((quint16)((QDnsServiceRecord *)cls)->weight ());
}



namespace gsi
{

static gsi::Methods methods_QDnsServiceRecord () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsServiceRecord::QDnsServiceRecord()\nThis method creates an object of class QDnsServiceRecord.", &_init_ctor_QDnsServiceRecord_0, &_call_ctor_QDnsServiceRecord_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsServiceRecord::QDnsServiceRecord(const QDnsServiceRecord &other)\nThis method creates an object of class QDnsServiceRecord.", &_init_ctor_QDnsServiceRecord_3015, &_call_ctor_QDnsServiceRecord_3015);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QDnsServiceRecord::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDnsServiceRecord &QDnsServiceRecord::operator=(const QDnsServiceRecord &other)\n", false, &_init_f_operator_eq__3015, &_call_f_operator_eq__3015);
  methods += new qt_gsi::GenericMethod ("port", "@brief Method quint16 QDnsServiceRecord::port()\n", true, &_init_f_port_c0, &_call_f_port_c0);
  methods += new qt_gsi::GenericMethod ("priority", "@brief Method quint16 QDnsServiceRecord::priority()\n", true, &_init_f_priority_c0, &_call_f_priority_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QDnsServiceRecord::swap(QDnsServiceRecord &other)\n", false, &_init_f_swap_2320, &_call_f_swap_2320);
  methods += new qt_gsi::GenericMethod ("target", "@brief Method QString QDnsServiceRecord::target()\n", true, &_init_f_target_c0, &_call_f_target_c0);
  methods += new qt_gsi::GenericMethod ("timeToLive", "@brief Method quint32 QDnsServiceRecord::timeToLive()\n", true, &_init_f_timeToLive_c0, &_call_f_timeToLive_c0);
  methods += new qt_gsi::GenericMethod ("weight", "@brief Method quint16 QDnsServiceRecord::weight()\n", true, &_init_f_weight_c0, &_call_f_weight_c0);
  return methods;
}

gsi::Class<QDnsServiceRecord> decl_QDnsServiceRecord ("QtMultimedia", "QDnsServiceRecord",
  methods_QDnsServiceRecord (),
  "@qt\n@brief Binding of QDnsServiceRecord");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QDnsServiceRecord> &qtdecl_QDnsServiceRecord () { return decl_QDnsServiceRecord; }

}

