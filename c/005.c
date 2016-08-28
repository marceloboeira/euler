/**
 * Project Euler: Challenge 005 - http://projecteuler.net/problem=5
 *
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 *
 * Answer: 232792560
 */
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool l = 0;
  long int j = 0,i = 0;
  while (!l) {
    i += 20;
    l = 1;
    j = 2;
    while ((j <= 20) && (l)) {
      l = ((i % j) == 0) && l;
      j++;
    }
  }
  printf("%i\n", i); 
  return 0;
}

