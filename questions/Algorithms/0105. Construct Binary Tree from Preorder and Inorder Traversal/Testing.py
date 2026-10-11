from collections import deque
from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        def build(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end:
                return None
            root_val = preorder[pre_start]
            idx = in_start
            while inorder[idx] != root_val:
                idx += 1
            left_len = idx - in_start
            root = TreeNode(root_val)
            root.left = build(pre_start + 1, pre_start + left_len, in_start, idx - 1)
            root.right = build(pre_start + left_len + 1, pre_end, idx + 1, in_end)
            return root

        return build(0, len(preorder) - 1, 0, len(inorder) - 1)

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
    preorder1 = [3, 9, 20, 15, 7]
    inorder1 = [9, 3, 15, 20, 7]
    print("Input:  preorder = {}, inorder = {}".format(preorder1, inorder1))
    print("Output: {}".format(tree_show(Solution().buildTree(preorder1, inorder1))))

    preorder2 = [-1]
    inorder2 = [-1]
    print("Input:  preorder = {}, inorder = {}".format(preorder2, inorder2))
    print("Output: {}".format(tree_show(Solution().buildTree(preorder2, inorder2))))
