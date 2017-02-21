
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
*  @file gsiDeclQSqlQuery.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlResult>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSqlQuery

//  Constructor QSqlQuery::QSqlQuery(QSqlResult *r)


static void _init_ctor_QSqlQuery_1646 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<QSqlResult * > (argspec_0);
  decl->set_return_new<QSqlQuery> ();
}

static void _call_ctor_QSqlQuery_1646 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSqlResult *arg1 = args.read<QSqlResult * > (heap);
  ret.write<QSqlQuery *> (new QSqlQuery (arg1));
}


//  Constructor QSqlQuery::QSqlQuery(const QString &query, QSqlDatabase db)


static void _init_ctor_QSqlQuery_3527 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query", true, "QString()");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("db", true, "QSqlDatabase()");
  decl->add_arg<QSqlDatabase > (argspec_1);
  decl->set_return_new<QSqlQuery> ();
}

static void _call_ctor_QSqlQuery_3527 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  QSqlDatabase arg2 = args ? args.read<QSqlDatabase > (heap) : (QSqlDatabase)(QSqlDatabase());
  ret.write<QSqlQuery *> (new QSqlQuery (arg1, arg2));
}


//  Constructor QSqlQuery::QSqlQuery(QSqlDatabase db)


static void _init_ctor_QSqlQuery_1610 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("db");
  decl->add_arg<QSqlDatabase > (argspec_0);
  decl->set_return_new<QSqlQuery> ();
}

static void _call_ctor_QSqlQuery_1610 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSqlDatabase arg1 = args.read<QSqlDatabase > (heap);
  ret.write<QSqlQuery *> (new QSqlQuery (arg1));
}


//  Constructor QSqlQuery::QSqlQuery(const QSqlQuery &other)


static void _init_ctor_QSqlQuery_2232 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlQuery & > (argspec_0);
  decl->set_return_new<QSqlQuery> ();
}

static void _call_ctor_QSqlQuery_2232 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlQuery &arg1 = args.read<const QSqlQuery & > (heap);
  ret.write<QSqlQuery *> (new QSqlQuery (arg1));
}


// void QSqlQuery::addBindValue(const QVariant &val, QFlags<QSql::ParamTypeFlag> type)


static void _init_f_addBindValue_4937 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("val");
  decl->add_arg<const QVariant & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type", true, "QSql::In");
  decl->add_arg<QFlags<QSql::ParamTypeFlag> > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_addBindValue_4937 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = args.read<const QVariant & > (heap);
  QFlags<QSql::ParamTypeFlag> arg2 = args ? args.read<QFlags<QSql::ParamTypeFlag> > (heap) : (QFlags<QSql::ParamTypeFlag>)(QSql::In);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlQuery *)cls)->addBindValue (arg1, arg2);
}


// int QSqlQuery::at()


static void _init_f_at_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_at_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSqlQuery *)cls)->at ());
}


// void QSqlQuery::bindValue(const QString &placeholder, const QVariant &val, QFlags<QSql::ParamTypeFlag> type)


static void _init_f_bindValue_6854 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("placeholder");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("val");
  decl->add_arg<const QVariant & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("type", true, "QSql::In");
  decl->add_arg<QFlags<QSql::ParamTypeFlag> > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_bindValue_6854 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  QFlags<QSql::ParamTypeFlag> arg3 = args ? args.read<QFlags<QSql::ParamTypeFlag> > (heap) : (QFlags<QSql::ParamTypeFlag>)(QSql::In);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlQuery *)cls)->bindValue (arg1, arg2, arg3);
}


// void QSqlQuery::bindValue(int pos, const QVariant &val, QFlags<QSql::ParamTypeFlag> type)


static void _init_f_bindValue_5596 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("val");
  decl->add_arg<const QVariant & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("type", true, "QSql::In");
  decl->add_arg<QFlags<QSql::ParamTypeFlag> > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_bindValue_5596 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  QFlags<QSql::ParamTypeFlag> arg3 = args ? args.read<QFlags<QSql::ParamTypeFlag> > (heap) : (QFlags<QSql::ParamTypeFlag>)(QSql::In);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlQuery *)cls)->bindValue (arg1, arg2, arg3);
}


// QVariant QSqlQuery::boundValue(const QString &placeholder)


static void _init_f_boundValue_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("placeholder");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_boundValue_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QVariant > ((QVariant)((QSqlQuery *)cls)->boundValue (arg1));
}


