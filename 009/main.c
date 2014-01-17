/**
 * Euler Challenge 009
 *
 * @see http://projecteuler.net/problem=9
 * @see http://blog.marceloboeira.com/euler/challenge-009
 *
 * Find the greatest product of five consecutive digits in the 1000-digit number.
 *
 * Answer: 31875000
 *
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    int a = 0, b = 0, c = 0;
    bool d = 0;
    int e = 1000;
    for (c = 335; c <= e; c++)
        for (b = 1; b < c; b++)
            for (a = 1; a < b; a++) {              
                d = ((a + b + c) == 1000 ) && ((a*a) + (b*b) == (c*c));
                if (d) { 
                   printf ("Answer: %i\n", a*b*c);
                   return 0;
                } 
            }
}

