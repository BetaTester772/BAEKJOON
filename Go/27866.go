package main

import "fmt"

func main() {
	var S string
	var i int
	fmt.Scanln(&S)
	fmt.Scanln(&i)
	fmt.Println(string(S[i-1]))
}