// QVariant QSqlQuery::boundValue(int pos)


static void _init_f_boundValue_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_boundValue_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QVariant > ((QVariant)((QSqlQuery *)cls)->boundValue (arg1));
}


// QMap<QString, QVariant> QSqlQuery::boundValues()


static void _init_f_boundValues_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMap<QString, QVariant> > ();
}

static void _call_f_boundValues_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMap<QString, QVariant> > ((QMap<QString, QVariant>)((QSqlQuery *)cls)->boundValues ());
}


// void QSqlQuery::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlQuery *)cls)->clear ();
}


// const QSqlDriver *QSqlQuery::driver()


static void _init_f_driver_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QSqlDriver * > ();
}

static void _call_f_driver_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QSqlDriver * > ((const QSqlDriver *)((QSqlQuery *)cls)->driver ());
}


// bool QSqlQuery::exec(const QString &query)


static void _init_f_exec_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_exec_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->exec (arg1));
}


// bool QSqlQuery::exec()


static void _init_f_exec_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_exec_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->exec ());
}


// bool QSqlQuery::execBatch(QSqlQuery::BatchExecutionMode mode)


static void _init_f_execBatch_3290 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QSqlQuery::ValuesAsRows");
  decl->add_arg<const qt_gsi::Converter<QSqlQuery::BatchExecutionMode>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_execBatch_3290 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSqlQuery::BatchExecutionMode>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<QSqlQuery::BatchExecutionMode>::target_type & > (heap) : (const qt_gsi::Converter<QSqlQuery::BatchExecutionMode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QSqlQuery::BatchExecutionMode>(heap, QSqlQuery::ValuesAsRows));
  ret.write<bool > ((bool)((QSqlQuery *)cls)->execBatch (qt_gsi::QtToCppAdaptor<QSqlQuery::BatchExecutionMode>(arg1).cref()));
}


// QString QSqlQuery::executedQuery()


static void _init_f_executedQuery_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_executedQuery_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlQuery *)cls)->executedQuery ());
}


// void QSqlQuery::finish()


static void _init_f_finish_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_finish_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlQuery *)cls)->finish ();
}


// bool QSqlQuery::first()


static void _init_f_first_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_first_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->first ());
}


// bool QSqlQuery::isActive()


static void _init_f_isActive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isActive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->isActive ());
}


// bool QSqlQuery::isForwardOnly()


static void _init_f_isForwardOnly_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isForwardOnly_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->isForwardOnly ());
}


// bool QSqlQuery::isNull(int field)


static void _init_f_isNull_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("field");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isNull_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->isNull (arg1));
}


// bool QSqlQuery::isNull(const QString &name)


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
  ret.write<bool > ((bool)((QSqlQuery *)cls)->isNull (arg1));
}


// bool QSqlQuery::isSelect()


static void _init_f_isSelect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSelect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->isSelect ());
}


// bool QSqlQuery::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->isValid ());
}


// bool QSqlQuery::last()


static void _init_f_last_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_last_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->last ());
}


// QSqlError QSqlQuery::lastError()


static void _init_f_lastError_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSqlError > ();
}

static void _call_f_lastError_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSqlError > ((QSqlError)((QSqlQuery *)cls)->lastError ());
}


// QVariant QSqlQuery::lastInsertId()


static void _init_f_lastInsertId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_lastInsertId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QSqlQuery *)cls)->lastInsertId ());
}


// QString QSqlQuery::lastQuery()


static void _init_f_lastQuery_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_lastQuery_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlQuery *)cls)->lastQuery ());
}


// bool QSqlQuery::next()


static void _init_f_next_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_next_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->next ());
}


// bool QSqlQuery::nextResult()


static void _init_f_nextResult_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_nextResult_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->nextResult ());
}


// int QSqlQuery::numRowsAffected()


static void _init_f_numRowsAffected_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_numRowsAffected_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSqlQuery *)cls)->numRowsAffected ());
}


// QSql::NumericalPrecisionPolicy QSqlQuery::numericalPrecisionPolicy()


static void _init_f_numericalPrecisionPolicy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type > ();
}

static void _call_f_numericalPrecisionPolicy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type > ((qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type)qt_gsi::CppToQtAdaptor<QSql::NumericalPrecisionPolicy>(((QSqlQuery *)cls)->numericalPrecisionPolicy ()));
}


