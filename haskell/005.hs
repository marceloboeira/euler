--
-- Project Euler: Challenge 005 - http://projecteuler.net/problem=5
--
-- 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
-- What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
--
-- Answer: 232792560
--

divisable x = all(==True) [ mod x y == 0 | y <- [1..20] ]

main = do print(take 1 [x | x <- [200000000..], divisable x ])
