from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findSwapValues(self, array1: List[int], array2: List[int]) -> List[int]:
        sum1, sum2 = sum(array1), sum(array2)
        diff = sum2 - sum1
        if diff % 2 != 0:
            return []
        target = diff // 2
        set2 = set(array2)
        for x in array1:
            if x + target in set2:
                return [x, x + target]
        return []

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    array1 = [4, 1, 2, 1, 1, 2]
    array2 = [3, 6, 3, 3]
    print("Input:  array1 = {}, array2 = {}".format(array1, array2))
    print("Output: {}".format(Solution().findSwapValues(array1, array2)))
