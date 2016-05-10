
#include <stdio.h>
//#include "../src/rollinghash.h"
#include "../src/tools/utils.h"


int main(void) {
  int a = 9;
  int b = 3;
  int gcd = getGreatestCommonDenominator(a, b);
  printf("GCD: %d\n", gcd);
}