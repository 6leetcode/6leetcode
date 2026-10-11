from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findLongestSubarray(self, array: List[str]) -> List[str]:
        first = {0: -1}
        total = 0
        best_len = best_start = 0
        for i, ch in enumerate(array):
            total += -1 if ch.isdigit() else 1
            if total in first:
                if i - first[total] > best_len:
                    best_len = i - first[total]
                    best_start = first[total] + 1
            else:
                first[total] = i
        return array[best_start:best_start + best_len]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    array = ["A", "1", "B", "C", "D", "2", "3", "4", "E", "5", "F", "G", "6", "7", "H", "I", "J", "K", "L", "M"]
    print("Input:  {}".format(array))
    print("Output: {}".format(Solution().findLongestSubarray(array)))
