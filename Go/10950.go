package main

import "fmt"

func main() {
	var T, a, b int
	fmt.Scanf("%d", &T)
	for i := 0; i < T; i++ {
		fmt.Scanf("%d %d", &a, &b)
		fmt.Printf("%d\n", a+b)
	}
}
