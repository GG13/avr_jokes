//=========================================================================//
//                                                                         //
//  PonyProg - Serial Device Programmer                                    //
//                                                                         //
//  Copyright (C) 1997-2007   Claudio Lanconelli                           //
//                                                                         //
//  http://ponyprog.sourceforge.net                                        //
//                                                                         //
//-------------------------------------------------------------------------//
// $Id: e24xx-2.h,v 1.3 2007/04/20 10:58:21 lancos Exp $
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

#ifndef _E24XX2_H
#define _E24XX2_H

#include "e24xx.h"

class E24xx2 : public E24xx
{
  public:		//---------------------------------------- public

	E24xx2(e2AppWinInfo *wininfo = 0, BusIO *busp = 0);
//	virtual ~E24xx2();

	int Probe(int probe_size = 0);
	int Read(int probe = 1, int type = ALL_TYPE);
	int Write(int probe = 1, int type = ALL_TYPE);
	int Verify(int type = ALL_TYPE);

//	int BankRollOverDetect(int force);

	int SecurityRead(DWORD &blocks);
	int SecurityWrite(DWORD blocks);
	int HighEnduranceRead(DWORD &block_no);
	int HighEnduranceWrite(DWORD block_no);

  protected:	//--------------------------------------- protected

  private:		//--------------------------------------- private

	int const SecurityReadCode;
	int const SecurityWriteCode;
	int const HEnduranceReadCode;
	int const HEnduranceWriteCode;
};
#endif
