/**
 * Euler Challenge 036
 *
 * @see http://projecteuler.net/problem=36
 * @see http://blog.marceloboeira.com/euler/challenge-036
 *
 * The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.
 * Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.
 * (Please note that the palindromic number, in either base, may not include leading zeros.)
 *
 * Answer: 872187
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

// Test Palindromic on Base 10
short int isp(int n){
  int r = 0, t = n;
  while( t != 0 ) {
   r = (r * 10) + (t%10);
   t /= 10;
  }
  return ( n == r );
}

// Test Palindromic on Base 2 (Binary)
short int isbp(int n){
  char a[100],b[100];
  itoa(n,a,2);
  itoa(n,b,2);
  strrev(a);
  return (strcmp(a,b) == 0);
}

int main(void) {
  int i = 0, j = 0;
  long long s = 0;
  for (i = 1; i < 1000000; i++) 
    s += (isp(i) && isbp(i)) ? i : 0 ;
  printf("Answer: %i\n",s);
  return 0;
}

