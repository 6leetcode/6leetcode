from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def convertBiNode(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        dummy = TreeNode(0)
        self.prev = dummy

        def inorder(node):
            if node is None:
                return
            inorder(node.left)
            node.left = None
            self.prev.right = node
            self.prev = node
            inorder(node.right)

        inorder(root)
        self.prev.right = None
        return dummy.right

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    n4 = TreeNode(4)
    n2 = TreeNode(2)
    n5 = TreeNode(5)
    n1 = TreeNode(1)
    n3 = TreeNode(3)
    n6 = TreeNode(6)
    n0 = TreeNode(0)
    n4.left, n4.right = n2, n5
    n2.left, n2.right = n1, n3
    n5.right = n6
    n1.left = n0
    print("Input:  [4,2,5,1,3,null,6,0]")
    head = Solution().convertBiNode(n4)
    out = []
    p = head
    while p:
        out.append("{}, null".format(p.val))
        p = p.right
    print("Output: [{}]".format(", ".join(out)))
