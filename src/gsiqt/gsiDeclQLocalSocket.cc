
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
*  @file gsiDeclQLocalSocket.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QLocalSocket>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QLocalSocket

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QLocalSocket::staticMetaObject);
}


//  Constructor QLocalSocket::QLocalSocket(QObject *parent)


static void _init_ctor_QLocalSocket_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QLocalSocket> ();
}

static void _call_ctor_QLocalSocket_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QLocalSocket *> (new QLocalSocket (arg1));
}


// void QLocalSocket::abort()


static void _init_f_abort_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_abort_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLocalSocket *)cls)->abort ();
}


// () const


static void _init_f_bytesAvailable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_bytesAvailable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QLocalSocket *)cls)->bytesAvailable ());
}


// () const


static void _init_f_bytesToWrite_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_bytesToWrite_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QLocalSocket *)cls)->bytesToWrite ());
}


// () const


static void _init_f_canReadLine_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_canReadLine_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLocalSocket *)cls)->canReadLine ());
}


// ()


static void _init_f_close_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_close_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLocalSocket *)cls)->close ();
}


// void QLocalSocket::connectToServer(const QString &name, QFlags<QIODevice::OpenModeFlag> openMode)


static void _init_f_connectToServer_5159 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("openMode", true, "QIODevice::ReadWrite");
  decl->add_arg<QFlags<QIODevice::OpenModeFlag> > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_connectToServer_5159 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  QFlags<QIODevice::OpenModeFlag> arg2 = args ? args.read<QFlags<QIODevice::OpenModeFlag> > (heap) : (QFlags<QIODevice::OpenModeFlag>)(QIODevice::ReadWrite);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLocalSocket *)cls)->connectToServer (arg1, arg2);
}


// void QLocalSocket::disconnectFromServer()


static void _init_f_disconnectFromServer_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_disconnectFromServer_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLocalSocket *)cls)->disconnectFromServer ();
}


// QLocalSocket::LocalSocketError QLocalSocket::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QLocalSocket::LocalSocketError>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QLocalSocket::LocalSocketError>::target_type > ((qt_gsi::Converter<QLocalSocket::LocalSocketError>::target_type)qt_gsi::CppToQtAdaptor<QLocalSocket::LocalSocketError>(((QLocalSocket *)cls)->error ()));
}


// bool QLocalSocket::flush()


static void _init_f_flush_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_flush_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLocalSocket *)cls)->flush ());
}


// QString QLocalSocket::fullServerName()


static void _init_f_fullServerName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fullServerName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QLocalSocket *)cls)->fullServerName ());
}


// () const


static void _init_f_isSequential_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSequential_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLocalSocket *)cls)->isSequential ());
}


// bool QLocalSocket::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLocalSocket *)cls)->isValid ());
}


// qint64 QLocalSocket::readBufferSize()


static void _init_f_readBufferSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_readBufferSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QLocalSocket *)cls)->readBufferSize ());
}


// QString QLocalSocket::serverName()


static void _init_f_serverName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_serverName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QLocalSocket *)cls)->serverName ());
}


// void QLocalSocket::setReadBufferSize(qint64 size)


static void _init_f_setReadBufferSize_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setReadBufferSize_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = args.read<qint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLocalSocket *)cls)->setReadBufferSize (arg1);
}


// bool QLocalSocket::setSocketDescriptor(quintptr socketDescriptor, QLocalSocket::LocalSocketState socketState, QFlags<QIODevice::OpenModeFlag> openMode)


static void _init_f_setSocketDescriptor_7727 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("socketDescriptor");
  decl->add_arg<quintptr > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("socketState", true, "QLocalSocket::ConnectedState");
  decl->add_arg<const qt_gsi::Converter<QLocalSocket::LocalSocketState>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("openMode", true, "QIODevice::ReadWrite");
  decl->add_arg<QFlags<QIODevice::OpenModeFlag> > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_setSocketDescriptor_7727 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quintptr arg1 = args.read<quintptr > (heap);
  const qt_gsi::Converter<QLocalSocket::LocalSocketState>::target_type & arg2 = args ? args.read<const qt_gsi::Converter<QLocalSocket::LocalSocketState>::target_type & > (heap) : (const qt_gsi::Converter<QLocalSocket::LocalSocketState>::target_type &)(qt_gsi::CppToQtReadAdaptor<QLocalSocket::LocalSocketState>(heap, QLocalSocket::ConnectedState));
  QFlags<QIODevice::OpenModeFlag> arg3 = args ? args.read<QFlags<QIODevice::OpenModeFlag> > (heap) : (QFlags<QIODevice::OpenModeFlag>)(QIODevice::ReadWrite);
  ret.write<bool > ((bool)((QLocalSocket *)cls)->setSocketDescriptor (arg1, qt_gsi::QtToCppAdaptor<QLocalSocket::LocalSocketState>(arg2).cref(), arg3));
}


