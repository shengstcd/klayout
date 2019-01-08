
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
*  @file gsiDeclQSslConfiguration.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSslConfiguration>
#include <QSslCertificate>
#include <QSslCipher>
#include <QSslEllipticCurve>
#include <QSslKey>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include "gsiDeclQtNetworkTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSslConfiguration

//  Constructor QSslConfiguration::QSslConfiguration()


static void _init_ctor_QSslConfiguration_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSslConfiguration> ();
}

static void _call_ctor_QSslConfiguration_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslConfiguration *> (new QSslConfiguration ());
}


//  Constructor QSslConfiguration::QSslConfiguration(const QSslConfiguration &other)


static void _init_ctor_QSslConfiguration_3068 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslConfiguration & > (argspec_0);
  decl->set_return_new<QSslConfiguration> ();
}

static void _call_ctor_QSslConfiguration_3068 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslConfiguration &arg1 = args.read<const QSslConfiguration & > (heap);
  ret.write<QSslConfiguration *> (new QSslConfiguration (arg1));
}


// QList<QByteArray> QSslConfiguration::allowedNextProtocols()


static void _init_f_allowedNextProtocols_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_allowedNextProtocols_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QSslConfiguration *)cls)->allowedNextProtocols ());
}


// QList<QSslCertificate> QSslConfiguration::caCertificates()


static void _init_f_caCertificates_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QSslCertificate> > ();
}

static void _call_f_caCertificates_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QSslCertificate> > ((QList<QSslCertificate>)((QSslConfiguration *)cls)->caCertificates ());
}


// QList<QSslCipher> QSslConfiguration::ciphers()


static void _init_f_ciphers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QSslCipher> > ();
}

static void _call_f_ciphers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QSslCipher> > ((QList<QSslCipher>)((QSslConfiguration *)cls)->ciphers ());
}


// QVector<QSslEllipticCurve> QSslConfiguration::ellipticCurves()


static void _init_f_ellipticCurves_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector<QSslEllipticCurve> > ();
}

static void _call_f_ellipticCurves_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector<QSslEllipticCurve> > ((QVector<QSslEllipticCurve>)((QSslConfiguration *)cls)->ellipticCurves ());
}


// bool QSslConfiguration::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSslConfiguration *)cls)->isNull ());
}


// QSslCertificate QSslConfiguration::localCertificate()


static void _init_f_localCertificate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSslCertificate > ();
}

static void _call_f_localCertificate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslCertificate > ((QSslCertificate)((QSslConfiguration *)cls)->localCertificate ());
}


// QList<QSslCertificate> QSslConfiguration::localCertificateChain()


static void _init_f_localCertificateChain_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QSslCertificate> > ();
}

static void _call_f_localCertificateChain_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QSslCertificate> > ((QList<QSslCertificate>)((QSslConfiguration *)cls)->localCertificateChain ());
}


// QByteArray QSslConfiguration::nextNegotiatedProtocol()


static void _init_f_nextNegotiatedProtocol_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_nextNegotiatedProtocol_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSslConfiguration *)cls)->nextNegotiatedProtocol ());
}


// QSslConfiguration::NextProtocolNegotiationStatus QSslConfiguration::nextProtocolNegotiationStatus()


static void _init_f_nextProtocolNegotiationStatus_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSslConfiguration::NextProtocolNegotiationStatus>::target_type > ();
}

static void _call_f_nextProtocolNegotiationStatus_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSslConfiguration::NextProtocolNegotiationStatus>::target_type > ((qt_gsi::Converter<QSslConfiguration::NextProtocolNegotiationStatus>::target_type)qt_gsi::CppToQtAdaptor<QSslConfiguration::NextProtocolNegotiationStatus>(((QSslConfiguration *)cls)->nextProtocolNegotiationStatus ()));
}


// bool QSslConfiguration::operator!=(const QSslConfiguration &other)


static void _init_f_operator_excl__eq__c3068 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslConfiguration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3068 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslConfiguration &arg1 = args.read<const QSslConfiguration & > (heap);
  ret.write<bool > ((bool)((QSslConfiguration *)cls)->operator!= (arg1));
}


