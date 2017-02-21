
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
*  @file gsiDeclQSqlRecord.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSqlRecord>
#include <QSqlField>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSqlRecord

//  Constructor QSqlRecord::QSqlRecord()


static void _init_ctor_QSqlRecord_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSqlRecord> ();
}

static void _call_ctor_QSqlRecord_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSqlRecord *> (new QSqlRecord ());
}


//  Constructor QSqlRecord::QSqlRecord(const QSqlRecord &other)


static void _init_ctor_QSqlRecord_2305 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlRecord & > (argspec_0);
  decl->set_return_new<QSqlRecord> ();
}

static void _call_ctor_QSqlRecord_2305 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlRecord &arg1 = args.read<const QSqlRecord & > (heap);
  ret.write<QSqlRecord *> (new QSqlRecord (arg1));
}


// void QSqlRecord::append(const QSqlField &field)


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
  ((QSqlRecord *)cls)->append (arg1);
}


// void QSqlRecord::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->clear ();
}


// void QSqlRecord::clearValues()


static void _init_f_clearValues_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clearValues_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->clearValues ();
}


// bool QSqlRecord::contains(const QString &name)


static void _init_f_contains_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QSqlRecord *)cls)->contains (arg1));
}


// int QSqlRecord::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSqlRecord *)cls)->count ());
}


// QSqlField QSqlRecord::field(int i)


static void _init_f_field_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QSqlField > ();
}

static void _call_f_field_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QSqlField > ((QSqlField)((QSqlRecord *)cls)->field (arg1));
}


// QSqlField QSqlRecord::field(const QString &name)


static void _init_f_field_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QSqlField > ();
}

static void _call_f_field_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QSqlField > ((QSqlField)((QSqlRecord *)cls)->field (arg1));
}


// QString QSqlRecord::fieldName(int i)


static void _init_f_fieldName_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_fieldName_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QString > ((QString)((QSqlRecord *)cls)->fieldName (arg1));
}


// int QSqlRecord::indexOf(const QString &name)


static void _init_f_indexOf_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOf_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<int > ((int)((QSqlRecord *)cls)->indexOf (arg1));
}


// void QSqlRecord::insert(int pos, const QSqlField &field)


static void _init_f_insert_2841 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("field");
  decl->add_arg<const QSqlField & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_insert_2841 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QSqlField &arg2 = args.read<const QSqlField & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->insert (arg1, arg2);
}


// bool QSqlRecord::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlRecord *)cls)->isEmpty ());
}


// bool QSqlRecord::isGenerated(int i)


static void _init_f_isGenerated_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isGenerated_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QSqlRecord *)cls)->isGenerated (arg1));
}


// bool QSqlRecord::isGenerated(const QString &name)


static void _init_f_isGenerated_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isGenerated_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QSqlRecord *)cls)->isGenerated (arg1));
}


// bool QSqlRecord::isNull(int i)


static void _init_f_isNull_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isNull_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QSqlRecord *)cls)->isNull (arg1));
}


// bool QSqlRecord::isNull(const QString &name)


static void _init_f_isNull_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isNull_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QSqlRecord *)cls)->isNull (arg1));
}


// bool QSqlRecord::operator!=(const QSqlRecord &other)


static void _init_f_operator_excl__eq__c2305 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlRecord & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2305 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlRecord &arg1 = args.read<const QSqlRecord & > (heap);
  ret.write<bool > ((bool)((QSqlRecord *)cls)->operator!= (arg1));
}


// QSqlRecord &QSqlRecord::operator=(const QSqlRecord &other)


static void _init_f_operator_eq__2305 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlRecord & > (argspec_0);
  decl->set_return<QSqlRecord & > ();
}

static void _call_f_operator_eq__2305 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlRecord &arg1 = args.read<const QSqlRecord & > (heap);
  ret.write<QSqlRecord & > ((QSqlRecord &)((QSqlRecord *)cls)->operator= (arg1));
}


// bool QSqlRecord::operator==(const QSqlRecord &other)


static void _init_f_operator_eq__eq__c2305 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlRecord & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2305 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlRecord &arg1 = args.read<const QSqlRecord & > (heap);
  ret.write<bool > ((bool)((QSqlRecord *)cls)->operator== (arg1));
}


// void QSqlRecord::remove(int pos)


static void _init_f_remove_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_remove_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->remove (arg1);
}


// void QSqlRecord::replace(int pos, const QSqlField &field)


static void _init_f_replace_2841 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("field");
  decl->add_arg<const QSqlField & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_replace_2841 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QSqlField &arg2 = args.read<const QSqlField & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->replace (arg1, arg2);
}


// void QSqlRecord::setGenerated(const QString &name, bool generated)


static void _init_f_setGenerated_2781 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("generated");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setGenerated_2781 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  bool arg2 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->setGenerated (arg1, arg2);
}


// void QSqlRecord::setGenerated(int i, bool generated)


static void _init_f_setGenerated_1523 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("generated");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setGenerated_1523 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  bool arg2 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->setGenerated (arg1, arg2);
}


// void QSqlRecord::setNull(int i)


static void _init_f_setNull_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNull_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->setNull (arg1);
}


// void QSqlRecord::setNull(const QString &name)


static void _init_f_setNull_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNull_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->setNull (arg1);
}


// void QSqlRecord::setValue(int i, const QVariant &val)


static void _init_f_setValue_2778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("val");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setValue_2778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->setValue (arg1, arg2);
}


// void QSqlRecord::setValue(const QString &name, const QVariant &val)


static void _init_f_setValue_4036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("val");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setValue_4036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlRecord *)cls)->setValue (arg1, arg2);
}


// QVariant QSqlRecord::value(int i)


