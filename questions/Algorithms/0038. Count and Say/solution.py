# ------------------------------- solution begin -------------------------------


class Solution:
    def countAndSay(self, n: int) -> str:
        cur = "1"
        for _ in range(1, n):
            nxt = []
            i = 0
            while i < len(cur):
                j = i
                while j < len(cur) and cur[j] == cur[i]:
                    j += 1
                nxt.append(str(j - i))
                nxt.append(cur[i])
                i = j
            cur = "".join(nxt)
        return cur

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(4))
    print("Output: {}".format(Solution().countAndSay(4)))
