from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def partition(self, s: str) -> List[List[str]]:
        res = []
        path = []

        def is_palindrome(l: int, r: int) -> bool:
            while l < r:
                if s[l] != s[r]:
                    return False
                l += 1
                r -= 1
            return True

        def backtrack(start: int) -> None:
            if start == len(s):
                res.append(path[:])
                return
            for end in range(start, len(s)):
                if not is_palindrome(start, end):
                    continue
                path.append(s[start:end + 1])
                backtrack(end + 1)
                path.pop()

        backtrack(0)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    for s in ["aab", "a"]:
        print("Input:  {}".format(s))
        print("Output: {}".format(solution.partition(s)))
