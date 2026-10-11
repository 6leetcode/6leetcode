package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
var byLen map[int][]string
var rows []string
var best []string
var bestArea, targetW, targetH int

func prefixOk() bool {
	for c := 0; c < targetW; c++ {
		var sb strings.Builder
		for r := 0; r < len(rows); r++ {
			sb.WriteByte(rows[r][c])
		}
		prefix := sb.String()
		ok := false
		for _, w := range byLen[targetH] {
			if strings.HasPrefix(w, prefix) {
				ok = true
				break
			}
		}
		if !ok {
			return false
		}
	}
	return true
}

func backtrack() {
	if len(rows) == targetH {
		for c := 0; c < targetW; c++ {
			var sb strings.Builder
			for r := 0; r < targetH; r++ {
				sb.WriteByte(rows[r][c])
			}
			col := sb.String()
			found := false
			for _, w := range byLen[targetH] {
				if w == col {
					found = true
					break
				}
			}
			if !found {
				return
			}
		}
		if targetW*targetH > bestArea {
			bestArea = targetW * targetH
			best = append([]string{}, rows...)
		}
		return
	}
	for _, w := range byLen[targetW] {
		rows = append(rows, w)
		if prefixOk() {
			backtrack()
		}
		rows = rows[:len(rows)-1]
	}
}

func maxRectangle(words []string) []string {
	byLen = map[int][]string{}
	for _, w := range words {
		byLen[len(w)] = append(byLen[len(w)], w)
	}
	bestArea = 0
	best = nil
	for w := range byLen {
		for h := range byLen {
			if w*h <= bestArea {
				continue
			}
			targetW, targetH = w, h
			rows = nil
			backtrack()
		}
	}
	return best
}

// ------------------------------- solution end ---------------------------------

func main() {
	words := []string{"this", "real", "hard", "trh", "hea", "iar", "sld"}
	fmt.Println(`Input:  ["this", "real", "hard", "trh", "hea", "iar", "sld"]`)
	fmt.Printf("Output: %q\n", maxRectangle(words))
}