// QSqlQuery &QSqlQuery::operator=(const QSqlQuery &other)


static void _init_f_operator_eq__2232 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlQuery & > (argspec_0);
  decl->set_return<QSqlQuery & > ();
}

static void _call_f_operator_eq__2232 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlQuery &arg1 = args.read<const QSqlQuery & > (heap);
  ret.write<QSqlQuery & > ((QSqlQuery &)((QSqlQuery *)cls)->operator= (arg1));
}


// bool QSqlQuery::prepare(const QString &query)


static void _init_f_prepare_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_prepare_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->prepare (arg1));
}


// bool QSqlQuery::previous()


static void _init_f_previous_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_previous_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->previous ());
}


// QSqlRecord QSqlQuery::record()


static void _init_f_record_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSqlRecord > ();
}

static void _call_f_record_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSqlRecord > ((QSqlRecord)((QSqlQuery *)cls)->record ());
}


// const QSqlResult *QSqlQuery::result()


static void _init_f_result_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QSqlResult * > ();
}

static void _call_f_result_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QSqlResult * > ((const QSqlResult *)((QSqlQuery *)cls)->result ());
}


// bool QSqlQuery::seek(int i, bool relative)


static void _init_f_seek_1523 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("relative", true, "false");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_seek_1523 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  bool arg2 = args ? args.read<bool > (heap) : (bool)(false);
  ret.write<bool > ((bool)((QSqlQuery *)cls)->seek (arg1, arg2));
}


// void QSqlQuery::setForwardOnly(bool forward)


static void _init_f_setForwardOnly_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("forward");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setForwardOnly_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlQuery *)cls)->setForwardOnly (arg1);
}


// void QSqlQuery::setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy precisionPolicy)


static void _init_f_setNumericalPrecisionPolicy_3429 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("precisionPolicy");
  decl->add_arg<const qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNumericalPrecisionPolicy_3429 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type & arg1 = args.read<const qt_gsi::Converter<QSql::NumericalPrecisionPolicy>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlQuery *)cls)->setNumericalPrecisionPolicy (qt_gsi::QtToCppAdaptor<QSql::NumericalPrecisionPolicy>(arg1).cref());
}


// int QSqlQuery::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSqlQuery *)cls)->size ());
}


// QVariant QSqlQuery::value(int i)


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
  ret.write<QVariant > ((QVariant)((QSqlQuery *)cls)->value (arg1));
}


// QVariant QSqlQuery::value(const QString &name)


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
  ret.write<QVariant > ((QVariant)((QSqlQuery *)cls)->value (arg1));
}



