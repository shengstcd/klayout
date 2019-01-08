
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
*  @file gsiDeclQXmlStreamEntityResolver.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlStreamEntityResolver>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlStreamEntityResolver

// QString QXmlStreamEntityResolver::resolveEntity(const QString &publicId, const QString &systemId)


static void _init_f_resolveEntity_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("publicId");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("systemId");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_resolveEntity_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QXmlStreamEntityResolver *)cls)->resolveEntity (arg1, arg2));
}


// QString QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString &name)


static void _init_f_resolveUndeclaredEntity_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_resolveUndeclaredEntity_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QXmlStreamEntityResolver *)cls)->resolveUndeclaredEntity (arg1));
}


namespace gsi
{

static gsi::Methods methods_QXmlStreamEntityResolver () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("resolveEntity", "@brief Method QString QXmlStreamEntityResolver::resolveEntity(const QString &publicId, const QString &systemId)\n", false, &_init_f_resolveEntity_3942, &_call_f_resolveEntity_3942);
  methods += new qt_gsi::GenericMethod ("resolveUndeclaredEntity", "@brief Method QString QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString &name)\n", false, &_init_f_resolveUndeclaredEntity_2025, &_call_f_resolveUndeclaredEntity_2025);
  return methods;
}

gsi::Class<QXmlStreamEntityResolver> decl_QXmlStreamEntityResolver ("QtCore", "QXmlStreamEntityResolver_Native",
  methods_QXmlStreamEntityResolver (),
  "@hide\n@alias QXmlStreamEntityResolver");

GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamEntityResolver> &qtdecl_QXmlStreamEntityResolver () { return decl_QXmlStreamEntityResolver; }

}


class QXmlStreamEntityResolver_Adaptor : public QXmlStreamEntityResolver, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlStreamEntityResolver_Adaptor();

  //  [adaptor ctor] QXmlStreamEntityResolver::QXmlStreamEntityResolver()
  QXmlStreamEntityResolver_Adaptor() : QXmlStreamEntityResolver()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QString QXmlStreamEntityResolver::resolveEntity(const QString &publicId, const QString &systemId)
  QString cbs_resolveEntity_3942_0(const QString &publicId, const QString &systemId)
  {
    return QXmlStreamEntityResolver::resolveEntity(publicId, systemId);
  }

  virtual QString resolveEntity(const QString &publicId, const QString &systemId)
  {
    if (cb_resolveEntity_3942_0.can_issue()) {
      return cb_resolveEntity_3942_0.issue<QXmlStreamEntityResolver_Adaptor, QString, const QString &, const QString &>(&QXmlStreamEntityResolver_Adaptor::cbs_resolveEntity_3942_0, publicId, systemId);
    } else {
      return QXmlStreamEntityResolver::resolveEntity(publicId, systemId);
    }
  }

  //  [adaptor impl] QString QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString &name)
  QString cbs_resolveUndeclaredEntity_2025_0(const QString &name)
  {
    return QXmlStreamEntityResolver::resolveUndeclaredEntity(name);
  }

  virtual QString resolveUndeclaredEntity(const QString &name)
  {
    if (cb_resolveUndeclaredEntity_2025_0.can_issue()) {
      return cb_resolveUndeclaredEntity_2025_0.issue<QXmlStreamEntityResolver_Adaptor, QString, const QString &>(&QXmlStreamEntityResolver_Adaptor::cbs_resolveUndeclaredEntity_2025_0, name);
    } else {
      return QXmlStreamEntityResolver::resolveUndeclaredEntity(name);
    }
  }

  gsi::Callback cb_resolveEntity_3942_0;
  gsi::Callback cb_resolveUndeclaredEntity_2025_0;
};

QXmlStreamEntityResolver_Adaptor::~QXmlStreamEntityResolver_Adaptor() { }

//  Constructor QXmlStreamEntityResolver::QXmlStreamEntityResolver() (adaptor class)

static void _init_ctor_QXmlStreamEntityResolver_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlStreamEntityResolver_Adaptor> ();
}

static void _call_ctor_QXmlStreamEntityResolver_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlStreamEntityResolver_Adaptor *> (new QXmlStreamEntityResolver_Adaptor ());
}


// QString QXmlStreamEntityResolver::resolveEntity(const QString &publicId, const QString &systemId)

static void _init_cbs_resolveEntity_3942_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("publicId");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("systemId");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_cbs_resolveEntity_3942_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QXmlStreamEntityResolver_Adaptor *)cls)->cbs_resolveEntity_3942_0 (arg1, arg2));
}

static void _set_callback_cbs_resolveEntity_3942_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlStreamEntityResolver_Adaptor *)cls)->cb_resolveEntity_3942_0 = cb;
}


// QString QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString &name)

static void _init_cbs_resolveUndeclaredEntity_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_resolveUndeclaredEntity_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QXmlStreamEntityResolver_Adaptor *)cls)->cbs_resolveUndeclaredEntity_2025_0 (arg1));
}

static void _set_callback_cbs_resolveUndeclaredEntity_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlStreamEntityResolver_Adaptor *)cls)->cb_resolveUndeclaredEntity_2025_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlStreamEntityResolver> &qtdecl_QXmlStreamEntityResolver ();

static gsi::Methods methods_QXmlStreamEntityResolver_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamEntityResolver::QXmlStreamEntityResolver()\nThis method creates an object of class QXmlStreamEntityResolver.", &_init_ctor_QXmlStreamEntityResolver_Adaptor_0, &_call_ctor_QXmlStreamEntityResolver_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("resolveEntity", "@hide", false, &_init_cbs_resolveEntity_3942_0, &_call_cbs_resolveEntity_3942_0);
  methods += new qt_gsi::GenericMethod ("resolveEntity", "@brief Virtual method QString QXmlStreamEntityResolver::resolveEntity(const QString &publicId, const QString &systemId)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_resolveEntity_3942_0, &_call_cbs_resolveEntity_3942_0, &_set_callback_cbs_resolveEntity_3942_0);
  methods += new qt_gsi::GenericMethod ("resolveUndeclaredEntity", "@hide", false, &_init_cbs_resolveUndeclaredEntity_2025_0, &_call_cbs_resolveUndeclaredEntity_2025_0);
  methods += new qt_gsi::GenericMethod ("resolveUndeclaredEntity", "@brief Virtual method QString QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_resolveUndeclaredEntity_2025_0, &_call_cbs_resolveUndeclaredEntity_2025_0, &_set_callback_cbs_resolveUndeclaredEntity_2025_0);
  return methods;
}

gsi::Class<QXmlStreamEntityResolver_Adaptor> decl_QXmlStreamEntityResolver_Adaptor (qtdecl_QXmlStreamEntityResolver (), "QtCore", "QXmlStreamEntityResolver",
  methods_QXmlStreamEntityResolver_Adaptor (),
  "@qt\n@brief Binding of QXmlStreamEntityResolver");

}