// QSslConfiguration &QSslConfiguration::operator=(const QSslConfiguration &other)


static void _init_f_operator_eq__3068 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslConfiguration & > (argspec_0);
  decl->set_return<QSslConfiguration & > ();
}

static void _call_f_operator_eq__3068 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslConfiguration &arg1 = args.read<const QSslConfiguration & > (heap);
  ret.write<QSslConfiguration & > ((QSslConfiguration &)((QSslConfiguration *)cls)->operator= (arg1));
}


// bool QSslConfiguration::operator==(const QSslConfiguration &other)


static void _init_f_operator_eq__eq__c3068 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslConfiguration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3068 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslConfiguration &arg1 = args.read<const QSslConfiguration & > (heap);
  ret.write<bool > ((bool)((QSslConfiguration *)cls)->operator== (arg1));
}


// QSslCertificate QSslConfiguration::peerCertificate()


static void _init_f_peerCertificate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSslCertificate > ();
}

static void _call_f_peerCertificate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslCertificate > ((QSslCertificate)((QSslConfiguration *)cls)->peerCertificate ());
}


// QList<QSslCertificate> QSslConfiguration::peerCertificateChain()


static void _init_f_peerCertificateChain_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QSslCertificate> > ();
}

static void _call_f_peerCertificateChain_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QSslCertificate> > ((QList<QSslCertificate>)((QSslConfiguration *)cls)->peerCertificateChain ());
}


// int QSslConfiguration::peerVerifyDepth()


static void _init_f_peerVerifyDepth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_peerVerifyDepth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSslConfiguration *)cls)->peerVerifyDepth ());
}


// QSslSocket::PeerVerifyMode QSslConfiguration::peerVerifyMode()


static void _init_f_peerVerifyMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSslSocket::PeerVerifyMode>::target_type > ();
}

static void _call_f_peerVerifyMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSslSocket::PeerVerifyMode>::target_type > ((qt_gsi::Converter<QSslSocket::PeerVerifyMode>::target_type)qt_gsi::CppToQtAdaptor<QSslSocket::PeerVerifyMode>(((QSslConfiguration *)cls)->peerVerifyMode ()));
}


// QSslKey QSslConfiguration::privateKey()


static void _init_f_privateKey_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSslKey > ();
}

static void _call_f_privateKey_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslKey > ((QSslKey)((QSslConfiguration *)cls)->privateKey ());
}


// QSsl::SslProtocol QSslConfiguration::protocol()


static void _init_f_protocol_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSsl::SslProtocol>::target_type > ();
}

static void _call_f_protocol_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSsl::SslProtocol>::target_type > ((qt_gsi::Converter<QSsl::SslProtocol>::target_type)qt_gsi::CppToQtAdaptor<QSsl::SslProtocol>(((QSslConfiguration *)cls)->protocol ()));
}


// QSslCipher QSslConfiguration::sessionCipher()


static void _init_f_sessionCipher_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSslCipher > ();
}

static void _call_f_sessionCipher_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslCipher > ((QSslCipher)((QSslConfiguration *)cls)->sessionCipher ());
}


// QSsl::SslProtocol QSslConfiguration::sessionProtocol()


static void _init_f_sessionProtocol_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSsl::SslProtocol>::target_type > ();
}

static void _call_f_sessionProtocol_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSsl::SslProtocol>::target_type > ((qt_gsi::Converter<QSsl::SslProtocol>::target_type)qt_gsi::CppToQtAdaptor<QSsl::SslProtocol>(((QSslConfiguration *)cls)->sessionProtocol ()));
}


// QByteArray QSslConfiguration::sessionTicket()


static void _init_f_sessionTicket_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_sessionTicket_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSslConfiguration *)cls)->sessionTicket ());
}


// int QSslConfiguration::sessionTicketLifeTimeHint()


static void _init_f_sessionTicketLifeTimeHint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_sessionTicketLifeTimeHint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSslConfiguration *)cls)->sessionTicketLifeTimeHint ());
}


// void QSslConfiguration::setAllowedNextProtocols(QList<QByteArray> protocols)


