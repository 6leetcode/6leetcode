from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def search(self, arr: List[int], target: int) -> int:
        lo, hi, res = 0, len(arr) - 1, -1
        while lo <= hi:
            mid = (lo + hi) // 2
            if arr[mid] == target:
                res = mid
                hi = mid - 1
            elif arr[mid] > arr[lo]:
                if arr[lo] <= target < arr[mid]:
                    hi = mid - 1
                else:
                    lo = mid + 1
            elif arr[mid] < arr[lo]:
                if arr[mid] < target <= arr[hi]:
                    lo = mid + 1
                else:
                    hi = mid - 1
            else:
                if arr[lo] != target:
                    lo += 1
                else:
                    res = mid
                    hi = mid - 1
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    arr = [15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14]
    print("Input:  {}, target = 5".format(arr))
    print("Output: {}".format(Solution().search(arr, 5)))
