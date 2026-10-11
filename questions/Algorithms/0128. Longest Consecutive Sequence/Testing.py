from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        st = set(nums)
        best = 0
        for num in st:
            if num - 1 not in st:
                cur = num
                length = 1
                while cur + 1 in st:
                    cur += 1
                    length += 1
                best = max(best, length)
        return best

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    tests = [
        [100, 4, 200, 1, 3, 2],
        [0, 3, 7, 2, 5, 8, 4, 6, 0, 1],
        [1, 0, 1, 2],
    ]
    for nums in tests:
        print("Input:  {}".format(nums))
        print("Output: {}".format(solution.longestConsecutive(nums)))
