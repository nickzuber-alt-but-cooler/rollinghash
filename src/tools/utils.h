

#ifndef UTIL_METHODS
#define UTIL_METHODS

#include <stdio.h>
#include <stddef.h>
#include <math.h>

long getModularInverse(long input, unsigned long primeBase);
long getGreatestCommonDenominator(long a, long b);
long modularExponential(long base, unsigned int degree, unsigned long moduloBound);

#endif