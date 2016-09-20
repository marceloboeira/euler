// Project Euler - Challenge 001 - http://projecteuler.net/problem=1
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
//
// Answer: 233168

package main

import "fmt"

func main() {
	var result int = 0

	for n := 1; n < 1000; n++ {
		if (n % 3 == 0) || (n % 5 == 0) {
			result += n
		}
	}

  fmt.Println(result)
}
