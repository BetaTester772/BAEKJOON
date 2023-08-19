package main

import "fmt"

func main() {
	map1 := map[int]bool{}

	for i := 0; i < 28; i++ {
		var a int
		fmt.Scanln(&a)
		map1[a] = true
	}

	for i := 1; i < 31; i++ {
		if map1[i] == false {
			fmt.Println(i)
		}
	}
}
