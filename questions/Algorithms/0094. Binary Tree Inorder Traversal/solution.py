from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []

        def inorder(node: Optional[TreeNode]):
            if node is None:
                return
            inorder(node.left)
            res.append(node.val)
            inorder(node.right)

        inorder(root)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root = TreeNode(1, TreeNode(2), TreeNode(3))
    print("Input:  [1, 2, 3]")
    print("Output: {}".format(Solution().inorderTraversal(root)))
