package main

import "fmt"

func main() {
	var N int
	fmt.Scanf("%d", &N)
	for i := 1; i < N+1; i++ {
		for j := 0; j < i; j++ {
			fmt.Printf("*")
		}
		fmt.Println()
	}
}
