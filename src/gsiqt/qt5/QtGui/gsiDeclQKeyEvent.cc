
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
*  @file gsiDeclQKeyEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QKeyEvent>
#include <QEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QKeyEvent

// int QKeyEvent::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QKeyEvent *)cls)->count ());
}


// bool QKeyEvent::isAutoRepeat()


static void _init_f_isAutoRepeat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAutoRepeat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QKeyEvent *)cls)->isAutoRepeat ());
}


// int QKeyEvent::key()


static void _init_f_key_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_key_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QKeyEvent *)cls)->key ());
}


// bool QKeyEvent::matches(QKeySequence::StandardKey key)


static void _init_f_matches_c2869 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const qt_gsi::Converter<QKeySequence::StandardKey>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_matches_c2869 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QKeySequence::StandardKey>::target_type & arg1 = args.read<const qt_gsi::Converter<QKeySequence::StandardKey>::target_type & > (heap);
  ret.write<bool > ((bool)((QKeyEvent *)cls)->matches (qt_gsi::QtToCppAdaptor<QKeySequence::StandardKey>(arg1).cref()));
}


// QFlags<Qt::KeyboardModifier> QKeyEvent::modifiers()


static void _init_f_modifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::KeyboardModifier> > ();
}

static void _call_f_modifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::KeyboardModifier> > ((QFlags<Qt::KeyboardModifier>)((QKeyEvent *)cls)->modifiers ());
}


// quint32 QKeyEvent::nativeModifiers()


static void _init_f_nativeModifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint32 > ();
}

static void _call_f_nativeModifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint32 > ((quint32)((QKeyEvent *)cls)->nativeModifiers ());
}


// quint32 QKeyEvent::nativeScanCode()


static void _init_f_nativeScanCode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint32 > ();
}

static void _call_f_nativeScanCode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint32 > ((quint32)((QKeyEvent *)cls)->nativeScanCode ());
}


// quint32 QKeyEvent::nativeVirtualKey()


static void _init_f_nativeVirtualKey_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint32 > ();
}

static void _call_f_nativeVirtualKey_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint32 > ((quint32)((QKeyEvent *)cls)->nativeVirtualKey ());
}


// QString QKeyEvent::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QKeyEvent *)cls)->text ());
}


namespace gsi
{

static gsi::Methods methods_QKeyEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("count", "@brief Method int QKeyEvent::count()\n", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod ("isAutoRepeat?", "@brief Method bool QKeyEvent::isAutoRepeat()\n", true, &_init_f_isAutoRepeat_c0, &_call_f_isAutoRepeat_c0);
  methods += new qt_gsi::GenericMethod ("key", "@brief Method int QKeyEvent::key()\n", true, &_init_f_key_c0, &_call_f_key_c0);
  methods += new qt_gsi::GenericMethod ("matches", "@brief Method bool QKeyEvent::matches(QKeySequence::StandardKey key)\n", true, &_init_f_matches_c2869, &_call_f_matches_c2869);
  methods += new qt_gsi::GenericMethod (":modifiers", "@brief Method QFlags<Qt::KeyboardModifier> QKeyEvent::modifiers()\n", true, &_init_f_modifiers_c0, &_call_f_modifiers_c0);
  methods += new qt_gsi::GenericMethod ("nativeModifiers", "@brief Method quint32 QKeyEvent::nativeModifiers()\n", true, &_init_f_nativeModifiers_c0, &_call_f_nativeModifiers_c0);
  methods += new qt_gsi::GenericMethod ("nativeScanCode", "@brief Method quint32 QKeyEvent::nativeScanCode()\n", true, &_init_f_nativeScanCode_c0, &_call_f_nativeScanCode_c0);
  methods += new qt_gsi::GenericMethod ("nativeVirtualKey", "@brief Method quint32 QKeyEvent::nativeVirtualKey()\n", true, &_init_f_nativeVirtualKey_c0, &_call_f_nativeVirtualKey_c0);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QKeyEvent::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  return methods;
}

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

gsi::Class<QKeyEvent> decl_QKeyEvent (qtdecl_QInputEvent (), "QtGui", "QKeyEvent_Native",
  methods_QKeyEvent (),
  "@hide\n@alias QKeyEvent");

GSI_QTGUI_PUBLIC gsi::Class<QKeyEvent> &qtdecl_QKeyEvent () { return decl_QKeyEvent; }

}


