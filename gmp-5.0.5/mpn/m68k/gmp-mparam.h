/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

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


#define GMP_LIMB_BITS 32
#define BYTES_PER_MP_LIMB 4


/* 25MHz 68040 */

/* Generated by tuneup.c, 2004-02-05, gcc 3.2 */

#define MUL_TOOM22_THRESHOLD             14
#define MUL_TOOM33_THRESHOLD             90

#define SQR_BASECASE_THRESHOLD            5
#define SQR_TOOM2_THRESHOLD              28
#define SQR_TOOM3_THRESHOLD              98

#define DIV_SB_PREINV_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIV_DC_THRESHOLD                 55
#define POWM_THRESHOLD                   65

#define HGCD_THRESHOLD                  116
#define GCD_ACCEL_THRESHOLD               3
#define GCD_DC_THRESHOLD                590
#define JACOBI_BASE_METHOD                2

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD          MP_SIZE_T_MAX  /* never */
#define MOD_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  0
#define DIVREM_2_THRESHOLD            MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD          MP_SIZE_T_MAX  /* never */
#define MODEXACT_1_ODD_THRESHOLD      MP_SIZE_T_MAX  /* never */

#define GET_STR_DC_THRESHOLD             18
#define GET_STR_PRECOMPUTE_THRESHOLD     43
#define SET_STR_THRESHOLD               937

#define MUL_FFT_TABLE  { 336, 672, 1408, 3584, 10240, 24576, 0 }
#define MUL_FFT_MODF_THRESHOLD          296
#define MUL_FFT_THRESHOLD              1728

#define SQR_FFT_TABLE  { 336, 736, 1408, 3584, 10240, 24576, 0 }
#define SQR_FFT_MODF_THRESHOLD          296
#define SQR_FFT_THRESHOLD              2304