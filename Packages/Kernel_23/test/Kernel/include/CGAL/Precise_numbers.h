// ============================================================================
//
// Copyright (c) 2001 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------------
// 
// release       :
// release_date  :
// 
// file          : Precise_numbers.h
// revision      : $Revision$
// revision_date : $Date$
// author(s)     : Sylvain Pion
//
// coordinator   : MPI, Saarbruecken
// ============================================================================
 
#ifndef CGAL_PRECISE_NUMBERS_H
#define CGAL_PRECISE_NUMBERS_H

#if defined CGAL_USE_GMPXX
#  include <CGAL/gmpxx.h>
typedef mpz_class                       Precise_integer;
typedef mpq_class                       Precise_rational;
#elif defined CGAL_USE_LEDA
#  include <CGAL/leda_integer.h>
#  include <CGAL/leda_rational.h>
typedef leda_integer                    Precise_integer;
typedef leda_rational                   Precise_rational;
#elif defined CGAL_USE_GMP
#  include <CGAL/Gmpz.h>
#  include <CGAL/Gmpq.h>
typedef CGAL::Gmpz                      Precise_integer;
typedef CGAL::Gmpq                      Precise_rational;
#else
#  include <CGAL/MP_Float.h>
#  include <CGAL/Quotient.h>
typedef CGAL::MP_Float                  Precise_integer;
typedef CGAL::Quotient<CGAL::MP_Float>  Precise_rational;
#endif

#endif // CGAL_PRECISE_NUMBERS_H
