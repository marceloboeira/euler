/**
 * Euler Challenge 007
 *
 * @see http://projecteuler.net/problem=7
 * @see http://blog.marceloboeira.com/euler/challenge-007
 *
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
 * we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 *
 * Answer: 104743
 *
 *
 */
#include <stdio.h>

int isPrime( int n ){
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
    int primes = 1, i = 2;
    for (i = 2; primes <= 10001; i++)
        primes += isPrime(i) ? 1 : 0;
    
    printf("Answer: %i\n",i-1); 
    return 0;
}

