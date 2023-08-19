package main

import "fmt"

func main() {
	var N, V int
	fmt.Scanln(&N)
	array1 := make([]int, N)

	for i := 0; i < N; i++ {
		fmt.Scan(&array1[i])
	}

	fmt.Scan(&V)
	result := 0
	for _, v := range array1 {
		if v == V {
			result++
		}
	}
	fmt.Println(result)
}
