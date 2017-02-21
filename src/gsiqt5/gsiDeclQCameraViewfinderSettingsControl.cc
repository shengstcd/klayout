
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
*  @file gsiDeclQCameraViewfinderSettingsControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraViewfinderSettingsControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraViewfinderSettingsControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QCameraViewfinderSettingsControl::staticMetaObject);
}


// bool QCameraViewfinderSettingsControl::isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)


static void _init_f_isViewfinderParameterSupported_c5819 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parameter");
  decl->add_arg<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isViewfinderParameterSupported_c5819 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & arg1 = args.read<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (heap);
  ret.write<bool > ((bool)((QCameraViewfinderSettingsControl *)cls)->isViewfinderParameterSupported (qt_gsi::QtToCppAdaptor<QCameraViewfinderSettingsControl::ViewfinderParameter>(arg1).cref()));
}


// void QCameraViewfinderSettingsControl::setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter, const QVariant &value)


static void _init_f_setViewfinderParameter_7830 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parameter");
  decl->add_arg<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setViewfinderParameter_7830 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & arg1 = args.read<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettingsControl *)cls)->setViewfinderParameter (qt_gsi::QtToCppAdaptor<QCameraViewfinderSettingsControl::ViewfinderParameter>(arg1).cref(), arg2);
}


// QVariant QCameraViewfinderSettingsControl::viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)


static void _init_f_viewfinderParameter_c5819 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parameter");
  decl->add_arg<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_viewfinderParameter_c5819 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & arg1 = args.read<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (heap);
  ret.write<QVariant > ((QVariant)((QCameraViewfinderSettingsControl *)cls)->viewfinderParameter (qt_gsi::QtToCppAdaptor<QCameraViewfinderSettingsControl::ViewfinderParameter>(arg1).cref()));
}


// static QString QCameraViewfinderSettingsControl::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QCameraViewfinderSettingsControl::tr (arg1, arg2, arg3));
}


// static QString QCameraViewfinderSettingsControl::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QCameraViewfinderSettingsControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QCameraViewfinderSettingsControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("isViewfinderParameterSupported?", "@brief Method bool QCameraViewfinderSettingsControl::isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)\n", true, &_init_f_isViewfinderParameterSupported_c5819, &_call_f_isViewfinderParameterSupported_c5819);
  methods += new qt_gsi::GenericMethod ("setViewfinderParameter", "@brief Method void QCameraViewfinderSettingsControl::setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter, const QVariant &value)\n", false, &_init_f_setViewfinderParameter_7830, &_call_f_setViewfinderParameter_7830);
  methods += new qt_gsi::GenericMethod ("viewfinderParameter", "@brief Method QVariant QCameraViewfinderSettingsControl::viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)\n", true, &_init_f_viewfinderParameter_c5819, &_call_f_viewfinderParameter_c5819);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QCameraViewfinderSettingsControl::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QCameraViewfinderSettingsControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QCameraViewfinderSettingsControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QCameraViewfinderSettingsControl> decl_QCameraViewfinderSettingsControl (qtdecl_QMediaControl (), "QCameraViewfinderSettingsControl_Native",
  methods_QCameraViewfinderSettingsControl (),
  "@hide\n@alias QCameraViewfinderSettingsControl");

GSIQT_PUBLIC gsi::Class<QCameraViewfinderSettingsControl> &qtdecl_QCameraViewfinderSettingsControl () { return decl_QCameraViewfinderSettingsControl; }

}


