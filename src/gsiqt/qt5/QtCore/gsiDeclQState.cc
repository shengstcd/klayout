
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
*  @file gsiDeclQState.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QState>
#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QSignalTransition>
#include <QStateMachine>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QState

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QState::staticMetaObject);
}


// void QState::addTransition(QAbstractTransition *transition)


static void _init_f_addTransition_2590 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("transition");
  decl->add_arg<QAbstractTransition * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addTransition_2590 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractTransition *arg1 = args.read<QAbstractTransition * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QState *)cls)->addTransition (arg1);
}


// QSignalTransition *QState::addTransition(const QObject *sender, const char *signal, QAbstractState *target)


static void _init_f_addTransition_5548 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<const QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("signal");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("target");
  decl->add_arg<QAbstractState * > (argspec_2);
  decl->set_return<QSignalTransition * > ();
}

static void _call_f_addTransition_5548 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = args.read<const QObject * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  QAbstractState *arg3 = args.read<QAbstractState * > (heap);
  ret.write<QSignalTransition * > ((QSignalTransition *)((QState *)cls)->addTransition (arg1, arg2, arg3));
}


// QAbstractTransition *QState::addTransition(QAbstractState *target)


static void _init_f_addTransition_2036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<QAbstractState * > (argspec_0);
  decl->set_return<QAbstractTransition * > ();
}

static void _call_f_addTransition_2036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractState *arg1 = args.read<QAbstractState * > (heap);
  ret.write<QAbstractTransition * > ((QAbstractTransition *)((QState *)cls)->addTransition (arg1));
}


// void QState::assignProperty(QObject *object, const char *name, const QVariant &value)


static void _init_f_assignProperty_4936 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<const QVariant & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_assignProperty_4936 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  const QVariant &arg3 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QState *)cls)->assignProperty (arg1, arg2, arg3);
}


// QState::ChildMode QState::childMode()


static void _init_f_childMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QState::ChildMode>::target_type > ();
}

static void _call_f_childMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QState::ChildMode>::target_type > ((qt_gsi::Converter<QState::ChildMode>::target_type)qt_gsi::CppToQtAdaptor<QState::ChildMode>(((QState *)cls)->childMode ()));
}


// QAbstractState *QState::errorState()


static void _init_f_errorState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAbstractState * > ();
}

static void _call_f_errorState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractState * > ((QAbstractState *)((QState *)cls)->errorState ());
}


// QAbstractState *QState::initialState()


static void _init_f_initialState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAbstractState * > ();
}

static void _call_f_initialState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractState * > ((QAbstractState *)((QState *)cls)->initialState ());
}


// void QState::removeTransition(QAbstractTransition *transition)


static void _init_f_removeTransition_2590 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("transition");
  decl->add_arg<QAbstractTransition * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeTransition_2590 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractTransition *arg1 = args.read<QAbstractTransition * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QState *)cls)->removeTransition (arg1);
}


// void QState::setChildMode(QState::ChildMode mode)


static void _init_f_setChildMode_2019 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QState::ChildMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setChildMode_2019 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QState::ChildMode>::target_type & arg1 = args.read<const qt_gsi::Converter<QState::ChildMode>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QState *)cls)->setChildMode (qt_gsi::QtToCppAdaptor<QState::ChildMode>(arg1).cref());
}


// void QState::setErrorState(QAbstractState *state)


static void _init_f_setErrorState_2036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<QAbstractState * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setErrorState_2036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractState *arg1 = args.read<QAbstractState * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QState *)cls)->setErrorState (arg1);
}


// void QState::setInitialState(QAbstractState *state)


static void _init_f_setInitialState_2036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<QAbstractState * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setInitialState_2036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractState *arg1 = args.read<QAbstractState * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QState *)cls)->setInitialState (arg1);
}


// QList<QAbstractTransition*> QState::transitions()


static void _init_f_transitions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAbstractTransition*> > ();
}

static void _call_f_transitions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAbstractTransition*> > ((QList<QAbstractTransition*>)((QState *)cls)->transitions ());
}


// static QString QState::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QState::tr (arg1, arg2, arg3));
}


