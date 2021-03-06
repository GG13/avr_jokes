/****************************************************************************
 *  @doc INTERNAL
 *  @module dlportio.h |
 *
 *  DriverLINX Port I/O Driver Interface
 *  <cp> Copyright 1996 Scientific Software Tools, Inc.<nl>
 *  All Rights Reserved.<nl>
 *  DriverLINX is a registered trademark of Scientific Software Tools, Inc.
 *
 *  Win32 Prototypes for DriverLINX Port I/O
 *
 *  Please report bugs to:
 *  Scientific Software Tools, Inc.
 *  19 East Central Avenue
 *  Paoli, PA 19301
 *  USA
 *  E-mail: support@sstnet.com
 *  Web: www.sstnet.com
 *
 *  @comm   
 *  Author: RoyF<nl>
 *  Date:   09/26/96 14:08:58
 *
 *  @group Revision History
 *  @comm
 *  $Revision: 1.3 $
 *  <nl>
 *  $Log: dlportio.h,v $
 *  Revision 1.3  2004/11/30 17:46:48  lancos
 *  Commit PonyProg2000 2.06e
 *
 *  Revision 1.2  2001/02/02 17:08:55  lanconel
 *  no change
 *
 *  Revision 1.1  2000/07/24 08:46:30  lanconel
 *  Apportate le modifiche fino alla versione 1.17e. Ora PonyProg200 e` aggiornato, manca solo da aggiornare il setup
 *
 *  Revision 1.2  2000/06/29 15:06:57  lancos
 *  Driver for direct port I/O header
 *
 *  Revision 1.1  2000/06/23 17:19:25  lancos
 *  Modified for DLPortIO driver
 *
 * 
 * 1     9/27/96 2:03p Royf
 * Initial revision.
 *
 ****************************************************************************/

#ifdef	_WINDOWS

#ifndef DLPORTIO_H
  #define DLPORTIO_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef IN
  #define IN
#endif

#define DLPORT_API _stdcall

UCHAR DLPORT_API
DlPortReadPortUchar(
    IN ULONG Port
    );

USHORT DLPORT_API
DlPortReadPortUshort(
    IN ULONG Port
    );

ULONG DLPORT_API
DlPortReadPortUlong(
    IN ULONG Port
    );

VOID DLPORT_API
DlPortReadPortBufferUchar(
    IN ULONG Port,
    IN PUCHAR Buffer,
    IN ULONG  Count
    );

VOID DLPORT_API
DlPortReadPortBufferUshort(
    IN ULONG Port,
    IN PUSHORT Buffer,
    IN ULONG Count
    );

VOID DLPORT_API
DlPortReadPortBufferUlong(
    IN ULONG Port,
    IN PULONG Buffer,
    IN ULONG Count
    );

VOID DLPORT_API
DlPortWritePortUchar(
    IN ULONG Port,
    IN UCHAR Value
    );

VOID DLPORT_API
DlPortWritePortUshort(
    IN ULONG Port,
    IN USHORT Value
    );

VOID DLPORT_API
DlPortWritePortUlong(
    IN ULONG Port,
    IN ULONG Value
    );

VOID DLPORT_API
DlPortWritePortBufferUchar(
    IN ULONG Port,
    IN PUCHAR Buffer,
    IN ULONG  Count
    );

VOID DLPORT_API
DlPortWritePortBufferUshort(
    IN ULONG Port,
    IN PUSHORT Buffer,
    IN ULONG Count
    );

VOID DLPORT_API
DlPortWritePortBufferUlong(
    IN ULONG Port,
    IN PULONG Buffer,
    IN ULONG Count
    );

#ifdef __cplusplus
}
#endif

#endif // DLPORTIO_H

#endif
