--
-- Project Euler: Challenge 003 - http://projecteuler.net/problem=3
--
-- The prime factors of 13195 are 5, 7, 13 and 29.
-- What is the largest prime factor of the number 600851475143 ?
--
-- Answer: 6857
--

prime x = all(==False) [ mod x y == 0 | y <- [2..(x-1)] ]

main = do print(maximum [x | x <- [1..10000], mod 600851475143 x == 0, prime x ])
