from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def judgePoint24(self, nums: List[int]) -> bool:
        def solve(arr):
            if len(arr) == 1:
                return abs(arr[0] - 24) < 1e-6
            for i in range(len(arr)):
                for j in range(len(arr)):
                    if i == j:
                        continue
                    rest = [arr[k] for k in range(len(arr)) if k != i and k != j]
                    x, y = arr[i], arr[j]
                    cands = [x + y, x - y, x * y]
                    if abs(y) > 1e-6:
                        cands.append(x / y)
                    for v in cands:
                        if solve(rest + [v]):
                            return True
            return False

        return solve([float(x) for x in nums])

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [3, 3, 8, 8]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().judgePoint24(nums)))
