
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
*  @file gsiDeclQAbstractXmlReceiver.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractXmlReceiver>
#include <QXmlName>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include "gsiDeclQtXmlPatternsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractXmlReceiver

// void QAbstractXmlReceiver::atomicValue(const QVariant &value)


static void _init_f_atomicValue_2119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_atomicValue_2119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->atomicValue (arg1);
}


// void QAbstractXmlReceiver::attribute(const QXmlName &name, const QStringRef &value)


static void _init_f_attribute_4286 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QStringRef & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_attribute_4286 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = gsi::arg_reader<const QXmlName & >() (args, heap);
  const QStringRef &arg2 = gsi::arg_reader<const QStringRef & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->attribute (arg1, arg2);
}


// void QAbstractXmlReceiver::characters(const QStringRef &value)


static void _init_f_characters_2310 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_characters_2310 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = gsi::arg_reader<const QStringRef & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->characters (arg1);
}


// void QAbstractXmlReceiver::comment(const QString &value)


static void _init_f_comment_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_comment_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->comment (arg1);
}


// void QAbstractXmlReceiver::endDocument()


static void _init_f_endDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->endDocument ();
}


// void QAbstractXmlReceiver::endElement()


static void _init_f_endElement_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endElement_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->endElement ();
}


// void QAbstractXmlReceiver::endOfSequence()


static void _init_f_endOfSequence_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endOfSequence_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->endOfSequence ();
}


// void QAbstractXmlReceiver::namespaceBinding(const QXmlName &name)


static void _init_f_namespaceBinding_2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_namespaceBinding_2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = gsi::arg_reader<const QXmlName & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->namespaceBinding (arg1);
}


// void QAbstractXmlReceiver::processingInstruction(const QXmlName &target, const QString &value)


static void _init_f_processingInstruction_4001 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_processingInstruction_4001 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = gsi::arg_reader<const QXmlName & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->processingInstruction (arg1, arg2);
}


// void QAbstractXmlReceiver::startDocument()


static void _init_f_startDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_startDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->startDocument ();
}


// void QAbstractXmlReceiver::startElement(const QXmlName &name)


static void _init_f_startElement_2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_startElement_2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = gsi::arg_reader<const QXmlName & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->startElement (arg1);
}


// void QAbstractXmlReceiver::startOfSequence()


static void _init_f_startOfSequence_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_startOfSequence_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->startOfSequence ();
}


// void QAbstractXmlReceiver::whitespaceOnly(const QStringRef &value)


static void _init_f_whitespaceOnly_2310 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_whitespaceOnly_2310 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = gsi::arg_reader<const QStringRef & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver *)cls)->whitespaceOnly (arg1);
}


