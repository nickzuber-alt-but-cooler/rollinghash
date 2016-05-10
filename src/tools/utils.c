
#include "./utils.h"

/**
 * Takes in an integer and a prime number and comutes the modular
 * inverse of the input integer.
 * 
 * @param input  the number to find the modular inverse of
 * @param prime  the prime modular base
 * @return       the modular inverse of the input integer
 */
size_t getModularInverse(size_t input, size_t prime) {
  size_t gcd = getGreatestCommonDenominator(input, prime);
  if(gcd != 1) {
    return -1;
  } else {
    //return raiseToPowerWithinBounds(input, prime-2, prime);
    return gcd;
  }
}

/**
 * Finds the greatest common denominator of the two input integers.
 * 
 * @param a  input integer to find greatest common denominator of 
 * @param b  input integer to find greatest common denominator of
 * @return   the greatest common denominator of the two input integers
 */
size_t getGreatestCommonDenominator(size_t a, size_t b) {
  if(a == 0) {
    return b;
  } else{
    return getGreatestCommonDenominator(b % a, a);
  }
}