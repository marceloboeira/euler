module Euler (
  fibonacci,
  prime,
  primes,
  factorial,
  digits'
) where

fibonacci :: Int -> Int
fibonacci n = if (n == 1) || (n == 2) then 1 else fibonacci(n - 1) + fibonacci(n - 2)

prime :: Integer -> Bool
prime 1 = False
prime 2 = True
prime x = (last $ takeWhile(<=x) primes) == x

primes :: [Integer]
primes = sieve [2..]
  where
    sieve (p:xs) = p : sieve [x | x <- xs, x `mod` p > 0 ]

factorial n = product [1..n]

digits' :: Integral x => x -> [x]
digits' 0 = []
digits' x = digits' (x `div` 10) ++ [x `mod` 10]