namespace gsi
{

static gsi::Methods methods_QAbstractXmlReceiver () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("atomicValue", "@brief Method void QAbstractXmlReceiver::atomicValue(const QVariant &value)\n", false, &_init_f_atomicValue_2119, &_call_f_atomicValue_2119);
  methods += new qt_gsi::GenericMethod ("attribute", "@brief Method void QAbstractXmlReceiver::attribute(const QXmlName &name, const QStringRef &value)\n", false, &_init_f_attribute_4286, &_call_f_attribute_4286);
  methods += new qt_gsi::GenericMethod ("characters", "@brief Method void QAbstractXmlReceiver::characters(const QStringRef &value)\n", false, &_init_f_characters_2310, &_call_f_characters_2310);
  methods += new qt_gsi::GenericMethod ("comment", "@brief Method void QAbstractXmlReceiver::comment(const QString &value)\n", false, &_init_f_comment_2025, &_call_f_comment_2025);
  methods += new qt_gsi::GenericMethod ("endDocument", "@brief Method void QAbstractXmlReceiver::endDocument()\n", false, &_init_f_endDocument_0, &_call_f_endDocument_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@brief Method void QAbstractXmlReceiver::endElement()\n", false, &_init_f_endElement_0, &_call_f_endElement_0);
  methods += new qt_gsi::GenericMethod ("endOfSequence", "@brief Method void QAbstractXmlReceiver::endOfSequence()\n", false, &_init_f_endOfSequence_0, &_call_f_endOfSequence_0);
  methods += new qt_gsi::GenericMethod ("namespaceBinding", "@brief Method void QAbstractXmlReceiver::namespaceBinding(const QXmlName &name)\n", false, &_init_f_namespaceBinding_2084, &_call_f_namespaceBinding_2084);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@brief Method void QAbstractXmlReceiver::processingInstruction(const QXmlName &target, const QString &value)\n", false, &_init_f_processingInstruction_4001, &_call_f_processingInstruction_4001);
  methods += new qt_gsi::GenericMethod ("startDocument", "@brief Method void QAbstractXmlReceiver::startDocument()\n", false, &_init_f_startDocument_0, &_call_f_startDocument_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@brief Method void QAbstractXmlReceiver::startElement(const QXmlName &name)\n", false, &_init_f_startElement_2084, &_call_f_startElement_2084);
  methods += new qt_gsi::GenericMethod ("startOfSequence", "@brief Method void QAbstractXmlReceiver::startOfSequence()\n", false, &_init_f_startOfSequence_0, &_call_f_startOfSequence_0);
  methods += new qt_gsi::GenericMethod ("whitespaceOnly", "@brief Method void QAbstractXmlReceiver::whitespaceOnly(const QStringRef &value)\n", false, &_init_f_whitespaceOnly_2310, &_call_f_whitespaceOnly_2310);
  return methods;
}

gsi::Class<QAbstractXmlReceiver> decl_QAbstractXmlReceiver ("QtXmlPatterns", "QAbstractXmlReceiver_Native",
  methods_QAbstractXmlReceiver (),
  "@hide\n@alias QAbstractXmlReceiver");

GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QAbstractXmlReceiver> &qtdecl_QAbstractXmlReceiver () { return decl_QAbstractXmlReceiver; }

}


class QAbstractXmlReceiver_Adaptor : public QAbstractXmlReceiver, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractXmlReceiver_Adaptor();

  //  [adaptor ctor] QAbstractXmlReceiver::QAbstractXmlReceiver()
  QAbstractXmlReceiver_Adaptor() : QAbstractXmlReceiver()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QAbstractXmlReceiver::atomicValue(const QVariant &value)
  void cbs_atomicValue_2119_0(const QVariant &value)
  {
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("atomicValue");
  }

