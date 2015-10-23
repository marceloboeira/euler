# Project Euler: Challenge 004 - http://projecteuler.net/problem=4
#
# A palindromic number reads the same both ways. 
# The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
# Find the largest palindrome made from the product of two 3-digit numbers.
# 
# Answer: 906609
#

largest = 0

for n1 in range(100, 1000):
	for n2 in range(101, 1000):
		product = n1  * n2
		str_product = str(product)
		palindromic = str_product == str_product[::-1]
		largest = product if palindromic and product > largest else largest

print(largest)
