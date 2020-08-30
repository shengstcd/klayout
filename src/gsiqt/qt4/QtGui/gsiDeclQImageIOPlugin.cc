
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

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
*  @file gsiDeclQImageIOPlugin.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QImageIOPlugin>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QImageIOHandler>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QImageIOPlugin

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QImageIOPlugin::staticMetaObject);
}


// QFlags<QImageIOPlugin::Capability> QImageIOPlugin::capabilities(QIODevice *device, const QByteArray &format)


static void _init_f_capabilities_c3648 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<QFlags<QImageIOPlugin::Capability> > ();
}

static void _call_f_capabilities_c3648 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  const QByteArray &arg2 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QFlags<QImageIOPlugin::Capability> > ((QFlags<QImageIOPlugin::Capability>)((QImageIOPlugin *)cls)->capabilities (arg1, arg2));
}


// QImageIOHandler *QImageIOPlugin::create(QIODevice *device, const QByteArray &format)


static void _init_f_create_c3648 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<QImageIOHandler * > ();
}

static void _call_f_create_c3648 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  const QByteArray &arg2 = args ? gsi::arg_reader<const QByteArray & >() (args, heap) : gsi::arg_maker<const QByteArray & >() (QByteArray(), heap);
  ret.write<QImageIOHandler * > ((QImageIOHandler *)((QImageIOPlugin *)cls)->create (arg1, arg2));
}


// QStringList QImageIOPlugin::keys()


static void _init_f_keys_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_keys_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QImageIOPlugin *)cls)->keys ());
}


// static QString QImageIOPlugin::tr(const char *s, const char *c)


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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QImageIOPlugin::tr (arg1, arg2));
}


// static QString QImageIOPlugin::tr(const char *s, const char *c, int n)


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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QImageIOPlugin::tr (arg1, arg2, arg3));
}


// static QString QImageIOPlugin::trUtf8(const char *s, const char *c)


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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QImageIOPlugin::trUtf8 (arg1, arg2));
}


// static QString QImageIOPlugin::trUtf8(const char *s, const char *c, int n)


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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QImageIOPlugin::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QImageIOPlugin () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("capabilities", "@brief Method QFlags<QImageIOPlugin::Capability> QImageIOPlugin::capabilities(QIODevice *device, const QByteArray &format)\n", true, &_init_f_capabilities_c3648, &_call_f_capabilities_c3648);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Method QImageIOHandler *QImageIOPlugin::create(QIODevice *device, const QByteArray &format)\n", true, &_init_f_create_c3648, &_call_f_create_c3648);
  methods += new qt_gsi::GenericMethod ("keys", "@brief Method QStringList QImageIOPlugin::keys()\n", true, &_init_f_keys_c0, &_call_f_keys_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QImageIOPlugin::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QImageIOPlugin::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QImageIOPlugin::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QImageIOPlugin::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QImageIOPlugin::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QImageIOPlugin> decl_QImageIOPlugin (qtdecl_QObject (), "QtGui", "QImageIOPlugin_Native",
  methods_QImageIOPlugin (),
  "@hide\n@alias QImageIOPlugin");

GSI_QTGUI_PUBLIC gsi::Class<QImageIOPlugin> &qtdecl_QImageIOPlugin () { return decl_QImageIOPlugin; }

}


class QImageIOPlugin_Adaptor : public QImageIOPlugin, public qt_gsi::QtObjectBase
{
public:

  virtual ~QImageIOPlugin_Adaptor();

