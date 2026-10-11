package main

import "fmt"

// ------------------------------- solution begin -------------------------------
type WordsFrequency struct {
	freq map[string]int
}

func Constructor(book []string) WordsFrequency {
	freq := map[string]int{}
	for _, w := range book {
		freq[w]++
	}
	return WordsFrequency{freq: freq}
}

func (w *WordsFrequency) Get(word string) int {
	return w.freq[word]
}

// ------------------------------- solution end ---------------------------------

func main() {
	book := []string{"i", "have", "an", "apple", "he", "have", "a", "pen"}
	fmt.Println("Input:  book = [i, have, an, apple, he, have, a, pen]")
	obj := Constructor(book)
	fmt.Printf("Output: [%d, %d, %d, %d, %d]\n", obj.Get("you"), obj.Get("have"), obj.Get("an"), obj.Get("apple"), obj.Get("pen"))
}
