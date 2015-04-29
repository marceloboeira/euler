/**
 * Project Euler: Challenge 007 - http://projecteuler.net/problem=7
 *
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
 * we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 *
 * Answer: 104743
 */
#include <stdio.h>

int isp(int n ){
  int i = 3;
  if (n == 2) return 1;
  if ((n % 2) == 0) return 0;
  while (i < sqrt(n)+1) { 
    if((n % i)==0) return 0;
    i+= 2;
  }
  return 1;
}

int main(void) {
  int p = 1, i = 2;
  for (i = 2; p <= 10001; i++)
    p += isp(i) ? 1 : 0;
  printf("%i\n", i-1); 
  return 0;
}

