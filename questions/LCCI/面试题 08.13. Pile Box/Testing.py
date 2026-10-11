from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def pileBox(self, box: List[List[int]]) -> int:
        box.sort()
        n = len(box)
        dp = [0] * n
        best = 0
        for i in range(n):
            dp[i] = box[i][2]
            for j in range(i):
                if box[j][0] < box[i][0] and box[j][1] < box[i][1] and box[j][2] < box[i][2]:
                    dp[i] = max(dp[i], dp[j] + box[i][2])
            best = max(best, dp[i])
        return best

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    box = [[1, 1, 1], [2, 2, 2], [3, 3, 3]]
    print("Input:  [[1,1,1],[2,2,2],[3,3,3]]")
    print("Output: {}".format(Solution().pileBox(box)))
