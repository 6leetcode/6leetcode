from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()

    t1 = TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))
    print("Input:  [3, 9, 20, null, null, 15, 7]")
    print("Output: {}".format(solution.maxDepth(t1)))

    t2 = TreeNode(1, None, TreeNode(2))
    print("Input:  [1, null, 2]")
    print("Output: {}".format(solution.maxDepth(t2)))
