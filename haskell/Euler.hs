module Euler (fibonacci) where  

fibonacci :: Int -> Int
fibonacci (n) = if (n == 1) || (n == 2) then 1 else fibonacci(n - 1) + fibonacci(n - 2)
