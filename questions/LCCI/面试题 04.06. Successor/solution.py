from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def inorderSuccessor(self, root: TreeNode, p: TreeNode) -> Optional[TreeNode]:
        if p.right:
            node = p.right
            while node.left:
                node = node.left
            return node
        succ = None
        node = root
        while node:
            if p.val < node.val:
                succ = node
                node = node.left
            elif p.val > node.val:
                node = node.right
            else:
                break
        return succ

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    n2, n1, n3 = TreeNode(2), TreeNode(1), TreeNode(3)
    n2.left, n2.right = n1, n3
    print("Input:  root = [2, 1, 3], p = 1")
    res = Solution().inorderSuccessor(n2, n1)
    print("Output: null" if res is None else "Output: {}".format(res.val))
