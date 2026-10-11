from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def recoverTree(self, root: Optional[TreeNode]) -> None:
        vals = []

        def collect(node):
            if node is None:
                return
            collect(node.left)
            vals.append(node.val)
            collect(node.right)

        collect(root)
        n = len(vals)
        i = 0
        while i < n - 1 and vals[i] < vals[i + 1]:
            i += 1
        j = n - 1
        while j > 0 and vals[j - 1] < vals[j]:
            j -= 1
        vals[i], vals[j] = vals[j], vals[i]

        idx = 0

        def assign(node):
            nonlocal idx
            if node is None:
                return
            assign(node.left)
            node.val = vals[idx]
            idx += 1
            assign(node.right)

        assign(root)

# ------------------------------- solution end ---------------------------------


def inorder(node, out):
    if node is None:
        return
    inorder(node.left, out)
    out.append(node.val)
    inorder(node.right, out)


if __name__ == "__main__":
    root = TreeNode(1, None, TreeNode(3, None, TreeNode(2)))
    print("Input:  [1, 3, null, null, 2]")
    Solution().recoverTree(root)
    out = []
    inorder(root, out)
    print("Output: {}".format(out))