  //  [adaptor ctor] QImageIOPlugin::QImageIOPlugin(QObject *parent)
  QImageIOPlugin_Adaptor() : QImageIOPlugin()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QImageIOPlugin::QImageIOPlugin(QObject *parent)
  QImageIOPlugin_Adaptor(QObject *parent) : QImageIOPlugin(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QImageIOPlugin::receivers(const char *signal)
  int fp_QImageIOPlugin_receivers_c1731 (const char *signal) const {
    return QImageIOPlugin::receivers(signal);
  }

  //  [expose] QObject *QImageIOPlugin::sender()
  QObject * fp_QImageIOPlugin_sender_c0 () const {
    return QImageIOPlugin::sender();
  }

  //  [adaptor impl] QFlags<QImageIOPlugin::Capability> QImageIOPlugin::capabilities(QIODevice *device, const QByteArray &format)
  QFlags<QImageIOPlugin::Capability> cbs_capabilities_c3648_0(QIODevice *device, const QByteArray &format) const
  {
    __SUPPRESS_UNUSED_WARNING (device);
    __SUPPRESS_UNUSED_WARNING (format);
    throw qt_gsi::AbstractMethodCalledException("capabilities");
  }

  virtual QFlags<QImageIOPlugin::Capability> capabilities(QIODevice *device, const QByteArray &format) const
  {
    if (cb_capabilities_c3648_0.can_issue()) {
      return cb_capabilities_c3648_0.issue<QImageIOPlugin_Adaptor, QFlags<QImageIOPlugin::Capability>, QIODevice *, const QByteArray &>(&QImageIOPlugin_Adaptor::cbs_capabilities_c3648_0, device, format);
    } else {
      throw qt_gsi::AbstractMethodCalledException("capabilities");
    }
  }

  //  [adaptor impl] QImageIOHandler *QImageIOPlugin::create(QIODevice *device, const QByteArray &format)
  QImageIOHandler * cbs_create_c3648_1(QIODevice *device, const QByteArray &format) const
  {
    __SUPPRESS_UNUSED_WARNING (device);
    __SUPPRESS_UNUSED_WARNING (format);
    throw qt_gsi::AbstractMethodCalledException("create");
  }

  virtual QImageIOHandler * create(QIODevice *device, const QByteArray &format) const
  {
    if (cb_create_c3648_1.can_issue()) {
      return cb_create_c3648_1.issue<QImageIOPlugin_Adaptor, QImageIOHandler *, QIODevice *, const QByteArray &>(&QImageIOPlugin_Adaptor::cbs_create_c3648_1, device, format);
    } else {
      throw qt_gsi::AbstractMethodCalledException("create");
    }
  }

  //  [adaptor impl] bool QImageIOPlugin::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QImageIOPlugin::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QImageIOPlugin_Adaptor, bool, QEvent *>(&QImageIOPlugin_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QImageIOPlugin::event(arg1);
    }
  }

  //  [adaptor impl] bool QImageIOPlugin::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QImageIOPlugin::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QImageIOPlugin_Adaptor, bool, QObject *, QEvent *>(&QImageIOPlugin_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QImageIOPlugin::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] QStringList QImageIOPlugin::keys()
  QStringList cbs_keys_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("keys");
  }

  virtual QStringList keys() const
  {
    if (cb_keys_c0_0.can_issue()) {
      return cb_keys_c0_0.issue<QImageIOPlugin_Adaptor, QStringList>(&QImageIOPlugin_Adaptor::cbs_keys_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("keys");
    }
  }

  //  [adaptor impl] void QImageIOPlugin::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QImageIOPlugin::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QImageIOPlugin_Adaptor, QChildEvent *>(&QImageIOPlugin_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QImageIOPlugin::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QImageIOPlugin::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QImageIOPlugin::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QImageIOPlugin_Adaptor, QEvent *>(&QImageIOPlugin_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QImageIOPlugin::customEvent(arg1);
    }
  }

  //  [emitter impl] void QImageIOPlugin::destroyed(QObject *)
  void emitter_QImageIOPlugin_destroyed_1302(QObject *arg1)
  {
    emit QImageIOPlugin::destroyed(arg1);
  }

  //  [adaptor impl] void QImageIOPlugin::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QImageIOPlugin::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QImageIOPlugin_Adaptor, const char *>(&QImageIOPlugin_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QImageIOPlugin::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QImageIOPlugin::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QImageIOPlugin::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QImageIOPlugin_Adaptor, QTimerEvent *>(&QImageIOPlugin_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QImageIOPlugin::timerEvent(arg1);
    }
  }

  gsi::Callback cb_capabilities_c3648_0;
  gsi::Callback cb_create_c3648_1;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_keys_c0_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QImageIOPlugin_Adaptor::~QImageIOPlugin_Adaptor() { }

