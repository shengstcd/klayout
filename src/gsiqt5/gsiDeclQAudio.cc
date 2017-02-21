
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
*  @file gsiDeclQAudio.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudio>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// namespace QAudio

class QAudio_Namespace { };

namespace gsi
{
gsi::Class<QAudio_Namespace> decl_QAudio_Namespace ("QAudio",
  gsi::Methods(),
  "@qt\n@brief This class represents the QAudio namespace");
}


//  Implementation of the enum wrapper class for QAudio::Error
namespace qt_gsi
{

static gsi::Enum<QAudio::Error> decl_QAudio_Error_Enum ("QAudio_Error",
    gsi::enum_const ("NoError", QAudio::NoError, "@brief Enum constant QAudio::NoError") +
    gsi::enum_const ("OpenError", QAudio::OpenError, "@brief Enum constant QAudio::OpenError") +
    gsi::enum_const ("IOError", QAudio::IOError, "@brief Enum constant QAudio::IOError") +
    gsi::enum_const ("UnderrunError", QAudio::UnderrunError, "@brief Enum constant QAudio::UnderrunError") +
    gsi::enum_const ("FatalError", QAudio::FatalError, "@brief Enum constant QAudio::FatalError"),
  "@qt\n@brief This class represents the QAudio::Error enum");

static gsi::QFlagsClass<QAudio::Error > decl_QAudio_Error_Enums ("QAudio_QFlags_Error",
  "@qt\n@brief This class represents the QFlags<QAudio::Error> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAudio_Namespace> inject_QAudio_Error_Enum_in_parent (decl_QAudio_Error_Enum.defs ());
static gsi::ClassExt<QAudio_Namespace> decl_QAudio_Error_Enum_as_child (decl_QAudio_Error_Enum, "Error");
static gsi::ClassExt<QAudio_Namespace> decl_QAudio_Error_Enums_as_child (decl_QAudio_Error_Enums, "QFlags_Error");

}


//  Implementation of the enum wrapper class for QAudio::Mode
namespace qt_gsi
{

static gsi::Enum<QAudio::Mode> decl_QAudio_Mode_Enum ("QAudio_Mode",
    gsi::enum_const ("AudioInput", QAudio::AudioInput, "@brief Enum constant QAudio::AudioInput") +
    gsi::enum_const ("AudioOutput", QAudio::AudioOutput, "@brief Enum constant QAudio::AudioOutput"),
  "@qt\n@brief This class represents the QAudio::Mode enum");

static gsi::QFlagsClass<QAudio::Mode > decl_QAudio_Mode_Enums ("QAudio_QFlags_Mode",
  "@qt\n@brief This class represents the QFlags<QAudio::Mode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAudio_Namespace> inject_QAudio_Mode_Enum_in_parent (decl_QAudio_Mode_Enum.defs ());
static gsi::ClassExt<QAudio_Namespace> decl_QAudio_Mode_Enum_as_child (decl_QAudio_Mode_Enum, "Mode");
static gsi::ClassExt<QAudio_Namespace> decl_QAudio_Mode_Enums_as_child (decl_QAudio_Mode_Enums, "QFlags_Mode");

}


//  Implementation of the enum wrapper class for QAudio::State
namespace qt_gsi
{

static gsi::Enum<QAudio::State> decl_QAudio_State_Enum ("QAudio_State",
    gsi::enum_const ("ActiveState", QAudio::ActiveState, "@brief Enum constant QAudio::ActiveState") +
    gsi::enum_const ("SuspendedState", QAudio::SuspendedState, "@brief Enum constant QAudio::SuspendedState") +
    gsi::enum_const ("StoppedState", QAudio::StoppedState, "@brief Enum constant QAudio::StoppedState") +
    gsi::enum_const ("IdleState", QAudio::IdleState, "@brief Enum constant QAudio::IdleState"),
  "@qt\n@brief This class represents the QAudio::State enum");

static gsi::QFlagsClass<QAudio::State > decl_QAudio_State_Enums ("QAudio_QFlags_State",
  "@qt\n@brief This class represents the QFlags<QAudio::State> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAudio_Namespace> inject_QAudio_State_Enum_in_parent (decl_QAudio_State_Enum.defs ());
static gsi::ClassExt<QAudio_Namespace> decl_QAudio_State_Enum_as_child (decl_QAudio_State_Enum, "State");
static gsi::ClassExt<QAudio_Namespace> decl_QAudio_State_Enums_as_child (decl_QAudio_State_Enums, "QFlags_State");

}

