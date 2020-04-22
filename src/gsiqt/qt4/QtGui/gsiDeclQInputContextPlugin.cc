
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
*  @file gsiDeclQInputContextPlugin.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QInputContextPlugin>
#include <QChildEvent>
#include <QEvent>
#include <QInputContext>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QInputContextPlugin

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QInputContextPlugin::staticMetaObject);
}


// QInputContext *QInputContextPlugin::create(const QString &key)


static void _init_f_create_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QInputContext * > ();
}

static void _call_f_create_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QInputContext * > ((QInputContext *)((QInputContextPlugin *)cls)->create (arg1));
}


// QString QInputContextPlugin::description(const QString &key)


static void _init_f_description_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_description_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QInputContextPlugin *)cls)->description (arg1));
}


// QString QInputContextPlugin::displayName(const QString &key)


static void _init_f_displayName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_displayName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QInputContextPlugin *)cls)->displayName (arg1));
}


// QStringList QInputContextPlugin::keys()


static void _init_f_keys_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_keys_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QInputContextPlugin *)cls)->keys ());
}


// QStringList QInputContextPlugin::languages(const QString &key)


static void _init_f_languages_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_languages_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QStringList > ((QStringList)((QInputContextPlugin *)cls)->languages (arg1));
}


// static QString QInputContextPlugin::tr(const char *s, const char *c)


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
  ret.write<QString > ((QString)QInputContextPlugin::tr (arg1, arg2));
}


// static QString QInputContextPlugin::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QInputContextPlugin::tr (arg1, arg2, arg3));
}


// static QString QInputContextPlugin::trUtf8(const char *s, const char *c)


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
  ret.write<QString > ((QString)QInputContextPlugin::trUtf8 (arg1, arg2));
}


// static QString QInputContextPlugin::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QInputContextPlugin::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QInputContextPlugin () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Method QInputContext *QInputContextPlugin::create(const QString &key)\n", false, &_init_f_create_2025, &_call_f_create_2025);
  methods += new qt_gsi::GenericMethod ("description", "@brief Method QString QInputContextPlugin::description(const QString &key)\n", false, &_init_f_description_2025, &_call_f_description_2025);
  methods += new qt_gsi::GenericMethod ("displayName", "@brief Method QString QInputContextPlugin::displayName(const QString &key)\n", false, &_init_f_displayName_2025, &_call_f_displayName_2025);
  methods += new qt_gsi::GenericMethod ("keys", "@brief Method QStringList QInputContextPlugin::keys()\n", true, &_init_f_keys_c0, &_call_f_keys_c0);
  methods += new qt_gsi::GenericMethod ("languages", "@brief Method QStringList QInputContextPlugin::languages(const QString &key)\n", false, &_init_f_languages_2025, &_call_f_languages_2025);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QInputContextPlugin::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QInputContextPlugin::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QInputContextPlugin::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QInputContextPlugin::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QInputContextPlugin::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QInputContextPlugin> decl_QInputContextPlugin (qtdecl_QObject (), "QtGui", "QInputContextPlugin_Native",
  methods_QInputContextPlugin (),
  "@hide\n@alias QInputContextPlugin");

GSI_QTGUI_PUBLIC gsi::Class<QInputContextPlugin> &qtdecl_QInputContextPlugin () { return decl_QInputContextPlugin; }

}


class QInputContextPlugin_Adaptor : public QInputContextPlugin, public qt_gsi::QtObjectBase
{
public:

  virtual ~QInputContextPlugin_Adaptor();

