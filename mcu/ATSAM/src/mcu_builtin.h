/* -----------------------------------------------------------------------------
 * This file is a part of the NVCM project: https://github.com/nvitya/nvcm
 * Copyright (c) 2018 Viktor Nagy, nvitya
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software. Permission is granted to anyone to use this
 * software for any purpose, including commercial applications, and to alter
 * it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 * --------------------------------------------------------------------------- */
/*
 *  file:     mcu_builtin.h (ATSAM)
 *  brief:    Built-in ATSAM MCU definitions
 *  version:  1.00
 *  date:     2018-02-10
 *  authors:  nvitya
*/

#ifndef __MCU_BUILTIN_H
#define __MCU_BUILTIN_H

#if 0

//----------------------------------------------------------------------
// Atmel
//----------------------------------------------------------------------

#elif defined(MCU_ATSAM3X8E)

  #define MCUF_ATSAM
  #define MCUSF_3X

  #define __SAM3X8E__
  #include "sam3xa.h"

#elif defined(MCU_ATSAME70N20)

  #define MCUF_ATSAM
  #define MCUSF_E70

  #define __SAME70N20__
  #include "same70.h"

#elif defined(MCU_ATSAME70Q20)

  #define MCUF_ATSAM
  #define MCUSF_E70

  #define __SAME70Q20__
  #include "same70.h"

#elif defined(MCU_ATSAME70Q21)

  #define MCUF_ATSAM
  #define MCUSF_E70

  #define __SAME70Q21__
  #include "same70.h"

#elif defined(MCU_ATSAM4S2B) || defined(MCU_ATSAM4S8B)

  #define MCUF_ATSAM
  #define MCUSF_4S

  #define __SAM4S8B__
  #include "sam4s.h"

#else

  #error "Unknown MCU"

#endif

#endif
