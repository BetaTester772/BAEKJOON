package main

import "fmt"

func 골뱅이(A int, B int) int {
	return (A + B) * (A - B)
}

func main() {
	var A, B int
	fmt.Scan(&A)
	fmt.Scan(&B)
	fmt.Println(골뱅이(A, B))
}