class QCameraViewfinderSettingsControl_Adaptor : public QCameraViewfinderSettingsControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QCameraViewfinderSettingsControl_Adaptor();

  //  [expose] bool QCameraViewfinderSettingsControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QCameraViewfinderSettingsControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QCameraViewfinderSettingsControl::isSignalConnected(signal);
  }

  //  [expose] int QCameraViewfinderSettingsControl::receivers(const char *signal)
  int fp_QCameraViewfinderSettingsControl_receivers_c1731 (const char *signal) const {
    return QCameraViewfinderSettingsControl::receivers(signal);
  }

  //  [expose] QObject *QCameraViewfinderSettingsControl::sender()
  QObject * fp_QCameraViewfinderSettingsControl_sender_c0 () const {
    return QCameraViewfinderSettingsControl::sender();
  }

  //  [expose] int QCameraViewfinderSettingsControl::senderSignalIndex()
  int fp_QCameraViewfinderSettingsControl_senderSignalIndex_c0 () const {
    return QCameraViewfinderSettingsControl::senderSignalIndex();
  }

  //  [emitter impl] void QCameraViewfinderSettingsControl::destroyed(QObject *)
  void emitter_QCameraViewfinderSettingsControl_destroyed_1302(QObject *arg1)
  {
    emit QCameraViewfinderSettingsControl::destroyed(arg1);
  }

  //  [adaptor impl] bool QCameraViewfinderSettingsControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QCameraViewfinderSettingsControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QCameraViewfinderSettingsControl_Adaptor, bool, QEvent *>(&QCameraViewfinderSettingsControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QCameraViewfinderSettingsControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QCameraViewfinderSettingsControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QCameraViewfinderSettingsControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QCameraViewfinderSettingsControl_Adaptor, bool, QObject *, QEvent *>(&QCameraViewfinderSettingsControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QCameraViewfinderSettingsControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] bool QCameraViewfinderSettingsControl::isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)
  bool cbs_isViewfinderParameterSupported_c5819_0(const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & parameter) const
  {
    __SUPPRESS_UNUSED_WARNING (parameter);
    throw qt_gsi::AbstractMethodCalledException("isViewfinderParameterSupported");
  }

  virtual bool isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter parameter) const
  {
    if (cb_isViewfinderParameterSupported_c5819_0.can_issue()) {
      return cb_isViewfinderParameterSupported_c5819_0.issue<QCameraViewfinderSettingsControl_Adaptor, bool, const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type &>(&QCameraViewfinderSettingsControl_Adaptor::cbs_isViewfinderParameterSupported_c5819_0, qt_gsi::CppToQtAdaptor<QCameraViewfinderSettingsControl::ViewfinderParameter>(parameter));
    } else {
      throw qt_gsi::AbstractMethodCalledException("isViewfinderParameterSupported");
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl::setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter, const QVariant &value)
  void cbs_setViewfinderParameter_7830_0(const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & parameter, const QVariant &value)
  {
    __SUPPRESS_UNUSED_WARNING (parameter);
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("setViewfinderParameter");
  }

  virtual void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter, const QVariant &value)
  {
    if (cb_setViewfinderParameter_7830_0.can_issue()) {
      cb_setViewfinderParameter_7830_0.issue<QCameraViewfinderSettingsControl_Adaptor, const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type &, const QVariant &>(&QCameraViewfinderSettingsControl_Adaptor::cbs_setViewfinderParameter_7830_0, qt_gsi::CppToQtAdaptor<QCameraViewfinderSettingsControl::ViewfinderParameter>(parameter), value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setViewfinderParameter");
    }
  }

  //  [adaptor impl] QVariant QCameraViewfinderSettingsControl::viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)
  QVariant cbs_viewfinderParameter_c5819_0(const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & parameter) const
  {
    __SUPPRESS_UNUSED_WARNING (parameter);
    throw qt_gsi::AbstractMethodCalledException("viewfinderParameter");
  }

  virtual QVariant viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter) const
  {
    if (cb_viewfinderParameter_c5819_0.can_issue()) {
      return cb_viewfinderParameter_c5819_0.issue<QCameraViewfinderSettingsControl_Adaptor, QVariant, const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type &>(&QCameraViewfinderSettingsControl_Adaptor::cbs_viewfinderParameter_c5819_0, qt_gsi::CppToQtAdaptor<QCameraViewfinderSettingsControl::ViewfinderParameter>(parameter));
    } else {
      throw qt_gsi::AbstractMethodCalledException("viewfinderParameter");
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QCameraViewfinderSettingsControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QCameraViewfinderSettingsControl_Adaptor, QChildEvent *>(&QCameraViewfinderSettingsControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QCameraViewfinderSettingsControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QCameraViewfinderSettingsControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QCameraViewfinderSettingsControl_Adaptor, QEvent *>(&QCameraViewfinderSettingsControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QCameraViewfinderSettingsControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QCameraViewfinderSettingsControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QCameraViewfinderSettingsControl_Adaptor, const QMetaMethod &>(&QCameraViewfinderSettingsControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QCameraViewfinderSettingsControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QCameraViewfinderSettingsControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QCameraViewfinderSettingsControl_Adaptor, QTimerEvent *>(&QCameraViewfinderSettingsControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QCameraViewfinderSettingsControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_isViewfinderParameterSupported_c5819_0;
  gsi::Callback cb_setViewfinderParameter_7830_0;
  gsi::Callback cb_viewfinderParameter_c5819_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QCameraViewfinderSettingsControl_Adaptor::~QCameraViewfinderSettingsControl_Adaptor() { }

// void QCameraViewfinderSettingsControl::childEvent(QChildEvent *)

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
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QCameraViewfinderSettingsControl::customEvent(QEvent *)

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
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QCameraViewfinderSettingsControl::destroyed(QObject *)

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
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->emitter_QCameraViewfinderSettingsControl_destroyed_1302 (arg1);
}


// void QCameraViewfinderSettingsControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QCameraViewfinderSettingsControl::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QCameraViewfinderSettingsControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QCameraViewfinderSettingsControl::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QCameraViewfinderSettingsControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QCameraViewfinderSettingsControl::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QCameraViewfinderSettingsControl_Adaptor *)cls)->fp_QCameraViewfinderSettingsControl_isSignalConnected_c2394 (arg1));
}


// bool QCameraViewfinderSettingsControl::isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)

static void _init_cbs_isViewfinderParameterSupported_c5819_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parameter");
  decl->add_arg<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_isViewfinderParameterSupported_c5819_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & arg1 = args.read<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (heap);
  ret.write<bool > ((bool)((QCameraViewfinderSettingsControl_Adaptor *)cls)->cbs_isViewfinderParameterSupported_c5819_0 (arg1));
}

static void _set_callback_cbs_isViewfinderParameterSupported_c5819_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cb_isViewfinderParameterSupported_c5819_0 = cb;
}


// exposed int QCameraViewfinderSettingsControl::receivers(const char *signal)

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
  ret.write<int > ((int)((QCameraViewfinderSettingsControl_Adaptor *)cls)->fp_QCameraViewfinderSettingsControl_receivers_c1731 (arg1));
}


// exposed QObject *QCameraViewfinderSettingsControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QCameraViewfinderSettingsControl_Adaptor *)cls)->fp_QCameraViewfinderSettingsControl_sender_c0 ());
}


// exposed int QCameraViewfinderSettingsControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QCameraViewfinderSettingsControl_Adaptor *)cls)->fp_QCameraViewfinderSettingsControl_senderSignalIndex_c0 ());
}


// void QCameraViewfinderSettingsControl::setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter, const QVariant &value)

static void _init_cbs_setViewfinderParameter_7830_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parameter");
  decl->add_arg<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_setViewfinderParameter_7830_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & arg1 = args.read<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cbs_setViewfinderParameter_7830_0 (arg1, arg2);
}

static void _set_callback_cbs_setViewfinderParameter_7830_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cb_setViewfinderParameter_7830_0 = cb;
}


// void QCameraViewfinderSettingsControl::timerEvent(QTimerEvent *)

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
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// QVariant QCameraViewfinderSettingsControl::viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)

static void _init_cbs_viewfinderParameter_c5819_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parameter");
  decl->add_arg<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_cbs_viewfinderParameter_c5819_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & arg1 = args.read<const qt_gsi::Converter<QCameraViewfinderSettingsControl::ViewfinderParameter>::target_type & > (heap);
  ret.write<QVariant > ((QVariant)((QCameraViewfinderSettingsControl_Adaptor *)cls)->cbs_viewfinderParameter_c5819_0 (arg1));
}

static void _set_callback_cbs_viewfinderParameter_c5819_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl_Adaptor *)cls)->cb_viewfinderParameter_c5819_0 = cb;
}


