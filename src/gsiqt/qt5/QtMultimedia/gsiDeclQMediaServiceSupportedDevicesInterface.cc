
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
*  @file gsiDeclQMediaServiceSupportedDevicesInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaServiceSupportedDevicesInterface>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QMediaServiceSupportedDevicesInterface

// QString QMediaServiceSupportedDevicesInterface::deviceDescription(const QByteArray &service, const QByteArray &device)


static void _init_f_deviceDescription_4510 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("device");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_deviceDescription_4510 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  const QByteArray &arg2 = args.read<const QByteArray & > (heap);
  ret.write<QString > ((QString)((QMediaServiceSupportedDevicesInterface *)cls)->deviceDescription (arg1, arg2));
}


// QList<QByteArray> QMediaServiceSupportedDevicesInterface::devices(const QByteArray &service)


static void _init_f_devices_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_devices_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QMediaServiceSupportedDevicesInterface *)cls)->devices (arg1));
}


namespace gsi
{

static gsi::Methods methods_QMediaServiceSupportedDevicesInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("deviceDescription", "@brief Method QString QMediaServiceSupportedDevicesInterface::deviceDescription(const QByteArray &service, const QByteArray &device)\n", false, &_init_f_deviceDescription_4510, &_call_f_deviceDescription_4510);
  methods += new qt_gsi::GenericMethod ("devices", "@brief Method QList<QByteArray> QMediaServiceSupportedDevicesInterface::devices(const QByteArray &service)\n", true, &_init_f_devices_c2309, &_call_f_devices_c2309);
  return methods;
}

gsi::Class<QMediaServiceSupportedDevicesInterface> decl_QMediaServiceSupportedDevicesInterface ("QtMultimedia", "QMediaServiceSupportedDevicesInterface_Native",
  methods_QMediaServiceSupportedDevicesInterface (),
  "@hide\n@alias QMediaServiceSupportedDevicesInterface");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaServiceSupportedDevicesInterface> &qtdecl_QMediaServiceSupportedDevicesInterface () { return decl_QMediaServiceSupportedDevicesInterface; }

}


class QMediaServiceSupportedDevicesInterface_Adaptor : public QMediaServiceSupportedDevicesInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaServiceSupportedDevicesInterface_Adaptor();

  //  [adaptor ctor] QMediaServiceSupportedDevicesInterface::QMediaServiceSupportedDevicesInterface()
  QMediaServiceSupportedDevicesInterface_Adaptor() : QMediaServiceSupportedDevicesInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QString QMediaServiceSupportedDevicesInterface::deviceDescription(const QByteArray &service, const QByteArray &device)
  QString cbs_deviceDescription_4510_0(const QByteArray &service, const QByteArray &device)
  {
    __SUPPRESS_UNUSED_WARNING (service);
    __SUPPRESS_UNUSED_WARNING (device);
    throw qt_gsi::AbstractMethodCalledException("deviceDescription");
  }

  virtual QString deviceDescription(const QByteArray &service, const QByteArray &device)
  {
    if (cb_deviceDescription_4510_0.can_issue()) {
      return cb_deviceDescription_4510_0.issue<QMediaServiceSupportedDevicesInterface_Adaptor, QString, const QByteArray &, const QByteArray &>(&QMediaServiceSupportedDevicesInterface_Adaptor::cbs_deviceDescription_4510_0, service, device);
    } else {
      throw qt_gsi::AbstractMethodCalledException("deviceDescription");
    }
  }

  //  [adaptor impl] QList<QByteArray> QMediaServiceSupportedDevicesInterface::devices(const QByteArray &service)
  QList<QByteArray> cbs_devices_c2309_0(const QByteArray &service) const
  {
    __SUPPRESS_UNUSED_WARNING (service);
    throw qt_gsi::AbstractMethodCalledException("devices");
  }

  virtual QList<QByteArray> devices(const QByteArray &service) const
  {
    if (cb_devices_c2309_0.can_issue()) {
      return cb_devices_c2309_0.issue<QMediaServiceSupportedDevicesInterface_Adaptor, QList<QByteArray>, const QByteArray &>(&QMediaServiceSupportedDevicesInterface_Adaptor::cbs_devices_c2309_0, service);
    } else {
      throw qt_gsi::AbstractMethodCalledException("devices");
    }
  }

  gsi::Callback cb_deviceDescription_4510_0;
  gsi::Callback cb_devices_c2309_0;
};

