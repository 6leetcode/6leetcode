# ------------------------------- solution begin -------------------------------


class Solution:
    def isPalindrome(self, s: str) -> bool:
        left, right = 0, len(s) - 1

        while left < right:
            while left < right and not s[left].isalnum():
                left += 1
            while left < right and not s[right].isalnum():
                right -= 1
            if s[left].lower() != s[right].lower():
                return False
            left += 1
            right -= 1

        return True

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    test_cases = ["A man, a plan, a canal: Panama", "race a car", " ", "0P"]
    for s in test_cases:
        print('Input:  "{}"'.format(s))
        print("Output: {}".format(solution.isPalindrome(s)))
