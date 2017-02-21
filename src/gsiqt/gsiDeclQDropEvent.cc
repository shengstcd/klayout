
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
*  @file gsiDeclQDropEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDropEvent>
#include <QMimeData>
#include <QPoint>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDropEvent

// void QDropEvent::acceptProposedAction()


static void _init_f_acceptProposedAction_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_acceptProposedAction_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDropEvent *)cls)->acceptProposedAction ();
}


// Qt::DropAction QDropEvent::dropAction()


static void _init_f_dropAction_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::DropAction>::target_type > ();
}

static void _call_f_dropAction_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::DropAction>::target_type > ((qt_gsi::Converter<Qt::DropAction>::target_type)qt_gsi::CppToQtAdaptor<Qt::DropAction>(((QDropEvent *)cls)->dropAction ()));
}


// (const char *) const


static void _init_f_encodedData_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_encodedData_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<QByteArray > ((QByteArray)((QDropEvent *)cls)->encodedData (arg1));
}


// (int) const


static void _init_f_format_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const char * > ();
}

static void _call_f_format_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(0);
  ret.write<const char * > ((const char *)((QDropEvent *)cls)->format (arg1));
}


// QFlags<Qt::KeyboardModifier> QDropEvent::keyboardModifiers()


static void _init_f_keyboardModifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::KeyboardModifier> > ();
}

static void _call_f_keyboardModifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::KeyboardModifier> > ((QFlags<Qt::KeyboardModifier>)((QDropEvent *)cls)->keyboardModifiers ());
}


// const QMimeData *QDropEvent::mimeData()


static void _init_f_mimeData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMimeData * > ();
}

static void _call_f_mimeData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMimeData * > ((const QMimeData *)((QDropEvent *)cls)->mimeData ());
}


// QFlags<Qt::MouseButton> QDropEvent::mouseButtons()


static void _init_f_mouseButtons_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::MouseButton> > ();
}

static void _call_f_mouseButtons_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::MouseButton> > ((QFlags<Qt::MouseButton>)((QDropEvent *)cls)->mouseButtons ());
}


// const QPoint &QDropEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QDropEvent *)cls)->pos ());
}


// QFlags<Qt::DropAction> QDropEvent::possibleActions()


static void _init_f_possibleActions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::DropAction> > ();
}

static void _call_f_possibleActions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::DropAction> > ((QFlags<Qt::DropAction>)((QDropEvent *)cls)->possibleActions ());
}


// Qt::DropAction QDropEvent::proposedAction()


static void _init_f_proposedAction_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::DropAction>::target_type > ();
}

static void _call_f_proposedAction_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::DropAction>::target_type > ((qt_gsi::Converter<Qt::DropAction>::target_type)qt_gsi::CppToQtAdaptor<Qt::DropAction>(((QDropEvent *)cls)->proposedAction ()));
}


// (const char *) const


static void _init_f_provides_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_provides_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<bool > ((bool)((QDropEvent *)cls)->provides (arg1));
}


// void QDropEvent::setDropAction(Qt::DropAction action)


static void _init_f_setDropAction_1760 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<const qt_gsi::Converter<Qt::DropAction>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDropAction_1760 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::DropAction>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::DropAction>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDropEvent *)cls)->setDropAction (qt_gsi::QtToCppAdaptor<Qt::DropAction>(arg1).cref());
}


// QWidget *QDropEvent::source()


static void _init_f_source_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_f_source_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QDropEvent *)cls)->source ());
}


//  base class cast for QEvent

static void _init_f_QDropEvent_as_QEvent (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QEvent *> ();
}

static void _call_f_QDropEvent_as_QEvent (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<QEvent *> ((QEvent *)(QDropEvent *)cls);
}

static void _init_f_QDropEvent_as_const_QEvent (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QEvent *> ();
}

static void _call_f_QDropEvent_as_const_QEvent (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QEvent *> ((const QEvent *)(const QDropEvent *)cls);
}

