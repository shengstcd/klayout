
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
*  @file gsiDeclQFinalState.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFinalState>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFinalState

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QFinalState::staticMetaObject);
}


// static QString QFinalState::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QFinalState::tr (arg1, arg2, arg3));
}


// static QString QFinalState::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QFinalState::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QFinalState () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += gsi::qt_signal<bool > ("activeChanged(bool)", "activeChanged", gsi::arg("active"), "@brief Signal declaration for QFinalState::activeChanged(bool active)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QFinalState::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QFinalState::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QFinalState::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QAbstractState> &qtdecl_QAbstractState ();

qt_gsi::QtNativeClass<QFinalState> decl_QFinalState (qtdecl_QAbstractState (), "QFinalState_Native",
  methods_QFinalState (),
  "@hide\n@alias QFinalState");

GSIQT_PUBLIC gsi::Class<QFinalState> &qtdecl_QFinalState () { return decl_QFinalState; }

}


class QFinalState_Adaptor : public QFinalState, public qt_gsi::QtObjectBase
{
public:

  virtual ~QFinalState_Adaptor();

  //  [adaptor ctor] QFinalState::QFinalState(QState *parent)
  QFinalState_Adaptor() : QFinalState()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QFinalState::QFinalState(QState *parent)
  QFinalState_Adaptor(QState *parent) : QFinalState(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QFinalState::isSignalConnected(const QMetaMethod &signal)
  bool fp_QFinalState_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QFinalState::isSignalConnected(signal);
  }

  //  [expose] int QFinalState::receivers(const char *signal)
  int fp_QFinalState_receivers_c1731 (const char *signal) const {
    return QFinalState::receivers(signal);
  }

  //  [expose] QObject *QFinalState::sender()
  QObject * fp_QFinalState_sender_c0 () const {
    return QFinalState::sender();
  }

  //  [expose] int QFinalState::senderSignalIndex()
  int fp_QFinalState_senderSignalIndex_c0 () const {
    return QFinalState::senderSignalIndex();
  }

  //  [emitter impl] void QFinalState::activeChanged(bool active)
  void emitter_QFinalState_activeChanged_864(bool active)
  {
    emit QFinalState::activeChanged(active);
  }

  //  [emitter impl] void QFinalState::destroyed(QObject *)
  void emitter_QFinalState_destroyed_1302(QObject *arg1)
  {
    emit QFinalState::destroyed(arg1);
  }

  //  [adaptor impl] bool QFinalState::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QFinalState::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QFinalState_Adaptor, bool, QObject *, QEvent *>(&QFinalState_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QFinalState::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QFinalState::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QFinalState::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QFinalState_Adaptor, QChildEvent *>(&QFinalState_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QFinalState::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QFinalState::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QFinalState::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QFinalState_Adaptor, QEvent *>(&QFinalState_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QFinalState::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QFinalState::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QFinalState::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QFinalState_Adaptor, const QMetaMethod &>(&QFinalState_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QFinalState::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QFinalState::event(QEvent *e)
  bool cbs_event_1217_0(QEvent *e)
  {
    return QFinalState::event(e);
  }

  virtual bool event(QEvent *e)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QFinalState_Adaptor, bool, QEvent *>(&QFinalState_Adaptor::cbs_event_1217_0, e);
    } else {
      return QFinalState::event(e);
    }
  }

  //  [adaptor impl] void QFinalState::onEntry(QEvent *event)
  void cbs_onEntry_1217_0(QEvent *event)
  {
    QFinalState::onEntry(event);
  }

  virtual void onEntry(QEvent *event)
  {
    if (cb_onEntry_1217_0.can_issue()) {
      cb_onEntry_1217_0.issue<QFinalState_Adaptor, QEvent *>(&QFinalState_Adaptor::cbs_onEntry_1217_0, event);
    } else {
      QFinalState::onEntry(event);
    }
  }

  //  [adaptor impl] void QFinalState::onExit(QEvent *event)
  void cbs_onExit_1217_0(QEvent *event)
  {
    QFinalState::onExit(event);
  }

  virtual void onExit(QEvent *event)
  {
    if (cb_onExit_1217_0.can_issue()) {
      cb_onExit_1217_0.issue<QFinalState_Adaptor, QEvent *>(&QFinalState_Adaptor::cbs_onExit_1217_0, event);
    } else {
      QFinalState::onExit(event);
    }
  }

  //  [adaptor impl] void QFinalState::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QFinalState::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QFinalState_Adaptor, QTimerEvent *>(&QFinalState_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QFinalState::timerEvent(arg1);
    }
  }

  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_onEntry_1217_0;
  gsi::Callback cb_onExit_1217_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QFinalState_Adaptor::~QFinalState_Adaptor() { }

