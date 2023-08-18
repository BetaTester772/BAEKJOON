package main

import "fmt"

func main() {
	var N, M int
	fmt.Scanf("%d %d", &N, &M)

	if N > M {
		fmt.Printf("%d", N-M)
	} else {
		fmt.Printf("%d", M-N)
	}
}