//  Constructor QImageIOPlugin::QImageIOPlugin(QObject *parent) (adaptor class)

static void _init_ctor_QImageIOPlugin_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QImageIOPlugin_Adaptor> ();
}

static void _call_ctor_QImageIOPlugin_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QImageIOPlugin_Adaptor *> (new QImageIOPlugin_Adaptor (arg1));
}


// QFlags<QImageIOPlugin::Capability> QImageIOPlugin::capabilities(QIODevice *device, const QByteArray &format)

static void _init_cbs_capabilities_c3648_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<QFlags<QImageIOPlugin::Capability> > ();
}

static void _call_cbs_capabilities_c3648_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = args.read<QIODevice * > (heap);
  const QByteArray &arg2 = args.read<const QByteArray & > (heap);
  ret.write<QFlags<QImageIOPlugin::Capability> > ((QFlags<QImageIOPlugin::Capability>)((QImageIOPlugin_Adaptor *)cls)->cbs_capabilities_c3648_0 (arg1, arg2));
}

static void _set_callback_cbs_capabilities_c3648_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageIOPlugin_Adaptor *)cls)->cb_capabilities_c3648_0 = cb;
}


// void QImageIOPlugin::childEvent(QChildEvent *)

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
  ((QImageIOPlugin_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageIOPlugin_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QImageIOHandler *QImageIOPlugin::create(QIODevice *device, const QByteArray &format)

static void _init_cbs_create_c3648_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<QImageIOHandler * > ();
}

static void _call_cbs_create_c3648_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = args.read<QIODevice * > (heap);
  const QByteArray &arg2 = args.read<const QByteArray & > (heap);
  ret.write<QImageIOHandler * > ((QImageIOHandler *)((QImageIOPlugin_Adaptor *)cls)->cbs_create_c3648_1 (arg1, arg2));
}

static void _set_callback_cbs_create_c3648_1 (void *cls, const gsi::Callback &cb)
{
  ((QImageIOPlugin_Adaptor *)cls)->cb_create_c3648_1 = cb;
}


// void QImageIOPlugin::customEvent(QEvent *)

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
  ((QImageIOPlugin_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageIOPlugin_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QImageIOPlugin::destroyed(QObject *)

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
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QImageIOPlugin_Adaptor *)cls)->emitter_QImageIOPlugin_destroyed_1302 (arg1);
}


// void QImageIOPlugin::disconnectNotify(const char *signal)

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
  ((QImageIOPlugin_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageIOPlugin_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QImageIOPlugin::event(QEvent *)

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
  ret.write<bool > ((bool)((QImageIOPlugin_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageIOPlugin_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QImageIOPlugin::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QImageIOPlugin_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageIOPlugin_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// QStringList QImageIOPlugin::keys()

static void _init_cbs_keys_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_keys_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QImageIOPlugin_Adaptor *)cls)->cbs_keys_c0_0 ());
}

static void _set_callback_cbs_keys_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageIOPlugin_Adaptor *)cls)->cb_keys_c0_0 = cb;
}


// exposed int QImageIOPlugin::receivers(const char *signal)

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
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QImageIOPlugin_Adaptor *)cls)->fp_QImageIOPlugin_receivers_c1731 (arg1));
}


// exposed QObject *QImageIOPlugin::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QImageIOPlugin_Adaptor *)cls)->fp_QImageIOPlugin_sender_c0 ());
}