static void _init_f_setAllowedNextProtocols_2047 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("protocols");
  decl->add_arg<QList<QByteArray> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAllowedNextProtocols_2047 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QList<QByteArray> arg1 = args.read<QList<QByteArray> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setAllowedNextProtocols (arg1);
}


// void QSslConfiguration::setCaCertificates(const QList<QSslCertificate> &certificates)


static void _init_f_setCaCertificates_3438 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("certificates");
  decl->add_arg<const QList<QSslCertificate> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCaCertificates_3438 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QSslCertificate> &arg1 = args.read<const QList<QSslCertificate> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setCaCertificates (arg1);
}


// void QSslConfiguration::setCiphers(const QList<QSslCipher> &ciphers)


static void _init_f_setCiphers_2918 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ciphers");
  decl->add_arg<const QList<QSslCipher> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCiphers_2918 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QSslCipher> &arg1 = args.read<const QList<QSslCipher> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setCiphers (arg1);
}


// void QSslConfiguration::setEllipticCurves(const QVector<QSslEllipticCurve> &curves)


static void _init_f_setEllipticCurves_3869 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("curves");
  decl->add_arg<const QVector<QSslEllipticCurve> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEllipticCurves_3869 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector<QSslEllipticCurve> &arg1 = args.read<const QVector<QSslEllipticCurve> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setEllipticCurves (arg1);
}


// void QSslConfiguration::setLocalCertificate(const QSslCertificate &certificate)


static void _init_f_setLocalCertificate_2823 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("certificate");
  decl->add_arg<const QSslCertificate & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLocalCertificate_2823 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslCertificate &arg1 = args.read<const QSslCertificate & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setLocalCertificate (arg1);
}


// void QSslConfiguration::setLocalCertificateChain(const QList<QSslCertificate> &localChain)


static void _init_f_setLocalCertificateChain_3438 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("localChain");
  decl->add_arg<const QList<QSslCertificate> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLocalCertificateChain_3438 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QSslCertificate> &arg1 = args.read<const QList<QSslCertificate> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setLocalCertificateChain (arg1);
}


// void QSslConfiguration::setPeerVerifyDepth(int depth)


static void _init_f_setPeerVerifyDepth_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("depth");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPeerVerifyDepth_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setPeerVerifyDepth (arg1);
}


// void QSslConfiguration::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode)


static void _init_f_setPeerVerifyMode_2970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QSslSocket::PeerVerifyMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPeerVerifyMode_2970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSslSocket::PeerVerifyMode>::target_type & arg1 = args.read<const qt_gsi::Converter<QSslSocket::PeerVerifyMode>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setPeerVerifyMode (qt_gsi::QtToCppAdaptor<QSslSocket::PeerVerifyMode>(arg1).cref());
}


// void QSslConfiguration::setPrivateKey(const QSslKey &key)


static void _init_f_setPrivateKey_1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QSslKey & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPrivateKey_1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslKey &arg1 = args.read<const QSslKey & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setPrivateKey (arg1);
}


// void QSslConfiguration::setProtocol(QSsl::SslProtocol protocol)


static void _init_f_setProtocol_2095 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("protocol");
  decl->add_arg<const qt_gsi::Converter<QSsl::SslProtocol>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setProtocol_2095 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSsl::SslProtocol>::target_type & arg1 = args.read<const qt_gsi::Converter<QSsl::SslProtocol>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setProtocol (qt_gsi::QtToCppAdaptor<QSsl::SslProtocol>(arg1).cref());
}


// void QSslConfiguration::setSessionTicket(const QByteArray &sessionTicket)


static void _init_f_setSessionTicket_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sessionTicket");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSessionTicket_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setSessionTicket (arg1);
}


// void QSslConfiguration::setSslOption(QSsl::SslOption option, bool on)


static void _init_f_setSslOption_2634 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const qt_gsi::Converter<QSsl::SslOption>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("on");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setSslOption_2634 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSsl::SslOption>::target_type & arg1 = args.read<const qt_gsi::Converter<QSsl::SslOption>::target_type & > (heap);
  bool arg2 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->setSslOption (qt_gsi::QtToCppAdaptor<QSsl::SslOption>(arg1).cref(), arg2);
}


