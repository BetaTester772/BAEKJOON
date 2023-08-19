package main

import "fmt"

func fac(n int) int {
	if n == 0 || n == 1 {
		return 1
	}
	return fac(n-1) * n
}

func main() {
	var n int
	fmt.Scanf("%d", &n)
	fmt.Printf("%d", fac(n))
}
