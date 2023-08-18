package main

import "fmt"

func main() {
	var n int
	fmt.Scanf("%d", &n)
	s := "F"

	if n >= 90 {
		s = "A"
	} else if n >= 80 {
		s = "B"
	} else if n >= 70 {
		s = "C"
	} else if n >= 60 {
		s = "D"
	}

	fmt.Printf("%s", s)
}