  //  [adaptor ctor] QInputContextPlugin::QInputContextPlugin(QObject *parent)
  QInputContextPlugin_Adaptor() : QInputContextPlugin()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QInputContextPlugin::QInputContextPlugin(QObject *parent)
  QInputContextPlugin_Adaptor(QObject *parent) : QInputContextPlugin(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QInputContextPlugin::receivers(const char *signal)
  int fp_QInputContextPlugin_receivers_c1731 (const char *signal) const {
    return QInputContextPlugin::receivers(signal);
  }

  //  [expose] QObject *QInputContextPlugin::sender()
  QObject * fp_QInputContextPlugin_sender_c0 () const {
    return QInputContextPlugin::sender();
  }

  //  [adaptor impl] QInputContext *QInputContextPlugin::create(const QString &key)
  QInputContext * cbs_create_2025_0(const QString &key)
  {
    __SUPPRESS_UNUSED_WARNING (key);
    throw qt_gsi::AbstractMethodCalledException("create");
  }

  virtual QInputContext * create(const QString &key)
  {
    if (cb_create_2025_0.can_issue()) {
      return cb_create_2025_0.issue<QInputContextPlugin_Adaptor, QInputContext *, const QString &>(&QInputContextPlugin_Adaptor::cbs_create_2025_0, key);
    } else {
      throw qt_gsi::AbstractMethodCalledException("create");
    }
  }

  //  [adaptor impl] QString QInputContextPlugin::description(const QString &key)
  QString cbs_description_2025_0(const QString &key)
  {
    __SUPPRESS_UNUSED_WARNING (key);
    throw qt_gsi::AbstractMethodCalledException("description");
  }

  virtual QString description(const QString &key)
  {
    if (cb_description_2025_0.can_issue()) {
      return cb_description_2025_0.issue<QInputContextPlugin_Adaptor, QString, const QString &>(&QInputContextPlugin_Adaptor::cbs_description_2025_0, key);
    } else {
      throw qt_gsi::AbstractMethodCalledException("description");
    }
  }

  //  [adaptor impl] QString QInputContextPlugin::displayName(const QString &key)
  QString cbs_displayName_2025_0(const QString &key)
  {
    __SUPPRESS_UNUSED_WARNING (key);
    throw qt_gsi::AbstractMethodCalledException("displayName");
  }

  virtual QString displayName(const QString &key)
  {
    if (cb_displayName_2025_0.can_issue()) {
      return cb_displayName_2025_0.issue<QInputContextPlugin_Adaptor, QString, const QString &>(&QInputContextPlugin_Adaptor::cbs_displayName_2025_0, key);
    } else {
      throw qt_gsi::AbstractMethodCalledException("displayName");
    }
  }

  //  [adaptor impl] bool QInputContextPlugin::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QInputContextPlugin::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QInputContextPlugin_Adaptor, bool, QEvent *>(&QInputContextPlugin_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QInputContextPlugin::event(arg1);
    }
  }

  //  [adaptor impl] bool QInputContextPlugin::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QInputContextPlugin::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QInputContextPlugin_Adaptor, bool, QObject *, QEvent *>(&QInputContextPlugin_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QInputContextPlugin::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] QStringList QInputContextPlugin::keys()
  QStringList cbs_keys_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("keys");
  }

  virtual QStringList keys() const
  {
    if (cb_keys_c0_0.can_issue()) {
      return cb_keys_c0_0.issue<QInputContextPlugin_Adaptor, QStringList>(&QInputContextPlugin_Adaptor::cbs_keys_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("keys");
    }
  }

  //  [adaptor impl] QStringList QInputContextPlugin::languages(const QString &key)
  QStringList cbs_languages_2025_0(const QString &key)
  {
    __SUPPRESS_UNUSED_WARNING (key);
    throw qt_gsi::AbstractMethodCalledException("languages");
  }

  virtual QStringList languages(const QString &key)
  {
    if (cb_languages_2025_0.can_issue()) {
      return cb_languages_2025_0.issue<QInputContextPlugin_Adaptor, QStringList, const QString &>(&QInputContextPlugin_Adaptor::cbs_languages_2025_0, key);
    } else {
      throw qt_gsi::AbstractMethodCalledException("languages");
    }
  }

  //  [adaptor impl] void QInputContextPlugin::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QInputContextPlugin::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QInputContextPlugin_Adaptor, QChildEvent *>(&QInputContextPlugin_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QInputContextPlugin::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QInputContextPlugin::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QInputContextPlugin::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QInputContextPlugin_Adaptor, QEvent *>(&QInputContextPlugin_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QInputContextPlugin::customEvent(arg1);
    }
  }

  //  [emitter impl] void QInputContextPlugin::destroyed(QObject *)
  void emitter_QInputContextPlugin_destroyed_1302(QObject *arg1)
  {
    emit QInputContextPlugin::destroyed(arg1);
  }

  //  [adaptor impl] void QInputContextPlugin::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QInputContextPlugin::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QInputContextPlugin_Adaptor, const char *>(&QInputContextPlugin_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QInputContextPlugin::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QInputContextPlugin::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QInputContextPlugin::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QInputContextPlugin_Adaptor, QTimerEvent *>(&QInputContextPlugin_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QInputContextPlugin::timerEvent(arg1);
    }
  }

  gsi::Callback cb_create_2025_0;
  gsi::Callback cb_description_2025_0;
  gsi::Callback cb_displayName_2025_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_keys_c0_0;
  gsi::Callback cb_languages_2025_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QInputContextPlugin_Adaptor::~QInputContextPlugin_Adaptor() { }

//  Constructor QInputContextPlugin::QInputContextPlugin(QObject *parent) (adaptor class)

static void _init_ctor_QInputContextPlugin_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QInputContextPlugin_Adaptor> ();
}

static void _call_ctor_QInputContextPlugin_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QInputContextPlugin_Adaptor *> (new QInputContextPlugin_Adaptor (arg1));
}


// void QInputContextPlugin::childEvent(QChildEvent *)

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
  ((QInputContextPlugin_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QInputContext *QInputContextPlugin::create(const QString &key)

static void _init_cbs_create_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QInputContext * > ();
}

static void _call_cbs_create_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QInputContext * > ((QInputContext *)((QInputContextPlugin_Adaptor *)cls)->cbs_create_2025_0 (arg1));
}

static void _set_callback_cbs_create_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_create_2025_0 = cb;
}