//  base class cast for QMimeSource

static void _init_f_QDropEvent_as_QMimeSource (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMimeSource *> ();
}

static void _call_f_QDropEvent_as_QMimeSource (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<QMimeSource *> ((QMimeSource *)(QDropEvent *)cls);
}

static void _init_f_QDropEvent_as_const_QMimeSource (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMimeSource *> ();
}

static void _call_f_QDropEvent_as_const_QMimeSource (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMimeSource *> ((const QMimeSource *)(const QDropEvent *)cls);
}


namespace gsi
{

static gsi::Methods methods_QDropEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("acceptProposedAction", "@brief Method void QDropEvent::acceptProposedAction()\n", false, &_init_f_acceptProposedAction_0, &_call_f_acceptProposedAction_0);
  methods += new qt_gsi::GenericMethod (":dropAction", "@brief Method Qt::DropAction QDropEvent::dropAction()\n", true, &_init_f_dropAction_c0, &_call_f_dropAction_c0);
  methods += new qt_gsi::GenericMethod ("encodedData", "@brief Method (const char *) const\nThis is a reimplementation of QMimeSource::encodedData", true, &_init_f_encodedData_c1731, &_call_f_encodedData_c1731);
  methods += new qt_gsi::GenericMethod ("format", "@brief Method (int) const\nThis is a reimplementation of QMimeSource::format", true, &_init_f_format_c767, &_call_f_format_c767);
  methods += new qt_gsi::GenericMethod ("keyboardModifiers", "@brief Method QFlags<Qt::KeyboardModifier> QDropEvent::keyboardModifiers()\n", true, &_init_f_keyboardModifiers_c0, &_call_f_keyboardModifiers_c0);
  methods += new qt_gsi::GenericMethod ("mimeData", "@brief Method const QMimeData *QDropEvent::mimeData()\n", true, &_init_f_mimeData_c0, &_call_f_mimeData_c0);
  methods += new qt_gsi::GenericMethod ("mouseButtons", "@brief Method QFlags<Qt::MouseButton> QDropEvent::mouseButtons()\n", true, &_init_f_mouseButtons_c0, &_call_f_mouseButtons_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method const QPoint &QDropEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("possibleActions", "@brief Method QFlags<Qt::DropAction> QDropEvent::possibleActions()\n", true, &_init_f_possibleActions_c0, &_call_f_possibleActions_c0);
  methods += new qt_gsi::GenericMethod ("proposedAction", "@brief Method Qt::DropAction QDropEvent::proposedAction()\n", true, &_init_f_proposedAction_c0, &_call_f_proposedAction_c0);
  methods += new qt_gsi::GenericMethod ("provides", "@brief Method (const char *) const\nThis is a reimplementation of QMimeSource::provides", true, &_init_f_provides_c1731, &_call_f_provides_c1731);
  methods += new qt_gsi::GenericMethod ("setDropAction|dropAction=", "@brief Method void QDropEvent::setDropAction(Qt::DropAction action)\n", false, &_init_f_setDropAction_1760, &_call_f_setDropAction_1760);
  methods += new qt_gsi::GenericMethod ("source", "@brief Method QWidget *QDropEvent::source()\n", true, &_init_f_source_c0, &_call_f_source_c0);
  methods += new qt_gsi::GenericMethod ("asQEvent", "@brief Delivers the base class interface QEvent of QDropEvent\nClass QDropEvent is derived from multiple base classes. This method delivers the QEvent base class aspect.", false, &_init_f_QDropEvent_as_QEvent, &_call_f_QDropEvent_as_QEvent);
  methods += new qt_gsi::GenericMethod ("asConstQEvent", "@brief Delivers the base class interface QEvent of QDropEvent\nClass QDropEvent is derived from multiple base classes. This method delivers the QEvent base class aspect.\n\nUse this version if you have a const reference.", true, &_init_f_QDropEvent_as_const_QEvent, &_call_f_QDropEvent_as_const_QEvent);
  methods += new qt_gsi::GenericMethod ("asQMimeSource", "@brief Delivers the base class interface QMimeSource of QDropEvent\nClass QDropEvent is derived from multiple base classes. This method delivers the QMimeSource base class aspect.", false, &_init_f_QDropEvent_as_QMimeSource, &_call_f_QDropEvent_as_QMimeSource);
  methods += new qt_gsi::GenericMethod ("asConstQMimeSource", "@brief Delivers the base class interface QMimeSource of QDropEvent\nClass QDropEvent is derived from multiple base classes. This method delivers the QMimeSource base class aspect.\n\nUse this version if you have a const reference.", true, &_init_f_QDropEvent_as_const_QMimeSource, &_call_f_QDropEvent_as_const_QMimeSource);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QDropEvent> decl_QDropEvent (qtdecl_QEvent (), "QDropEvent_Native",
  methods_QDropEvent (),
  "@hide\n@alias QDropEvent");

GSIQT_PUBLIC gsi::Class<QDropEvent> &qtdecl_QDropEvent () { return decl_QDropEvent; }

}


class QDropEvent_Adaptor : public QDropEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDropEvent_Adaptor();

