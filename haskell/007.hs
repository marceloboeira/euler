--
-- Project Euler: Challenge 007 - http://projecteuler.net/problem=7
--
-- By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
-- we can see that the 6th prime is 13.
-- What is the 10 001st prime number?
--
-- Answer: 104743
--

prime x = all(==False) [ mod x y == 0 | y <- [2..(x-1)] ]

-- 10002 because the prime function checks from 2 and so on...
main = do print(last (take 10002 [x | x <- [1..], prime x ]))
