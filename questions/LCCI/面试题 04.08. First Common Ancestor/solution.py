from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> Optional[TreeNode]:
        if root is None or root is p or root is q:
            return root
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        if left and right:
            return root
        return left if left else right

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    n3, n5, n1 = TreeNode(3), TreeNode(5), TreeNode(1)
    n3.left, n3.right = n5, n1
    print("Input:  root = [3, 5, 1], p = 5, q = 1")
    print("Output: {}".format(Solution().lowestCommonAncestor(n3, n5, n1).val))
