/**
 * Euler Challenge 004
 *
 * @see http://projecteuler.net/problem=4
 * @see http://blog.marceloboeira.com/euler/challenge-004
 *
 * A palindromic number reads the same both ways. 
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 * 
 *
 * Answer: 906609
 *
 *
 */
 
#include <stdio.h>
#include <stdbool.h>

short int isp(int n){
   int r = 0, t = n;
   while( t != 0 ) {
      r = (r * 10) + (t%10);
      t /= 10;
   }
   return ( n == r );
}

int main(void) {
    int i = 0, j = 0, k = 0, l = 0;
    for (i =  100; i <= 999; i++) {
        for (j = 100; j <= i; j++) {
            l = (i * j);
            k = (isp(l)) && (l > k) ? l : k;
        }
    }    
    printf("Answer: %i\n",k);
    return 0;
}

