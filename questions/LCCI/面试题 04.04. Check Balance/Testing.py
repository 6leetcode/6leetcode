from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def height(node: Optional[TreeNode]) -> int:
            if node is None:
                return 0
            l = height(node.left)
            if l == -1:
                return -1
            r = height(node.right)
            if r == -1:
                return -1
            if abs(l - r) > 1:
                return -1
            return 1 + max(l, r)

        return height(root) != -1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root = TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))
    print("Input:  [3, 9, 20, null, null, 15, 7]")
    print("Output: {}".format(Solution().isBalanced(root)))