// quintptr QLocalSocket::socketDescriptor()


static void _init_f_socketDescriptor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quintptr > ();
}

static void _call_f_socketDescriptor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quintptr > ((quintptr)((QLocalSocket *)cls)->socketDescriptor ());
}


// QLocalSocket::LocalSocketState QLocalSocket::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QLocalSocket::LocalSocketState>::target_type > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QLocalSocket::LocalSocketState>::target_type > ((qt_gsi::Converter<QLocalSocket::LocalSocketState>::target_type)qt_gsi::CppToQtAdaptor<QLocalSocket::LocalSocketState>(((QLocalSocket *)cls)->state ()));
}


// (int)


static void _init_f_waitForBytesWritten_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs", true, "30000");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_waitForBytesWritten_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(30000);
  ret.write<bool > ((bool)((QLocalSocket *)cls)->waitForBytesWritten (arg1));
}


// bool QLocalSocket::waitForConnected(int msecs)


static void _init_f_waitForConnected_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs", true, "30000");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_waitForConnected_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(30000);
  ret.write<bool > ((bool)((QLocalSocket *)cls)->waitForConnected (arg1));
}


// bool QLocalSocket::waitForDisconnected(int msecs)


static void _init_f_waitForDisconnected_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs", true, "30000");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_waitForDisconnected_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(30000);
  ret.write<bool > ((bool)((QLocalSocket *)cls)->waitForDisconnected (arg1));
}


// (int)


static void _init_f_waitForReadyRead_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs", true, "30000");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_waitForReadyRead_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? args.read<int > (heap) : (int)(30000);
  ret.write<bool > ((bool)((QLocalSocket *)cls)->waitForReadyRead (arg1));
}


// static QString QLocalSocket::tr(const char *s, const char *c)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QLocalSocket::tr (arg1, arg2));
}


// static QString QLocalSocket::tr(const char *s, const char *c, int n)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QLocalSocket::tr (arg1, arg2, arg3));
}


// static QString QLocalSocket::trUtf8(const char *s, const char *c)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QLocalSocket::trUtf8 (arg1, arg2));
}


