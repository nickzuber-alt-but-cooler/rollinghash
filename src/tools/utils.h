

#ifndef UTIL_METHODS
#define UTIL_METHODS

#include <stdio.h>
#include <stddef.h>
#include <math.h>

/**
 * Takes in an integer and a prime number and comutes the modular
 * inverse of the input integer.
 * 
 * @param input       the number to find the modular inverse of
 * @param prime_base  the prime modular base
 * @return            the modular inverse of the input integer
 */
long getModularInverse(long input, unsigned long prime_base);


/**
 * Finds the greatest common denominator of the two input integers.
 * 
 * @param a  input integer to find greatest common denominator of 
 * @param b  input integer to find greatest common denominator of
 * @return   the greatest common denominator of the two input integers
 */
long getGreatestCommonDenominator(long a, long b);

/**
 * Computes the power of two numbers under a modular base.
 * 
 * @param base          the base number to be raised 
 * @param degree        the degree to raise the base 
 * @param modulo_bound  the modulo upper bound for computations
 * @return              the base to the degree of the input modulo the modulo bound
 */
long modularExponential(long base, unsigned int degree, unsigned long modulo_bound);

#endif