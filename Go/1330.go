package main

import "fmt"

func main() {
	var a, b int
	fmt.Scanf("%d %d", &a, &b)

	if a > b {
		fmt.Printf(">")
	} else if a < b {
		fmt.Printf("<")
	} else {
		fmt.Printf("==")
	}
}
