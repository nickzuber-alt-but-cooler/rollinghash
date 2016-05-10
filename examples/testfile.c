
#include <stdio.h>
#include "../src/rollinghash.h"

int main(void) {
  int n = 22;
  long result = getModularInverse(n, PRIME_BASE);
  printf("getModularInverse: %ld\n", result);
  return 0;
}