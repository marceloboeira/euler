--
-- Project Euler: Challenge 009 - http://projecteuler.net/problem=9
--
-- A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
-- a² + b² = c²
-- For example, 3² + 4² = 9 + 16 = 25 = 5².
-- There exists exactly one Pythagorean triplet for which a + b + c = 1000.
-- Find the product abc.
--
-- Answer: 31875000
--

valid :: Int -> Int -> Int -> Bool
valid a b c = (a + b + c == 1000) && (a^2 + b^2 == c^2)

main = do print . product . head $ [ [a, b, c] | a <- [1..1000], b <- [1..1000], c <- [1..1000], valid a b c]
