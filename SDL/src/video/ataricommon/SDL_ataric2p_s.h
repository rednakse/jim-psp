/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2004 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public
    License along with this library; if not, write to the Free
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Sam Lantinga
    slouken@libsdl.org
*/

#ifdef SAVE_RCSID
static char rcsid =
 "@(#) $Id: SDL_ataric2p_s.h,v 1.5 2005/06/30 12:03:19 pmandin Exp $";
#endif

#ifndef _ATARI_C2P_h
#define _ATARI_C2P_h

#include "SDL_types.h"

/*--- Functions pointers ---*/

/* Convert a chunky screen to bitplane screen */

extern void (*SDL_Atari_C2pConvert)(
	Uint8 *src,			/* Source screen (one byte=one pixel) */
	Uint8 *dest,		/* Destination (4/8 bits planes) */
	Uint32 width,		/* Dimensions of screen to convert */
	Uint32 height,
	Uint32 dblligne,	/* Double the lines when converting ? */
	Uint32 srcpitch,	/* Length of one source line in bytes */
	Uint32 dstpitch		/* Length of one destination line in bytes */
);

/*--- 8 bits functions ---*/

/* Convert a chunky screen to bitplane screen */

void SDL_Atari_C2pConvert8(
	Uint8 *src,			/* Source screen (one byte=one pixel) */
	Uint8 *dest,		/* Destination (8 bits planes) */
	Uint32 width,		/* Dimensions of screen to convert */
	Uint32 height,
	Uint32 dblligne,	/* Double the lines when converting ? */
	Uint32 srcpitch,	/* Length of one source line in bytes */
	Uint32 dstpitch		/* Length of one destination line in bytes */
);

/*--- 4 bits functions ---*/

/* Convert a chunky screen to bitplane screen */

void SDL_Atari_C2pConvert4(
	Uint8 *src,			/* Source screen (one byte=one pixel) */
	Uint8 *dest,		/* Destination (4 bits planes) */
	Uint32 width,		/* Dimensions of screen to convert */
	Uint32 height,
	Uint32 dblligne,	/* Double the lines when converting ? */
	Uint32 srcpitch,	/* Length of one source line in bytes */
	Uint32 dstpitch		/* Length of one destination line in bytes */
);

/* Conversion palette */

void SDL_Atari_C2pConvert4_pal(Uint16 *lightpalette);

#endif /* _ATARI_C2P_h */
