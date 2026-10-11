from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def checkSubTree(self, t1: Optional[TreeNode], t2: Optional[TreeNode]) -> bool:
        def same(a, b):
            if a is None and b is None:
                return True
            if a is None or b is None:
                return False
            return a.val == b.val and same(a.left, b.left) and same(a.right, b.right)

        if t2 is None:
            return True
        if t1 is None:
            return False
        return same(t1, t2) or self.checkSubTree(t1.left, t2) or self.checkSubTree(t1.right, t2)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    a3 = TreeNode(3)
    a4 = TreeNode(4)
    a5 = TreeNode(5)
    a3.left, a3.right = a4, a5
    a4.left, a4.right = TreeNode(1), TreeNode(2)
    b4 = TreeNode(4, TreeNode(1), TreeNode(2))
    print("Input:  t1 = [3,4,5,1,2], t2 = [4,1,2]")
    print("Output: {}".format(Solution().checkSubTree(a3, b4)))
