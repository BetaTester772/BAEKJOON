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

	var (
		T int
		S string
	)
	fmt.Fscanln(reader, &T)
	for i := 0; i < T; i++ {
		fmt.Fscanln(reader, &S)
		fmt.Fprintln(writer, string(S[0])+string(S[len(S)-1]))
	}
}
