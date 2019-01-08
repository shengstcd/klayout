
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
*  @file gsiDeclQEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QEvent

// void QEvent::accept()


static void _init_f_accept_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_accept_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEvent *)cls)->accept ();
}


// void QEvent::ignore()


static void _init_f_ignore_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_ignore_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEvent *)cls)->ignore ();
}


// bool QEvent::isAccepted()


static void _init_f_isAccepted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAccepted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QEvent *)cls)->isAccepted ());
}


// void QEvent::setAccepted(bool accepted)


static void _init_f_setAccepted_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAccepted_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEvent *)cls)->setAccepted (arg1);
}


// bool QEvent::spontaneous()


static void _init_f_spontaneous_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_spontaneous_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QEvent *)cls)->spontaneous ());
}


// QEvent::Type QEvent::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QEvent::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QEvent::Type>::target_type > ((qt_gsi::Converter<QEvent::Type>::target_type)qt_gsi::CppToQtAdaptor<QEvent::Type>(((QEvent *)cls)->type ()));
}


// static int QEvent::registerEventType(int hint)


static void _init_f_registerEventType_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("hint", true, "-1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_registerEventType_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<int > ((int)QEvent::registerEventType (arg1));
}


namespace gsi
{

static gsi::Methods methods_QEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("accept", "@brief Method void QEvent::accept()\n", false, &_init_f_accept_0, &_call_f_accept_0);
  methods += new qt_gsi::GenericMethod ("ignore", "@brief Method void QEvent::ignore()\n", false, &_init_f_ignore_0, &_call_f_ignore_0);
  methods += new qt_gsi::GenericMethod ("isAccepted?|:accepted", "@brief Method bool QEvent::isAccepted()\n", true, &_init_f_isAccepted_c0, &_call_f_isAccepted_c0);
  methods += new qt_gsi::GenericMethod ("setAccepted|accepted=", "@brief Method void QEvent::setAccepted(bool accepted)\n", false, &_init_f_setAccepted_864, &_call_f_setAccepted_864);
  methods += new qt_gsi::GenericMethod ("spontaneous", "@brief Method bool QEvent::spontaneous()\n", true, &_init_f_spontaneous_c0, &_call_f_spontaneous_c0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QEvent::Type QEvent::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  methods += new qt_gsi::GenericStaticMethod ("registerEventType", "@brief Static method int QEvent::registerEventType(int hint)\nThis method is static and can be called without an instance.", &_init_f_registerEventType_767, &_call_f_registerEventType_767);
  return methods;
}

gsi::Class<QEvent> decl_QEvent ("QtCore", "QEvent_Native",
  methods_QEvent (),
  "@hide\n@alias QEvent");

GSI_QTCORE_PUBLIC gsi::Class<QEvent> &qtdecl_QEvent () { return decl_QEvent; }

}


class QEvent_Adaptor : public QEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QEvent_Adaptor();

  //  [adaptor ctor] QEvent::QEvent(QEvent::Type type)
  QEvent_Adaptor(QEvent::Type type) : QEvent(type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QEvent_Adaptor::~QEvent_Adaptor() { }

//  Constructor QEvent::QEvent(QEvent::Type type) (adaptor class)

static void _init_ctor_QEvent_Adaptor_1565 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  decl->set_return_new<QEvent_Adaptor> ();
}

static void _call_ctor_QEvent_Adaptor_1565 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap);
  ret.write<QEvent_Adaptor *> (new QEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref()));
}


namespace gsi
{

gsi::Class<QEvent> &qtdecl_QEvent ();

static gsi::Methods methods_QEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEvent::QEvent(QEvent::Type type)\nThis method creates an object of class QEvent.", &_init_ctor_QEvent_Adaptor_1565, &_call_ctor_QEvent_Adaptor_1565);
  return methods;
}

gsi::Class<QEvent_Adaptor> decl_QEvent_Adaptor (qtdecl_QEvent (), "QtCore", "QEvent",
  methods_QEvent_Adaptor (),
  "@qt\n@brief Binding of QEvent");

}


