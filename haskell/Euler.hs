module Euler (
  fibonacci,
  prime
) where

fibonacci :: Int -> Int
fibonacci n = if (n == 1) || (n == 2) then 1 else fibonacci(n - 1) + fibonacci(n - 2)

prime :: Int -> Bool
prime 1 = False
prime 2 = True
prime x = all(==False) [ mod x y == 0 | y <- [2..(x-1)] ]