// void QSslConfiguration::swap(QSslConfiguration &other)


static void _init_f_swap_2373 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QSslConfiguration & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2373 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSslConfiguration &arg1 = args.read<QSslConfiguration & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslConfiguration *)cls)->swap (arg1);
}


// bool QSslConfiguration::testSslOption(QSsl::SslOption option)


static void _init_f_testSslOption_c1878 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const qt_gsi::Converter<QSsl::SslOption>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_testSslOption_c1878 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSsl::SslOption>::target_type & arg1 = args.read<const qt_gsi::Converter<QSsl::SslOption>::target_type & > (heap);
  ret.write<bool > ((bool)((QSslConfiguration *)cls)->testSslOption (qt_gsi::QtToCppAdaptor<QSsl::SslOption>(arg1).cref()));
}


// static QSslConfiguration QSslConfiguration::defaultConfiguration()


static void _init_f_defaultConfiguration_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QSslConfiguration > ();
}

static void _call_f_defaultConfiguration_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslConfiguration > ((QSslConfiguration)QSslConfiguration::defaultConfiguration ());
}


// static void QSslConfiguration::setDefaultConfiguration(const QSslConfiguration &configuration)


static void _init_f_setDefaultConfiguration_3068 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("configuration");
  decl->add_arg<const QSslConfiguration & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDefaultConfiguration_3068 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslConfiguration &arg1 = args.read<const QSslConfiguration & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QSslConfiguration::setDefaultConfiguration (arg1);
}


// static QList<QSslCipher> QSslConfiguration::supportedCiphers()


static void _init_f_supportedCiphers_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QSslCipher> > ();
}

static void _call_f_supportedCiphers_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QSslCipher> > ((QList<QSslCipher>)QSslConfiguration::supportedCiphers ());
}


// static QVector<QSslEllipticCurve> QSslConfiguration::supportedEllipticCurves()


static void _init_f_supportedEllipticCurves_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QVector<QSslEllipticCurve> > ();
}

static void _call_f_supportedEllipticCurves_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector<QSslEllipticCurve> > ((QVector<QSslEllipticCurve>)QSslConfiguration::supportedEllipticCurves ());
}


// static QList<QSslCertificate> QSslConfiguration::systemCaCertificates()


static void _init_f_systemCaCertificates_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QSslCertificate> > ();
}

static void _call_f_systemCaCertificates_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QSslCertificate> > ((QList<QSslCertificate>)QSslConfiguration::systemCaCertificates ());
}



