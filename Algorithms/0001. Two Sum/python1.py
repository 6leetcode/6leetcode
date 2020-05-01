from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        umap = dict()
        for i in range(0, len(nums)):
            if umap.get(target - nums[i]) is not None:
                return [umap.get(target - nums[i]), i]
            umap[nums[i]] = i
        return [-1, -1]


if __name__ == "__main__":
    solution = Solution()
    print("Input:  {}, {}".format([1, 2, 3], 3))
    print("Output: {}".format(solution.twoSum([1, 2, 3], 3)))
