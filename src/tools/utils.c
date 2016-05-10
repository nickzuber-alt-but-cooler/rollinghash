
#include "./utils.h"

/**
 * Takes in an integer and a prime number and comutes the modular
 * inverse of the input integer.
 * 
 * @param input       the number to find the modular inverse of
 * @param prime_base  the prime modular base
 * @return            the modular inverse of the input integer
 */
long getModularInverse(long input, unsigned long prime_base) {
  long gcd = getGreatestCommonDenominator(input, prime_base);
  if(gcd != 1) {
    fprintf(stderr, "ERROR: modular base is not prime therefore the caluclated inverse is not guarenteed.\nOffending input: %ld", prime_base);
    exit(1);
  } else {
    return modularExponential(input, prime_base-2, prime_base);
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
 * @param base          the base number to be raised 
 * @param degree        the degree to raise the base 
 * @param modulo_bound  the modulo upper bound for computations
 * @return              the base to the degree of the input modulo the modulo bound
 */
long modularExponential(long base, unsigned int degree, unsigned long modulo_bound) {
  if(degree == 0) {
    return 1;
  } else {
    long power = modularExponential(base, degree/2, modulo_bound) % modulo_bound;
    power = (power * power) % modulo_bound;
    return (degree%2 == 0) ? power : (base * power) % modulo_bound;
  }
}