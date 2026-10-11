package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func respace(dictionary []string, sentence string) int {
	n := len(sentence)
	dp := make([]int, n+1)
	for i := 1; i <= n; i++ {
		dp[i] = dp[i-1] + 1
		for _, w := range dictionary {
			wl := len(w)
			if i >= wl && sentence[i-wl:i] == w {
				if dp[i-wl] < dp[i] {
					dp[i] = dp[i-wl]
				}
			}
		}
	}
	return dp[n]
}

// ------------------------------- solution end ---------------------------------

func main() {
	dictionary := []string{"looked", "just", "like", "her", "brother"}
	sentence := "jesslookedjustliketimherbrother"
	fmt.Println(`Input:  dictionary = [looked, just, like, her, brother], sentence = "jesslookedjustliketimherbrother"`)
	fmt.Printf("Output: %d\n", respace(dictionary, sentence))
}
