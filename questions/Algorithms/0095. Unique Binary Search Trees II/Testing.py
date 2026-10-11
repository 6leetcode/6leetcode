from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def generateTrees(self, n: int) -> List[Optional[TreeNode]]:
        if n == 0:
            return []

        def gen(start: int, end: int) -> List[Optional[TreeNode]]:
            if start > end:
                return [None]
            res = []
            for i in range(start, end + 1):
                lefts = gen(start, i - 1)
                rights = gen(i + 1, end)
                for l in lefts:
                    for r in rights:
                        res.append(TreeNode(i, l, r))
            return res

        return gen(1, n)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(3))
    print("Output: {}".format(len(Solution().generateTrees(3))))
