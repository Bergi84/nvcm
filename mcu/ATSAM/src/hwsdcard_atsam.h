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
 *  file:     hwsdcard_atsam.cpp
 *  brief:    ATSAM SDCARD driver
 *  version:  1.00
 *  date:     2018-06-07
 *  authors:  nvitya
*/

#ifndef HWSDCARD_ATSAM_H_
#define HWSDCARD_ATSAM_H_

#define HWSDCARD_PRE_ONLY
#include "hwsdcard.h"

#define HW_SDCARD_REGS  Hsmci

class THwSdcard_atsam : public THwSdcard_pre
{
public:

	HW_SDCARD_REGS *   regs = nullptr;

	int                trstate = 0;

	bool HwInit();

	void SetSpeed(uint32_t speed);
	void SetBusWidth(uint8_t abuswidth);

	void SendSpecialCmd(uint32_t aspecialcmd);
	void SendCmd(uint8_t acmd, uint32_t cmdarg, uint32_t cmdflags);
	bool CmdFinished();

	void StartDataReadCmd(uint8_t acmd, uint32_t cmdarg, uint32_t cmdflags, void * dataptr, uint32_t datalen);
	void StartBlockReadCmd();
	void RunTransfer(); // the internal state machine for managing multi block reads

	uint32_t GetCmdResult32();
	void GetCmdResult128(void * adataptr);
};

#define HWSDCARD_IMPL THwSdcard_atsam

#endif // def HWSDCARD_ATSAM_H_