// static QString QState::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QState::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QState () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("addTransition", "@brief Method void QState::addTransition(QAbstractTransition *transition)\n", false, &_init_f_addTransition_2590, &_call_f_addTransition_2590);
  methods += new qt_gsi::GenericMethod ("addTransition", "@brief Method QSignalTransition *QState::addTransition(const QObject *sender, const char *signal, QAbstractState *target)\n", false, &_init_f_addTransition_5548, &_call_f_addTransition_5548);
  methods += new qt_gsi::GenericMethod ("addTransition", "@brief Method QAbstractTransition *QState::addTransition(QAbstractState *target)\n", false, &_init_f_addTransition_2036, &_call_f_addTransition_2036);
  methods += new qt_gsi::GenericMethod ("assignProperty", "@brief Method void QState::assignProperty(QObject *object, const char *name, const QVariant &value)\n", false, &_init_f_assignProperty_4936, &_call_f_assignProperty_4936);
  methods += new qt_gsi::GenericMethod (":childMode", "@brief Method QState::ChildMode QState::childMode()\n", true, &_init_f_childMode_c0, &_call_f_childMode_c0);
  methods += new qt_gsi::GenericMethod (":errorState", "@brief Method QAbstractState *QState::errorState()\n", true, &_init_f_errorState_c0, &_call_f_errorState_c0);
  methods += new qt_gsi::GenericMethod (":initialState", "@brief Method QAbstractState *QState::initialState()\n", true, &_init_f_initialState_c0, &_call_f_initialState_c0);
  methods += new qt_gsi::GenericMethod ("removeTransition", "@brief Method void QState::removeTransition(QAbstractTransition *transition)\n", false, &_init_f_removeTransition_2590, &_call_f_removeTransition_2590);
  methods += new qt_gsi::GenericMethod ("setChildMode|childMode=", "@brief Method void QState::setChildMode(QState::ChildMode mode)\n", false, &_init_f_setChildMode_2019, &_call_f_setChildMode_2019);
  methods += new qt_gsi::GenericMethod ("setErrorState|errorState=", "@brief Method void QState::setErrorState(QAbstractState *state)\n", false, &_init_f_setErrorState_2036, &_call_f_setErrorState_2036);
  methods += new qt_gsi::GenericMethod ("setInitialState|initialState=", "@brief Method void QState::setInitialState(QAbstractState *state)\n", false, &_init_f_setInitialState_2036, &_call_f_setInitialState_2036);
  methods += new qt_gsi::GenericMethod ("transitions", "@brief Method QList<QAbstractTransition*> QState::transitions()\n", true, &_init_f_transitions_c0, &_call_f_transitions_c0);
  methods += gsi::qt_signal<bool > ("activeChanged(bool)", "activeChanged", gsi::arg("active"), "@brief Signal declaration for QState::activeChanged(bool active)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QState::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QState::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QState::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QAbstractState> &qtdecl_QAbstractState ();

qt_gsi::QtNativeClass<QState> decl_QState (qtdecl_QAbstractState (), "QtCore", "QState_Native",
  methods_QState (),
  "@hide\n@alias QState");

GSI_QTCORE_PUBLIC gsi::Class<QState> &qtdecl_QState () { return decl_QState; }

}


class QState_Adaptor : public QState, public qt_gsi::QtObjectBase
{
public:

  virtual ~QState_Adaptor();