static void _init_f_value_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_value_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QVariant > ((QVariant)((QSqlRecord *)cls)->value (arg1));
}


// QVariant QSqlRecord::value(const QString &name)


static void _init_f_value_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_value_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QVariant > ((QVariant)((QSqlRecord *)cls)->value (arg1));
}



namespace gsi
{

static gsi::Methods methods_QSqlRecord () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlRecord::QSqlRecord()\nThis method creates an object of class QSqlRecord.", &_init_ctor_QSqlRecord_0, &_call_ctor_QSqlRecord_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlRecord::QSqlRecord(const QSqlRecord &other)\nThis method creates an object of class QSqlRecord.", &_init_ctor_QSqlRecord_2305, &_call_ctor_QSqlRecord_2305);
  methods += new qt_gsi::GenericMethod ("append", "@brief Method void QSqlRecord::append(const QSqlField &field)\n", false, &_init_f_append_2182, &_call_f_append_2182);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QSqlRecord::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("clearValues", "@brief Method void QSqlRecord::clearValues()\n", false, &_init_f_clearValues_0, &_call_f_clearValues_0);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QSqlRecord::contains(const QString &name)\n", true, &_init_f_contains_c2025, &_call_f_contains_c2025);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method int QSqlRecord::count()\n", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod ("field", "@brief Method QSqlField QSqlRecord::field(int i)\n", true, &_init_f_field_c767, &_call_f_field_c767);
  methods += new qt_gsi::GenericMethod ("field", "@brief Method QSqlField QSqlRecord::field(const QString &name)\n", true, &_init_f_field_c2025, &_call_f_field_c2025);
  methods += new qt_gsi::GenericMethod ("fieldName", "@brief Method QString QSqlRecord::fieldName(int i)\n", true, &_init_f_fieldName_c767, &_call_f_fieldName_c767);
  methods += new qt_gsi::GenericMethod ("indexOf", "@brief Method int QSqlRecord::indexOf(const QString &name)\n", true, &_init_f_indexOf_c2025, &_call_f_indexOf_c2025);
  methods += new qt_gsi::GenericMethod ("insert", "@brief Method void QSqlRecord::insert(int pos, const QSqlField &field)\n", false, &_init_f_insert_2841, &_call_f_insert_2841);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QSqlRecord::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isGenerated?", "@brief Method bool QSqlRecord::isGenerated(int i)\n", true, &_init_f_isGenerated_c767, &_call_f_isGenerated_c767);
  methods += new qt_gsi::GenericMethod ("isGenerated?", "@brief Method bool QSqlRecord::isGenerated(const QString &name)\n", true, &_init_f_isGenerated_c2025, &_call_f_isGenerated_c2025);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSqlRecord::isNull(int i)\n", true, &_init_f_isNull_c767, &_call_f_isNull_c767);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSqlRecord::isNull(const QString &name)\n", true, &_init_f_isNull_c2025, &_call_f_isNull_c2025);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QSqlRecord::operator!=(const QSqlRecord &other)\n", true, &_init_f_operator_excl__eq__c2305, &_call_f_operator_excl__eq__c2305);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSqlRecord &QSqlRecord::operator=(const QSqlRecord &other)\n", false, &_init_f_operator_eq__2305, &_call_f_operator_eq__2305);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QSqlRecord::operator==(const QSqlRecord &other)\n", true, &_init_f_operator_eq__eq__c2305, &_call_f_operator_eq__eq__c2305);
  methods += new qt_gsi::GenericMethod ("remove", "@brief Method void QSqlRecord::remove(int pos)\n", false, &_init_f_remove_767, &_call_f_remove_767);
  methods += new qt_gsi::GenericMethod ("replace", "@brief Method void QSqlRecord::replace(int pos, const QSqlField &field)\n", false, &_init_f_replace_2841, &_call_f_replace_2841);
  methods += new qt_gsi::GenericMethod ("setGenerated", "@brief Method void QSqlRecord::setGenerated(const QString &name, bool generated)\n", false, &_init_f_setGenerated_2781, &_call_f_setGenerated_2781);
  methods += new qt_gsi::GenericMethod ("setGenerated", "@brief Method void QSqlRecord::setGenerated(int i, bool generated)\n", false, &_init_f_setGenerated_1523, &_call_f_setGenerated_1523);
  methods += new qt_gsi::GenericMethod ("setNull", "@brief Method void QSqlRecord::setNull(int i)\n", false, &_init_f_setNull_767, &_call_f_setNull_767);
  methods += new qt_gsi::GenericMethod ("setNull", "@brief Method void QSqlRecord::setNull(const QString &name)\n", false, &_init_f_setNull_2025, &_call_f_setNull_2025);
  methods += new qt_gsi::GenericMethod ("setValue", "@brief Method void QSqlRecord::setValue(int i, const QVariant &val)\n", false, &_init_f_setValue_2778, &_call_f_setValue_2778);
  methods += new qt_gsi::GenericMethod ("setValue", "@brief Method void QSqlRecord::setValue(const QString &name, const QVariant &val)\n", false, &_init_f_setValue_4036, &_call_f_setValue_4036);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QVariant QSqlRecord::value(int i)\n", true, &_init_f_value_c767, &_call_f_value_c767);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QVariant QSqlRecord::value(const QString &name)\n", true, &_init_f_value_c2025, &_call_f_value_c2025);
  return methods;
}

gsi::Class<QSqlRecord> decl_QSqlRecord ("QSqlRecord",
  methods_QSqlRecord (),
  "@qt\n@brief Binding of QSqlRecord");


GSIQT_PUBLIC gsi::Class<QSqlRecord> &qtdecl_QSqlRecord () { return decl_QSqlRecord; }

}