namespace gsi
{

static gsi::Methods methods_QSqlQuery () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlQuery::QSqlQuery(QSqlResult *r)\nThis method creates an object of class QSqlQuery.", &_init_ctor_QSqlQuery_1646, &_call_ctor_QSqlQuery_1646);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlQuery::QSqlQuery(const QString &query, QSqlDatabase db)\nThis method creates an object of class QSqlQuery.", &_init_ctor_QSqlQuery_3527, &_call_ctor_QSqlQuery_3527);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlQuery::QSqlQuery(QSqlDatabase db)\nThis method creates an object of class QSqlQuery.", &_init_ctor_QSqlQuery_1610, &_call_ctor_QSqlQuery_1610);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlQuery::QSqlQuery(const QSqlQuery &other)\nThis method creates an object of class QSqlQuery.", &_init_ctor_QSqlQuery_2232, &_call_ctor_QSqlQuery_2232);
  methods += new qt_gsi::GenericMethod ("addBindValue", "@brief Method void QSqlQuery::addBindValue(const QVariant &val, QFlags<QSql::ParamTypeFlag> type)\n", false, &_init_f_addBindValue_4937, &_call_f_addBindValue_4937);
  methods += new qt_gsi::GenericMethod ("at", "@brief Method int QSqlQuery::at()\n", true, &_init_f_at_c0, &_call_f_at_c0);
  methods += new qt_gsi::GenericMethod ("bindValue", "@brief Method void QSqlQuery::bindValue(const QString &placeholder, const QVariant &val, QFlags<QSql::ParamTypeFlag> type)\n", false, &_init_f_bindValue_6854, &_call_f_bindValue_6854);
  methods += new qt_gsi::GenericMethod ("bindValue", "@brief Method void QSqlQuery::bindValue(int pos, const QVariant &val, QFlags<QSql::ParamTypeFlag> type)\n", false, &_init_f_bindValue_5596, &_call_f_bindValue_5596);
  methods += new qt_gsi::GenericMethod ("boundValue", "@brief Method QVariant QSqlQuery::boundValue(const QString &placeholder)\n", true, &_init_f_boundValue_c2025, &_call_f_boundValue_c2025);
  methods += new qt_gsi::GenericMethod ("boundValue", "@brief Method QVariant QSqlQuery::boundValue(int pos)\n", true, &_init_f_boundValue_c767, &_call_f_boundValue_c767);
  methods += new qt_gsi::GenericMethod ("boundValues", "@brief Method QMap<QString, QVariant> QSqlQuery::boundValues()\n", true, &_init_f_boundValues_c0, &_call_f_boundValues_c0);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QSqlQuery::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("driver", "@brief Method const QSqlDriver *QSqlQuery::driver()\n", true, &_init_f_driver_c0, &_call_f_driver_c0);
  methods += new qt_gsi::GenericMethod ("exec", "@brief Method bool QSqlQuery::exec(const QString &query)\n", false, &_init_f_exec_2025, &_call_f_exec_2025);
  methods += new qt_gsi::GenericMethod ("exec", "@brief Method bool QSqlQuery::exec()\n", false, &_init_f_exec_0, &_call_f_exec_0);
  methods += new qt_gsi::GenericMethod ("execBatch", "@brief Method bool QSqlQuery::execBatch(QSqlQuery::BatchExecutionMode mode)\n", false, &_init_f_execBatch_3290, &_call_f_execBatch_3290);
  methods += new qt_gsi::GenericMethod ("executedQuery", "@brief Method QString QSqlQuery::executedQuery()\n", true, &_init_f_executedQuery_c0, &_call_f_executedQuery_c0);
  methods += new qt_gsi::GenericMethod ("finish", "@brief Method void QSqlQuery::finish()\n", false, &_init_f_finish_0, &_call_f_finish_0);
  methods += new qt_gsi::GenericMethod ("first", "@brief Method bool QSqlQuery::first()\n", false, &_init_f_first_0, &_call_f_first_0);
  methods += new qt_gsi::GenericMethod ("isActive?", "@brief Method bool QSqlQuery::isActive()\n", true, &_init_f_isActive_c0, &_call_f_isActive_c0);
  methods += new qt_gsi::GenericMethod ("isForwardOnly?|:forwardOnly", "@brief Method bool QSqlQuery::isForwardOnly()\n", true, &_init_f_isForwardOnly_c0, &_call_f_isForwardOnly_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSqlQuery::isNull(int field)\n", true, &_init_f_isNull_c767, &_call_f_isNull_c767);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSqlQuery::isNull(const QString &name)\n", true, &_init_f_isNull_c2025, &_call_f_isNull_c2025);
  methods += new qt_gsi::GenericMethod ("isSelect?", "@brief Method bool QSqlQuery::isSelect()\n", true, &_init_f_isSelect_c0, &_call_f_isSelect_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QSqlQuery::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("last", "@brief Method bool QSqlQuery::last()\n", false, &_init_f_last_0, &_call_f_last_0);
  methods += new qt_gsi::GenericMethod ("lastError", "@brief Method QSqlError QSqlQuery::lastError()\n", true, &_init_f_lastError_c0, &_call_f_lastError_c0);
  methods += new qt_gsi::GenericMethod ("lastInsertId", "@brief Method QVariant QSqlQuery::lastInsertId()\n", true, &_init_f_lastInsertId_c0, &_call_f_lastInsertId_c0);
  methods += new qt_gsi::GenericMethod ("lastQuery", "@brief Method QString QSqlQuery::lastQuery()\n", true, &_init_f_lastQuery_c0, &_call_f_lastQuery_c0);
  methods += new qt_gsi::GenericMethod ("next", "@brief Method bool QSqlQuery::next()\n", false, &_init_f_next_0, &_call_f_next_0);
  methods += new qt_gsi::GenericMethod ("nextResult", "@brief Method bool QSqlQuery::nextResult()\n", false, &_init_f_nextResult_0, &_call_f_nextResult_0);
  methods += new qt_gsi::GenericMethod ("numRowsAffected", "@brief Method int QSqlQuery::numRowsAffected()\n", true, &_init_f_numRowsAffected_c0, &_call_f_numRowsAffected_c0);
  methods += new qt_gsi::GenericMethod (":numericalPrecisionPolicy", "@brief Method QSql::NumericalPrecisionPolicy QSqlQuery::numericalPrecisionPolicy()\n", true, &_init_f_numericalPrecisionPolicy_c0, &_call_f_numericalPrecisionPolicy_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSqlQuery &QSqlQuery::operator=(const QSqlQuery &other)\n", false, &_init_f_operator_eq__2232, &_call_f_operator_eq__2232);
  methods += new qt_gsi::GenericMethod ("prepare", "@brief Method bool QSqlQuery::prepare(const QString &query)\n", false, &_init_f_prepare_2025, &_call_f_prepare_2025);
  methods += new qt_gsi::GenericMethod ("previous", "@brief Method bool QSqlQuery::previous()\n", false, &_init_f_previous_0, &_call_f_previous_0);
  methods += new qt_gsi::GenericMethod ("record", "@brief Method QSqlRecord QSqlQuery::record()\n", true, &_init_f_record_c0, &_call_f_record_c0);
  methods += new qt_gsi::GenericMethod ("result", "@brief Method const QSqlResult *QSqlQuery::result()\n", true, &_init_f_result_c0, &_call_f_result_c0);
  methods += new qt_gsi::GenericMethod ("seek", "@brief Method bool QSqlQuery::seek(int i, bool relative)\n", false, &_init_f_seek_1523, &_call_f_seek_1523);
  methods += new qt_gsi::GenericMethod ("setForwardOnly|forwardOnly=", "@brief Method void QSqlQuery::setForwardOnly(bool forward)\n", false, &_init_f_setForwardOnly_864, &_call_f_setForwardOnly_864);
  methods += new qt_gsi::GenericMethod ("setNumericalPrecisionPolicy|numericalPrecisionPolicy=", "@brief Method void QSqlQuery::setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy precisionPolicy)\n", false, &_init_f_setNumericalPrecisionPolicy_3429, &_call_f_setNumericalPrecisionPolicy_3429);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method int QSqlQuery::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QVariant QSqlQuery::value(int i)\n", true, &_init_f_value_c767, &_call_f_value_c767);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QVariant QSqlQuery::value(const QString &name)\n", true, &_init_f_value_c2025, &_call_f_value_c2025);
  return methods;
}

