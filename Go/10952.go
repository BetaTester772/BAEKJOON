package main

import "fmt"

func main() {
	for {
		var a, b int
		fmt.Scanf("%d %d", &a, &b)
		if a == 0 && b == 0 {
			break
		}
		fmt.Printf("%d\n", a+b)
	}
}
