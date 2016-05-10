
#include "./utils.h"

/**
 * Takes in an integer and a prime number and comutes the modular
 * inverse of the input integer.
 * 
 * @param input  the number to find the modular inverse of
 * @param prime  the prime modular base
 * @return       the modular inverse of the input integer
 */
long getModularInverse(long input, unsigned long primeBase) {
  long gcd = getGreatestCommonDenominator(input, primeBase);
  if(gcd != 1) {
    return -1;
  } else {
    return modularExponential(input, primeBase-2, primeBase);
  }
}


/**
 * Finds the greatest common denominator of the two input integers.
 * 
 * @param a  input integer to find greatest common denominator of 
 * @param b  input integer to find greatest common denominator of
 * @return   the greatest common denominator of the two input integers
 */
long getGreatestCommonDenominator(long a, long b) {
  return (a == 0) ? b : getGreatestCommonDenominator(b%a, a);
}

/**
 * Computes the power of two numbers under a modular base.
 * 
 * @param base        the base number to be raised 
 * @param degree      the degree to raise the base 
 * @param upperBound  the modulo upper bound for computations
 * @return            the base to the degree of the input modulo the modulo bound
 */
long modularExponential(long base, unsigned int degree, unsigned long moduloBound) {
  if(degree == 0) {
    return 1;
  } else {
    long power = modularExponential(base, degree/2, moduloBound) % moduloBound;
    power = (power * power) % moduloBound;
    return (degree%2 == 0) ? power : (base * power) % moduloBound;
  }
}