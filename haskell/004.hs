--
-- Project Euler: Challenge 004 - http://projecteuler.net/problem=4
--
-- A palindromic number reads the same both ways.
-- The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
-- Find the largest palindrome made from the product of two 3-digit numbers.
--
-- Answer: 906609
--

reverse' x y = if x == 0 then y else reverse' (div x 10) (y * 10 + mod x 10)
palindrome x = (reverse' x 0) == x

main = do print(maximum [ z | x <- [100..999], y <- [100..999], let z = x * y, palindrome z ])