  virtual void atomicValue(const QVariant &value)
  {
    if (cb_atomicValue_2119_0.can_issue()) {
      cb_atomicValue_2119_0.issue<QAbstractXmlReceiver_Adaptor, const QVariant &>(&QAbstractXmlReceiver_Adaptor::cbs_atomicValue_2119_0, value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("atomicValue");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::attribute(const QXmlName &name, const QStringRef &value)
  void cbs_attribute_4286_0(const QXmlName &name, const QStringRef &value)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("attribute");
  }

  virtual void attribute(const QXmlName &name, const QStringRef &value)
  {
    if (cb_attribute_4286_0.can_issue()) {
      cb_attribute_4286_0.issue<QAbstractXmlReceiver_Adaptor, const QXmlName &, const QStringRef &>(&QAbstractXmlReceiver_Adaptor::cbs_attribute_4286_0, name, value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("attribute");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::characters(const QStringRef &value)
  void cbs_characters_2310_0(const QStringRef &value)
  {
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("characters");
  }

  virtual void characters(const QStringRef &value)
  {
    if (cb_characters_2310_0.can_issue()) {
      cb_characters_2310_0.issue<QAbstractXmlReceiver_Adaptor, const QStringRef &>(&QAbstractXmlReceiver_Adaptor::cbs_characters_2310_0, value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("characters");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::comment(const QString &value)
  void cbs_comment_2025_0(const QString &value)
  {
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("comment");
  }

  virtual void comment(const QString &value)
  {
    if (cb_comment_2025_0.can_issue()) {
      cb_comment_2025_0.issue<QAbstractXmlReceiver_Adaptor, const QString &>(&QAbstractXmlReceiver_Adaptor::cbs_comment_2025_0, value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("comment");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::endDocument()
  void cbs_endDocument_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("endDocument");
  }

  virtual void endDocument()
  {
    if (cb_endDocument_0_0.can_issue()) {
      cb_endDocument_0_0.issue<QAbstractXmlReceiver_Adaptor>(&QAbstractXmlReceiver_Adaptor::cbs_endDocument_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("endDocument");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::endElement()
  void cbs_endElement_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("endElement");
  }

  virtual void endElement()
  {
    if (cb_endElement_0_0.can_issue()) {
      cb_endElement_0_0.issue<QAbstractXmlReceiver_Adaptor>(&QAbstractXmlReceiver_Adaptor::cbs_endElement_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("endElement");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::endOfSequence()
  void cbs_endOfSequence_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("endOfSequence");
  }

  virtual void endOfSequence()
  {
    if (cb_endOfSequence_0_0.can_issue()) {
      cb_endOfSequence_0_0.issue<QAbstractXmlReceiver_Adaptor>(&QAbstractXmlReceiver_Adaptor::cbs_endOfSequence_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("endOfSequence");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::namespaceBinding(const QXmlName &name)
  void cbs_namespaceBinding_2084_0(const QXmlName &name)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    throw qt_gsi::AbstractMethodCalledException("namespaceBinding");
  }

  virtual void namespaceBinding(const QXmlName &name)
  {
    if (cb_namespaceBinding_2084_0.can_issue()) {
      cb_namespaceBinding_2084_0.issue<QAbstractXmlReceiver_Adaptor, const QXmlName &>(&QAbstractXmlReceiver_Adaptor::cbs_namespaceBinding_2084_0, name);
    } else {
      throw qt_gsi::AbstractMethodCalledException("namespaceBinding");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::processingInstruction(const QXmlName &target, const QString &value)
  void cbs_processingInstruction_4001_0(const QXmlName &target, const QString &value)
  {
    __SUPPRESS_UNUSED_WARNING (target);
    __SUPPRESS_UNUSED_WARNING (value);
    throw qt_gsi::AbstractMethodCalledException("processingInstruction");
  }

  virtual void processingInstruction(const QXmlName &target, const QString &value)
  {
    if (cb_processingInstruction_4001_0.can_issue()) {
      cb_processingInstruction_4001_0.issue<QAbstractXmlReceiver_Adaptor, const QXmlName &, const QString &>(&QAbstractXmlReceiver_Adaptor::cbs_processingInstruction_4001_0, target, value);
    } else {
      throw qt_gsi::AbstractMethodCalledException("processingInstruction");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::startDocument()
  void cbs_startDocument_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("startDocument");
  }

  virtual void startDocument()
  {
    if (cb_startDocument_0_0.can_issue()) {
      cb_startDocument_0_0.issue<QAbstractXmlReceiver_Adaptor>(&QAbstractXmlReceiver_Adaptor::cbs_startDocument_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("startDocument");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::startElement(const QXmlName &name)
  void cbs_startElement_2084_0(const QXmlName &name)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    throw qt_gsi::AbstractMethodCalledException("startElement");
  }

  virtual void startElement(const QXmlName &name)
  {
    if (cb_startElement_2084_0.can_issue()) {
      cb_startElement_2084_0.issue<QAbstractXmlReceiver_Adaptor, const QXmlName &>(&QAbstractXmlReceiver_Adaptor::cbs_startElement_2084_0, name);
    } else {
      throw qt_gsi::AbstractMethodCalledException("startElement");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::startOfSequence()
  void cbs_startOfSequence_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("startOfSequence");
  }

  virtual void startOfSequence()
  {
    if (cb_startOfSequence_0_0.can_issue()) {
      cb_startOfSequence_0_0.issue<QAbstractXmlReceiver_Adaptor>(&QAbstractXmlReceiver_Adaptor::cbs_startOfSequence_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("startOfSequence");
    }
  }

  //  [adaptor impl] void QAbstractXmlReceiver::whitespaceOnly(const QStringRef &value)
  void cbs_whitespaceOnly_2310_0(const QStringRef &value)
  {
    QAbstractXmlReceiver::whitespaceOnly(value);
  }

  virtual void whitespaceOnly(const QStringRef &value)
  {
    if (cb_whitespaceOnly_2310_0.can_issue()) {
      cb_whitespaceOnly_2310_0.issue<QAbstractXmlReceiver_Adaptor, const QStringRef &>(&QAbstractXmlReceiver_Adaptor::cbs_whitespaceOnly_2310_0, value);
    } else {
      QAbstractXmlReceiver::whitespaceOnly(value);
    }
  }

  gsi::Callback cb_atomicValue_2119_0;
  gsi::Callback cb_attribute_4286_0;
  gsi::Callback cb_characters_2310_0;
  gsi::Callback cb_comment_2025_0;
  gsi::Callback cb_endDocument_0_0;
  gsi::Callback cb_endElement_0_0;
  gsi::Callback cb_endOfSequence_0_0;
  gsi::Callback cb_namespaceBinding_2084_0;
  gsi::Callback cb_processingInstruction_4001_0;
  gsi::Callback cb_startDocument_0_0;
  gsi::Callback cb_startElement_2084_0;
  gsi::Callback cb_startOfSequence_0_0;
  gsi::Callback cb_whitespaceOnly_2310_0;
};

QAbstractXmlReceiver_Adaptor::~QAbstractXmlReceiver_Adaptor() { }

//  Constructor QAbstractXmlReceiver::QAbstractXmlReceiver() (adaptor class)

static void _init_ctor_QAbstractXmlReceiver_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractXmlReceiver_Adaptor> ();
}

static void _call_ctor_QAbstractXmlReceiver_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractXmlReceiver_Adaptor *> (new QAbstractXmlReceiver_Adaptor ());
}


// void QAbstractXmlReceiver::atomicValue(const QVariant &value)

static void _init_cbs_atomicValue_2119_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_atomicValue_2119_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_atomicValue_2119_0 (arg1);
}

static void _set_callback_cbs_atomicValue_2119_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_atomicValue_2119_0 = cb;
}


// void QAbstractXmlReceiver::attribute(const QXmlName &name, const QStringRef &value)

static void _init_cbs_attribute_4286_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QStringRef & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_attribute_4286_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QStringRef &arg2 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_attribute_4286_0 (arg1, arg2);
}

static void _set_callback_cbs_attribute_4286_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_attribute_4286_0 = cb;
}


// void QAbstractXmlReceiver::characters(const QStringRef &value)

static void _init_cbs_characters_2310_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_characters_2310_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_characters_2310_0 (arg1);
}

static void _set_callback_cbs_characters_2310_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_characters_2310_0 = cb;
}


// void QAbstractXmlReceiver::comment(const QString &value)

static void _init_cbs_comment_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_comment_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_comment_2025_0 (arg1);
}

static void _set_callback_cbs_comment_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_comment_2025_0 = cb;
}


// void QAbstractXmlReceiver::endDocument()

static void _init_cbs_endDocument_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_endDocument_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_endDocument_0_0 ();
}

static void _set_callback_cbs_endDocument_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_endDocument_0_0 = cb;
}


// void QAbstractXmlReceiver::endElement()

static void _init_cbs_endElement_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_endElement_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_endElement_0_0 ();
}

static void _set_callback_cbs_endElement_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_endElement_0_0 = cb;
}


// void QAbstractXmlReceiver::endOfSequence()

static void _init_cbs_endOfSequence_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_endOfSequence_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_endOfSequence_0_0 ();
}

static void _set_callback_cbs_endOfSequence_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_endOfSequence_0_0 = cb;
}


// void QAbstractXmlReceiver::namespaceBinding(const QXmlName &name)

static void _init_cbs_namespaceBinding_2084_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_namespaceBinding_2084_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_namespaceBinding_2084_0 (arg1);
}

static void _set_callback_cbs_namespaceBinding_2084_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_namespaceBinding_2084_0 = cb;
}


// void QAbstractXmlReceiver::processingInstruction(const QXmlName &target, const QString &value)

static void _init_cbs_processingInstruction_4001_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_processingInstruction_4001_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_processingInstruction_4001_0 (arg1, arg2);
}

static void _set_callback_cbs_processingInstruction_4001_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_processingInstruction_4001_0 = cb;
}


// void QAbstractXmlReceiver::startDocument()

static void _init_cbs_startDocument_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_startDocument_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_startDocument_0_0 ();
}

static void _set_callback_cbs_startDocument_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_startDocument_0_0 = cb;
}


// void QAbstractXmlReceiver::startElement(const QXmlName &name)

static void _init_cbs_startElement_2084_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_startElement_2084_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_startElement_2084_0 (arg1);
}