// void QInputContextPlugin::customEvent(QEvent *)

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
  ((QInputContextPlugin_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// QString QInputContextPlugin::description(const QString &key)

static void _init_cbs_description_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_description_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QInputContextPlugin_Adaptor *)cls)->cbs_description_2025_0 (arg1));
}

static void _set_callback_cbs_description_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_description_2025_0 = cb;
}


// emitter void QInputContextPlugin::destroyed(QObject *)

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
  ((QInputContextPlugin_Adaptor *)cls)->emitter_QInputContextPlugin_destroyed_1302 (arg1);
}


// void QInputContextPlugin::disconnectNotify(const char *signal)

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
  ((QInputContextPlugin_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// QString QInputContextPlugin::displayName(const QString &key)

static void _init_cbs_displayName_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_displayName_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QInputContextPlugin_Adaptor *)cls)->cbs_displayName_2025_0 (arg1));
}

static void _set_callback_cbs_displayName_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_displayName_2025_0 = cb;
}


// bool QInputContextPlugin::event(QEvent *)

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
  ret.write<bool > ((bool)((QInputContextPlugin_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QInputContextPlugin::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QInputContextPlugin_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// QStringList QInputContextPlugin::keys()

static void _init_cbs_keys_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_keys_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QInputContextPlugin_Adaptor *)cls)->cbs_keys_c0_0 ());
}

static void _set_callback_cbs_keys_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_keys_c0_0 = cb;
}


// QStringList QInputContextPlugin::languages(const QString &key)

static void _init_cbs_languages_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_cbs_languages_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QStringList > ((QStringList)((QInputContextPlugin_Adaptor *)cls)->cbs_languages_2025_0 (arg1));
}

static void _set_callback_cbs_languages_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_languages_2025_0 = cb;
}


// exposed int QInputContextPlugin::receivers(const char *signal)

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
  ret.write<int > ((int)((QInputContextPlugin_Adaptor *)cls)->fp_QInputContextPlugin_receivers_c1731 (arg1));
}


// exposed QObject *QInputContextPlugin::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QInputContextPlugin_Adaptor *)cls)->fp_QInputContextPlugin_sender_c0 ());
}


// void QInputContextPlugin::timerEvent(QTimerEvent *)

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
  ((QInputContextPlugin_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputContextPlugin_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QInputContextPlugin> &qtdecl_QInputContextPlugin ();

static gsi::Methods methods_QInputContextPlugin_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QInputContextPlugin::QInputContextPlugin(QObject *parent)\nThis method creates an object of class QInputContextPlugin.", &_init_ctor_QInputContextPlugin_Adaptor_1302, &_call_ctor_QInputContextPlugin_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QInputContextPlugin::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Virtual method QInputContext *QInputContextPlugin::create(const QString &key)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_create_2025_0, &_call_cbs_create_2025_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@hide", false, &_init_cbs_create_2025_0, &_call_cbs_create_2025_0, &_set_callback_cbs_create_2025_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QInputContextPlugin::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("description", "@brief Virtual method QString QInputContextPlugin::description(const QString &key)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_description_2025_0, &_call_cbs_description_2025_0);
  methods += new qt_gsi::GenericMethod ("description", "@hide", false, &_init_cbs_description_2025_0, &_call_cbs_description_2025_0, &_set_callback_cbs_description_2025_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QInputContextPlugin::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QInputContextPlugin::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("displayName", "@brief Virtual method QString QInputContextPlugin::displayName(const QString &key)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_displayName_2025_0, &_call_cbs_displayName_2025_0);
  methods += new qt_gsi::GenericMethod ("displayName", "@hide", false, &_init_cbs_displayName_2025_0, &_call_cbs_displayName_2025_0, &_set_callback_cbs_displayName_2025_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QInputContextPlugin::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QInputContextPlugin::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("keys", "@brief Virtual method QStringList QInputContextPlugin::keys()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_keys_c0_0, &_call_cbs_keys_c0_0);
  methods += new qt_gsi::GenericMethod ("keys", "@hide", true, &_init_cbs_keys_c0_0, &_call_cbs_keys_c0_0, &_set_callback_cbs_keys_c0_0);
  methods += new qt_gsi::GenericMethod ("languages", "@brief Virtual method QStringList QInputContextPlugin::languages(const QString &key)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_languages_2025_0, &_call_cbs_languages_2025_0);
  methods += new qt_gsi::GenericMethod ("languages", "@hide", false, &_init_cbs_languages_2025_0, &_call_cbs_languages_2025_0, &_set_callback_cbs_languages_2025_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QInputContextPlugin::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QInputContextPlugin::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QInputContextPlugin::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QInputContextPlugin_Adaptor> decl_QInputContextPlugin_Adaptor (qtdecl_QInputContextPlugin (), "QtGui", "QInputContextPlugin",
  methods_QInputContextPlugin_Adaptor (),
  "@qt\n@brief Binding of QInputContextPlugin");

}

