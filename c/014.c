/**
 * Project Euler: Challenge 014 - http://projecteuler.net/problem=14
 *
 * The following iterative sequence is defined for the set of positive integers:
 * n → n/2 (n is even)
 * n → 3n + 1 (n is odd)
 * Using the rule above and starting with 13, we generate the following sequence:
 * 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
 * Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 * Which starting number, under one million, produces the longest chain?
 * NOTE: Once the chain starts the terms are allowed to go above one million.
 *
 * Answer: 837799
 */
#include <stdio.h>

int main() {
  long f = 0, t = 0, l = 0, i;
  for (i = 1; i <= 1000000; i += 2) {
    long l = 0, n = i;
    while (n != 1) {
      n = (n % 2 == 0) ? (n / 2) : ((3 * n) + 1);
      l++;
    }
    if (l > t) {
      t = l;
      f = i;
    }
  }
  printf("%ld\n",  f) ;
  return 0;
}

