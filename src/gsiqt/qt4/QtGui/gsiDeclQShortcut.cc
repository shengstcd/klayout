
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
*  @file gsiDeclQShortcut.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QShortcut>
#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QShortcut

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QShortcut::staticMetaObject);
}


// bool QShortcut::autoRepeat()


static void _init_f_autoRepeat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_autoRepeat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QShortcut *)cls)->autoRepeat ());
}


// Qt::ShortcutContext QShortcut::context()


static void _init_f_context_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::ShortcutContext>::target_type > ();
}

static void _call_f_context_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::ShortcutContext>::target_type > ((qt_gsi::Converter<Qt::ShortcutContext>::target_type)qt_gsi::CppToQtAdaptor<Qt::ShortcutContext>(((QShortcut *)cls)->context ()));
}


// int QShortcut::id()


static void _init_f_id_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_id_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QShortcut *)cls)->id ());
}


// bool QShortcut::isEnabled()


static void _init_f_isEnabled_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEnabled_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QShortcut *)cls)->isEnabled ());
}


// QKeySequence QShortcut::key()


static void _init_f_key_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QKeySequence > ();
}

static void _call_f_key_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QKeySequence > ((QKeySequence)((QShortcut *)cls)->key ());
}


// QWidget *QShortcut::parentWidget()


static void _init_f_parentWidget_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_f_parentWidget_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QShortcut *)cls)->parentWidget ());
}


// void QShortcut::setAutoRepeat(bool on)


static void _init_f_setAutoRepeat_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("on");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAutoRepeat_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QShortcut *)cls)->setAutoRepeat (arg1);
}


// void QShortcut::setContext(Qt::ShortcutContext context)


static void _init_f_setContext_2350 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("context");
  decl->add_arg<const qt_gsi::Converter<Qt::ShortcutContext>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setContext_2350 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::ShortcutContext>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::ShortcutContext>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QShortcut *)cls)->setContext (qt_gsi::QtToCppAdaptor<Qt::ShortcutContext>(arg1).cref());
}


// void QShortcut::setEnabled(bool enable)


static void _init_f_setEnabled_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("enable");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEnabled_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QShortcut *)cls)->setEnabled (arg1);
}


// void QShortcut::setKey(const QKeySequence &key)


static void _init_f_setKey_2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setKey_2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = args.read<const QKeySequence & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QShortcut *)cls)->setKey (arg1);
}


// void QShortcut::setWhatsThis(const QString &text)


static void _init_f_setWhatsThis_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWhatsThis_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QShortcut *)cls)->setWhatsThis (arg1);
}


// QString QShortcut::whatsThis()


static void _init_f_whatsThis_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_whatsThis_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QShortcut *)cls)->whatsThis ());
}


// static QString QShortcut::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QShortcut::tr (arg1, arg2));
}


// static QString QShortcut::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QShortcut::tr (arg1, arg2, arg3));
}


// static QString QShortcut::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QShortcut::trUtf8 (arg1, arg2));
}


// static QString QShortcut::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QShortcut::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QShortcut () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":autoRepeat", "@brief Method bool QShortcut::autoRepeat()\n", true, &_init_f_autoRepeat_c0, &_call_f_autoRepeat_c0);
  methods += new qt_gsi::GenericMethod (":context", "@brief Method Qt::ShortcutContext QShortcut::context()\n", false, &_init_f_context_0, &_call_f_context_0);
  methods += new qt_gsi::GenericMethod ("id", "@brief Method int QShortcut::id()\n", true, &_init_f_id_c0, &_call_f_id_c0);
  methods += new qt_gsi::GenericMethod ("isEnabled?|:enabled", "@brief Method bool QShortcut::isEnabled()\n", true, &_init_f_isEnabled_c0, &_call_f_isEnabled_c0);
  methods += new qt_gsi::GenericMethod (":key", "@brief Method QKeySequence QShortcut::key()\n", true, &_init_f_key_c0, &_call_f_key_c0);
  methods += new qt_gsi::GenericMethod ("parentWidget", "@brief Method QWidget *QShortcut::parentWidget()\n", true, &_init_f_parentWidget_c0, &_call_f_parentWidget_c0);
  methods += new qt_gsi::GenericMethod ("setAutoRepeat|autoRepeat=", "@brief Method void QShortcut::setAutoRepeat(bool on)\n", false, &_init_f_setAutoRepeat_864, &_call_f_setAutoRepeat_864);
  methods += new qt_gsi::GenericMethod ("setContext|context=", "@brief Method void QShortcut::setContext(Qt::ShortcutContext context)\n", false, &_init_f_setContext_2350, &_call_f_setContext_2350);
  methods += new qt_gsi::GenericMethod ("setEnabled|enabled=", "@brief Method void QShortcut::setEnabled(bool enable)\n", false, &_init_f_setEnabled_864, &_call_f_setEnabled_864);
  methods += new qt_gsi::GenericMethod ("setKey|key=", "@brief Method void QShortcut::setKey(const QKeySequence &key)\n", false, &_init_f_setKey_2516, &_call_f_setKey_2516);
  methods += new qt_gsi::GenericMethod ("setWhatsThis|whatsThis=", "@brief Method void QShortcut::setWhatsThis(const QString &text)\n", false, &_init_f_setWhatsThis_2025, &_call_f_setWhatsThis_2025);
  methods += new qt_gsi::GenericMethod (":whatsThis", "@brief Method QString QShortcut::whatsThis()\n", true, &_init_f_whatsThis_c0, &_call_f_whatsThis_c0);
  methods += gsi::qt_signal ("activated()", "activated", "@brief Signal declaration for QShortcut::activated()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("activatedAmbiguously()", "activatedAmbiguously", "@brief Signal declaration for QShortcut::activatedAmbiguously()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QShortcut::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QShortcut::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QShortcut::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QShortcut::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QShortcut::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QShortcut> decl_QShortcut (qtdecl_QObject (), "QtGui", "QShortcut_Native",
  methods_QShortcut (),
  "@hide\n@alias QShortcut");

GSI_QTGUI_PUBLIC gsi::Class<QShortcut> &qtdecl_QShortcut () { return decl_QShortcut; }

}


