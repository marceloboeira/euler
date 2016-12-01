//
// Project Euler - Challenge 001 - http://projecteuler.net/problem=1
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
//
// Answer: 233168

program ProjectEulerChallenge001;
uses crt;

var
  sum, i, limit: integer;

begin
  sum := 0;
  limit := 1000;

  for i := 3 to limit - 1 do
    if (i mod 3 = 0) or (i mod 5 = 0) then
       sum := sum + i ;

  writeln('Answer: ', sum);

  readkey;
end.