  //  [adaptor ctor] QDropEvent::QDropEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
  QDropEvent_Adaptor(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QDropEvent(pos, actions, data, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QDropEvent::QDropEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
  QDropEvent_Adaptor(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) : QDropEvent(pos, actions, data, buttons, modifiers, type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QByteArray QDropEvent::encodedData(const char *)
  QByteArray cbs_encodedData_c1731_0(const char *arg1) const
  {
    return QDropEvent::encodedData(arg1);
  }

  virtual QByteArray encodedData(const char *arg1) const
  {
    if (cb_encodedData_c1731_0.can_issue()) {
      return cb_encodedData_c1731_0.issue<QDropEvent_Adaptor, QByteArray, const char *>(&QDropEvent_Adaptor::cbs_encodedData_c1731_0, arg1);
    } else {
      return QDropEvent::encodedData(arg1);
    }
  }

  //  [adaptor impl] const char *QDropEvent::format(int n)
  const char * cbs_format_c767_1(int n) const
  {
    return QDropEvent::format(n);
  }

  virtual const char * format(int n) const
  {
    if (cb_format_c767_1.can_issue()) {
      return cb_format_c767_1.issue<QDropEvent_Adaptor, const char *, int>(&QDropEvent_Adaptor::cbs_format_c767_1, n);
    } else {
      return QDropEvent::format(n);
    }
  }

  //  [adaptor impl] bool QDropEvent::provides(const char *)
  bool cbs_provides_c1731_0(const char *arg1) const
  {
    return QDropEvent::provides(arg1);
  }

  virtual bool provides(const char *arg1) const
  {
    if (cb_provides_c1731_0.can_issue()) {
      return cb_provides_c1731_0.issue<QDropEvent_Adaptor, bool, const char *>(&QDropEvent_Adaptor::cbs_provides_c1731_0, arg1);
    } else {
      return QDropEvent::provides(arg1);
    }
  }

  gsi::Callback cb_encodedData_c1731_0;
  gsi::Callback cb_format_c767_1;
  gsi::Callback cb_provides_c1731_0;
};

QDropEvent_Adaptor::~QDropEvent_Adaptor() { }

//  Constructor QDropEvent::QDropEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) (adaptor class)

static void _init_ctor_QDropEvent_Adaptor_13244 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("actions");
  decl->add_arg<QFlags<Qt::DropAction> > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("data");
  decl->add_arg<const QMimeData * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("type", true, "QEvent::Drop");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_5);
  decl->set_return_new<QDropEvent_Adaptor> ();
}

static void _call_ctor_QDropEvent_Adaptor_13244 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = args.read<const QPoint & > (heap);
  QFlags<Qt::DropAction> arg2 = args.read<QFlags<Qt::DropAction> > (heap);
  const QMimeData *arg3 = args.read<const QMimeData * > (heap);
  QFlags<Qt::MouseButton> arg4 = args.read<QFlags<Qt::MouseButton> > (heap);
  QFlags<Qt::KeyboardModifier> arg5 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  const qt_gsi::Converter<QEvent::Type>::target_type & arg6 = args ? args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap) : (const qt_gsi::Converter<QEvent::Type>::target_type &)(qt_gsi::CppToQtReadAdaptor<QEvent::Type>(heap, QEvent::Drop));
  ret.write<QDropEvent_Adaptor *> (new QDropEvent_Adaptor (arg1, arg2, arg3, arg4, arg5, qt_gsi::QtToCppAdaptor<QEvent::Type>(arg6).cref()));
}


