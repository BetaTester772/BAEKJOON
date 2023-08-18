package main

import "fmt"

func main() {
	var x, y int
	fmt.Scanf("%d\n%d", &x, &y)
	if x > 0 {
		if y > 0 {
			fmt.Printf("1")
		} else {
			fmt.Printf("4")
		}
	} else {
		if y > 0 {
			fmt.Printf("2")
		} else {
			fmt.Printf("3")
		}
	}
}
