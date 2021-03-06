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
 *  file:     mcu_builtin.h (LPC)
 *  brief:    Built-in LPC MCU definitions
 *  version:  1.00
 *  date:     2018-02-10
 *  authors:  nvitya
*/

#ifndef __MCU_BUILTIN_H
#define __MCU_BUILTIN_H

//----------------------------------------------------------------------
// NXP
//----------------------------------------------------------------------

#if defined(MCU_LPC4330) || defined(MCU_LPC4333) || defined(MCU_LPC4337) || \
	  defined(MCU_LPC4350) || defined(MCU_LPC4353) || defined(MCU_LPC4357)

  #define MCUF_LPC
  #define MCUSF_43XX

  #define CHIP_LPC43XX
  #define CORE_M4

  #include "chip_lpc43xx.h"

#else

  #error "Unknown MCU"

#endif

#endif
