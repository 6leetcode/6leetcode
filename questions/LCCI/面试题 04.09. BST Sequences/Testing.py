from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def BSTSequences(self, root: Optional[TreeNode]) -> List[List[int]]:
        if root is None:
            return [[]]
        left = self.BSTSequences(root.left)
        right = self.BSTSequences(root.right)
        res = []

        def weave(l, r, prefix):
            if not l and not r:
                res.append(prefix[:])
                return
            if l:
                weave(l[1:], r, prefix + [l[0]])
            if r:
                weave(l, r[1:], prefix + [r[0]])

        for l in left:
            for r in right:
                weave(l, r, [root.val])
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root = TreeNode(2, TreeNode(1), TreeNode(3))
    print("Input:  [2, 1, 3]")
    print("Output: {}".format(Solution().BSTSequences(root)))
