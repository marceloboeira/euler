/**
 * Project Euler: Challenge 050 - http://projecteuler.net/problem=50
 *
 * The prime 41, can be written as the sum of six consecutive primes:
 *
 * 41 = 2 + 3 + 5 + 7 + 11 + 13
 * This is the longest sum of consecutive primes that adds to a prime below one-hundred.
 * 
 * The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms, and is equal to 953.
 * 
 * Which prime, below one-million, can be written as the sum of the most consecutive primes?
 * 
 * Answer: 997651
 */
#include <stdio.h>
#include <math.h>

// Verify if is a prime number
int isp(int n){
  int i = 3;    
  if (n == 2) return 1;
  if ((n % 2) == 0) return 0;
  while (i < sqrt(n) + 1) { 
    if((n % i)==0) return 0;
    i += 2;
  }
  return 1;
}

int main(void) {
  int i = 1, j = 0, l = 0, m = 0, o = 0, p = 0;
  short int f = 0;
  for (i = 1 ;i <= 1000000; i+=2) {
    if (isp(i)) {
      f = 0;
      int h = 0;
      for (h = 2; (h < i) && (!f); h++) {
        l = 0;
        m = 0;
        if (isp(h)) {
          for (j = h; (l < i) && (!f) ; j++) {
            if (isp(j) && !f) {
              l += j;
              m++;
              f = (i == l);   
            }
          }
        }
        if (f) {
          if (m >= o) {
            o = (m);
            p = i;
          }     
        }
      }
    }
  }
  printf("%i | %i \n", p, o);
  return 0;
}

