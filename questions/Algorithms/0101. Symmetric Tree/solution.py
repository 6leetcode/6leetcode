from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def is_mirror(a, b):
            if a is None and b is None:
                return True
            if a is None or b is None:
                return False
            return a.val == b.val and is_mirror(a.left, b.right) and is_mirror(a.right, b.left)

        return is_mirror(root, root)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root = TreeNode(1, TreeNode(2), TreeNode(2))
    print("Input:  [1, 2, 2]")
    print("Output: {}".format(Solution().isSymmetric(root)))
