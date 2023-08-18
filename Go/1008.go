package main

import "fmt"

func main() {
	var a, b int
	fmt.Scanf("%d %d", &a, &b)
	fmt.Printf("%.10f", float64(a)/float64(b))
}
