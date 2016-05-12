

#ifndef ROLLING_HASH
#define ROLLING_HASH

#include "./tools/utils.h"

/** The prime base in which to base the rolling hash computations off of */
unsigned long PRIME_BASE = 396871;

/**
 * Configure the schema of the rolling hash data structure.
 *
 * It's important to note that all of the data in this structure
 * will never exceed the size of the prime base. Assuming the
 * prime base is always set to some reasonable number, it should
 * never exceed the value of an unsigned integer.
 */
typedef struct {
  unsigned size_t current_state;
  unsigned size_t BASE;
  unsigned size_t CACHE;
  unsigned size_t INVERSE_BASE;
  unsigned size_t OFFSET_IF_NEGATIVE;
} RollingHash;


/**
 * Allocates memeory for and creates a new rolling hash structure.
 * 
 * @param base  the base value of the rolling hash to compute its operations
 * @return      a pointer to the newly created rolling hash structure
 */
RollingHash* createRollingHash(unsigned size_t base);


/**
 * Computes a hash on the input assuming it is of the same base of
 * the instance of the rolling hash.
 * 
 * @param rh    the rolling hash in which to base the hash off of
 * @param data  the data to hash
 * @return      the hash value of the data argument
 */
unsigned size_t hash(RollingHash* rh, char* data);


/**
 * Appends a new segment of data onto the internal rolling hash window.
 * 
 * @param rh    the rolling hash in which to reference
 * @param data  the data to append
 * @return      void
 */
void append(RollingHash* rh, char* data);


/**
 * Disjoins the front segment of data from the internal rolling hash window.
 * 
 * @param rh    the rolling hash in which to reference
 * @param data  the data to purge
 * @return      void
 */
void skip(RollingHash* rh, char* data);


/**
 * Shifts the window over by one iteration and returns the new internal hash value.
 * 
 * @param rh        the rolling hash in which to reference
 * @param old_data  the data to purge
 * @param new_data  the data to append
 * @return          
 */
unsigned size_t slide(RollingHash* rh, char* old_data, char* new_data);


/**
 * Sets the global prime base for the rolling hashes.
 * 
 * @param new_prime  the rolling hash in which to reference
 * @return           whether or not the attempt to set new prime base was successful
 */
unsigned size_t setPrimeBase(unsigned long new_prime);

#endif