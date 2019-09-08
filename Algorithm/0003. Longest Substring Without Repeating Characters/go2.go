package main

func LengthOfLongestSubstring(s string) int {
	n := len(s)
	if n < 2 {
		return n
	}
	max := 0
	for i := 0; i < n; i++ {
		mp := make(map[uint8]int)
		mp[s[i]] = 1
		for j := i + 1; j < n; j++ {
			if _, ok := mp[s[j]]; !ok {
				mp[s[j]] = 1
			} else {
				break
			}
		}
		if max < len(mp) {
			max = len(mp)
		}
	}
	return max
}