static void _set_callback_cbs_startElement_2084_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_startElement_2084_0 = cb;
}


// void QAbstractXmlReceiver::startOfSequence()

static void _init_cbs_startOfSequence_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_startOfSequence_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_startOfSequence_0_0 ();
}

static void _set_callback_cbs_startOfSequence_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_startOfSequence_0_0 = cb;
}


// void QAbstractXmlReceiver::whitespaceOnly(const QStringRef &value)

static void _init_cbs_whitespaceOnly_2310_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_whitespaceOnly_2310_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlReceiver_Adaptor *)cls)->cbs_whitespaceOnly_2310_0 (arg1);
}

static void _set_callback_cbs_whitespaceOnly_2310_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractXmlReceiver_Adaptor *)cls)->cb_whitespaceOnly_2310_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractXmlReceiver> &qtdecl_QAbstractXmlReceiver ();

static gsi::Methods methods_QAbstractXmlReceiver_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractXmlReceiver::QAbstractXmlReceiver()\nThis method creates an object of class QAbstractXmlReceiver.", &_init_ctor_QAbstractXmlReceiver_Adaptor_0, &_call_ctor_QAbstractXmlReceiver_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("atomicValue", "@brief Virtual method void QAbstractXmlReceiver::atomicValue(const QVariant &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_atomicValue_2119_0, &_call_cbs_atomicValue_2119_0);
  methods += new qt_gsi::GenericMethod ("atomicValue", "@hide", false, &_init_cbs_atomicValue_2119_0, &_call_cbs_atomicValue_2119_0, &_set_callback_cbs_atomicValue_2119_0);
  methods += new qt_gsi::GenericMethod ("attribute", "@brief Virtual method void QAbstractXmlReceiver::attribute(const QXmlName &name, const QStringRef &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_attribute_4286_0, &_call_cbs_attribute_4286_0);
  methods += new qt_gsi::GenericMethod ("attribute", "@hide", false, &_init_cbs_attribute_4286_0, &_call_cbs_attribute_4286_0, &_set_callback_cbs_attribute_4286_0);
  methods += new qt_gsi::GenericMethod ("characters", "@brief Virtual method void QAbstractXmlReceiver::characters(const QStringRef &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_characters_2310_0, &_call_cbs_characters_2310_0);
  methods += new qt_gsi::GenericMethod ("characters", "@hide", false, &_init_cbs_characters_2310_0, &_call_cbs_characters_2310_0, &_set_callback_cbs_characters_2310_0);
  methods += new qt_gsi::GenericMethod ("comment", "@brief Virtual method void QAbstractXmlReceiver::comment(const QString &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_comment_2025_0, &_call_cbs_comment_2025_0);
  methods += new qt_gsi::GenericMethod ("comment", "@hide", false, &_init_cbs_comment_2025_0, &_call_cbs_comment_2025_0, &_set_callback_cbs_comment_2025_0);
  methods += new qt_gsi::GenericMethod ("endDocument", "@brief Virtual method void QAbstractXmlReceiver::endDocument()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endDocument_0_0, &_call_cbs_endDocument_0_0);
  methods += new qt_gsi::GenericMethod ("endDocument", "@hide", false, &_init_cbs_endDocument_0_0, &_call_cbs_endDocument_0_0, &_set_callback_cbs_endDocument_0_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@brief Virtual method void QAbstractXmlReceiver::endElement()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endElement_0_0, &_call_cbs_endElement_0_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@hide", false, &_init_cbs_endElement_0_0, &_call_cbs_endElement_0_0, &_set_callback_cbs_endElement_0_0);
  methods += new qt_gsi::GenericMethod ("endOfSequence", "@brief Virtual method void QAbstractXmlReceiver::endOfSequence()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endOfSequence_0_0, &_call_cbs_endOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("endOfSequence", "@hide", false, &_init_cbs_endOfSequence_0_0, &_call_cbs_endOfSequence_0_0, &_set_callback_cbs_endOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("namespaceBinding", "@brief Virtual method void QAbstractXmlReceiver::namespaceBinding(const QXmlName &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_namespaceBinding_2084_0, &_call_cbs_namespaceBinding_2084_0);
  methods += new qt_gsi::GenericMethod ("namespaceBinding", "@hide", false, &_init_cbs_namespaceBinding_2084_0, &_call_cbs_namespaceBinding_2084_0, &_set_callback_cbs_namespaceBinding_2084_0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@brief Virtual method void QAbstractXmlReceiver::processingInstruction(const QXmlName &target, const QString &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_processingInstruction_4001_0, &_call_cbs_processingInstruction_4001_0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@hide", false, &_init_cbs_processingInstruction_4001_0, &_call_cbs_processingInstruction_4001_0, &_set_callback_cbs_processingInstruction_4001_0);
  methods += new qt_gsi::GenericMethod ("startDocument", "@brief Virtual method void QAbstractXmlReceiver::startDocument()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startDocument_0_0, &_call_cbs_startDocument_0_0);
  methods += new qt_gsi::GenericMethod ("startDocument", "@hide", false, &_init_cbs_startDocument_0_0, &_call_cbs_startDocument_0_0, &_set_callback_cbs_startDocument_0_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@brief Virtual method void QAbstractXmlReceiver::startElement(const QXmlName &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startElement_2084_0, &_call_cbs_startElement_2084_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@hide", false, &_init_cbs_startElement_2084_0, &_call_cbs_startElement_2084_0, &_set_callback_cbs_startElement_2084_0);
  methods += new qt_gsi::GenericMethod ("startOfSequence", "@brief Virtual method void QAbstractXmlReceiver::startOfSequence()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startOfSequence_0_0, &_call_cbs_startOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("startOfSequence", "@hide", false, &_init_cbs_startOfSequence_0_0, &_call_cbs_startOfSequence_0_0, &_set_callback_cbs_startOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("whitespaceOnly", "@brief Virtual method void QAbstractXmlReceiver::whitespaceOnly(const QStringRef &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_whitespaceOnly_2310_0, &_call_cbs_whitespaceOnly_2310_0);
  methods += new qt_gsi::GenericMethod ("whitespaceOnly", "@hide", false, &_init_cbs_whitespaceOnly_2310_0, &_call_cbs_whitespaceOnly_2310_0, &_set_callback_cbs_whitespaceOnly_2310_0);
  return methods;
}

gsi::Class<QAbstractXmlReceiver_Adaptor> decl_QAbstractXmlReceiver_Adaptor (qtdecl_QAbstractXmlReceiver (), "QtXmlPatterns", "QAbstractXmlReceiver",
  methods_QAbstractXmlReceiver_Adaptor (),
  "@qt\n@brief Binding of QAbstractXmlReceiver");

}

