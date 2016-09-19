/**
 * Project Euler: Challenge 046 - http://projecteuler.net/problem=46
 *
 * It was proposed by Christian Goldbach that every odd composite number can be written
 * as the sum of a prime and twice a square.
 *
 * 9 = 7 + 2×1²
 * 15 = 7 + 2×2²
 * 21 = 3 + 2×3²
 * 25 = 7 + 2×3²
 * 27 = 19 + 2×2²
 * 33 = 31 + 2×1²
 *
 * It turns out that the conjecture was false.
 *
 * What is the smallest odd composite that cannot be written as the sum of a prime and twice a square?
 *
 * Answer: 5777
 */
#include <stdio.h>

// Verify if is a prime number
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

// Verify if is odd composite number
short int isoc(int n){
  return (((n % 2) != 0) && !isp(n));
}

// Verify Christian's conjecture
short int iscg(int n){
  int j = 0, l = 0;
  for (j = 1; j < n; j+=2) {
    if (isp(j)) {
      for (l = 1; l < n; l++){
        if ((n == (j + (2*(l*l))))) {
         return 1;
        }
      }
    }
  }
  return 0;
}

int main(void) {
  int i = 1;
  short int f = 0;
  while (!f){
    i += 2;
    f = (isoc(i) && !iscg(i));
  }
  printf("%i\n", i);
  return 0;
}