//  Constructor QFinalState::QFinalState(QState *parent) (adaptor class)

static void _init_ctor_QFinalState_Adaptor_1216 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QState * > (argspec_0);
  decl->set_return_new<QFinalState_Adaptor> ();
}

static void _call_ctor_QFinalState_Adaptor_1216 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QState *arg1 = args ? args.read<QState * > (heap) : (QState *)(0);
  ret.write<QFinalState_Adaptor *> (new QFinalState_Adaptor (arg1));
}


// emitter void QFinalState::activeChanged(bool active)

static void _init_emitter_activeChanged_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("active");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_activeChanged_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  ((QFinalState_Adaptor *)cls)->emitter_QFinalState_activeChanged_864 (arg1);
}


// void QFinalState::childEvent(QChildEvent *)

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
  ((QFinalState_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QFinalState_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QFinalState::customEvent(QEvent *)

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
  ((QFinalState_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QFinalState_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QFinalState::destroyed(QObject *)

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
  ((QFinalState_Adaptor *)cls)->emitter_QFinalState_destroyed_1302 (arg1);
}


// void QFinalState::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFinalState_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QFinalState_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QFinalState::event(QEvent *e)

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
  ret.write<bool > ((bool)((QFinalState_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QFinalState_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QFinalState::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QFinalState_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QFinalState_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QFinalState::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  ret.write<bool > ((bool)((QFinalState_Adaptor *)cls)->fp_QFinalState_isSignalConnected_c2394 (arg1));
}


// void QFinalState::onEntry(QEvent *event)

static void _init_cbs_onEntry_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_onEntry_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFinalState_Adaptor *)cls)->cbs_onEntry_1217_0 (arg1);
}

static void _set_callback_cbs_onEntry_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QFinalState_Adaptor *)cls)->cb_onEntry_1217_0 = cb;
}


// void QFinalState::onExit(QEvent *event)

static void _init_cbs_onExit_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_onExit_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFinalState_Adaptor *)cls)->cbs_onExit_1217_0 (arg1);
}

static void _set_callback_cbs_onExit_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QFinalState_Adaptor *)cls)->cb_onExit_1217_0 = cb;
}


// exposed int QFinalState::receivers(const char *signal)

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
  ret.write<int > ((int)((QFinalState_Adaptor *)cls)->fp_QFinalState_receivers_c1731 (arg1));
}


// exposed QObject *QFinalState::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QFinalState_Adaptor *)cls)->fp_QFinalState_sender_c0 ());
}


// exposed int QFinalState::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFinalState_Adaptor *)cls)->fp_QFinalState_senderSignalIndex_c0 ());
}


// void QFinalState::timerEvent(QTimerEvent *)

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
  ((QFinalState_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QFinalState_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QFinalState> &qtdecl_QFinalState ();

static gsi::Methods methods_QFinalState_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFinalState::QFinalState(QState *parent)\nThis method creates an object of class QFinalState.", &_init_ctor_QFinalState_Adaptor_1216, &_call_ctor_QFinalState_Adaptor_1216);
  methods += new qt_gsi::GenericMethod ("emit_activeChanged", "@brief Emitter for signal void QFinalState::activeChanged(bool active)\nCall this method to emit this signal.", false, &_init_emitter_activeChanged_864, &_call_emitter_activeChanged_864);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QFinalState::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QFinalState::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QFinalState::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QFinalState::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QFinalState::event(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QFinalState::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QFinalState::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*onEntry", "@hide", false, &_init_cbs_onEntry_1217_0, &_call_cbs_onEntry_1217_0);
  methods += new qt_gsi::GenericMethod ("*onEntry", "@brief Virtual method void QFinalState::onEntry(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onEntry_1217_0, &_call_cbs_onEntry_1217_0, &_set_callback_cbs_onEntry_1217_0);
  methods += new qt_gsi::GenericMethod ("*onExit", "@hide", false, &_init_cbs_onExit_1217_0, &_call_cbs_onExit_1217_0);
  methods += new qt_gsi::GenericMethod ("*onExit", "@brief Virtual method void QFinalState::onExit(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onExit_1217_0, &_call_cbs_onExit_1217_0, &_set_callback_cbs_onExit_1217_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QFinalState::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QFinalState::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QFinalState::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QFinalState::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QFinalState_Adaptor> decl_QFinalState_Adaptor (qtdecl_QFinalState (), "QFinalState",
  methods_QFinalState_Adaptor (),
  "@qt\n@brief Binding of QFinalState");

}

