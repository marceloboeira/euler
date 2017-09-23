--
-- Project Euler: Challenge 015 - http://projecteuler.net/problem=15
--
-- Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down,
-- there are exactly 6 routes to the bottom right corner.
-- How many such routes are there through a 20×20 grid?
-- Type definition is not working well here
--
-- Answer: 137846528820
--

-- Type definition does not work well here for some reason
factorial n = product [1..n]

-- https://en.wikipedia.org/wiki/Pascal's_triangle
-- permutations = (2n)! / (n!)^2
main = do print $ div (factorial 40) ((factorial 20) ^ 2)
