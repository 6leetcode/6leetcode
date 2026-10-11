from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i = 0
        for j in range(len(nums)):
            if nums[j] != val:
                nums[i] = nums[j]
                i += 1
        return i

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [3, 2, 2, 3]
    val = 3
    print("Input:  {} {}".format(nums, val))
    k = Solution().removeElement(nums, val)
    print("Output: {}, {}".format(k, nums[:k]))
