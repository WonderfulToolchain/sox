/* g711.h - include for G711 u-law and a-law conversion routines
 *
 * Copyright (C) 2001 Chris Bagwell
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted, provided
 * that the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation.  This software is provided "as is" without express or
 * implied warranty.
 */

extern uint8_t _sox_13linear2alaw[0x2000];
extern int16_t _sox_alaw2linear16[256];
#define sox_13linear2alaw(sw) (_sox_13linear2alaw[((sw) + 0x1000)])
#define sox_alaw2linear16(uc) (_sox_alaw2linear16[uc])

extern uint8_t _sox_14linear2ulaw[0x4000];
extern int16_t _sox_ulaw2linear16[256];
#define sox_14linear2ulaw(sw) (_sox_14linear2ulaw[((sw) + 0x2000)])
#define sox_ulaw2linear16(uc) (_sox_ulaw2linear16[uc])
