 # Project Euler: Challenge 003 - http://projecteuler.net/problem=3
 #
 # The prime factors of 13195 are 5, 7, 13 and 29.
 # What is the largest prime factor of the number 600851475143 ?
 #
 # Answer: 6857

n = 600851475143
largest_prime = 2

for i in range(2, n):
    if n % i == 0:
        largest_prime, n = i, n / i

print(largest_prime)
