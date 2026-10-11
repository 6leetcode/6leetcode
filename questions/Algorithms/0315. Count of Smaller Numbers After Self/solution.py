from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def countSmaller(self, nums: List[int]) -> List[int]:
        res = []
        for i in range(len(nums)):
            count = 0
            for j in range(i + 1, len(nums)):
                if nums[j] < nums[i]:
                    count += 1
            res.append(count)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [5, 2, 6, 1]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().countSmaller(nums)))
