package main

import "fmt"

func main() {
	var N, X int
	fmt.Scanln(&N, &X)

	array1 := make([]int, N, N)
	for i := 0; i < N; i++ {
		fmt.Scan(&array1[i])
	}

	for _, v := range array1 {
		if v < X {
			fmt.Println(v)
		}
	}
}
