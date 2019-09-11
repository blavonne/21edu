///*-
// * Copyright (c) 1990, 1993
// *  The Regents of the University of California.  All rights reserved.
// *
// * Copyright (c) 2011 The FreeBSD Foundation
// * All rights reserved.
// * Portions of this software were developed by David Chisnall
// * under sponsorship from the FreeBSD Foundation.
// *
// * Redistribution and use in source and binary forms, with or without
// * modification, are permitted provided that the following conditions
// * are met:
// * 1. Redistributions of source code must retain the above copyright
// *    notice, this list of conditions and the following disclaimer.
// * 2. Redistributions in binary form must reproduce the above copyright
// *    notice, this list of conditions and the following disclaimer in the
// *    documentation and/or other materials provided with the distribution.
// * 4. Neither the name of the University nor the names of its contributors
// *    may be used to endorse or promote products derived from this software
// *    without specific prior written permission.
// *
// * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
// * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
// * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// * SUCH DAMAGE.
// */
//
//#if defined(LIBC_SCCS) && !defined(lint)
//static char sccsid[] = "@(#)strtol.c    8.1 (Berkeley) 6/4/93";
//#endif /* LIBC_SCCS and not lint */
//#include <sys/cdefs.h>
//__FBSDID("$FreeBSD: release/9.1.0/lib/libc/stdlib/strtol.c 235785 2012-05-22 14:40:39Z theraven $");
//
//#include <limits.h>
//#include <ctype.h>
//#include <errno.h>
//#include <stdlib.h>
//
//
///*
// * Convert a string to a long integer.
// *
// * Assumes that the upper and lower case
// * alphabets and digits are each contiguous.
// */
//
//static int	is_space(char c)
//{
//	if (c >= 0 && c <= 32)
//		return (1);
//	return (0);
//}
//
//long strtol_lm(const char *str, int base)
//{
//	const char *s;
//	unsigned long acc;
//	char c;
//	unsigned long cutoff;
//	int neg, any, cutlim;
//
//	/*
//	 * Skip white space and pick up leading +/- sign if any.
//	 * If base is 0, allow 0x for hex and 0 for octal, else
//	 * assume decimal; if base is already 16, allow 0x.
//	 */
//	s = str;
//	do {
//		c = *s++;
//	} while (ft_is_space(c));
//	if (c == '-') {
//		neg = 1;
//		c = *s++;
//	} else {
//		neg = 0;
//		if (c == '+')
//			c = *s++;
//	}
//	acc = any = 0;
//	/*
//	 * Compute the cutoff value between legal numbers and illegal
//	 * numbers.  That is the largest legal value, divided by the
//	 * base.  An input number that is greater than this value, if
//	 * followed by a legal input character, is too big.  One that
//	 * is equal to this value may be valid or not; the limit
//	 * between valid and invalid numbers is then based on the last
//	 * digit.  For instance, if the range for longs is
//	 * [-2147483648..2147483647] and the input base is 10,
//	 * cutoff will be set to 214748364 and cutlim to either
//	 * 7 (neg==0) or 8 (neg==1), meaning that if we have accumulated
//	 * a value > 214748364, or equal but the next digit is > 7 (or 8),
//	 * the number is too big, and we will return a range error.
//	 *
//	 * Set 'any' if any `digits' consumed; make it negative to indicate
//	 * overflow.
//	 */
//	cutoff = neg ? (unsigned long)-(LONG_MIN + LONG_MAX) + LONG_MAX : LONG_MAX;
//	printf("%lu\n", cutoff);
//	printf("%lu\n", (unsigned long)-(LONG_MIN + LONG_MAX) + LONG_MAX);
//	printf("%lu\n", LONG_MAX);
//	cutlim = cutoff % base;
//	cutoff /= base;
//	printf("%i < 0 \n", any);
//	printf("%lu > %lu\n", acc, cutoff);
//	printf("%lu == %lu && %c > %i\n", acc, cutoff, c, cutlim);
//	for ( ; ; c = *s++) {
//		if (c >= '0' && c <= '9')
//			c -= '0';
//		if (c >= base)
//			break;
//		if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
//		{
//			any = -1;
//			printf("Odno verno.");
//		}
//		else {
//			any = 1;
//			acc *= base;
//			acc += c;
//			printf("acc = %i\n", acc);
//		}
//	}
//	if (any < 0) {
//		printf("1");
//		acc = neg ? LONG_MIN : LONG_MAX;
//		errno = ERANGE;
//	} else if (!any) {
//		printf("2");
//		errno = EINVAL;
//	} else if (neg) {
//		printf("2");
//		acc = -acc;
//	}
////	if (endptr != NULL)
////		*endptr = (char *)(any ? s - 1 : str);
//	return (acc / 10);
//}