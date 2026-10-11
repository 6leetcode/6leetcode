# ------------------------------- solution begin -------------------------------


class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        n, m = len(s1), len(s2)
        if n + m != len(s3):
            return False
        f = [[False] * (m + 1) for _ in range(n + 1)]
        f[0][0] = True
        for i in range(n + 1):
            for j in range(m + 1):
                p = i + j - 1
                if i > 0:
                    f[i][j] = f[i][j] or (f[i - 1][j] and s1[i - 1] == s3[p])
                if j > 0:
                    f[i][j] = f[i][j] or (f[i][j - 1] and s2[j - 1] == s3[p])
        return f[n][m]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  aabcc, dbbca, aadbbbaccc")
    print("Output: {}".format(Solution().isInterleave("aabcc", "dbbca", "aadbbbaccc")))