namespace gsi
{

gsi::Class<QCameraViewfinderSettingsControl> &qtdecl_QCameraViewfinderSettingsControl ();

static gsi::Methods methods_QCameraViewfinderSettingsControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QCameraViewfinderSettingsControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QCameraViewfinderSettingsControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QCameraViewfinderSettingsControl::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QCameraViewfinderSettingsControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QCameraViewfinderSettingsControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QCameraViewfinderSettingsControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QCameraViewfinderSettingsControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("isViewfinderParameterSupported", "@hide", true, &_init_cbs_isViewfinderParameterSupported_c5819_0, &_call_cbs_isViewfinderParameterSupported_c5819_0);
  methods += new qt_gsi::GenericMethod ("isViewfinderParameterSupported", "@brief Virtual method bool QCameraViewfinderSettingsControl::isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isViewfinderParameterSupported_c5819_0, &_call_cbs_isViewfinderParameterSupported_c5819_0, &_set_callback_cbs_isViewfinderParameterSupported_c5819_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QCameraViewfinderSettingsControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QCameraViewfinderSettingsControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QCameraViewfinderSettingsControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setViewfinderParameter", "@hide", false, &_init_cbs_setViewfinderParameter_7830_0, &_call_cbs_setViewfinderParameter_7830_0);
  methods += new qt_gsi::GenericMethod ("setViewfinderParameter", "@brief Virtual method void QCameraViewfinderSettingsControl::setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter, const QVariant &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setViewfinderParameter_7830_0, &_call_cbs_setViewfinderParameter_7830_0, &_set_callback_cbs_setViewfinderParameter_7830_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QCameraViewfinderSettingsControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("viewfinderParameter", "@hide", true, &_init_cbs_viewfinderParameter_c5819_0, &_call_cbs_viewfinderParameter_c5819_0);
  methods += new qt_gsi::GenericMethod ("viewfinderParameter", "@brief Virtual method QVariant QCameraViewfinderSettingsControl::viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_viewfinderParameter_c5819_0, &_call_cbs_viewfinderParameter_c5819_0, &_set_callback_cbs_viewfinderParameter_c5819_0);
  return methods;
}

gsi::Class<QCameraViewfinderSettingsControl_Adaptor> decl_QCameraViewfinderSettingsControl_Adaptor (qtdecl_QCameraViewfinderSettingsControl (), "QCameraViewfinderSettingsControl",
  methods_QCameraViewfinderSettingsControl_Adaptor (),
  "@qt\n@brief Binding of QCameraViewfinderSettingsControl");

}


//  Implementation of the enum wrapper class for QCameraViewfinderSettingsControl::ViewfinderParameter
namespace qt_gsi
{

static gsi::Enum<QCameraViewfinderSettingsControl::ViewfinderParameter> decl_QCameraViewfinderSettingsControl_ViewfinderParameter_Enum ("QCameraViewfinderSettingsControl_ViewfinderParameter",
    gsi::enum_const ("Resolution", QCameraViewfinderSettingsControl::Resolution, "@brief Enum constant QCameraViewfinderSettingsControl::Resolution") +
    gsi::enum_const ("PixelAspectRatio", QCameraViewfinderSettingsControl::PixelAspectRatio, "@brief Enum constant QCameraViewfinderSettingsControl::PixelAspectRatio") +
    gsi::enum_const ("MinimumFrameRate", QCameraViewfinderSettingsControl::MinimumFrameRate, "@brief Enum constant QCameraViewfinderSettingsControl::MinimumFrameRate") +
    gsi::enum_const ("MaximumFrameRate", QCameraViewfinderSettingsControl::MaximumFrameRate, "@brief Enum constant QCameraViewfinderSettingsControl::MaximumFrameRate") +
    gsi::enum_const ("PixelFormat", QCameraViewfinderSettingsControl::PixelFormat, "@brief Enum constant QCameraViewfinderSettingsControl::PixelFormat") +
    gsi::enum_const ("UserParameter", QCameraViewfinderSettingsControl::UserParameter, "@brief Enum constant QCameraViewfinderSettingsControl::UserParameter"),
  "@qt\n@brief This class represents the QCameraViewfinderSettingsControl::ViewfinderParameter enum");

static gsi::QFlagsClass<QCameraViewfinderSettingsControl::ViewfinderParameter > decl_QCameraViewfinderSettingsControl_ViewfinderParameter_Enums ("QCameraViewfinderSettingsControl_QFlags_ViewfinderParameter",
  "@qt\n@brief This class represents the QFlags<QCameraViewfinderSettingsControl::ViewfinderParameter> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QCameraViewfinderSettingsControl> inject_QCameraViewfinderSettingsControl_ViewfinderParameter_Enum_in_parent (decl_QCameraViewfinderSettingsControl_ViewfinderParameter_Enum.defs ());
static gsi::ClassExt<QCameraViewfinderSettingsControl> decl_QCameraViewfinderSettingsControl_ViewfinderParameter_Enum_as_child (decl_QCameraViewfinderSettingsControl_ViewfinderParameter_Enum, "ViewfinderParameter");
static gsi::ClassExt<QCameraViewfinderSettingsControl> decl_QCameraViewfinderSettingsControl_ViewfinderParameter_Enums_as_child (decl_QCameraViewfinderSettingsControl_ViewfinderParameter_Enums, "QFlags_ViewfinderParameter");

}

