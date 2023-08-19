package main

import "fmt"

func main() {
	var s string

	fmt.Scanln(&s)
	for _, v := range s {
		if v >= 97 {
			fmt.Printf("%c", v-32)
		} else {
			fmt.Printf("%c", v+32)
		}
	}
}
