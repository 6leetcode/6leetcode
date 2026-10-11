from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        lo, hi = 0, len(nums)
        while lo < hi:
            mid = (lo + hi) // 2
            if nums[mid] < target:
                lo = mid + 1
            else:
                hi = mid
        return lo

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums, target = [1, 3, 5, 6], 5
    print("Input:  {} {}".format(nums, target))
    print("Output: {}".format(Solution().searchInsert(nums, target)))
