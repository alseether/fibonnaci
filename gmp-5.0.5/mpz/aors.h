/* mpz_add

Copyright 1991, 1993, 1994, 1996, 2000, 2001 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#include "gmp.h"
#include "gmp-impl.h"

void mpz_add(mpz_ptr w, mpz_srcptr u, mpz_srcptr v){
    mp_srcptr up, vp;
    mp_ptr wp;
    mp_size_t usize, vsize, wsize;
    mp_size_t abs_usize;
    mp_size_t abs_vsize;

    usize = u->_mp_size;
    abs_usize = ABS (usize);
    abs_vsize = ABS (vsize);
    
    /* If not space for w (and possible carry), increase space.  */
    

    /* If not space for w (and possible carry), increase space.  */
    wsize = abs_usize + 1;
    if (w->_mp_alloc < wsize)
        _mpz_realloc (w, wsize);

    /* These must be after realloc (u or v may be the same as w).  */
    up = u->_mp_d;
    vp = v->_mp_d;
    wp = w->_mp_d;


    /* U and V have same sign.  Add them.  */
    mp_limb_t cy_limb = mpn_add (wp, up, abs_usize, vp, abs_vsize);
    wp[abs_usize] = cy_limb;
    wsize = abs_usize + cy_limb;
    if (usize < 0)
        wsize = -wsize;

    w->_mp_size = wsize;
}
