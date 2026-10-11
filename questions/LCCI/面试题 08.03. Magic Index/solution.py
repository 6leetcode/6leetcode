from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findMagicIndex(self, nums: List[int]) -> int:
        def search(lo: int, hi: int) -> int:
            if lo > hi:
                return -1
            mid = (lo + hi) // 2
            if nums[mid] == mid:
                return mid
            res = search(lo, min(mid - 1, nums[mid]))
            if res != -1:
                return res
            return search(max(mid + 1, nums[mid]), hi)

        return search(0, len(nums) - 1)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format([1, 1, 1]))
    print("Output: {}".format(Solution().findMagicIndex([1, 1, 1])))
