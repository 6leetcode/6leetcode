from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def divingBoard(self, shorter: int, longer: int, k: int) -> List[int]:
        if k == 0:
            return []
        if shorter == longer:
            return [shorter * k]
        return [shorter * (k - i) + longer * i for i in range(k + 1)]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  shorter = 1, longer = 2, k = 3")
    print("Output: {}".format(Solution().divingBoard(1, 2, 3)))
