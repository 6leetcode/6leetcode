from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def lower_bound(t: int) -> int:
            lo, hi = 0, len(nums)
            while lo < hi:
                mid = (lo + hi) // 2
                if nums[mid] < t:
                    lo = mid + 1
                else:
                    hi = mid
            return lo

        lo = lower_bound(target)
        hi = lower_bound(target + 1) - 1
        if lo < len(nums) and nums[lo] == target:
            return [lo, hi]
        return [-1, -1]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums, target = [5, 7, 7, 8, 8, 10], 8
    print("Input:  {} {}".format(nums, target))
    print("Output: {}".format(Solution().searchRange(nums, target)))
