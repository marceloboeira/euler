/**
 * Project Euler: Challenge 009 - http://projecteuler.net/problem=9
 *
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 * a² + b² = c²
 * For example, 3² + 4² = 9 + 16 = 25 = 5².
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 *
 * Answer: 31875000
 */
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int a = 0, b = 0, c = 0, e = 1000;
  bool d = 0;
  for (c = 335; c <= e; c++)
    for (b = 1; b < c; b++)
      for (a = 1; a < b; a++) {              
        d = ((a + b + c) == 1000) && ((a*a) + (b*b) == (c*c));
        if (d) { 
          printf ("%i\n", a * b * c);
          return 0;
        } 
      }
}