class QShortcut_Adaptor : public QShortcut, public qt_gsi::QtObjectBase
{
public:

  virtual ~QShortcut_Adaptor();

  //  [adaptor ctor] QShortcut::QShortcut(QWidget *parent)
  QShortcut_Adaptor(QWidget *parent) : QShortcut(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QShortcut::QShortcut(const QKeySequence &key, QWidget *parent, const char *member, const char *ambiguousMember, Qt::ShortcutContext context)
  QShortcut_Adaptor(const QKeySequence &key, QWidget *parent) : QShortcut(key, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QShortcut::QShortcut(const QKeySequence &key, QWidget *parent, const char *member, const char *ambiguousMember, Qt::ShortcutContext context)
  QShortcut_Adaptor(const QKeySequence &key, QWidget *parent, const char *member) : QShortcut(key, parent, member)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QShortcut::QShortcut(const QKeySequence &key, QWidget *parent, const char *member, const char *ambiguousMember, Qt::ShortcutContext context)
  QShortcut_Adaptor(const QKeySequence &key, QWidget *parent, const char *member, const char *ambiguousMember) : QShortcut(key, parent, member, ambiguousMember)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QShortcut::QShortcut(const QKeySequence &key, QWidget *parent, const char *member, const char *ambiguousMember, Qt::ShortcutContext context)
  QShortcut_Adaptor(const QKeySequence &key, QWidget *parent, const char *member, const char *ambiguousMember, Qt::ShortcutContext context) : QShortcut(key, parent, member, ambiguousMember, context)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QShortcut::receivers(const char *signal)
  int fp_QShortcut_receivers_c1731 (const char *signal) const {
    return QShortcut::receivers(signal);
  }

  //  [expose] QObject *QShortcut::sender()
  QObject * fp_QShortcut_sender_c0 () const {
    return QShortcut::sender();
  }

  //  [adaptor impl] bool QShortcut::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QShortcut::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QShortcut_Adaptor, bool, QObject *, QEvent *>(&QShortcut_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QShortcut::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QShortcut::activated()
  void emitter_QShortcut_activated_0()
  {
    emit QShortcut::activated();
  }

  //  [emitter impl] void QShortcut::activatedAmbiguously()
  void emitter_QShortcut_activatedAmbiguously_0()
  {
    emit QShortcut::activatedAmbiguously();
  }

  //  [adaptor impl] void QShortcut::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QShortcut::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QShortcut_Adaptor, QChildEvent *>(&QShortcut_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QShortcut::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QShortcut::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QShortcut::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QShortcut_Adaptor, QEvent *>(&QShortcut_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QShortcut::customEvent(arg1);
    }
  }

  //  [emitter impl] void QShortcut::destroyed(QObject *)
  void emitter_QShortcut_destroyed_1302(QObject *arg1)
  {
    emit QShortcut::destroyed(arg1);
  }

  //  [adaptor impl] void QShortcut::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QShortcut::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QShortcut_Adaptor, const char *>(&QShortcut_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QShortcut::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QShortcut::event(QEvent *e)
  bool cbs_event_1217_0(QEvent *e)
  {
    return QShortcut::event(e);
  }

  virtual bool event(QEvent *e)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QShortcut_Adaptor, bool, QEvent *>(&QShortcut_Adaptor::cbs_event_1217_0, e);
    } else {
      return QShortcut::event(e);
    }
  }

  //  [adaptor impl] void QShortcut::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QShortcut::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QShortcut_Adaptor, QTimerEvent *>(&QShortcut_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QShortcut::timerEvent(arg1);
    }
  }

  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QShortcut_Adaptor::~QShortcut_Adaptor() { }