  //  [adaptor ctor] QState::QState(QState *parent)
  QState_Adaptor() : QState()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QState::QState(QState *parent)
  QState_Adaptor(QState *parent) : QState(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QState::QState(QState::ChildMode childMode, QState *parent)
  QState_Adaptor(QState::ChildMode childMode) : QState(childMode)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QState::QState(QState::ChildMode childMode, QState *parent)
  QState_Adaptor(QState::ChildMode childMode, QState *parent) : QState(childMode, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QState::isSignalConnected(const QMetaMethod &signal)
  bool fp_QState_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QState::isSignalConnected(signal);
  }

  //  [expose] int QState::receivers(const char *signal)
  int fp_QState_receivers_c1731 (const char *signal) const {
    return QState::receivers(signal);
  }

  //  [expose] QObject *QState::sender()
  QObject * fp_QState_sender_c0 () const {
    return QState::sender();
  }

  //  [expose] int QState::senderSignalIndex()
  int fp_QState_senderSignalIndex_c0 () const {
    return QState::senderSignalIndex();
  }

  //  [emitter impl] void QState::activeChanged(bool active)
  void emitter_QState_activeChanged_864(bool active)
  {
    emit QState::activeChanged(active);
  }

  //  [emitter impl] void QState::destroyed(QObject *)
  void emitter_QState_destroyed_1302(QObject *arg1)
  {
    emit QState::destroyed(arg1);
  }

  //  [adaptor impl] bool QState::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QState::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QState_Adaptor, bool, QObject *, QEvent *>(&QState_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QState::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QState::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QState::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QState_Adaptor, QChildEvent *>(&QState_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QState::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QState::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QState::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QState_Adaptor, QEvent *>(&QState_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QState::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QState::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QState::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QState_Adaptor, const QMetaMethod &>(&QState_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QState::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QState::event(QEvent *e)
  bool cbs_event_1217_0(QEvent *e)
  {
    return QState::event(e);
  }

  virtual bool event(QEvent *e)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QState_Adaptor, bool, QEvent *>(&QState_Adaptor::cbs_event_1217_0, e);
    } else {
      return QState::event(e);
    }
  }

  //  [adaptor impl] void QState::onEntry(QEvent *event)
  void cbs_onEntry_1217_0(QEvent *event)
  {
    QState::onEntry(event);
  }

  virtual void onEntry(QEvent *event)
  {
    if (cb_onEntry_1217_0.can_issue()) {
      cb_onEntry_1217_0.issue<QState_Adaptor, QEvent *>(&QState_Adaptor::cbs_onEntry_1217_0, event);
    } else {
      QState::onEntry(event);
    }
  }

  //  [adaptor impl] void QState::onExit(QEvent *event)
  void cbs_onExit_1217_0(QEvent *event)
  {
    QState::onExit(event);
  }

  virtual void onExit(QEvent *event)
  {
    if (cb_onExit_1217_0.can_issue()) {
      cb_onExit_1217_0.issue<QState_Adaptor, QEvent *>(&QState_Adaptor::cbs_onExit_1217_0, event);
    } else {
      QState::onExit(event);
    }
  }

  //  [adaptor impl] void QState::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QState::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QState_Adaptor, QTimerEvent *>(&QState_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QState::timerEvent(arg1);
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

QState_Adaptor::~QState_Adaptor() { }

//  Constructor QState::QState(QState *parent) (adaptor class)

static void _init_ctor_QState_Adaptor_1216 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QState * > (argspec_0);
  decl->set_return_new<QState_Adaptor> ();
}

static void _call_ctor_QState_Adaptor_1216 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QState *arg1 = args ? args.read<QState * > (heap) : (QState *)(0);
  ret.write<QState_Adaptor *> (new QState_Adaptor (arg1));
}


//  Constructor QState::QState(QState::ChildMode childMode, QState *parent) (adaptor class)

static void _init_ctor_QState_Adaptor_3127 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("childMode");
  decl->add_arg<const qt_gsi::Converter<QState::ChildMode>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QState * > (argspec_1);
  decl->set_return_new<QState_Adaptor> ();
}

static void _call_ctor_QState_Adaptor_3127 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QState::ChildMode>::target_type & arg1 = args.read<const qt_gsi::Converter<QState::ChildMode>::target_type & > (heap);
  QState *arg2 = args ? args.read<QState * > (heap) : (QState *)(0);
  ret.write<QState_Adaptor *> (new QState_Adaptor (qt_gsi::QtToCppAdaptor<QState::ChildMode>(arg1).cref(), arg2));
}


// emitter void QState::activeChanged(bool active)

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
  ((QState_Adaptor *)cls)->emitter_QState_activeChanged_864 (arg1);
}


// void QState::childEvent(QChildEvent *)

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
  ((QState_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QState_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QState::customEvent(QEvent *)

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
  ((QState_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QState_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QState::destroyed(QObject *)

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
  ((QState_Adaptor *)cls)->emitter_QState_destroyed_1302 (arg1);
}


// void QState::disconnectNotify(const QMetaMethod &signal)

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
  ((QState_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QState_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QState::event(QEvent *e)

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
  ret.write<bool > ((bool)((QState_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QState_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QState::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QState_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QState_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QState::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QState_Adaptor *)cls)->fp_QState_isSignalConnected_c2394 (arg1));
}


// void QState::onEntry(QEvent *event)

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
  ((QState_Adaptor *)cls)->cbs_onEntry_1217_0 (arg1);
}

static void _set_callback_cbs_onEntry_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QState_Adaptor *)cls)->cb_onEntry_1217_0 = cb;
}


// void QState::onExit(QEvent *event)

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
  ((QState_Adaptor *)cls)->cbs_onExit_1217_0 (arg1);
}

static void _set_callback_cbs_onExit_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QState_Adaptor *)cls)->cb_onExit_1217_0 = cb;
}


// exposed int QState::receivers(const char *signal)

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
  ret.write<int > ((int)((QState_Adaptor *)cls)->fp_QState_receivers_c1731 (arg1));
}


