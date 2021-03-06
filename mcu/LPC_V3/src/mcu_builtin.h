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
 *  file:     mcu_builtin.h (LPC_V3)
 *  brief:    Built-in LPC_V3 MCU definitions
 *  version:  1.00
 *  date:     2018-02-10
 *  authors:  nvitya
*/

#ifndef __MCU_BUILTIN_H
#define __MCU_BUILTIN_H

#if 0

//----------------------------------------------------------------------
// NXP
//----------------------------------------------------------------------

#elif defined(MCU_LPC54606) || defined(MCU_LPC54608)

  #define MCUF_LPC_V3
  #define MCUSF_546XX

  #include "LPC54608.h"

#elif defined(MCU_LPC54016)

  #define MCUF_LPC_V3
  #define MCUSF_540XX

  #include "LPC54016.h"

#elif defined(MCU_LPC54018)

  #define MCUF_LPC_V3
  #define MCUSF_540XX

  #include "LPC54018.h"

#else

  #error "Unknown MCU"

#endif

#endif