namespace gsi
{

static gsi::Methods methods_QSslConfiguration () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslConfiguration::QSslConfiguration()\nThis method creates an object of class QSslConfiguration.", &_init_ctor_QSslConfiguration_0, &_call_ctor_QSslConfiguration_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslConfiguration::QSslConfiguration(const QSslConfiguration &other)\nThis method creates an object of class QSslConfiguration.", &_init_ctor_QSslConfiguration_3068, &_call_ctor_QSslConfiguration_3068);
  methods += new qt_gsi::GenericMethod (":allowedNextProtocols", "@brief Method QList<QByteArray> QSslConfiguration::allowedNextProtocols()\n", true, &_init_f_allowedNextProtocols_c0, &_call_f_allowedNextProtocols_c0);
  methods += new qt_gsi::GenericMethod (":caCertificates", "@brief Method QList<QSslCertificate> QSslConfiguration::caCertificates()\n", true, &_init_f_caCertificates_c0, &_call_f_caCertificates_c0);
  methods += new qt_gsi::GenericMethod (":ciphers", "@brief Method QList<QSslCipher> QSslConfiguration::ciphers()\n", true, &_init_f_ciphers_c0, &_call_f_ciphers_c0);
  methods += new qt_gsi::GenericMethod (":ellipticCurves", "@brief Method QVector<QSslEllipticCurve> QSslConfiguration::ellipticCurves()\n", true, &_init_f_ellipticCurves_c0, &_call_f_ellipticCurves_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSslConfiguration::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod (":localCertificate", "@brief Method QSslCertificate QSslConfiguration::localCertificate()\n", true, &_init_f_localCertificate_c0, &_call_f_localCertificate_c0);
  methods += new qt_gsi::GenericMethod (":localCertificateChain", "@brief Method QList<QSslCertificate> QSslConfiguration::localCertificateChain()\n", true, &_init_f_localCertificateChain_c0, &_call_f_localCertificateChain_c0);
  methods += new qt_gsi::GenericMethod ("nextNegotiatedProtocol", "@brief Method QByteArray QSslConfiguration::nextNegotiatedProtocol()\n", true, &_init_f_nextNegotiatedProtocol_c0, &_call_f_nextNegotiatedProtocol_c0);
  methods += new qt_gsi::GenericMethod ("nextProtocolNegotiationStatus", "@brief Method QSslConfiguration::NextProtocolNegotiationStatus QSslConfiguration::nextProtocolNegotiationStatus()\n", true, &_init_f_nextProtocolNegotiationStatus_c0, &_call_f_nextProtocolNegotiationStatus_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QSslConfiguration::operator!=(const QSslConfiguration &other)\n", true, &_init_f_operator_excl__eq__c3068, &_call_f_operator_excl__eq__c3068);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSslConfiguration &QSslConfiguration::operator=(const QSslConfiguration &other)\n", false, &_init_f_operator_eq__3068, &_call_f_operator_eq__3068);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QSslConfiguration::operator==(const QSslConfiguration &other)\n", true, &_init_f_operator_eq__eq__c3068, &_call_f_operator_eq__eq__c3068);
  methods += new qt_gsi::GenericMethod ("peerCertificate", "@brief Method QSslCertificate QSslConfiguration::peerCertificate()\n", true, &_init_f_peerCertificate_c0, &_call_f_peerCertificate_c0);
  methods += new qt_gsi::GenericMethod ("peerCertificateChain", "@brief Method QList<QSslCertificate> QSslConfiguration::peerCertificateChain()\n", true, &_init_f_peerCertificateChain_c0, &_call_f_peerCertificateChain_c0);
  methods += new qt_gsi::GenericMethod (":peerVerifyDepth", "@brief Method int QSslConfiguration::peerVerifyDepth()\n", true, &_init_f_peerVerifyDepth_c0, &_call_f_peerVerifyDepth_c0);
  methods += new qt_gsi::GenericMethod (":peerVerifyMode", "@brief Method QSslSocket::PeerVerifyMode QSslConfiguration::peerVerifyMode()\n", true, &_init_f_peerVerifyMode_c0, &_call_f_peerVerifyMode_c0);
  methods += new qt_gsi::GenericMethod (":privateKey", "@brief Method QSslKey QSslConfiguration::privateKey()\n", true, &_init_f_privateKey_c0, &_call_f_privateKey_c0);
  methods += new qt_gsi::GenericMethod (":protocol", "@brief Method QSsl::SslProtocol QSslConfiguration::protocol()\n", true, &_init_f_protocol_c0, &_call_f_protocol_c0);
  methods += new qt_gsi::GenericMethod ("sessionCipher", "@brief Method QSslCipher QSslConfiguration::sessionCipher()\n", true, &_init_f_sessionCipher_c0, &_call_f_sessionCipher_c0);
  methods += new qt_gsi::GenericMethod ("sessionProtocol", "@brief Method QSsl::SslProtocol QSslConfiguration::sessionProtocol()\n", true, &_init_f_sessionProtocol_c0, &_call_f_sessionProtocol_c0);
  methods += new qt_gsi::GenericMethod (":sessionTicket", "@brief Method QByteArray QSslConfiguration::sessionTicket()\n", true, &_init_f_sessionTicket_c0, &_call_f_sessionTicket_c0);
  methods += new qt_gsi::GenericMethod ("sessionTicketLifeTimeHint", "@brief Method int QSslConfiguration::sessionTicketLifeTimeHint()\n", true, &_init_f_sessionTicketLifeTimeHint_c0, &_call_f_sessionTicketLifeTimeHint_c0);
  methods += new qt_gsi::GenericMethod ("setAllowedNextProtocols|allowedNextProtocols=", "@brief Method void QSslConfiguration::setAllowedNextProtocols(QList<QByteArray> protocols)\n", false, &_init_f_setAllowedNextProtocols_2047, &_call_f_setAllowedNextProtocols_2047);
  methods += new qt_gsi::GenericMethod ("setCaCertificates|caCertificates=", "@brief Method void QSslConfiguration::setCaCertificates(const QList<QSslCertificate> &certificates)\n", false, &_init_f_setCaCertificates_3438, &_call_f_setCaCertificates_3438);
  methods += new qt_gsi::GenericMethod ("setCiphers|ciphers=", "@brief Method void QSslConfiguration::setCiphers(const QList<QSslCipher> &ciphers)\n", false, &_init_f_setCiphers_2918, &_call_f_setCiphers_2918);
  methods += new qt_gsi::GenericMethod ("setEllipticCurves|ellipticCurves=", "@brief Method void QSslConfiguration::setEllipticCurves(const QVector<QSslEllipticCurve> &curves)\n", false, &_init_f_setEllipticCurves_3869, &_call_f_setEllipticCurves_3869);
  methods += new qt_gsi::GenericMethod ("setLocalCertificate|localCertificate=", "@brief Method void QSslConfiguration::setLocalCertificate(const QSslCertificate &certificate)\n", false, &_init_f_setLocalCertificate_2823, &_call_f_setLocalCertificate_2823);
  methods += new qt_gsi::GenericMethod ("setLocalCertificateChain|localCertificateChain=", "@brief Method void QSslConfiguration::setLocalCertificateChain(const QList<QSslCertificate> &localChain)\n", false, &_init_f_setLocalCertificateChain_3438, &_call_f_setLocalCertificateChain_3438);
  methods += new qt_gsi::GenericMethod ("setPeerVerifyDepth|peerVerifyDepth=", "@brief Method void QSslConfiguration::setPeerVerifyDepth(int depth)\n", false, &_init_f_setPeerVerifyDepth_767, &_call_f_setPeerVerifyDepth_767);
  methods += new qt_gsi::GenericMethod ("setPeerVerifyMode|peerVerifyMode=", "@brief Method void QSslConfiguration::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode)\n", false, &_init_f_setPeerVerifyMode_2970, &_call_f_setPeerVerifyMode_2970);
  methods += new qt_gsi::GenericMethod ("setPrivateKey|privateKey=", "@brief Method void QSslConfiguration::setPrivateKey(const QSslKey &key)\n", false, &_init_f_setPrivateKey_1997, &_call_f_setPrivateKey_1997);
  methods += new qt_gsi::GenericMethod ("setProtocol|protocol=", "@brief Method void QSslConfiguration::setProtocol(QSsl::SslProtocol protocol)\n", false, &_init_f_setProtocol_2095, &_call_f_setProtocol_2095);
  methods += new qt_gsi::GenericMethod ("setSessionTicket|sessionTicket=", "@brief Method void QSslConfiguration::setSessionTicket(const QByteArray &sessionTicket)\n", false, &_init_f_setSessionTicket_2309, &_call_f_setSessionTicket_2309);
  methods += new qt_gsi::GenericMethod ("setSslOption", "@brief Method void QSslConfiguration::setSslOption(QSsl::SslOption option, bool on)\n", false, &_init_f_setSslOption_2634, &_call_f_setSslOption_2634);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QSslConfiguration::swap(QSslConfiguration &other)\n", false, &_init_f_swap_2373, &_call_f_swap_2373);
  methods += new qt_gsi::GenericMethod ("testSslOption", "@brief Method bool QSslConfiguration::testSslOption(QSsl::SslOption option)\n", true, &_init_f_testSslOption_c1878, &_call_f_testSslOption_c1878);
  methods += new qt_gsi::GenericStaticMethod (":defaultConfiguration", "@brief Static method QSslConfiguration QSslConfiguration::defaultConfiguration()\nThis method is static and can be called without an instance.", &_init_f_defaultConfiguration_0, &_call_f_defaultConfiguration_0);
  methods += new qt_gsi::GenericStaticMethod ("setDefaultConfiguration|defaultConfiguration=", "@brief Static method void QSslConfiguration::setDefaultConfiguration(const QSslConfiguration &configuration)\nThis method is static and can be called without an instance.", &_init_f_setDefaultConfiguration_3068, &_call_f_setDefaultConfiguration_3068);
  methods += new qt_gsi::GenericStaticMethod ("supportedCiphers", "@brief Static method QList<QSslCipher> QSslConfiguration::supportedCiphers()\nThis method is static and can be called without an instance.", &_init_f_supportedCiphers_0, &_call_f_supportedCiphers_0);
  methods += new qt_gsi::GenericStaticMethod ("supportedEllipticCurves", "@brief Static method QVector<QSslEllipticCurve> QSslConfiguration::supportedEllipticCurves()\nThis method is static and can be called without an instance.", &_init_f_supportedEllipticCurves_0, &_call_f_supportedEllipticCurves_0);
  methods += new qt_gsi::GenericStaticMethod ("systemCaCertificates", "@brief Static method QList<QSslCertificate> QSslConfiguration::systemCaCertificates()\nThis method is static and can be called without an instance.", &_init_f_systemCaCertificates_0, &_call_f_systemCaCertificates_0);
  return methods;
}

