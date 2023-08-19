package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {

	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var N, M int
	fmt.Fscanln(reader, &N, &M)

	var array1 [][]int

	for i := 0; i < N; i++ {
		array2 := make([]int, M)
		for j := 0; j < M; j++ {
			fmt.Fscan(reader, &array2[j])
		}
		array1 = append(array1, array2)
	}

	for i := 0; i < N; i++ {
		for j := 0; j < M; j++ {
			a := 0
			fmt.Fscan(reader, &a)
			array1[i][j] += a
		}
	}

	for _, ints := range array1 {
		for _, int_ := range ints {
			fmt.Fprintf(writer, "%d ", int_)
		}
		fmt.Fprintln(writer)
	}
}
