# ------------------------------- solution begin -------------------------------


class Solution:
    def numKLenSubstrNoRepeats(self, S: str, k: int) -> int:
        n = len(S)
        if n < k:
            return 0
        count = [0] * 26
        distinct = ans = 0
        for i in range(n):
            idx = ord(S[i]) - ord("a")
            if count[idx] == 0:
                distinct += 1
            count[idx] += 1
            if i >= k:
                rm = ord(S[i - k]) - ord("a")
                count[rm] -= 1
                if count[rm] == 0:
                    distinct -= 1
            if i >= k - 1 and distinct == k:
                ans += 1
        return ans

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("havefunonleetcode", 5))
    print("Output: {}".format(Solution().numKLenSubstrNoRepeats("havefunonleetcode", 5)))
