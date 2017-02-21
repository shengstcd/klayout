
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
*  @file gsiDeclQPageLayout.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPageLayout>
#include <QMargins>
#include <QMarginsF>
#include <QPageSize>
#include <QRect>
#include <QRectF>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPageLayout

//  Constructor QPageLayout::QPageLayout()


static void _init_ctor_QPageLayout_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPageLayout> ();
}

static void _call_ctor_QPageLayout_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPageLayout *> (new QPageLayout ());
}


//  Constructor QPageLayout::QPageLayout(const QPageSize &pageSize, QPageLayout::Orientation orientation, const QMarginsF &margins, QPageLayout::Unit units, const QMarginsF &minMargins)


static void _init_ctor_QPageLayout_11008 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pageSize");
  decl->add_arg<const QPageSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("orientation");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Orientation>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("margins");
  decl->add_arg<const QMarginsF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("units", true, "QPageLayout::Point");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("minMargins", true, "QMarginsF(0, 0, 0, 0)");
  decl->add_arg<const QMarginsF & > (argspec_4);
  decl->set_return_new<QPageLayout> ();
}

static void _call_ctor_QPageLayout_11008 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageSize &arg1 = args.read<const QPageSize & > (heap);
  const qt_gsi::Converter<QPageLayout::Orientation>::target_type & arg2 = args.read<const qt_gsi::Converter<QPageLayout::Orientation>::target_type & > (heap);
  const QMarginsF &arg3 = args.read<const QMarginsF & > (heap);
  const qt_gsi::Converter<QPageLayout::Unit>::target_type & arg4 = args ? args.read<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (heap) : (const qt_gsi::Converter<QPageLayout::Unit>::target_type &)(qt_gsi::CppToQtReadAdaptor<QPageLayout::Unit>(heap, QPageLayout::Point));
  const QMarginsF &arg5 = args ? args.read<const QMarginsF & > (heap) : (const QMarginsF &)(QMarginsF(0, 0, 0, 0));
  ret.write<QPageLayout *> (new QPageLayout (arg1, qt_gsi::QtToCppAdaptor<QPageLayout::Orientation>(arg2).cref(), arg3, qt_gsi::QtToCppAdaptor<QPageLayout::Unit>(arg4).cref(), arg5));
}


//  Constructor QPageLayout::QPageLayout(const QPageLayout &other)


static void _init_ctor_QPageLayout_2413 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QPageLayout & > (argspec_0);
  decl->set_return_new<QPageLayout> ();
}

static void _call_ctor_QPageLayout_2413 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageLayout &arg1 = args.read<const QPageLayout & > (heap);
  ret.write<QPageLayout *> (new QPageLayout (arg1));
}


// QRectF QPageLayout::fullRect()


static void _init_f_fullRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_fullRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QPageLayout *)cls)->fullRect ());
}


// QRectF QPageLayout::fullRect(QPageLayout::Unit units)


static void _init_f_fullRect_c2068 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("units");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (argspec_0);
  decl->set_return<QRectF > ();
}

static void _call_f_fullRect_c2068 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageLayout::Unit>::target_type & arg1 = args.read<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (heap);
  ret.write<QRectF > ((QRectF)((QPageLayout *)cls)->fullRect (qt_gsi::QtToCppAdaptor<QPageLayout::Unit>(arg1).cref()));
}


// QRect QPageLayout::fullRectPixels(int resolution)


static void _init_f_fullRectPixels_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("resolution");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_f_fullRectPixels_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QRect > ((QRect)((QPageLayout *)cls)->fullRectPixels (arg1));
}


// QRect QPageLayout::fullRectPoints()


static void _init_f_fullRectPoints_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_fullRectPoints_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QPageLayout *)cls)->fullRectPoints ());
}


// bool QPageLayout::isEquivalentTo(const QPageLayout &other)


static void _init_f_isEquivalentTo_c2413 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QPageLayout & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isEquivalentTo_c2413 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageLayout &arg1 = args.read<const QPageLayout & > (heap);
  ret.write<bool > ((bool)((QPageLayout *)cls)->isEquivalentTo (arg1));
}


// bool QPageLayout::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPageLayout *)cls)->isValid ());
}


// QMarginsF QPageLayout::margins()


static void _init_f_margins_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMarginsF > ();
}

