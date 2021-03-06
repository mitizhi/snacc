/*
 * compiler/back_ends/c_gen/tag_util.h - utilities for dealing with tags
 *
 * MS 92
 * Copyright (C) 1991, 1992 Michael Sample
 *            and the University of British Columbia
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * $Header: /usr/app/odstb/CVS/snacc/compiler/back-ends/tag-util.h,v 1.3 1995/07/25 18:15:29 rj Exp $
 * $Log: tag-util.h,v $
 * Revision 1.3  1995/07/25 18:15:29  rj
 * changed `_' to `-' in file names.
 *
 * Revision 1.2  1994/10/08  03:48:19  rj
 * since i was still irritated by cpp standing for c++ and not the C preprocessor, i renamed them to cxx (which is one known suffix for C++ source files). since the standard #define is __cplusplus, cplusplus would have been the more obvious choice, but it is a little too long.
 *
 * Revision 1.1  1994/08/28  09:48:40  rj
 * first check-in. for a list of changes to the snacc-1.1 distribution please refer to the ChangeLog.
 *
 */


TagList		*GetTags PROTO ((Type *t, int *stoleChoiceTags));
void		FreeTags PROTO ((TagList *tl));
int		CountTags PROTO ((Type *t));
unsigned long int TagByteLen PROTO ((unsigned long int tagCode));
char		*Class2ClassStr PROTO ((int class));  /* class defined in asn1module.h */
char		*Form2FormStr PROTO ((BER_FORM form));
char		*Code2UnivCodeStr PROTO ((BER_UNIV_CODE code));
