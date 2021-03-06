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
 *  file:     mcu_impl.h (ATSAM)
 *  brief:    ATSAM list of implemented NVCM core peripherals
 *  version:  1.00
 *  date:     2018-02-10
 *  authors:  nvitya
*/

#ifdef HWCLKCTRL_H_
  #include "hwclkctrl_atsam.h"
#endif

#ifdef HWPINS_H_
  #include "hwpins_atsam.h"
#endif

#ifdef HWINTFLASH_H_
  #include "hwintflash_atsam.h"
#endif

#ifdef HWDMA_H_
  #include "hwdma_atsam.h"
#endif

#ifdef HWEXTIRQ_H_
  #include "hwextirq_atsam.h"
#endif

#ifdef HWUART_H_
  #include "hwuart_atsam.h"
#endif

#ifdef HWSPI_H_
  #include "hwspi_atsam.h"
#endif

#ifdef HWI2C_H_
  #include "hwi2c_atsam.h"
#endif

#ifdef HWI2CSLAVE_H_
  #include "hwi2cslave_atsam.h"
#endif

#ifdef HWADC_H_
  #include "hwadc_atsam.h"
#endif

#ifdef QSPI
	#ifdef HWQSPI_H_
		#include "hwqspi_atsam.h"
	#endif
#endif

#if defined(HWCAN_H_)
  #include "hwcan_atsam.h"
#endif

#if defined(HWUSBCTRL_H_) 
  #include "hwusbctrl_atsam.h"
  #include "hwusbctrl_atsam_hs.h"
#endif

#if defined(HWETH_H_) && defined(GMAC)
  #include "hweth_atsam.h"
#endif

#if defined(HSMCI) && defined(HWSDCARD_H_)
  #include "hwsdcard_atsam.h"
#endif

#if defined(SDRAMC) && defined(HWSDRAM_H_)
  #include "hwsdram_atsam.h"
#endif
