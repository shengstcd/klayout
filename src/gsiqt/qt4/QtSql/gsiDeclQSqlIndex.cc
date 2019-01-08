
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
*  @file gsiDeclQSqlIndex.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSqlIndex>
#include <QSqlField>
#include <QSqlRecord>
#include "gsiQt.h"
#include "gsiQtSqlCommon.h"
#include "gsiDeclQtSqlTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSqlIndex

//  Constructor QSqlIndex::QSqlIndex(const QString &cursorName, const QString &name)


static void _init_ctor_QSqlIndex_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cursorName", true, "QString()");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return_new<QSqlIndex> ();
}

static void _call_ctor_QSqlIndex_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const QString &arg2 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<QSqlIndex *> (new QSqlIndex (arg1, arg2));
}


//  Constructor QSqlIndex::QSqlIndex(const QSqlIndex &other)


static void _init_ctor_QSqlIndex_2202 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlIndex & > (argspec_0);
  decl->set_return_new<QSqlIndex> ();
}

static void _call_ctor_QSqlIndex_2202 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlIndex &arg1 = args.read<const QSqlIndex & > (heap);
  ret.write<QSqlIndex *> (new QSqlIndex (arg1));
}


// void QSqlIndex::append(const QSqlField &field)


static void _init_f_append_2182 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("field");
  decl->add_arg<const QSqlField & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_append_2182 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlField &arg1 = args.read<const QSqlField & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlIndex *)cls)->append (arg1);
}


// void QSqlIndex::append(const QSqlField &field, bool desc)


static void _init_f_append_2938 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("field");
  decl->add_arg<const QSqlField & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("desc");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_append_2938 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlField &arg1 = args.read<const QSqlField & > (heap);
  bool arg2 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlIndex *)cls)->append (arg1, arg2);
}


// QString QSqlIndex::cursorName()


static void _init_f_cursorName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_cursorName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlIndex *)cls)->cursorName ());
}


// bool QSqlIndex::isDescending(int i)


static void _init_f_isDescending_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isDescending_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QSqlIndex *)cls)->isDescending (arg1));
}


// QString QSqlIndex::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlIndex *)cls)->name ());
}


// QSqlIndex &QSqlIndex::operator=(const QSqlIndex &other)


static void _init_f_operator_eq__2202 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlIndex & > (argspec_0);
  decl->set_return<QSqlIndex & > ();
}

static void _call_f_operator_eq__2202 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlIndex &arg1 = args.read<const QSqlIndex & > (heap);
  ret.write<QSqlIndex & > ((QSqlIndex &)((QSqlIndex *)cls)->operator= (arg1));
}


// void QSqlIndex::setCursorName(const QString &cursorName)


static void _init_f_setCursorName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cursorName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCursorName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlIndex *)cls)->setCursorName (arg1);
}


// void QSqlIndex::setDescending(int i, bool desc)


static void _init_f_setDescending_1523 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("desc");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setDescending_1523 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  bool arg2 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlIndex *)cls)->setDescending (arg1, arg2);
}


// void QSqlIndex::setName(const QString &name)


static void _init_f_setName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlIndex *)cls)->setName (arg1);
}



namespace gsi
{

static gsi::Methods methods_QSqlIndex () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlIndex::QSqlIndex(const QString &cursorName, const QString &name)\nThis method creates an object of class QSqlIndex.", &_init_ctor_QSqlIndex_3942, &_call_ctor_QSqlIndex_3942);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlIndex::QSqlIndex(const QSqlIndex &other)\nThis method creates an object of class QSqlIndex.", &_init_ctor_QSqlIndex_2202, &_call_ctor_QSqlIndex_2202);
  methods += new qt_gsi::GenericMethod ("append", "@brief Method void QSqlIndex::append(const QSqlField &field)\n", false, &_init_f_append_2182, &_call_f_append_2182);
  methods += new qt_gsi::GenericMethod ("append", "@brief Method void QSqlIndex::append(const QSqlField &field, bool desc)\n", false, &_init_f_append_2938, &_call_f_append_2938);
  methods += new qt_gsi::GenericMethod (":cursorName", "@brief Method QString QSqlIndex::cursorName()\n", true, &_init_f_cursorName_c0, &_call_f_cursorName_c0);
  methods += new qt_gsi::GenericMethod ("isDescending?", "@brief Method bool QSqlIndex::isDescending(int i)\n", true, &_init_f_isDescending_c767, &_call_f_isDescending_c767);
  methods += new qt_gsi::GenericMethod (":name", "@brief Method QString QSqlIndex::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSqlIndex &QSqlIndex::operator=(const QSqlIndex &other)\n", false, &_init_f_operator_eq__2202, &_call_f_operator_eq__2202);
  methods += new qt_gsi::GenericMethod ("setCursorName|cursorName=", "@brief Method void QSqlIndex::setCursorName(const QString &cursorName)\n", false, &_init_f_setCursorName_2025, &_call_f_setCursorName_2025);
  methods += new qt_gsi::GenericMethod ("setDescending", "@brief Method void QSqlIndex::setDescending(int i, bool desc)\n", false, &_init_f_setDescending_1523, &_call_f_setDescending_1523);
  methods += new qt_gsi::GenericMethod ("setName|name=", "@brief Method void QSqlIndex::setName(const QString &name)\n", false, &_init_f_setName_2025, &_call_f_setName_2025);
  return methods;
}

gsi::Class<QSqlRecord> &qtdecl_QSqlRecord ();

gsi::Class<QSqlIndex> decl_QSqlIndex (qtdecl_QSqlRecord (), "QtSql", "QSqlIndex",
  methods_QSqlIndex (),
  "@qt\n@brief Binding of QSqlIndex");


GSI_QTSQL_PUBLIC gsi::Class<QSqlIndex> &qtdecl_QSqlIndex () { return decl_QSqlIndex; }

}