gsi::Class<QSslConfiguration> decl_QSslConfiguration ("QtNetwork", "QSslConfiguration",
  methods_QSslConfiguration (),
  "@qt\n@brief Binding of QSslConfiguration");


GSI_QTNETWORK_PUBLIC gsi::Class<QSslConfiguration> &qtdecl_QSslConfiguration () { return decl_QSslConfiguration; }

}


//  Implementation of the enum wrapper class for QSslConfiguration::NextProtocolNegotiationStatus
namespace qt_gsi
{

static gsi::Enum<QSslConfiguration::NextProtocolNegotiationStatus> decl_QSslConfiguration_NextProtocolNegotiationStatus_Enum ("QtNetwork", "QSslConfiguration_NextProtocolNegotiationStatus",
    gsi::enum_const ("NextProtocolNegotiationNone", QSslConfiguration::NextProtocolNegotiationNone, "@brief Enum constant QSslConfiguration::NextProtocolNegotiationNone") +
    gsi::enum_const ("NextProtocolNegotiationNegotiated", QSslConfiguration::NextProtocolNegotiationNegotiated, "@brief Enum constant QSslConfiguration::NextProtocolNegotiationNegotiated") +
    gsi::enum_const ("NextProtocolNegotiationUnsupported", QSslConfiguration::NextProtocolNegotiationUnsupported, "@brief Enum constant QSslConfiguration::NextProtocolNegotiationUnsupported"),
  "@qt\n@brief This class represents the QSslConfiguration::NextProtocolNegotiationStatus enum");

static gsi::QFlagsClass<QSslConfiguration::NextProtocolNegotiationStatus > decl_QSslConfiguration_NextProtocolNegotiationStatus_Enums ("QtNetwork", "QSslConfiguration_QFlags_NextProtocolNegotiationStatus",
  "@qt\n@brief This class represents the QFlags<QSslConfiguration::NextProtocolNegotiationStatus> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSslConfiguration> inject_QSslConfiguration_NextProtocolNegotiationStatus_Enum_in_parent (decl_QSslConfiguration_NextProtocolNegotiationStatus_Enum.defs ());
static gsi::ClassExt<QSslConfiguration> decl_QSslConfiguration_NextProtocolNegotiationStatus_Enum_as_child (decl_QSslConfiguration_NextProtocolNegotiationStatus_Enum, "NextProtocolNegotiationStatus");
static gsi::ClassExt<QSslConfiguration> decl_QSslConfiguration_NextProtocolNegotiationStatus_Enums_as_child (decl_QSslConfiguration_NextProtocolNegotiationStatus_Enums, "QFlags_NextProtocolNegotiationStatus");

}

