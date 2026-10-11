from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def subSort(self, array: List[int]) -> List[int]:
        m = n = -1
        mx = array[0]
        for i in range(1, len(array)):
            if array[i] < mx:
                n = i
            else:
                mx = array[i]
        mn = array[-1]
        for i in range(len(array) - 2, -1, -1):
            if array[i] > mn:
                m = i
            else:
                mn = array[i]
        return [m, n]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    array = [1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19]
    print("Input:  {}".format(array))
    print("Output: {}".format(Solution().subSort(array)))
