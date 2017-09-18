--
-- Project Euler: Challenge 006 - http://projecteuler.net/problem=6
--
-- The sum of the squares of the first ten natural numbers is,
-- 1² + 2² + ... + 10² = 385
-- The square of the sum of the first ten natural numbers is,
-- (1 + 2 + ... + 10)² = 552 = 3025
-- Hence the difference between the sum of the squares
-- of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
--
-- Find the difference between the sum of the squares
-- of the first one hundred natural numbers and the square of the sum.
--
-- Answer: 25164150
--

main = do print(((sum [ x | x <- [0..100] ])^2) - (sum [ x^2 | x <- [0..100] ]))
