

#ifndef ROLLING_HASH
#define ROLLING_HASH

#include "./tools/utils.h"

unsigned long PRIME_BASE = 396871;

/**
 * Configure the schema of the rolling hash data structure.
 *
 * It's important to note that all of the data in this structure
 * will never exceed the size of the prime base. Assuming the
 * prime base is always set to some reasonable number, it should
 * never exceed the value of an unsigned integer.
 * 
 * @version 1.0.0
 * @author Nicholas Zuber
 */
typedef struct {
  unsigned size_t base;
  unsigned size_t state;
  unsigned size_t cache;
  unsigned size_t BUFFER_SIZE;
  unsigned size_t INVERSE_BASE;
  unsigned size_t OFFSET_IF_NEGATIVE;
} RollingHash;

RollingHash* createRollingHash(unsigned size_t base);

void setPrimeBase(unsigned long newPrime);

#endif