gsi::Class<QSqlQuery> decl_QSqlQuery ("QSqlQuery",
  methods_QSqlQuery (),
  "@qt\n@brief Binding of QSqlQuery");


GSIQT_PUBLIC gsi::Class<QSqlQuery> &qtdecl_QSqlQuery () { return decl_QSqlQuery; }

}


//  Implementation of the enum wrapper class for QSqlQuery::BatchExecutionMode
namespace qt_gsi
{

static gsi::Enum<QSqlQuery::BatchExecutionMode> decl_QSqlQuery_BatchExecutionMode_Enum ("QSqlQuery_BatchExecutionMode",
    gsi::enum_const ("ValuesAsRows", QSqlQuery::ValuesAsRows, "@brief Enum constant QSqlQuery::ValuesAsRows") +
    gsi::enum_const ("ValuesAsColumns", QSqlQuery::ValuesAsColumns, "@brief Enum constant QSqlQuery::ValuesAsColumns"),
  "@qt\n@brief This class represents the QSqlQuery::BatchExecutionMode enum");

static gsi::QFlagsClass<QSqlQuery::BatchExecutionMode > decl_QSqlQuery_BatchExecutionMode_Enums ("QSqlQuery_QFlags_BatchExecutionMode",
  "@qt\n@brief This class represents the QFlags<QSqlQuery::BatchExecutionMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSqlQuery> inject_QSqlQuery_BatchExecutionMode_Enum_in_parent (decl_QSqlQuery_BatchExecutionMode_Enum.defs ());
static gsi::ClassExt<QSqlQuery> decl_QSqlQuery_BatchExecutionMode_Enum_as_child (decl_QSqlQuery_BatchExecutionMode_Enum, "BatchExecutionMode");
static gsi::ClassExt<QSqlQuery> decl_QSqlQuery_BatchExecutionMode_Enums_as_child (decl_QSqlQuery_BatchExecutionMode_Enums, "QFlags_BatchExecutionMode");

}

