--
-- Project Euler: Challenge 014 - http://projecteuler.net/problem=14
--
-- The following iterative sequence is defined for the set of positive integers:
-- n → n/2 (n is even)
-- n → 3n + 1 (n is odd)
-- Using the rule above and starting with 13, we generate the following sequence:
-- 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
-- It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
-- Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
-- Which starting number, under one million, produces the longest chain?
-- NOTE: Once the chain starts the terms are allowed to go above one million.
--
-- Answer: 837799
--
import Data.List
import Data.Ord

collatz :: Int -> [Int]
collatz 1 = [1]
collatz n
  | even n = n : collatz (div n 2)
  | odd n =  n : collatz (n * 3 + 1)

main = do print $ fst . last $ sortBy (comparing snd) [(x, y) | x <- [1..1000000], let y = length (collatz x)]
