from collections import deque
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        cur = root
        while cur:
            if cur.left:
                prev = cur.left
                while prev.right:
                    prev = prev.right
                prev.right = cur.right
                cur.right = cur.left
                cur.left = None
            cur = cur.right

# ------------------------------- solution end ---------------------------------


def tree_show(root):
    if root is None:
        return "[]"
    parts = []
    queue = deque([root])
    while queue:
        node = queue.popleft()
        if node is None:
            parts.append("null")
        else:
            parts.append(str(node.val))
            queue.append(node.left)
            queue.append(node.right)
    while parts and parts[-1] == "null":
        parts.pop()
    return "[" + ", ".join(parts) + "]"


if __name__ == "__main__":
    root1 = TreeNode(1, TreeNode(2, TreeNode(3), TreeNode(4)), TreeNode(5, None, TreeNode(6)))
    print("Input:  root = {}".format(tree_show(root1)))
    Solution().flatten(root1)
    print("Output: {}".format(tree_show(root1)))

    root2 = TreeNode(0)
    print("Input:  root = {}".format(tree_show(root2)))
    Solution().flatten(root2)
    print("Output: {}".format(tree_show(root2)))

    root3 = None
    print("Input:  root = {}".format(tree_show(root3)))
    Solution().flatten(root3)
    print("Output: {}".format(tree_show(root3)))
