
#include <stdio.h>

int main(void) {
  int a = 9;
  int b = 3;
  int gcd = getGreatestCommonDenominator(a, b);
  printf("GCD: %d\n", gcd);
}