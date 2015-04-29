/**
 * Project Euler: Challenge 034 - http://projecteuler.net/problem=34
 *
 * 145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
 * Find the sum of all numbers which are equal to the sum of the factorial of their digits.
 * Note: as 1! = 1 and 2! = 2 are not sums they are not included.
 *
 * Answer: 40730
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int fct(int n) {
  int i = 0, m = n;
  if (n == 0)
    return 1;
  for ( i = 1; i < n; i++) 
    m *= i;
  return m;
}

int main(void) {
  int r = 0, i = 0;
  for ( i = 10; i < 9999999; i++) {
    int s = 0, n = i;
    while (n > 0) {
      int d = n % 10;
      n /= 10;
      s += fct(d);
    }
    r += (s == i) ? i : 0; 
  }
  printf("%i\n", r);
  return 0;
}

