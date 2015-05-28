#
# Project Euler: Challenge 003 - http://projecteuler.net/problem=3
#
# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?
#
# Answer: 6857

p (2**1000).to_s.split(//).map(&:to_i).inject(0) {|r, n| r+n }
