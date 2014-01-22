/**
 * Euler Challenge 002
 *
 * @see http://projecteuler.net/problem=2
 * @see http://blog.marceloboeira.com/euler/challenge-002
 *
 *
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms.
 * By starting with 1 and 2, the first 10 terms will be:
 *                      1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million,
 * find the sum of the even-valued terms.
 *
 * Answer: 4613732
 *
 *
 */
#include <stdio.h>

int fb(int n){
    if ((n == 1) || (n == 2))
        return 1;
    else
        return fb(n - 1) + fb(n - 2);
}

int main(void) {
    int i = 0;
    long int r = 0;
    long int t = 0;
    for (i = 2; r <= 4000000; i++){
        t = fb(i);
        r += ((t % 2) == 0) ? t : 0;
    }
    printf("Answer: %i\n",r);    
    return 0;
}

