from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def smallestK(self, arr: List[int], k: int) -> List[int]:
        arr.sort()
        return arr[:k]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    arr = [1, 3, 5, 7, 2, 4, 6, 8]
    print("Input:  {}, k = 4".format(arr))
    print("Output: {}".format(Solution().smallestK(arr, 4)))
