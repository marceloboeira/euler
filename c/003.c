/**
 * Euler Challenge 003
 *
 * @see http://projecteuler.net/problem=3
 * @see http://blog.marceloboeira.com/euler/challenge-003
 *
 * The prime factors of 13195 are 5, 7, 13 and 29. 
 * What is the largest prime factor of the number 600851475143 ?
 *
 * Answer: 6857
 *
 */
#include <stdio.h>

long int pfact(long long int n) {
  int i = 0;
  long int temp = 0;
  for (i = 2; i <= n; i++)  {
    if ((n % i) == 0) {
      temp = i;
      n /= i;           
      i = 1;
    }    
  }
  return temp;
}

int main(void) {
  printf("Answer: %i\n",pfact(600851475143)); 
  return 0;
}