class QKeyEvent_Adaptor : public QKeyEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QKeyEvent_Adaptor();

  //  [adaptor ctor] QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString &text, bool autorep, unsigned short int count)
  QKeyEvent_Adaptor(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers) : QKeyEvent(type, key, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString &text, bool autorep, unsigned short int count)
  QKeyEvent_Adaptor(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString &text) : QKeyEvent(type, key, modifiers, text)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString &text, bool autorep, unsigned short int count)
  QKeyEvent_Adaptor(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString &text, bool autorep) : QKeyEvent(type, key, modifiers, text, autorep)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString &text, bool autorep, unsigned short int count)
  QKeyEvent_Adaptor(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString &text, bool autorep, unsigned short int count) : QKeyEvent(type, key, modifiers, text, autorep, count)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString &text, bool autorep, unsigned short int count)
  QKeyEvent_Adaptor(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers) : QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString &text, bool autorep, unsigned short int count)
  QKeyEvent_Adaptor(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString &text) : QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString &text, bool autorep, unsigned short int count)
  QKeyEvent_Adaptor(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString &text, bool autorep) : QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString &text, bool autorep, unsigned short int count)
  QKeyEvent_Adaptor(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString &text, bool autorep, unsigned short int count) : QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QKeyEvent_Adaptor::~QKeyEvent_Adaptor() { }

//  Constructor QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString &text, bool autorep, unsigned short int count) (adaptor class)

static void _init_ctor_QKeyEvent_Adaptor_10234 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("key");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("text", true, "QString()");
  decl->add_arg<const QString & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("autorep", true, "false");
  decl->add_arg<bool > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("count", true, "1");
  decl->add_arg<unsigned short int > (argspec_5);
  decl->set_return_new<QKeyEvent_Adaptor> ();
}

static void _call_ctor_QKeyEvent_Adaptor_10234 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap);
  int arg2 = args.read<int > (heap);
  QFlags<Qt::KeyboardModifier> arg3 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  const QString &arg4 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  bool arg5 = args ? args.read<bool > (heap) : (bool)(false);
  unsigned short int arg6 = args ? args.read<unsigned short int > (heap) : (unsigned short int)(1);
  ret.write<QKeyEvent_Adaptor *> (new QKeyEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, arg4, arg5, arg6));
}


//  Constructor QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString &text, bool autorep, unsigned short int count) (adaptor class)

static void _init_ctor_QKeyEvent_Adaptor_13204 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("key");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("nativeScanCode");
  decl->add_arg<quint32 > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("nativeVirtualKey");
  decl->add_arg<quint32 > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("nativeModifiers");
  decl->add_arg<quint32 > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("text", true, "QString()");
  decl->add_arg<const QString & > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("autorep", true, "false");
  decl->add_arg<bool > (argspec_7);
  static gsi::ArgSpecBase argspec_8 ("count", true, "1");
  decl->add_arg<unsigned short int > (argspec_8);
  decl->set_return_new<QKeyEvent_Adaptor> ();
}

static void _call_ctor_QKeyEvent_Adaptor_13204 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap);
  int arg2 = args.read<int > (heap);
  QFlags<Qt::KeyboardModifier> arg3 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  quint32 arg4 = args.read<quint32 > (heap);
  quint32 arg5 = args.read<quint32 > (heap);
  quint32 arg6 = args.read<quint32 > (heap);
  const QString &arg7 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  bool arg8 = args ? args.read<bool > (heap) : (bool)(false);
  unsigned short int arg9 = args ? args.read<unsigned short int > (heap) : (unsigned short int)(1);
  ret.write<QKeyEvent_Adaptor *> (new QKeyEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9));
}


namespace gsi
{

gsi::Class<QKeyEvent> &qtdecl_QKeyEvent ();

static gsi::Methods methods_QKeyEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString &text, bool autorep, unsigned short int count)\nThis method creates an object of class QKeyEvent.", &_init_ctor_QKeyEvent_Adaptor_10234, &_call_ctor_QKeyEvent_Adaptor_10234);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QKeyEvent::QKeyEvent(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString &text, bool autorep, unsigned short int count)\nThis method creates an object of class QKeyEvent.", &_init_ctor_QKeyEvent_Adaptor_13204, &_call_ctor_QKeyEvent_Adaptor_13204);
  return methods;
}

gsi::Class<QKeyEvent_Adaptor> decl_QKeyEvent_Adaptor (qtdecl_QKeyEvent (), "QtGui", "QKeyEvent",
  methods_QKeyEvent_Adaptor (),
  "@qt\n@brief Binding of QKeyEvent");

}

