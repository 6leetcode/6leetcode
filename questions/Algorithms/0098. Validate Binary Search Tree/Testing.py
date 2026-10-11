from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def validate(node, low, high):
            if node is None:
                return True
            if not (low < node.val < high):
                return False
            return validate(node.left, low, node.val) and validate(node.right, node.val, high)

        return validate(root, float("-inf"), float("inf"))

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root = TreeNode(2, TreeNode(1), TreeNode(3))
    print("Input:  [2, 1, 3]")
    print("Output: {}".format(Solution().isValidBST(root)))
