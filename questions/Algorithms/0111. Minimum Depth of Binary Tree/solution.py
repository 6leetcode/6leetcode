from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        if root.left is None and root.right is None:
            return 1
        if root.left is None:
            return self.minDepth(root.right) + 1
        if root.right is None:
            return self.minDepth(root.left) + 1
        return 1 + min(self.minDepth(root.left), self.minDepth(root.right))

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()

    t1 = TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))
    print("Input:  [3, 9, 20, null, null, 15, 7]")
    print("Output: {}".format(solution.minDepth(t1)))

    t2 = TreeNode(2, None, TreeNode(3, None, TreeNode(4, None, TreeNode(5, None, TreeNode(6)))))
    print("Input:  [2, null, 3, null, 4, null, 5, null, 6]")
    print("Output: {}".format(solution.minDepth(t2)))
