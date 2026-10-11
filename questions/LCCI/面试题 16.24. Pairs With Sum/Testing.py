from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def pairSums(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        res = []
        i, j = 0, len(nums) - 1
        while i < j:
            total = nums[i] + nums[j]
            if total < target:
                i += 1
            elif total > target:
                j -= 1
            else:
                res.append([nums[i], nums[j]])
                i += 1
                j -= 1
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [5, 6, 5, 6]
    print("Input:  nums = [5,6,5,6], target = 11")
    print("Output: {}".format(Solution().pairSums(nums, 11)))
