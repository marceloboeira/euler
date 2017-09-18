/**
 * Project Euler: Challenge 006 - http://projecteuler.net/problem=6
 *
 * The sum of the squares of the first ten natural numbers is,
 *
 * 1� + 2� + ... + 10� = 385
 * The square of the sum of the first ten natural numbers is,
 * 
 * (1 + 2 + ... + 10)� = 552 = 3025
 * Hence the difference between the sum of the squares 
 * of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
 * 
 * Find the difference between the sum of the squares 
 * of the first one hundred natural numbers and the square of the sum.
 *
 * Answer: 25164150
 */
#include <stdio.h>

int main(void) {
  int i = 1;
  long int j = 0, k = 0, l = 0;
  for (i = 1; i<= 100; i++) {
    j += (i*i);
    k += i;    
  }
  l = (k*k) - j;        
  printf("Answer: %i\n",l); 
  return 0;
}