//  Implementation of the enum wrapper class for QEvent::Type
namespace qt_gsi
{

static gsi::Enum<QEvent::Type> decl_QEvent_Type_Enum ("QtCore", "QEvent_Type",
    gsi::enum_const ("None", QEvent::None, "@brief Enum constant QEvent::None") +
    gsi::enum_const ("Timer", QEvent::Timer, "@brief Enum constant QEvent::Timer") +
    gsi::enum_const ("MouseButtonPress", QEvent::MouseButtonPress, "@brief Enum constant QEvent::MouseButtonPress") +
    gsi::enum_const ("MouseButtonRelease", QEvent::MouseButtonRelease, "@brief Enum constant QEvent::MouseButtonRelease") +
    gsi::enum_const ("MouseButtonDblClick", QEvent::MouseButtonDblClick, "@brief Enum constant QEvent::MouseButtonDblClick") +
    gsi::enum_const ("MouseMove", QEvent::MouseMove, "@brief Enum constant QEvent::MouseMove") +
    gsi::enum_const ("KeyPress", QEvent::KeyPress, "@brief Enum constant QEvent::KeyPress") +
    gsi::enum_const ("KeyRelease", QEvent::KeyRelease, "@brief Enum constant QEvent::KeyRelease") +
    gsi::enum_const ("FocusIn", QEvent::FocusIn, "@brief Enum constant QEvent::FocusIn") +
    gsi::enum_const ("FocusOut", QEvent::FocusOut, "@brief Enum constant QEvent::FocusOut") +
    gsi::enum_const ("Enter", QEvent::Enter, "@brief Enum constant QEvent::Enter") +
    gsi::enum_const ("Leave", QEvent::Leave, "@brief Enum constant QEvent::Leave") +
    gsi::enum_const ("Paint", QEvent::Paint, "@brief Enum constant QEvent::Paint") +
    gsi::enum_const ("Move", QEvent::Move, "@brief Enum constant QEvent::Move") +
    gsi::enum_const ("Resize", QEvent::Resize, "@brief Enum constant QEvent::Resize") +
    gsi::enum_const ("Create", QEvent::Create, "@brief Enum constant QEvent::Create") +
    gsi::enum_const ("Destroy", QEvent::Destroy, "@brief Enum constant QEvent::Destroy") +
    gsi::enum_const ("Show", QEvent::Show, "@brief Enum constant QEvent::Show") +
    gsi::enum_const ("Hide", QEvent::Hide, "@brief Enum constant QEvent::Hide") +
    gsi::enum_const ("Close", QEvent::Close, "@brief Enum constant QEvent::Close") +
    gsi::enum_const ("Quit", QEvent::Quit, "@brief Enum constant QEvent::Quit") +
    gsi::enum_const ("ParentChange", QEvent::ParentChange, "@brief Enum constant QEvent::ParentChange") +
    gsi::enum_const ("ParentAboutToChange", QEvent::ParentAboutToChange, "@brief Enum constant QEvent::ParentAboutToChange") +
    gsi::enum_const ("ThreadChange", QEvent::ThreadChange, "@brief Enum constant QEvent::ThreadChange") +
    gsi::enum_const ("WindowActivate", QEvent::WindowActivate, "@brief Enum constant QEvent::WindowActivate") +
    gsi::enum_const ("WindowDeactivate", QEvent::WindowDeactivate, "@brief Enum constant QEvent::WindowDeactivate") +
    gsi::enum_const ("ShowToParent", QEvent::ShowToParent, "@brief Enum constant QEvent::ShowToParent") +
    gsi::enum_const ("HideToParent", QEvent::HideToParent, "@brief Enum constant QEvent::HideToParent") +
    gsi::enum_const ("Wheel", QEvent::Wheel, "@brief Enum constant QEvent::Wheel") +
    gsi::enum_const ("WindowTitleChange", QEvent::WindowTitleChange, "@brief Enum constant QEvent::WindowTitleChange") +
    gsi::enum_const ("WindowIconChange", QEvent::WindowIconChange, "@brief Enum constant QEvent::WindowIconChange") +
    gsi::enum_const ("ApplicationWindowIconChange", QEvent::ApplicationWindowIconChange, "@brief Enum constant QEvent::ApplicationWindowIconChange") +
    gsi::enum_const ("ApplicationFontChange", QEvent::ApplicationFontChange, "@brief Enum constant QEvent::ApplicationFontChange") +
    gsi::enum_const ("ApplicationLayoutDirectionChange", QEvent::ApplicationLayoutDirectionChange, "@brief Enum constant QEvent::ApplicationLayoutDirectionChange") +
    gsi::enum_const ("ApplicationPaletteChange", QEvent::ApplicationPaletteChange, "@brief Enum constant QEvent::ApplicationPaletteChange") +
    gsi::enum_const ("PaletteChange", QEvent::PaletteChange, "@brief Enum constant QEvent::PaletteChange") +
    gsi::enum_const ("Clipboard", QEvent::Clipboard, "@brief Enum constant QEvent::Clipboard") +
    gsi::enum_const ("Speech", QEvent::Speech, "@brief Enum constant QEvent::Speech") +
    gsi::enum_const ("MetaCall", QEvent::MetaCall, "@brief Enum constant QEvent::MetaCall") +
    gsi::enum_const ("SockAct", QEvent::SockAct, "@brief Enum constant QEvent::SockAct") +
    gsi::enum_const ("WinEventAct", QEvent::WinEventAct, "@brief Enum constant QEvent::WinEventAct") +
    gsi::enum_const ("DeferredDelete", QEvent::DeferredDelete, "@brief Enum constant QEvent::DeferredDelete") +
    gsi::enum_const ("DragEnter", QEvent::DragEnter, "@brief Enum constant QEvent::DragEnter") +
    gsi::enum_const ("DragMove", QEvent::DragMove, "@brief Enum constant QEvent::DragMove") +
    gsi::enum_const ("DragLeave", QEvent::DragLeave, "@brief Enum constant QEvent::DragLeave") +
    gsi::enum_const ("Drop", QEvent::Drop, "@brief Enum constant QEvent::Drop") +
    gsi::enum_const ("DragResponse", QEvent::DragResponse, "@brief Enum constant QEvent::DragResponse") +
    gsi::enum_const ("ChildAdded", QEvent::ChildAdded, "@brief Enum constant QEvent::ChildAdded") +
    gsi::enum_const ("ChildPolished", QEvent::ChildPolished, "@brief Enum constant QEvent::ChildPolished") +
    gsi::enum_const ("ChildRemoved", QEvent::ChildRemoved, "@brief Enum constant QEvent::ChildRemoved") +
    gsi::enum_const ("ShowWindowRequest", QEvent::ShowWindowRequest, "@brief Enum constant QEvent::ShowWindowRequest") +
    gsi::enum_const ("PolishRequest", QEvent::PolishRequest, "@brief Enum constant QEvent::PolishRequest") +
    gsi::enum_const ("Polish", QEvent::Polish, "@brief Enum constant QEvent::Polish") +
    gsi::enum_const ("LayoutRequest", QEvent::LayoutRequest, "@brief Enum constant QEvent::LayoutRequest") +
    gsi::enum_const ("UpdateRequest", QEvent::UpdateRequest, "@brief Enum constant QEvent::UpdateRequest") +
    gsi::enum_const ("UpdateLater", QEvent::UpdateLater, "@brief Enum constant QEvent::UpdateLater") +
    gsi::enum_const ("EmbeddingControl", QEvent::EmbeddingControl, "@brief Enum constant QEvent::EmbeddingControl") +
    gsi::enum_const ("ActivateControl", QEvent::ActivateControl, "@brief Enum constant QEvent::ActivateControl") +
    gsi::enum_const ("DeactivateControl", QEvent::DeactivateControl, "@brief Enum constant QEvent::DeactivateControl") +
    gsi::enum_const ("ContextMenu", QEvent::ContextMenu, "@brief Enum constant QEvent::ContextMenu") +
    gsi::enum_const ("InputMethod", QEvent::InputMethod, "@brief Enum constant QEvent::InputMethod") +
    gsi::enum_const ("AccessibilityPrepare", QEvent::AccessibilityPrepare, "@brief Enum constant QEvent::AccessibilityPrepare") +
    gsi::enum_const ("TabletMove", QEvent::TabletMove, "@brief Enum constant QEvent::TabletMove") +
    gsi::enum_const ("LocaleChange", QEvent::LocaleChange, "@brief Enum constant QEvent::LocaleChange") +
    gsi::enum_const ("LanguageChange", QEvent::LanguageChange, "@brief Enum constant QEvent::LanguageChange") +
    gsi::enum_const ("LayoutDirectionChange", QEvent::LayoutDirectionChange, "@brief Enum constant QEvent::LayoutDirectionChange") +
    gsi::enum_const ("Style", QEvent::Style, "@brief Enum constant QEvent::Style") +
    gsi::enum_const ("TabletPress", QEvent::TabletPress, "@brief Enum constant QEvent::TabletPress") +
    gsi::enum_const ("TabletRelease", QEvent::TabletRelease, "@brief Enum constant QEvent::TabletRelease") +
    gsi::enum_const ("OkRequest", QEvent::OkRequest, "@brief Enum constant QEvent::OkRequest") +
    gsi::enum_const ("HelpRequest", QEvent::HelpRequest, "@brief Enum constant QEvent::HelpRequest") +
    gsi::enum_const ("IconDrag", QEvent::IconDrag, "@brief Enum constant QEvent::IconDrag") +
    gsi::enum_const ("FontChange", QEvent::FontChange, "@brief Enum constant QEvent::FontChange") +
    gsi::enum_const ("EnabledChange", QEvent::EnabledChange, "@brief Enum constant QEvent::EnabledChange") +
    gsi::enum_const ("ActivationChange", QEvent::ActivationChange, "@brief Enum constant QEvent::ActivationChange") +
    gsi::enum_const ("StyleChange", QEvent::StyleChange, "@brief Enum constant QEvent::StyleChange") +
    gsi::enum_const ("IconTextChange", QEvent::IconTextChange, "@brief Enum constant QEvent::IconTextChange") +
    gsi::enum_const ("ModifiedChange", QEvent::ModifiedChange, "@brief Enum constant QEvent::ModifiedChange") +
    gsi::enum_const ("MouseTrackingChange", QEvent::MouseTrackingChange, "@brief Enum constant QEvent::MouseTrackingChange") +
    gsi::enum_const ("WindowBlocked", QEvent::WindowBlocked, "@brief Enum constant QEvent::WindowBlocked") +
    gsi::enum_const ("WindowUnblocked", QEvent::WindowUnblocked, "@brief Enum constant QEvent::WindowUnblocked") +
    gsi::enum_const ("WindowStateChange", QEvent::WindowStateChange, "@brief Enum constant QEvent::WindowStateChange") +
    gsi::enum_const ("ToolTip", QEvent::ToolTip, "@brief Enum constant QEvent::ToolTip") +
    gsi::enum_const ("WhatsThis", QEvent::WhatsThis, "@brief Enum constant QEvent::WhatsThis") +
    gsi::enum_const ("StatusTip", QEvent::StatusTip, "@brief Enum constant QEvent::StatusTip") +
    gsi::enum_const ("ActionChanged", QEvent::ActionChanged, "@brief Enum constant QEvent::ActionChanged") +
    gsi::enum_const ("ActionAdded", QEvent::ActionAdded, "@brief Enum constant QEvent::ActionAdded") +
    gsi::enum_const ("ActionRemoved", QEvent::ActionRemoved, "@brief Enum constant QEvent::ActionRemoved") +
    gsi::enum_const ("FileOpen", QEvent::FileOpen, "@brief Enum constant QEvent::FileOpen") +
    gsi::enum_const ("Shortcut", QEvent::Shortcut, "@brief Enum constant QEvent::Shortcut") +
    gsi::enum_const ("ShortcutOverride", QEvent::ShortcutOverride, "@brief Enum constant QEvent::ShortcutOverride") +
    gsi::enum_const ("WhatsThisClicked", QEvent::WhatsThisClicked, "@brief Enum constant QEvent::WhatsThisClicked") +
    gsi::enum_const ("ToolBarChange", QEvent::ToolBarChange, "@brief Enum constant QEvent::ToolBarChange") +
    gsi::enum_const ("ApplicationActivate", QEvent::ApplicationActivate, "@brief Enum constant QEvent::ApplicationActivate") +
    gsi::enum_const ("ApplicationActivated", QEvent::ApplicationActivated, "@brief Enum constant QEvent::ApplicationActivated") +
    gsi::enum_const ("ApplicationDeactivate", QEvent::ApplicationDeactivate, "@brief Enum constant QEvent::ApplicationDeactivate") +
    gsi::enum_const ("ApplicationDeactivated", QEvent::ApplicationDeactivated, "@brief Enum constant QEvent::ApplicationDeactivated") +
    gsi::enum_const ("QueryWhatsThis", QEvent::QueryWhatsThis, "@brief Enum constant QEvent::QueryWhatsThis") +
    gsi::enum_const ("EnterWhatsThisMode", QEvent::EnterWhatsThisMode, "@brief Enum constant QEvent::EnterWhatsThisMode") +
    gsi::enum_const ("LeaveWhatsThisMode", QEvent::LeaveWhatsThisMode, "@brief Enum constant QEvent::LeaveWhatsThisMode") +
    gsi::enum_const ("ZOrderChange", QEvent::ZOrderChange, "@brief Enum constant QEvent::ZOrderChange") +
    gsi::enum_const ("HoverEnter", QEvent::HoverEnter, "@brief Enum constant QEvent::HoverEnter") +
    gsi::enum_const ("HoverLeave", QEvent::HoverLeave, "@brief Enum constant QEvent::HoverLeave") +
    gsi::enum_const ("HoverMove", QEvent::HoverMove, "@brief Enum constant QEvent::HoverMove") +
    gsi::enum_const ("AccessibilityHelp", QEvent::AccessibilityHelp, "@brief Enum constant QEvent::AccessibilityHelp") +
    gsi::enum_const ("AccessibilityDescription", QEvent::AccessibilityDescription, "@brief Enum constant QEvent::AccessibilityDescription") +
    gsi::enum_const ("AcceptDropsChange", QEvent::AcceptDropsChange, "@brief Enum constant QEvent::AcceptDropsChange") +
    gsi::enum_const ("MenubarUpdated", QEvent::MenubarUpdated, "@brief Enum constant QEvent::MenubarUpdated") +
    gsi::enum_const ("ZeroTimerEvent", QEvent::ZeroTimerEvent, "@brief Enum constant QEvent::ZeroTimerEvent") +
    gsi::enum_const ("GraphicsSceneMouseMove", QEvent::GraphicsSceneMouseMove, "@brief Enum constant QEvent::GraphicsSceneMouseMove") +
    gsi::enum_const ("GraphicsSceneMousePress", QEvent::GraphicsSceneMousePress, "@brief Enum constant QEvent::GraphicsSceneMousePress") +
    gsi::enum_const ("GraphicsSceneMouseRelease", QEvent::GraphicsSceneMouseRelease, "@brief Enum constant QEvent::GraphicsSceneMouseRelease") +
    gsi::enum_const ("GraphicsSceneMouseDoubleClick", QEvent::GraphicsSceneMouseDoubleClick, "@brief Enum constant QEvent::GraphicsSceneMouseDoubleClick") +
    gsi::enum_const ("GraphicsSceneContextMenu", QEvent::GraphicsSceneContextMenu, "@brief Enum constant QEvent::GraphicsSceneContextMenu") +
    gsi::enum_const ("GraphicsSceneHoverEnter", QEvent::GraphicsSceneHoverEnter, "@brief Enum constant QEvent::GraphicsSceneHoverEnter") +
    gsi::enum_const ("GraphicsSceneHoverMove", QEvent::GraphicsSceneHoverMove, "@brief Enum constant QEvent::GraphicsSceneHoverMove") +
    gsi::enum_const ("GraphicsSceneHoverLeave", QEvent::GraphicsSceneHoverLeave, "@brief Enum constant QEvent::GraphicsSceneHoverLeave") +
    gsi::enum_const ("GraphicsSceneHelp", QEvent::GraphicsSceneHelp, "@brief Enum constant QEvent::GraphicsSceneHelp") +
    gsi::enum_const ("GraphicsSceneDragEnter", QEvent::GraphicsSceneDragEnter, "@brief Enum constant QEvent::GraphicsSceneDragEnter") +
    gsi::enum_const ("GraphicsSceneDragMove", QEvent::GraphicsSceneDragMove, "@brief Enum constant QEvent::GraphicsSceneDragMove") +
    gsi::enum_const ("GraphicsSceneDragLeave", QEvent::GraphicsSceneDragLeave, "@brief Enum constant QEvent::GraphicsSceneDragLeave") +
    gsi::enum_const ("GraphicsSceneDrop", QEvent::GraphicsSceneDrop, "@brief Enum constant QEvent::GraphicsSceneDrop") +
    gsi::enum_const ("GraphicsSceneWheel", QEvent::GraphicsSceneWheel, "@brief Enum constant QEvent::GraphicsSceneWheel") +
    gsi::enum_const ("KeyboardLayoutChange", QEvent::KeyboardLayoutChange, "@brief Enum constant QEvent::KeyboardLayoutChange") +
    gsi::enum_const ("DynamicPropertyChange", QEvent::DynamicPropertyChange, "@brief Enum constant QEvent::DynamicPropertyChange") +
    gsi::enum_const ("TabletEnterProximity", QEvent::TabletEnterProximity, "@brief Enum constant QEvent::TabletEnterProximity") +
    gsi::enum_const ("TabletLeaveProximity", QEvent::TabletLeaveProximity, "@brief Enum constant QEvent::TabletLeaveProximity") +
    gsi::enum_const ("NonClientAreaMouseMove", QEvent::NonClientAreaMouseMove, "@brief Enum constant QEvent::NonClientAreaMouseMove") +
    gsi::enum_const ("NonClientAreaMouseButtonPress", QEvent::NonClientAreaMouseButtonPress, "@brief Enum constant QEvent::NonClientAreaMouseButtonPress") +
    gsi::enum_const ("NonClientAreaMouseButtonRelease", QEvent::NonClientAreaMouseButtonRelease, "@brief Enum constant QEvent::NonClientAreaMouseButtonRelease") +
    gsi::enum_const ("NonClientAreaMouseButtonDblClick", QEvent::NonClientAreaMouseButtonDblClick, "@brief Enum constant QEvent::NonClientAreaMouseButtonDblClick") +
    gsi::enum_const ("MacSizeChange", QEvent::MacSizeChange, "@brief Enum constant QEvent::MacSizeChange") +
    gsi::enum_const ("ContentsRectChange", QEvent::ContentsRectChange, "@brief Enum constant QEvent::ContentsRectChange") +
    gsi::enum_const ("MacGLWindowChange", QEvent::MacGLWindowChange, "@brief Enum constant QEvent::MacGLWindowChange") +
    gsi::enum_const ("FutureCallOut", QEvent::FutureCallOut, "@brief Enum constant QEvent::FutureCallOut") +
    gsi::enum_const ("GraphicsSceneResize", QEvent::GraphicsSceneResize, "@brief Enum constant QEvent::GraphicsSceneResize") +
    gsi::enum_const ("GraphicsSceneMove", QEvent::GraphicsSceneMove, "@brief Enum constant QEvent::GraphicsSceneMove") +
    gsi::enum_const ("CursorChange", QEvent::CursorChange, "@brief Enum constant QEvent::CursorChange") +
    gsi::enum_const ("ToolTipChange", QEvent::ToolTipChange, "@brief Enum constant QEvent::ToolTipChange") +
    gsi::enum_const ("NetworkReplyUpdated", QEvent::NetworkReplyUpdated, "@brief Enum constant QEvent::NetworkReplyUpdated") +
    gsi::enum_const ("GrabMouse", QEvent::GrabMouse, "@brief Enum constant QEvent::GrabMouse") +
    gsi::enum_const ("UngrabMouse", QEvent::UngrabMouse, "@brief Enum constant QEvent::UngrabMouse") +
    gsi::enum_const ("GrabKeyboard", QEvent::GrabKeyboard, "@brief Enum constant QEvent::GrabKeyboard") +
    gsi::enum_const ("UngrabKeyboard", QEvent::UngrabKeyboard, "@brief Enum constant QEvent::UngrabKeyboard") +
    gsi::enum_const ("MacGLClearDrawable", QEvent::MacGLClearDrawable, "@brief Enum constant QEvent::MacGLClearDrawable") +
    gsi::enum_const ("StateMachineSignal", QEvent::StateMachineSignal, "@brief Enum constant QEvent::StateMachineSignal") +
    gsi::enum_const ("StateMachineWrapped", QEvent::StateMachineWrapped, "@brief Enum constant QEvent::StateMachineWrapped") +
    gsi::enum_const ("TouchBegin", QEvent::TouchBegin, "@brief Enum constant QEvent::TouchBegin") +
    gsi::enum_const ("TouchUpdate", QEvent::TouchUpdate, "@brief Enum constant QEvent::TouchUpdate") +
    gsi::enum_const ("TouchEnd", QEvent::TouchEnd, "@brief Enum constant QEvent::TouchEnd") +
    gsi::enum_const ("NativeGesture", QEvent::NativeGesture, "@brief Enum constant QEvent::NativeGesture") +
    gsi::enum_const ("RequestSoftwareInputPanel", QEvent::RequestSoftwareInputPanel, "@brief Enum constant QEvent::RequestSoftwareInputPanel") +
    gsi::enum_const ("CloseSoftwareInputPanel", QEvent::CloseSoftwareInputPanel, "@brief Enum constant QEvent::CloseSoftwareInputPanel") +
    gsi::enum_const ("UpdateSoftKeys", QEvent::UpdateSoftKeys, "@brief Enum constant QEvent::UpdateSoftKeys") +
    gsi::enum_const ("WinIdChange", QEvent::WinIdChange, "@brief Enum constant QEvent::WinIdChange") +
    gsi::enum_const ("Gesture", QEvent::Gesture, "@brief Enum constant QEvent::Gesture") +
    gsi::enum_const ("GestureOverride", QEvent::GestureOverride, "@brief Enum constant QEvent::GestureOverride") +
    gsi::enum_const ("User", QEvent::User, "@brief Enum constant QEvent::User") +
    gsi::enum_const ("MaxUser", QEvent::MaxUser, "@brief Enum constant QEvent::MaxUser"),
  "@qt\n@brief This class represents the QEvent::Type enum");

static gsi::QFlagsClass<QEvent::Type > decl_QEvent_Type_Enums ("QtCore", "QEvent_QFlags_Type",
  "@qt\n@brief This class represents the QFlags<QEvent::Type> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QEvent> inject_QEvent_Type_Enum_in_parent (decl_QEvent_Type_Enum.defs ());
static gsi::ClassExt<QEvent> decl_QEvent_Type_Enum_as_child (decl_QEvent_Type_Enum, "Type");
static gsi::ClassExt<QEvent> decl_QEvent_Type_Enums_as_child (decl_QEvent_Type_Enums, "QFlags_Type");

}

