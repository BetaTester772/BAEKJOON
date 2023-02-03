package main

import "fmt"

func main() {
	var raw = [6]int{1, 1, 2, 2, 2, 8}
	var new [6]int
	for i := 0; i < 6; i++ {
		var a int
		fmt.Scanln(&a)
		new[i] = a
	}

}
