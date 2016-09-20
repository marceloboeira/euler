package main

import "fmt"

func main() {
  var i int = 2
  var t int = 0
  var n int = 600851475143

  for i <= n {
    i += 1

    if n % i == 0 {
      t = i
      n /= i
      i = 1
    }
  }

  fmt.Println(t)
}
