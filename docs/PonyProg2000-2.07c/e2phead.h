//=========================================================================//
//                                                                         //
//  PonyProg - Serial Device Programmer                                    //
//                                                                         //
//  Copyright (C) 1997-2007   Claudio Lanconelli                           //
//                                                                         //
//  http://ponyprog.sourceforge.net                                        //
//                                                                         //
//-------------------------------------------------------------------------//
// $Id: e2phead.h,v 1.3 2007/04/20 10:58:21 lancos Exp $
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
// Header structure for .E2P files

#ifndef	_E2PHEAD_H
#define	_EP2HEAD_H

#define	E2P_ID_SIZE	8
#define	E2P_STRID_SIZE	28
#define	E2P_COMM_SIZE	86

#define	E2P_FVERSION	0x02

// Header dei file
struct e2pHeader {
	char fileID[E2P_ID_SIZE] PACK;
	UBYTE e2pFuseBits PACK;
	UBYTE e2pLockBits PACK;
	ULONG e2pType PACK;
	long e2pSize PACK;
	UBYTE flags PACK;		//rollOver, splitted
	UWORD e2pExtFuseBits PACK;
	UWORD e2pExtLockBits PACK;
	UBYTE fversion PACK;	//file version
	UWORD split_size_Low PACK;	//used by splitted devices
	char e2pStringID[E2P_STRID_SIZE] PACK;
	ULONG e2pProgBits PACK;
	char e2pComment[E2P_COMM_SIZE] PACK;
	UWORD split_size_High PACK;
	UWORD pad PACK;
	UWORD e2pCrc PACK;
	UWORD headCrc PACK;
};

#endif
