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
 *  file:     xmc_utils.cpp
 *  brief:    some XMC helper functions
 *  version:  1.00
 *  date:     2018-02-10
 *  authors:  nvitya
*/

#include "platform.h"

#define SCU_GCU_PASSWD_PROT_ENABLE  (195UL) /**< Password for enabling protection */
#define SCU_GCU_PASSWD_PROT_DISABLE (192UL) /**< Password for disabling protection */

/* API to make protected bitfields available for modification */
void XMC_SCU_UnlockProtectedBits(void)
{
  SCU_GENERAL->PASSWD = SCU_GCU_PASSWD_PROT_DISABLE;

  while(((SCU_GENERAL->PASSWD)&SCU_GENERAL_PASSWD_PROTS_Msk))
  {
    /* Loop until the lock is removed */
  }
}

/* API to lock protected bitfields from being modified */
void XMC_SCU_LockProtectedBits(void)
{
  SCU_GENERAL->PASSWD = SCU_GCU_PASSWD_PROT_ENABLE;
}

void xmc_enable_periph_clock(unsigned permask)
{
	XMC_SCU_UnlockProtectedBits();
	SCU_CLK->CGATCLR0 |= permask;
	XMC_SCU_LockProtectedBits();
}


