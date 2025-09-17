/* RCSid $Id: random.h,v 2.24 2022/04/21 02:52:40 greg Exp $ */
/*
 *  random.h - header file for random(3) and urand() function.
 */
#ifndef _RAD_RANDOM_H_
#define _RAD_RANDOM_H_

#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif


#if defined(_WIN32) || defined(_WIN64)
#define RAND_MAX_MP 714025

#define random()	rand_mp()
#define srandom(s)	srand_mp((int)(s))
#define frandom()	((double)rand_mp()*(1./(RAND_MAX_MP+.5)))

#else

#define	 random()	lrand48()
#define  srandom(s)	srand48((long)(s))
#define	 frandom()	drand48()

#endif

extern unsigned short	*urperm;
extern int	urmask;

#define	 urand(i)	(urmask ? (urperm[(i)&urmask]+frandom())/(urmask+1.) \
				: frandom())

				/* defined in urand.c */
extern long	irandom(long modulus);

extern int	initurand(int size);

extern int	ilhash(int *d, int n);

extern int	urind(int s, int i);
				/* defined in multisamp.c */
extern void	multisamp(double t[], int n, double r);

// threadsafe random numbers for windows
extern void srand_mp(int i);
extern int rand_mp();


#ifdef __cplusplus
}
#endif
#endif /* _RAD_RANDOM_H_ */