static void _call_f_margins_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMarginsF > ((QMarginsF)((QPageLayout *)cls)->margins ());
}


// QMarginsF QPageLayout::margins(QPageLayout::Unit units)


static void _init_f_margins_c2068 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("units");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (argspec_0);
  decl->set_return<QMarginsF > ();
}

static void _call_f_margins_c2068 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageLayout::Unit>::target_type & arg1 = args.read<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (heap);
  ret.write<QMarginsF > ((QMarginsF)((QPageLayout *)cls)->margins (qt_gsi::QtToCppAdaptor<QPageLayout::Unit>(arg1).cref()));
}


// QMargins QPageLayout::marginsPixels(int resolution)


static void _init_f_marginsPixels_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("resolution");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QMargins > ();
}

static void _call_f_marginsPixels_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QMargins > ((QMargins)((QPageLayout *)cls)->marginsPixels (arg1));
}


// QMargins QPageLayout::marginsPoints()


static void _init_f_marginsPoints_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMargins > ();
}

static void _call_f_marginsPoints_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMargins > ((QMargins)((QPageLayout *)cls)->marginsPoints ());
}


// QMarginsF QPageLayout::maximumMargins()


static void _init_f_maximumMargins_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMarginsF > ();
}

static void _call_f_maximumMargins_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMarginsF > ((QMarginsF)((QPageLayout *)cls)->maximumMargins ());
}


// QMarginsF QPageLayout::minimumMargins()


static void _init_f_minimumMargins_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMarginsF > ();
}

static void _call_f_minimumMargins_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMarginsF > ((QMarginsF)((QPageLayout *)cls)->minimumMargins ());
}


// QPageLayout::Mode QPageLayout::mode()


static void _init_f_mode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPageLayout::Mode>::target_type > ();
}

static void _call_f_mode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPageLayout::Mode>::target_type > ((qt_gsi::Converter<QPageLayout::Mode>::target_type)qt_gsi::CppToQtAdaptor<QPageLayout::Mode>(((QPageLayout *)cls)->mode ()));
}


// QPageLayout &QPageLayout::operator=(const QPageLayout &other)


static void _init_f_operator_eq__2413 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QPageLayout & > (argspec_0);
  decl->set_return<QPageLayout & > ();
}

static void _call_f_operator_eq__2413 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageLayout &arg1 = args.read<const QPageLayout & > (heap);
  ret.write<QPageLayout & > ((QPageLayout &)((QPageLayout *)cls)->operator= (arg1));
}


// QPageLayout::Orientation QPageLayout::orientation()


static void _init_f_orientation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPageLayout::Orientation>::target_type > ();
}

static void _call_f_orientation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPageLayout::Orientation>::target_type > ((qt_gsi::Converter<QPageLayout::Orientation>::target_type)qt_gsi::CppToQtAdaptor<QPageLayout::Orientation>(((QPageLayout *)cls)->orientation ()));
}


// QPageSize QPageLayout::pageSize()


static void _init_f_pageSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPageSize > ();
}

static void _call_f_pageSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPageSize > ((QPageSize)((QPageLayout *)cls)->pageSize ());
}


// QRectF QPageLayout::paintRect()


static void _init_f_paintRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_paintRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QPageLayout *)cls)->paintRect ());
}


// QRectF QPageLayout::paintRect(QPageLayout::Unit units)


static void _init_f_paintRect_c2068 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("units");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (argspec_0);
  decl->set_return<QRectF > ();
}

static void _call_f_paintRect_c2068 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageLayout::Unit>::target_type & arg1 = args.read<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (heap);
  ret.write<QRectF > ((QRectF)((QPageLayout *)cls)->paintRect (qt_gsi::QtToCppAdaptor<QPageLayout::Unit>(arg1).cref()));
}


// QRect QPageLayout::paintRectPixels(int resolution)


static void _init_f_paintRectPixels_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("resolution");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_f_paintRectPixels_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QRect > ((QRect)((QPageLayout *)cls)->paintRectPixels (arg1));
}


// QRect QPageLayout::paintRectPoints()


static void _init_f_paintRectPoints_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_paintRectPoints_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QPageLayout *)cls)->paintRectPoints ());
}


// bool QPageLayout::setBottomMargin(double bottomMargin)


