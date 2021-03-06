//=========================================================================//
//                                                                         //
//  PonyProg - Serial Device Programmer                                    //
//                                                                         //
//  Copyright (C) 1997-2007   Claudio Lanconelli                           //
//                                                                         //
//  http://ponyprog.sourceforge.net                                        //
//                                                                         //
//-------------------------------------------------------------------------//
// $Id: at89sbus.h,v 1.4 2007/04/20 10:58:21 lancos Exp $
//-------------------------------------------------------------------------//
//                                                                         //
// This program is free software; you can redistribute it and/or           //
// modify it under the terms of the GNU  General Public License            //
// as published by the Free Software Foundation; either version2 of        //
// the License, or (at your option) any later version.                     //
//                                                                         //
// This program is distributed in the hope that it will be useful,         //
// but WITHOUT ANY WARRANTY; without even the implied warranty of          //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU       //
// General Public License for more details.                                //
//                                                                         //
// You should have received a copy of the GNU  General Public License      //
// along with this program (see COPYING);     if not, write to the         //
// Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA. //
//                                                                         //
//-------------------------------------------------------------------------//
//=========================================================================//

#ifndef	_AT89SBUS_H
#define	_AT89SBUS_H

#include "at90sbus.h"

class At89sBus : public At90sBus
{
 public:		//------------------------------- public
	At89sBus(BusInterface *ptr = 0);
//	virtual ~At89sBus();

	long Read(int addr, UBYTE *data, long length);
	long Write(int addr, UBYTE const *data, long length);

	virtual int Reset();
	virtual int Erase(int type = 0);

//	int ReadDeviceCode(int addr);
	int WriteLockBits(DWORD val, long model = 0);
	int WriteFuseBits(DWORD val, long model = 0);
	DWORD ReadLockBits(long model = 0);
	DWORD ReadFuseBits(long model = 0);

	void SetDelay();

 protected:		//------------------------------- protected

	//Programming commands
	const BYTE EnableProg0, EnableProg1;
	const BYTE ChipErase0, ChipErase1;
	const BYTE ReadProgMem;
	const BYTE WriteProgMem;
	const BYTE ReadEEPMem;
	const BYTE WriteEEPMem;
	const BYTE WriteLock0, WriteLock1;

	int ReadEEPByte(long addr);
	void WriteEEPByte(long addr, int data);
	int ReadProgByte(long addr);
	void WriteProgByte(long addr, int data);
//	void WriteProgPage(long addr, int data);

	int WaitReadyAfterWrite(int type, long addr, int data, long timeout = 5000);

 private:		//------------------------------- private

};

#endif