// static QString QLocalSocket::trUtf8(const char *s, const char *c, int n)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QLocalSocket::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QLocalSocket () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLocalSocket::QLocalSocket(QObject *parent)\nThis method creates an object of class QLocalSocket.", &_init_ctor_QLocalSocket_1302, &_call_ctor_QLocalSocket_1302);
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("abort", "@brief Method void QLocalSocket::abort()\n", false, &_init_f_abort_0, &_call_f_abort_0);
  methods += new qt_gsi::GenericMethod ("bytesAvailable", "@brief Method () const\nThis is a reimplementation of QIODevice::bytesAvailable", true, &_init_f_bytesAvailable_c0, &_call_f_bytesAvailable_c0);
  methods += new qt_gsi::GenericMethod ("bytesToWrite", "@brief Method () const\nThis is a reimplementation of QIODevice::bytesToWrite", true, &_init_f_bytesToWrite_c0, &_call_f_bytesToWrite_c0);
  methods += new qt_gsi::GenericMethod ("canReadLine", "@brief Method () const\nThis is a reimplementation of QIODevice::canReadLine", true, &_init_f_canReadLine_c0, &_call_f_canReadLine_c0);
  methods += new qt_gsi::GenericMethod ("close", "@brief Method ()\nThis is a reimplementation of QIODevice::close", false, &_init_f_close_0, &_call_f_close_0);
  methods += new qt_gsi::GenericMethod ("connectToServer", "@brief Method void QLocalSocket::connectToServer(const QString &name, QFlags<QIODevice::OpenModeFlag> openMode)\n", false, &_init_f_connectToServer_5159, &_call_f_connectToServer_5159);
  methods += new qt_gsi::GenericMethod ("disconnectFromServer", "@brief Method void QLocalSocket::disconnectFromServer()\n", false, &_init_f_disconnectFromServer_0, &_call_f_disconnectFromServer_0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QLocalSocket::LocalSocketError QLocalSocket::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("flush", "@brief Method bool QLocalSocket::flush()\n", false, &_init_f_flush_0, &_call_f_flush_0);
  methods += new qt_gsi::GenericMethod ("fullServerName", "@brief Method QString QLocalSocket::fullServerName()\n", true, &_init_f_fullServerName_c0, &_call_f_fullServerName_c0);
  methods += new qt_gsi::GenericMethod ("isSequential?", "@brief Method () const\nThis is a reimplementation of QIODevice::isSequential", true, &_init_f_isSequential_c0, &_call_f_isSequential_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QLocalSocket::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":readBufferSize", "@brief Method qint64 QLocalSocket::readBufferSize()\n", true, &_init_f_readBufferSize_c0, &_call_f_readBufferSize_c0);
  methods += new qt_gsi::GenericMethod ("serverName", "@brief Method QString QLocalSocket::serverName()\n", true, &_init_f_serverName_c0, &_call_f_serverName_c0);
  methods += new qt_gsi::GenericMethod ("setReadBufferSize|readBufferSize=", "@brief Method void QLocalSocket::setReadBufferSize(qint64 size)\n", false, &_init_f_setReadBufferSize_986, &_call_f_setReadBufferSize_986);
  methods += new qt_gsi::GenericMethod ("setSocketDescriptor", "@brief Method bool QLocalSocket::setSocketDescriptor(quintptr socketDescriptor, QLocalSocket::LocalSocketState socketState, QFlags<QIODevice::OpenModeFlag> openMode)\n", false, &_init_f_setSocketDescriptor_7727, &_call_f_setSocketDescriptor_7727);
  methods += new qt_gsi::GenericMethod ("socketDescriptor", "@brief Method quintptr QLocalSocket::socketDescriptor()\n", true, &_init_f_socketDescriptor_c0, &_call_f_socketDescriptor_c0);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QLocalSocket::LocalSocketState QLocalSocket::state()\n", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("waitForBytesWritten", "@brief Method (int)\nThis is a reimplementation of QIODevice::waitForBytesWritten", false, &_init_f_waitForBytesWritten_767, &_call_f_waitForBytesWritten_767);
  methods += new qt_gsi::GenericMethod ("waitForConnected", "@brief Method bool QLocalSocket::waitForConnected(int msecs)\n", false, &_init_f_waitForConnected_767, &_call_f_waitForConnected_767);
  methods += new qt_gsi::GenericMethod ("waitForDisconnected", "@brief Method bool QLocalSocket::waitForDisconnected(int msecs)\n", false, &_init_f_waitForDisconnected_767, &_call_f_waitForDisconnected_767);
  methods += new qt_gsi::GenericMethod ("waitForReadyRead", "@brief Method (int)\nThis is a reimplementation of QIODevice::waitForReadyRead", false, &_init_f_waitForReadyRead_767, &_call_f_waitForReadyRead_767);
  methods += gsi::qt_signal ("aboutToClose()", "aboutToClose", "@brief Signal declaration for QLocalSocket::aboutToClose()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<qint64 > ("bytesWritten(qint64)", "bytesWritten", gsi::arg("bytes"), "@brief Signal declaration for QLocalSocket::bytesWritten(qint64 bytes)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("connected()", "connected", "@brief Signal declaration for QLocalSocket::connected()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QLocalSocket::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("disconnected()", "disconnected", "@brief Signal declaration for QLocalSocket::disconnected()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const qt_gsi::Converter<QLocalSocket::LocalSocketError>::target_type & > ("error(QLocalSocket::LocalSocketError)", "error_sig", gsi::arg("socketError"), "@brief Signal declaration for QLocalSocket::error(QLocalSocket::LocalSocketError socketError)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readChannelFinished()", "readChannelFinished", "@brief Signal declaration for QLocalSocket::readChannelFinished()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readyRead()", "readyRead", "@brief Signal declaration for QLocalSocket::readyRead()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const qt_gsi::Converter<QLocalSocket::LocalSocketState>::target_type & > ("stateChanged(QLocalSocket::LocalSocketState)", "stateChanged", gsi::arg("socketState"), "@brief Signal declaration for QLocalSocket::stateChanged(QLocalSocket::LocalSocketState socketState)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QLocalSocket::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QLocalSocket::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QLocalSocket::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QLocalSocket::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QIODevice> &qtdecl_QIODevice ();

qt_gsi::QtNativeClass<QLocalSocket> decl_QLocalSocket (qtdecl_QIODevice (), "QLocalSocket",
  methods_QLocalSocket (),
  "@qt\n@brief Binding of QLocalSocket");


GSIQT_PUBLIC gsi::Class<QLocalSocket> &qtdecl_QLocalSocket () { return decl_QLocalSocket; }

}


//  Implementation of the enum wrapper class for QLocalSocket::LocalSocketError
namespace qt_gsi
{

static gsi::Enum<QLocalSocket::LocalSocketError> decl_QLocalSocket_LocalSocketError_Enum ("QLocalSocket_LocalSocketError",
    gsi::enum_const ("ConnectionRefusedError", QLocalSocket::ConnectionRefusedError, "@brief Enum constant QLocalSocket::ConnectionRefusedError") +
    gsi::enum_const ("PeerClosedError", QLocalSocket::PeerClosedError, "@brief Enum constant QLocalSocket::PeerClosedError") +
    gsi::enum_const ("ServerNotFoundError", QLocalSocket::ServerNotFoundError, "@brief Enum constant QLocalSocket::ServerNotFoundError") +
    gsi::enum_const ("SocketAccessError", QLocalSocket::SocketAccessError, "@brief Enum constant QLocalSocket::SocketAccessError") +
    gsi::enum_const ("SocketResourceError", QLocalSocket::SocketResourceError, "@brief Enum constant QLocalSocket::SocketResourceError") +
    gsi::enum_const ("SocketTimeoutError", QLocalSocket::SocketTimeoutError, "@brief Enum constant QLocalSocket::SocketTimeoutError") +
    gsi::enum_const ("DatagramTooLargeError", QLocalSocket::DatagramTooLargeError, "@brief Enum constant QLocalSocket::DatagramTooLargeError") +
    gsi::enum_const ("ConnectionError", QLocalSocket::ConnectionError, "@brief Enum constant QLocalSocket::ConnectionError") +
    gsi::enum_const ("UnsupportedSocketOperationError", QLocalSocket::UnsupportedSocketOperationError, "@brief Enum constant QLocalSocket::UnsupportedSocketOperationError") +
    gsi::enum_const ("UnknownSocketError", QLocalSocket::UnknownSocketError, "@brief Enum constant QLocalSocket::UnknownSocketError"),
  "@qt\n@brief This class represents the QLocalSocket::LocalSocketError enum");

static gsi::QFlagsClass<QLocalSocket::LocalSocketError > decl_QLocalSocket_LocalSocketError_Enums ("QLocalSocket_QFlags_LocalSocketError",
  "@qt\n@brief This class represents the QFlags<QLocalSocket::LocalSocketError> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QLocalSocket> inject_QLocalSocket_LocalSocketError_Enum_in_parent (decl_QLocalSocket_LocalSocketError_Enum.defs ());
static gsi::ClassExt<QLocalSocket> decl_QLocalSocket_LocalSocketError_Enum_as_child (decl_QLocalSocket_LocalSocketError_Enum, "LocalSocketError");
static gsi::ClassExt<QLocalSocket> decl_QLocalSocket_LocalSocketError_Enums_as_child (decl_QLocalSocket_LocalSocketError_Enums, "QFlags_LocalSocketError");

}


//  Implementation of the enum wrapper class for QLocalSocket::LocalSocketState
namespace qt_gsi
{

static gsi::Enum<QLocalSocket::LocalSocketState> decl_QLocalSocket_LocalSocketState_Enum ("QLocalSocket_LocalSocketState",
    gsi::enum_const ("UnconnectedState", QLocalSocket::UnconnectedState, "@brief Enum constant QLocalSocket::UnconnectedState") +
    gsi::enum_const ("ConnectingState", QLocalSocket::ConnectingState, "@brief Enum constant QLocalSocket::ConnectingState") +
    gsi::enum_const ("ConnectedState", QLocalSocket::ConnectedState, "@brief Enum constant QLocalSocket::ConnectedState") +
    gsi::enum_const ("ClosingState", QLocalSocket::ClosingState, "@brief Enum constant QLocalSocket::ClosingState"),
  "@qt\n@brief This class represents the QLocalSocket::LocalSocketState enum");

static gsi::QFlagsClass<QLocalSocket::LocalSocketState > decl_QLocalSocket_LocalSocketState_Enums ("QLocalSocket_QFlags_LocalSocketState",
  "@qt\n@brief This class represents the QFlags<QLocalSocket::LocalSocketState> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QLocalSocket> inject_QLocalSocket_LocalSocketState_Enum_in_parent (decl_QLocalSocket_LocalSocketState_Enum.defs ());
static gsi::ClassExt<QLocalSocket> decl_QLocalSocket_LocalSocketState_Enum_as_child (decl_QLocalSocket_LocalSocketState_Enum, "LocalSocketState");
static gsi::ClassExt<QLocalSocket> decl_QLocalSocket_LocalSocketState_Enums_as_child (decl_QLocalSocket_LocalSocketState_Enums, "QFlags_LocalSocketState");

}

