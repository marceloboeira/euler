#
# Project Euler: Challenge 003 - http://projecteuler.net/problem=3
#
# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?
#
# Answer: 6857

i, t, n = 2, 0, 600851475143
while (i <= n)
  i += 1
  if n % i == 0
    t = i;
    n /= i;
    i = 1;
  end
end
p t