static void _init_f_setBottomMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottomMargin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setBottomMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  ret.write<bool > ((bool)((QPageLayout *)cls)->setBottomMargin (arg1));
}


// bool QPageLayout::setLeftMargin(double leftMargin)


static void _init_f_setLeftMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("leftMargin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setLeftMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  ret.write<bool > ((bool)((QPageLayout *)cls)->setLeftMargin (arg1));
}


// bool QPageLayout::setMargins(const QMarginsF &margins)


static void _init_f_setMargins_2185 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margins");
  decl->add_arg<const QMarginsF & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setMargins_2185 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMarginsF &arg1 = args.read<const QMarginsF & > (heap);
  ret.write<bool > ((bool)((QPageLayout *)cls)->setMargins (arg1));
}


// void QPageLayout::setMinimumMargins(const QMarginsF &minMargins)


static void _init_f_setMinimumMargins_2185 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("minMargins");
  decl->add_arg<const QMarginsF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMinimumMargins_2185 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMarginsF &arg1 = args.read<const QMarginsF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageLayout *)cls)->setMinimumMargins (arg1);
}


// void QPageLayout::setMode(QPageLayout::Mode mode)


static void _init_f_setMode_2041 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Mode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMode_2041 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageLayout::Mode>::target_type & arg1 = args.read<const qt_gsi::Converter<QPageLayout::Mode>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageLayout *)cls)->setMode (qt_gsi::QtToCppAdaptor<QPageLayout::Mode>(arg1).cref());
}


// void QPageLayout::setOrientation(QPageLayout::Orientation orientation)


static void _init_f_setOrientation_2816 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("orientation");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Orientation>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOrientation_2816 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageLayout::Orientation>::target_type & arg1 = args.read<const qt_gsi::Converter<QPageLayout::Orientation>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageLayout *)cls)->setOrientation (qt_gsi::QtToCppAdaptor<QPageLayout::Orientation>(arg1).cref());
}


// void QPageLayout::setPageSize(const QPageSize &pageSize, const QMarginsF &minMargins)


static void _init_f_setPageSize_4263 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pageSize");
  decl->add_arg<const QPageSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("minMargins", true, "QMarginsF(0, 0, 0, 0)");
  decl->add_arg<const QMarginsF & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setPageSize_4263 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageSize &arg1 = args.read<const QPageSize & > (heap);
  const QMarginsF &arg2 = args ? args.read<const QMarginsF & > (heap) : (const QMarginsF &)(QMarginsF(0, 0, 0, 0));
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageLayout *)cls)->setPageSize (arg1, arg2);
}


// bool QPageLayout::setRightMargin(double rightMargin)


static void _init_f_setRightMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rightMargin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setRightMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  ret.write<bool > ((bool)((QPageLayout *)cls)->setRightMargin (arg1));
}


// bool QPageLayout::setTopMargin(double topMargin)


static void _init_f_setTopMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("topMargin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setTopMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  ret.write<bool > ((bool)((QPageLayout *)cls)->setTopMargin (arg1));
}


// void QPageLayout::setUnits(QPageLayout::Unit units)


static void _init_f_setUnits_2068 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("units");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUnits_2068 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageLayout::Unit>::target_type & arg1 = args.read<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageLayout *)cls)->setUnits (qt_gsi::QtToCppAdaptor<QPageLayout::Unit>(arg1).cref());
}


// void QPageLayout::swap(QPageLayout &other)


static void _init_f_swap_1718 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QPageLayout & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1718 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPageLayout &arg1 = args.read<QPageLayout & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageLayout *)cls)->swap (arg1);
}


// QPageLayout::Unit QPageLayout::units()


static void _init_f_units_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPageLayout::Unit>::target_type > ();
}

static void _call_f_units_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPageLayout::Unit>::target_type > ((qt_gsi::Converter<QPageLayout::Unit>::target_type)qt_gsi::CppToQtAdaptor<QPageLayout::Unit>(((QPageLayout *)cls)->units ()));
}


//  bool ::operator==(const QPageLayout &lhs, const QPageLayout &rhs)
static bool op_QPageLayout_operator_eq__eq__4718(const QPageLayout *_self, const QPageLayout &rhs) {
  return ::operator==(*_self, rhs);
}

