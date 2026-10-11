package main

import "fmt"

// ------------------------------- solution begin -------------------------------
type Pos struct{ r, c int }

func printKMoves(K int) []string {
	dr := []int{0, 1, 0, -1}
	dc := []int{1, 0, -1, 0}
	dir, r, c := 0, 0, 0
	black := map[Pos]bool{}
	visited := map[Pos]bool{{0, 0}: true}
	for k := 0; k < K; k++ {
		p := Pos{r, c}
		if !black[p] {
			black[p] = true
			dir = (dir + 1) % 4
		} else {
			delete(black, p)
			dir = (dir + 3) % 4
		}
		r += dr[dir]
		c += dc[dir]
		visited[Pos{r, c}] = true
	}
	minR, maxR, minC, maxC := 0, 0, 0, 0
	for p := range visited {
		if p.r < minR {
			minR = p.r
		}
		if p.r > maxR {
			maxR = p.r
		}
		if p.c < minC {
			minC = p.c
		}
		if p.c > maxC {
			maxC = p.c
		}
	}
	letters := "RDLU"
	res := []string{}
	for i := minR; i <= maxR; i++ {
		row := []byte{}
		for j := minC; j <= maxC; j++ {
			if i == r && j == c {
				row = append(row, letters[dir])
			} else if black[Pos{i, j}] {
				row = append(row, 'X')
			} else {
				row = append(row, '_')
			}
		}
		res = append(res, string(row))
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var K = 0
	fmt.Printf("Input:  %d\n", K)
	fmt.Printf("Output: %q\n", printKMoves(K))
}
