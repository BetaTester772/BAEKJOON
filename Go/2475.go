package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	var result, n int
	for i := 0; i < 5; i++ {
		fmt.Fscan(reader, &n)
		result += int(math.Pow(float64(n), 2))
	}
	fmt.Println(result % 10)
}