// QByteArray QDropEvent::encodedData(const char *)

static void _init_cbs_encodedData_c1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_cbs_encodedData_c1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<QByteArray > ((QByteArray)((QDropEvent_Adaptor *)cls)->cbs_encodedData_c1731_0 (arg1));
}

static void _set_callback_cbs_encodedData_c1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QDropEvent_Adaptor *)cls)->cb_encodedData_c1731_0 = cb;
}


// const char *QDropEvent::format(int n)

static void _init_cbs_format_c767_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const char * > ();
}

static void _call_cbs_format_c767_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<const char * > ((const char *)((QDropEvent_Adaptor *)cls)->cbs_format_c767_1 (arg1));
}

static void _set_callback_cbs_format_c767_1 (void *cls, const gsi::Callback &cb)
{
  ((QDropEvent_Adaptor *)cls)->cb_format_c767_1 = cb;
}


// bool QDropEvent::provides(const char *)

static void _init_cbs_provides_c1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_provides_c1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<bool > ((bool)((QDropEvent_Adaptor *)cls)->cbs_provides_c1731_0 (arg1));
}

static void _set_callback_cbs_provides_c1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QDropEvent_Adaptor *)cls)->cb_provides_c1731_0 = cb;
}


namespace gsi
{

gsi::Class<QDropEvent> &qtdecl_QDropEvent ();

static gsi::Methods methods_QDropEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDropEvent::QDropEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)\nThis method creates an object of class QDropEvent.", &_init_ctor_QDropEvent_Adaptor_13244, &_call_ctor_QDropEvent_Adaptor_13244);
  methods += new qt_gsi::GenericMethod ("encodedData", "@hide", true, &_init_cbs_encodedData_c1731_0, &_call_cbs_encodedData_c1731_0);
  methods += new qt_gsi::GenericMethod ("encodedData", "@brief Virtual method QByteArray QDropEvent::encodedData(const char *)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_encodedData_c1731_0, &_call_cbs_encodedData_c1731_0, &_set_callback_cbs_encodedData_c1731_0);
  methods += new qt_gsi::GenericMethod ("format", "@hide", true, &_init_cbs_format_c767_1, &_call_cbs_format_c767_1);
  methods += new qt_gsi::GenericMethod ("format", "@brief Virtual method const char *QDropEvent::format(int n)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_format_c767_1, &_call_cbs_format_c767_1, &_set_callback_cbs_format_c767_1);
  methods += new qt_gsi::GenericMethod ("provides", "@hide", true, &_init_cbs_provides_c1731_0, &_call_cbs_provides_c1731_0);
  methods += new qt_gsi::GenericMethod ("provides", "@brief Virtual method bool QDropEvent::provides(const char *)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_provides_c1731_0, &_call_cbs_provides_c1731_0, &_set_callback_cbs_provides_c1731_0);
  return methods;
}

gsi::Class<QDropEvent_Adaptor> decl_QDropEvent_Adaptor (qtdecl_QDropEvent (), "QDropEvent",
  methods_QDropEvent_Adaptor (),
  "@qt\n@brief Binding of QDropEvent");

}