// void QImageIOPlugin::timerEvent(QTimerEvent *)

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
  ((QImageIOPlugin_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QImageIOPlugin_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QImageIOPlugin> &qtdecl_QImageIOPlugin ();

static gsi::Methods methods_QImageIOPlugin_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageIOPlugin::QImageIOPlugin(QObject *parent)\nThis method creates an object of class QImageIOPlugin.", &_init_ctor_QImageIOPlugin_Adaptor_1302, &_call_ctor_QImageIOPlugin_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("capabilities", "@brief Virtual method QFlags<QImageIOPlugin::Capability> QImageIOPlugin::capabilities(QIODevice *device, const QByteArray &format)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_capabilities_c3648_0, &_call_cbs_capabilities_c3648_0);
  methods += new qt_gsi::GenericMethod ("capabilities", "@hide", true, &_init_cbs_capabilities_c3648_0, &_call_cbs_capabilities_c3648_0, &_set_callback_cbs_capabilities_c3648_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QImageIOPlugin::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Virtual method QImageIOHandler *QImageIOPlugin::create(QIODevice *device, const QByteArray &format)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_create_c3648_1, &_call_cbs_create_c3648_1);
  methods += new qt_gsi::GenericMethod ("qt_create", "@hide", true, &_init_cbs_create_c3648_1, &_call_cbs_create_c3648_1, &_set_callback_cbs_create_c3648_1);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QImageIOPlugin::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QImageIOPlugin::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QImageIOPlugin::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QImageIOPlugin::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QImageIOPlugin::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("keys", "@brief Virtual method QStringList QImageIOPlugin::keys()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_keys_c0_0, &_call_cbs_keys_c0_0);
  methods += new qt_gsi::GenericMethod ("keys", "@hide", true, &_init_cbs_keys_c0_0, &_call_cbs_keys_c0_0, &_set_callback_cbs_keys_c0_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QImageIOPlugin::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QImageIOPlugin::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QImageIOPlugin::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QImageIOPlugin_Adaptor> decl_QImageIOPlugin_Adaptor (qtdecl_QImageIOPlugin (), "QtGui", "QImageIOPlugin",
  methods_QImageIOPlugin_Adaptor (),
  "@qt\n@brief Binding of QImageIOPlugin");

}


//  Implementation of the enum wrapper class for QImageIOPlugin::Capability
namespace qt_gsi
{

static gsi::Enum<QImageIOPlugin::Capability> decl_QImageIOPlugin_Capability_Enum ("QtGui", "QImageIOPlugin_Capability",
    gsi::enum_const ("CanRead", QImageIOPlugin::CanRead, "@brief Enum constant QImageIOPlugin::CanRead") +
    gsi::enum_const ("CanWrite", QImageIOPlugin::CanWrite, "@brief Enum constant QImageIOPlugin::CanWrite") +
    gsi::enum_const ("CanReadIncremental", QImageIOPlugin::CanReadIncremental, "@brief Enum constant QImageIOPlugin::CanReadIncremental"),
  "@qt\n@brief This class represents the QImageIOPlugin::Capability enum");

static gsi::QFlagsClass<QImageIOPlugin::Capability > decl_QImageIOPlugin_Capability_Enums ("QtGui", "QImageIOPlugin_QFlags_Capability",
  "@qt\n@brief This class represents the QFlags<QImageIOPlugin::Capability> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QImageIOPlugin> inject_QImageIOPlugin_Capability_Enum_in_parent (decl_QImageIOPlugin_Capability_Enum.defs ());
static gsi::ClassExt<QImageIOPlugin> decl_QImageIOPlugin_Capability_Enum_as_child (decl_QImageIOPlugin_Capability_Enum, "Capability");
static gsi::ClassExt<QImageIOPlugin> decl_QImageIOPlugin_Capability_Enums_as_child (decl_QImageIOPlugin_Capability_Enums, "QFlags_Capability");

}