QMediaServiceSupportedDevicesInterface_Adaptor::~QMediaServiceSupportedDevicesInterface_Adaptor() { }

//  Constructor QMediaServiceSupportedDevicesInterface::QMediaServiceSupportedDevicesInterface() (adaptor class)

static void _init_ctor_QMediaServiceSupportedDevicesInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaServiceSupportedDevicesInterface_Adaptor> ();
}

static void _call_ctor_QMediaServiceSupportedDevicesInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaServiceSupportedDevicesInterface_Adaptor *> (new QMediaServiceSupportedDevicesInterface_Adaptor ());
}


// QString QMediaServiceSupportedDevicesInterface::deviceDescription(const QByteArray &service, const QByteArray &device)

static void _init_cbs_deviceDescription_4510_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("device");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_cbs_deviceDescription_4510_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  const QByteArray &arg2 = args.read<const QByteArray & > (heap);
  ret.write<QString > ((QString)((QMediaServiceSupportedDevicesInterface_Adaptor *)cls)->cbs_deviceDescription_4510_0 (arg1, arg2));
}

static void _set_callback_cbs_deviceDescription_4510_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceSupportedDevicesInterface_Adaptor *)cls)->cb_deviceDescription_4510_0 = cb;
}


// QList<QByteArray> QMediaServiceSupportedDevicesInterface::devices(const QByteArray &service)

static void _init_cbs_devices_c2309_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QList<QByteArray> > ();
}

static void _call_cbs_devices_c2309_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QMediaServiceSupportedDevicesInterface_Adaptor *)cls)->cbs_devices_c2309_0 (arg1));
}

static void _set_callback_cbs_devices_c2309_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceSupportedDevicesInterface_Adaptor *)cls)->cb_devices_c2309_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaServiceSupportedDevicesInterface> &qtdecl_QMediaServiceSupportedDevicesInterface ();

static gsi::Methods methods_QMediaServiceSupportedDevicesInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceSupportedDevicesInterface::QMediaServiceSupportedDevicesInterface()\nThis method creates an object of class QMediaServiceSupportedDevicesInterface.", &_init_ctor_QMediaServiceSupportedDevicesInterface_Adaptor_0, &_call_ctor_QMediaServiceSupportedDevicesInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("deviceDescription", "@hide", false, &_init_cbs_deviceDescription_4510_0, &_call_cbs_deviceDescription_4510_0);
  methods += new qt_gsi::GenericMethod ("deviceDescription", "@brief Virtual method QString QMediaServiceSupportedDevicesInterface::deviceDescription(const QByteArray &service, const QByteArray &device)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_deviceDescription_4510_0, &_call_cbs_deviceDescription_4510_0, &_set_callback_cbs_deviceDescription_4510_0);
  methods += new qt_gsi::GenericMethod ("devices", "@hide", true, &_init_cbs_devices_c2309_0, &_call_cbs_devices_c2309_0);
  methods += new qt_gsi::GenericMethod ("devices", "@brief Virtual method QList<QByteArray> QMediaServiceSupportedDevicesInterface::devices(const QByteArray &service)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_devices_c2309_0, &_call_cbs_devices_c2309_0, &_set_callback_cbs_devices_c2309_0);
  return methods;
}

gsi::Class<QMediaServiceSupportedDevicesInterface_Adaptor> decl_QMediaServiceSupportedDevicesInterface_Adaptor (qtdecl_QMediaServiceSupportedDevicesInterface (), "QtMultimedia", "QMediaServiceSupportedDevicesInterface",
  methods_QMediaServiceSupportedDevicesInterface_Adaptor (),
  "@qt\n@brief Binding of QMediaServiceSupportedDevicesInterface");

}