//  Constructor QShortcut::QShortcut(QWidget *parent) (adaptor class)

static void _init_ctor_QShortcut_Adaptor_1315 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return_new<QShortcut_Adaptor> ();
}

static void _call_ctor_QShortcut_Adaptor_1315 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = args.read<QWidget * > (heap);
  ret.write<QShortcut_Adaptor *> (new QShortcut_Adaptor (arg1));
}


//  Constructor QShortcut::QShortcut(const QKeySequence &key, QWidget *parent, const char *member, const char *ambiguousMember, Qt::ShortcutContext context) (adaptor class)

static void _init_ctor_QShortcut_Adaptor_9211 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QKeySequence & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent");
  decl->add_arg<QWidget * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("member", true, "0");
  decl->add_arg<const char * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("ambiguousMember", true, "0");
  decl->add_arg<const char * > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("context", true, "Qt::WindowShortcut");
  decl->add_arg<const qt_gsi::Converter<Qt::ShortcutContext>::target_type & > (argspec_4);
  decl->set_return_new<QShortcut_Adaptor> ();
}

static void _call_ctor_QShortcut_Adaptor_9211 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = args.read<const QKeySequence & > (heap);
  QWidget *arg2 = args.read<QWidget * > (heap);
  const char *arg3 = args ? args.read<const char * > (heap) : (const char *)(0);
  const char *arg4 = args ? args.read<const char * > (heap) : (const char *)(0);
  const qt_gsi::Converter<Qt::ShortcutContext>::target_type & arg5 = args ? args.read<const qt_gsi::Converter<Qt::ShortcutContext>::target_type & > (heap) : (const qt_gsi::Converter<Qt::ShortcutContext>::target_type &)(qt_gsi::CppToQtReadAdaptor<Qt::ShortcutContext>(heap, Qt::WindowShortcut));
  ret.write<QShortcut_Adaptor *> (new QShortcut_Adaptor (arg1, arg2, arg3, arg4, qt_gsi::QtToCppAdaptor<Qt::ShortcutContext>(arg5).cref()));
}


// emitter void QShortcut::activated()

static void _init_emitter_activated_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_activated_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QShortcut_Adaptor *)cls)->emitter_QShortcut_activated_0 ();
}


// emitter void QShortcut::activatedAmbiguously()

static void _init_emitter_activatedAmbiguously_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_activatedAmbiguously_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QShortcut_Adaptor *)cls)->emitter_QShortcut_activatedAmbiguously_0 ();
}


// void QShortcut::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QShortcut_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QShortcut_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QShortcut::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QShortcut_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QShortcut_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QShortcut::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ((QShortcut_Adaptor *)cls)->emitter_QShortcut_destroyed_1302 (arg1);
}


// void QShortcut::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QShortcut_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QShortcut_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QShortcut::event(QEvent *e)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QShortcut_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QShortcut_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QShortcut::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QShortcut_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QShortcut_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed int QShortcut::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<int > ((int)((QShortcut_Adaptor *)cls)->fp_QShortcut_receivers_c1731 (arg1));
}


// exposed QObject *QShortcut::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QShortcut_Adaptor *)cls)->fp_QShortcut_sender_c0 ());
}


// void QShortcut::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QShortcut_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QShortcut_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QShortcut> &qtdecl_QShortcut ();

static gsi::Methods methods_QShortcut_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QShortcut::QShortcut(QWidget *parent)\nThis method creates an object of class QShortcut.", &_init_ctor_QShortcut_Adaptor_1315, &_call_ctor_QShortcut_Adaptor_1315);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QShortcut::QShortcut(const QKeySequence &key, QWidget *parent, const char *member, const char *ambiguousMember, Qt::ShortcutContext context)\nThis method creates an object of class QShortcut.", &_init_ctor_QShortcut_Adaptor_9211, &_call_ctor_QShortcut_Adaptor_9211);
  methods += new qt_gsi::GenericMethod ("emit_activated", "@brief Emitter for signal void QShortcut::activated()\nCall this method to emit this signal.", false, &_init_emitter_activated_0, &_call_emitter_activated_0);
  methods += new qt_gsi::GenericMethod ("emit_activatedAmbiguously", "@brief Emitter for signal void QShortcut::activatedAmbiguously()\nCall this method to emit this signal.", false, &_init_emitter_activatedAmbiguously_0, &_call_emitter_activatedAmbiguously_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QShortcut::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QShortcut::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QShortcut::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QShortcut::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QShortcut::event(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QShortcut::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QShortcut::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QShortcut::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QShortcut::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QShortcut_Adaptor> decl_QShortcut_Adaptor (qtdecl_QShortcut (), "QtGui", "QShortcut",
  methods_QShortcut_Adaptor (),
  "@qt\n@brief Binding of QShortcut");

}

