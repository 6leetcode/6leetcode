from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        lo, hi = 0, len(nums) - 1
        while lo <= hi:
            mid = (lo + hi) // 2
            if nums[mid] == target:
                return mid
            if nums[lo] <= nums[mid]:
                if nums[lo] <= target < nums[mid]:
                    hi = mid - 1
                else:
                    lo = mid + 1
            else:
                if nums[mid] < target <= nums[hi]:
                    lo = mid + 1
                else:
                    hi = mid - 1
        return -1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums, target = [4, 5, 6, 7, 0, 1, 2], 0
    print("Input:  {} {}".format(nums, target))
    print("Output: {}".format(Solution().search(nums, target)))
