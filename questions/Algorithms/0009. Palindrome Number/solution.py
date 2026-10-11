# ------------------------------- solution begin -------------------------------


class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        return str(x) == str(x)[::-1]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    print("Input:  {}".format(121))
    print("Output: {}".format("true" if solution.isPalindrome(121) else "false"))