// exposed QObject *QState::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QState_Adaptor *)cls)->fp_QState_sender_c0 ());
}


// exposed int QState::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QState_Adaptor *)cls)->fp_QState_senderSignalIndex_c0 ());
}


// void QState::timerEvent(QTimerEvent *)

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
  ((QState_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QState_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QState> &qtdecl_QState ();

static gsi::Methods methods_QState_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QState::QState(QState *parent)\nThis method creates an object of class QState.", &_init_ctor_QState_Adaptor_1216, &_call_ctor_QState_Adaptor_1216);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QState::QState(QState::ChildMode childMode, QState *parent)\nThis method creates an object of class QState.", &_init_ctor_QState_Adaptor_3127, &_call_ctor_QState_Adaptor_3127);
  methods += new qt_gsi::GenericMethod ("emit_activeChanged", "@brief Emitter for signal void QState::activeChanged(bool active)\nCall this method to emit this signal.", false, &_init_emitter_activeChanged_864, &_call_emitter_activeChanged_864);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QState::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QState::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QState::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QState::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QState::event(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QState::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QState::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*onEntry", "@hide", false, &_init_cbs_onEntry_1217_0, &_call_cbs_onEntry_1217_0);
  methods += new qt_gsi::GenericMethod ("*onEntry", "@brief Virtual method void QState::onEntry(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onEntry_1217_0, &_call_cbs_onEntry_1217_0, &_set_callback_cbs_onEntry_1217_0);
  methods += new qt_gsi::GenericMethod ("*onExit", "@hide", false, &_init_cbs_onExit_1217_0, &_call_cbs_onExit_1217_0);
  methods += new qt_gsi::GenericMethod ("*onExit", "@brief Virtual method void QState::onExit(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onExit_1217_0, &_call_cbs_onExit_1217_0, &_set_callback_cbs_onExit_1217_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QState::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QState::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QState::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QState::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QState_Adaptor> decl_QState_Adaptor (qtdecl_QState (), "QtCore", "QState",
  methods_QState_Adaptor (),
  "@qt\n@brief Binding of QState");

}


//  Implementation of the enum wrapper class for QState::ChildMode
namespace qt_gsi
{

static gsi::Enum<QState::ChildMode> decl_QState_ChildMode_Enum ("QtCore", "QState_ChildMode",
    gsi::enum_const ("ExclusiveStates", QState::ExclusiveStates, "@brief Enum constant QState::ExclusiveStates") +
    gsi::enum_const ("ParallelStates", QState::ParallelStates, "@brief Enum constant QState::ParallelStates"),
  "@qt\n@brief This class represents the QState::ChildMode enum");

static gsi::QFlagsClass<QState::ChildMode > decl_QState_ChildMode_Enums ("QtCore", "QState_QFlags_ChildMode",
  "@qt\n@brief This class represents the QFlags<QState::ChildMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QState> inject_QState_ChildMode_Enum_in_parent (decl_QState_ChildMode_Enum.defs ());
static gsi::ClassExt<QState> decl_QState_ChildMode_Enum_as_child (decl_QState_ChildMode_Enum, "ChildMode");
static gsi::ClassExt<QState> decl_QState_ChildMode_Enums_as_child (decl_QState_ChildMode_Enums, "QFlags_ChildMode");

}


//  Implementation of the enum wrapper class for QState::RestorePolicy
namespace qt_gsi
{

static gsi::Enum<QState::RestorePolicy> decl_QState_RestorePolicy_Enum ("QtCore", "QState_RestorePolicy",
    gsi::enum_const ("DontRestoreProperties", QState::DontRestoreProperties, "@brief Enum constant QState::DontRestoreProperties") +
    gsi::enum_const ("RestoreProperties", QState::RestoreProperties, "@brief Enum constant QState::RestoreProperties"),
  "@qt\n@brief This class represents the QState::RestorePolicy enum");

static gsi::QFlagsClass<QState::RestorePolicy > decl_QState_RestorePolicy_Enums ("QtCore", "QState_QFlags_RestorePolicy",
  "@qt\n@brief This class represents the QFlags<QState::RestorePolicy> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QState> inject_QState_RestorePolicy_Enum_in_parent (decl_QState_RestorePolicy_Enum.defs ());
static gsi::ClassExt<QState> decl_QState_RestorePolicy_Enum_as_child (decl_QState_RestorePolicy_Enum, "RestorePolicy");
static gsi::ClassExt<QState> decl_QState_RestorePolicy_Enums_as_child (decl_QState_RestorePolicy_Enums, "QFlags_RestorePolicy");

}

