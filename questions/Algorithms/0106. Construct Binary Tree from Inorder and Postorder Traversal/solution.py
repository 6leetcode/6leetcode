from collections import deque
from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def buildTree(self, inorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        def build(in_start, in_end, post_start, post_end):
            if in_start > in_end:
                return None
            root_val = postorder[post_end]
            idx = in_start
            while inorder[idx] != root_val:
                idx += 1
            left_len = idx - in_start
            root = TreeNode(root_val)
            root.left = build(in_start, idx - 1, post_start, post_start + left_len - 1)
            root.right = build(idx + 1, in_end, post_start + left_len, post_end - 1)
            return root

        return build(0, len(inorder) - 1, 0, len(postorder) - 1)

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
    inorder1 = [9, 3, 15, 20, 7]
    postorder1 = [9, 15, 7, 20, 3]
    print("Input:  inorder = {}, postorder = {}".format(inorder1, postorder1))
    print("Output: {}".format(tree_show(Solution().buildTree(inorder1, postorder1))))

    inorder2 = [-1]
    postorder2 = [-1]
    print("Input:  inorder = {}, postorder = {}".format(inorder2, postorder2))
    print("Output: {}".format(tree_show(Solution().buildTree(inorder2, postorder2))))
