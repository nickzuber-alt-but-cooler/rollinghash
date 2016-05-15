
#include "rollinghash.h"

/**
 * Allocates memeory for and creates a new rolling hash structure.
 * 
 * @param base  the base value of the rolling hash to compute its operations
 * @return      a pointer to the newly created rolling hash structure
 */
RollingHash* createRollingHash(unsigned size_t base) {
  RollingHash* rh = (RollingHash*)malloc(sizeof(RollingHash));
  if(rh == NULL) {
    fprintf(stderr, "ERROR: insufficient amount of memeory to create new instance of rolling hash.");
  }

  // The internal hash of the window
  rh->current_state = 0;

  // The base of the number system
  rh->BASE = base;

  // A block of expensive code we will cache in order to optimize the amount of calculations we need to do
  rh->CACHE = 1;

  // The modular inverse of the base
  rh->INVERSE_BASE = getModularInverse(base, PRIME_BASE);

  // An offset to add when calculating a modular product to make sure it does not go negative
  rh->OFFSET_IF_NEGATIVE = PRIME_BASE * base;

  return rh;
}


/**
 * Computes a hash on the input assuming it is of the same base of
 * the instance of the rolling hash. 
 * 
 * @param rh    the rolling hash in which to base the hash off of
 * @param data  the data to hash
 * @return      the hash value of the data argument
 */
unsigned size_t hash(RollingHash* rh, char* data) {
  
}