//  bool ::operator!=(const QPageLayout &lhs, const QPageLayout &rhs)
static bool op_QPageLayout_operator_excl__eq__4718(const QPageLayout *_self, const QPageLayout &rhs) {
  return ::operator!=(*_self, rhs);
}


namespace gsi
{

static gsi::Methods methods_QPageLayout () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPageLayout::QPageLayout()\nThis method creates an object of class QPageLayout.", &_init_ctor_QPageLayout_0, &_call_ctor_QPageLayout_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPageLayout::QPageLayout(const QPageSize &pageSize, QPageLayout::Orientation orientation, const QMarginsF &margins, QPageLayout::Unit units, const QMarginsF &minMargins)\nThis method creates an object of class QPageLayout.", &_init_ctor_QPageLayout_11008, &_call_ctor_QPageLayout_11008);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPageLayout::QPageLayout(const QPageLayout &other)\nThis method creates an object of class QPageLayout.", &_init_ctor_QPageLayout_2413, &_call_ctor_QPageLayout_2413);
  methods += new qt_gsi::GenericMethod ("fullRect", "@brief Method QRectF QPageLayout::fullRect()\n", true, &_init_f_fullRect_c0, &_call_f_fullRect_c0);
  methods += new qt_gsi::GenericMethod ("fullRect", "@brief Method QRectF QPageLayout::fullRect(QPageLayout::Unit units)\n", true, &_init_f_fullRect_c2068, &_call_f_fullRect_c2068);
  methods += new qt_gsi::GenericMethod ("fullRectPixels", "@brief Method QRect QPageLayout::fullRectPixels(int resolution)\n", true, &_init_f_fullRectPixels_c767, &_call_f_fullRectPixels_c767);
  methods += new qt_gsi::GenericMethod ("fullRectPoints", "@brief Method QRect QPageLayout::fullRectPoints()\n", true, &_init_f_fullRectPoints_c0, &_call_f_fullRectPoints_c0);
  methods += new qt_gsi::GenericMethod ("isEquivalentTo?", "@brief Method bool QPageLayout::isEquivalentTo(const QPageLayout &other)\n", true, &_init_f_isEquivalentTo_c2413, &_call_f_isEquivalentTo_c2413);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QPageLayout::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("margins", "@brief Method QMarginsF QPageLayout::margins()\n", true, &_init_f_margins_c0, &_call_f_margins_c0);
  methods += new qt_gsi::GenericMethod ("margins", "@brief Method QMarginsF QPageLayout::margins(QPageLayout::Unit units)\n", true, &_init_f_margins_c2068, &_call_f_margins_c2068);
  methods += new qt_gsi::GenericMethod ("marginsPixels", "@brief Method QMargins QPageLayout::marginsPixels(int resolution)\n", true, &_init_f_marginsPixels_c767, &_call_f_marginsPixels_c767);
  methods += new qt_gsi::GenericMethod ("marginsPoints", "@brief Method QMargins QPageLayout::marginsPoints()\n", true, &_init_f_marginsPoints_c0, &_call_f_marginsPoints_c0);
  methods += new qt_gsi::GenericMethod ("maximumMargins", "@brief Method QMarginsF QPageLayout::maximumMargins()\n", true, &_init_f_maximumMargins_c0, &_call_f_maximumMargins_c0);
  methods += new qt_gsi::GenericMethod (":minimumMargins", "@brief Method QMarginsF QPageLayout::minimumMargins()\n", true, &_init_f_minimumMargins_c0, &_call_f_minimumMargins_c0);
  methods += new qt_gsi::GenericMethod (":mode", "@brief Method QPageLayout::Mode QPageLayout::mode()\n", true, &_init_f_mode_c0, &_call_f_mode_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QPageLayout &QPageLayout::operator=(const QPageLayout &other)\n", false, &_init_f_operator_eq__2413, &_call_f_operator_eq__2413);
  methods += new qt_gsi::GenericMethod (":orientation", "@brief Method QPageLayout::Orientation QPageLayout::orientation()\n", true, &_init_f_orientation_c0, &_call_f_orientation_c0);
  methods += new qt_gsi::GenericMethod (":pageSize", "@brief Method QPageSize QPageLayout::pageSize()\n", true, &_init_f_pageSize_c0, &_call_f_pageSize_c0);
  methods += new qt_gsi::GenericMethod ("paintRect", "@brief Method QRectF QPageLayout::paintRect()\n", true, &_init_f_paintRect_c0, &_call_f_paintRect_c0);
  methods += new qt_gsi::GenericMethod ("paintRect", "@brief Method QRectF QPageLayout::paintRect(QPageLayout::Unit units)\n", true, &_init_f_paintRect_c2068, &_call_f_paintRect_c2068);
  methods += new qt_gsi::GenericMethod ("paintRectPixels", "@brief Method QRect QPageLayout::paintRectPixels(int resolution)\n", true, &_init_f_paintRectPixels_c767, &_call_f_paintRectPixels_c767);
  methods += new qt_gsi::GenericMethod ("paintRectPoints", "@brief Method QRect QPageLayout::paintRectPoints()\n", true, &_init_f_paintRectPoints_c0, &_call_f_paintRectPoints_c0);
  methods += new qt_gsi::GenericMethod ("setBottomMargin", "@brief Method bool QPageLayout::setBottomMargin(double bottomMargin)\n", false, &_init_f_setBottomMargin_1071, &_call_f_setBottomMargin_1071);
  methods += new qt_gsi::GenericMethod ("setLeftMargin", "@brief Method bool QPageLayout::setLeftMargin(double leftMargin)\n", false, &_init_f_setLeftMargin_1071, &_call_f_setLeftMargin_1071);
  methods += new qt_gsi::GenericMethod ("setMargins", "@brief Method bool QPageLayout::setMargins(const QMarginsF &margins)\n", false, &_init_f_setMargins_2185, &_call_f_setMargins_2185);
  methods += new qt_gsi::GenericMethod ("setMinimumMargins|minimumMargins=", "@brief Method void QPageLayout::setMinimumMargins(const QMarginsF &minMargins)\n", false, &_init_f_setMinimumMargins_2185, &_call_f_setMinimumMargins_2185);
  methods += new qt_gsi::GenericMethod ("setMode|mode=", "@brief Method void QPageLayout::setMode(QPageLayout::Mode mode)\n", false, &_init_f_setMode_2041, &_call_f_setMode_2041);
  methods += new qt_gsi::GenericMethod ("setOrientation|orientation=", "@brief Method void QPageLayout::setOrientation(QPageLayout::Orientation orientation)\n", false, &_init_f_setOrientation_2816, &_call_f_setOrientation_2816);
  methods += new qt_gsi::GenericMethod ("setPageSize", "@brief Method void QPageLayout::setPageSize(const QPageSize &pageSize, const QMarginsF &minMargins)\n", false, &_init_f_setPageSize_4263, &_call_f_setPageSize_4263);
  methods += new qt_gsi::GenericMethod ("setRightMargin", "@brief Method bool QPageLayout::setRightMargin(double rightMargin)\n", false, &_init_f_setRightMargin_1071, &_call_f_setRightMargin_1071);
  methods += new qt_gsi::GenericMethod ("setTopMargin", "@brief Method bool QPageLayout::setTopMargin(double topMargin)\n", false, &_init_f_setTopMargin_1071, &_call_f_setTopMargin_1071);
  methods += new qt_gsi::GenericMethod ("setUnits|units=", "@brief Method void QPageLayout::setUnits(QPageLayout::Unit units)\n", false, &_init_f_setUnits_2068, &_call_f_setUnits_2068);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QPageLayout::swap(QPageLayout &other)\n", false, &_init_f_swap_1718, &_call_f_swap_1718);
  methods += new qt_gsi::GenericMethod (":units", "@brief Method QPageLayout::Unit QPageLayout::units()\n", true, &_init_f_units_c0, &_call_f_units_c0);
  methods += gsi::method_ext("==", &::op_QPageLayout_operator_eq__eq__4718, gsi::arg ("rhs"), "@brief Operator bool ::operator==(const QPageLayout &lhs, const QPageLayout &rhs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QPageLayout_operator_excl__eq__4718, gsi::arg ("rhs"), "@brief Operator bool ::operator!=(const QPageLayout &lhs, const QPageLayout &rhs)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QPageLayout> decl_QPageLayout ("QPageLayout",
  methods_QPageLayout (),
  "@qt\n@brief Binding of QPageLayout");


GSIQT_PUBLIC gsi::Class<QPageLayout> &qtdecl_QPageLayout () { return decl_QPageLayout; }

}


//  Implementation of the enum wrapper class for QPageLayout::Mode
namespace qt_gsi
{

static gsi::Enum<QPageLayout::Mode> decl_QPageLayout_Mode_Enum ("QPageLayout_Mode",
    gsi::enum_const ("StandardMode", QPageLayout::StandardMode, "@brief Enum constant QPageLayout::StandardMode") +
    gsi::enum_const ("FullPageMode", QPageLayout::FullPageMode, "@brief Enum constant QPageLayout::FullPageMode"),
  "@qt\n@brief This class represents the QPageLayout::Mode enum");

static gsi::QFlagsClass<QPageLayout::Mode > decl_QPageLayout_Mode_Enums ("QPageLayout_QFlags_Mode",
  "@qt\n@brief This class represents the QFlags<QPageLayout::Mode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPageLayout> inject_QPageLayout_Mode_Enum_in_parent (decl_QPageLayout_Mode_Enum.defs ());
static gsi::ClassExt<QPageLayout> decl_QPageLayout_Mode_Enum_as_child (decl_QPageLayout_Mode_Enum, "Mode");
static gsi::ClassExt<QPageLayout> decl_QPageLayout_Mode_Enums_as_child (decl_QPageLayout_Mode_Enums, "QFlags_Mode");

}


//  Implementation of the enum wrapper class for QPageLayout::Orientation
namespace qt_gsi
{

static gsi::Enum<QPageLayout::Orientation> decl_QPageLayout_Orientation_Enum ("QPageLayout_Orientation",
    gsi::enum_const ("Portrait", QPageLayout::Portrait, "@brief Enum constant QPageLayout::Portrait") +
    gsi::enum_const ("Landscape", QPageLayout::Landscape, "@brief Enum constant QPageLayout::Landscape"),
  "@qt\n@brief This class represents the QPageLayout::Orientation enum");

static gsi::QFlagsClass<QPageLayout::Orientation > decl_QPageLayout_Orientation_Enums ("QPageLayout_QFlags_Orientation",
  "@qt\n@brief This class represents the QFlags<QPageLayout::Orientation> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPageLayout> inject_QPageLayout_Orientation_Enum_in_parent (decl_QPageLayout_Orientation_Enum.defs ());
static gsi::ClassExt<QPageLayout> decl_QPageLayout_Orientation_Enum_as_child (decl_QPageLayout_Orientation_Enum, "Orientation");
static gsi::ClassExt<QPageLayout> decl_QPageLayout_Orientation_Enums_as_child (decl_QPageLayout_Orientation_Enums, "QFlags_Orientation");

}


//  Implementation of the enum wrapper class for QPageLayout::Unit
namespace qt_gsi
{

static gsi::Enum<QPageLayout::Unit> decl_QPageLayout_Unit_Enum ("QPageLayout_Unit",
    gsi::enum_const ("Millimeter", QPageLayout::Millimeter, "@brief Enum constant QPageLayout::Millimeter") +
    gsi::enum_const ("Point", QPageLayout::Point, "@brief Enum constant QPageLayout::Point") +
    gsi::enum_const ("Inch", QPageLayout::Inch, "@brief Enum constant QPageLayout::Inch") +
    gsi::enum_const ("Pica", QPageLayout::Pica, "@brief Enum constant QPageLayout::Pica") +
    gsi::enum_const ("Didot", QPageLayout::Didot, "@brief Enum constant QPageLayout::Didot") +
    gsi::enum_const ("Cicero", QPageLayout::Cicero, "@brief Enum constant QPageLayout::Cicero"),
  "@qt\n@brief This class represents the QPageLayout::Unit enum");

static gsi::QFlagsClass<QPageLayout::Unit > decl_QPageLayout_Unit_Enums ("QPageLayout_QFlags_Unit",
  "@qt\n@brief This class represents the QFlags<QPageLayout::Unit> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPageLayout> inject_QPageLayout_Unit_Enum_in_parent (decl_QPageLayout_Unit_Enum.defs ());
static gsi::ClassExt<QPageLayout> decl_QPageLayout_Unit_Enum_as_child (decl_QPageLayout_Unit_Enum, "Unit");
static gsi::ClassExt<QPageLayout> decl_QPageLayout_Unit_Enums_as_child (decl_QPageLayout_Unit_Enums, "QFlags_Unit");

}

