from collections import deque
from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def build(lo, hi):
            if lo > hi:
                return None
            mid = lo + (hi - lo + 1) // 2
            root = TreeNode(nums[mid])
            root.left = build(lo, mid - 1)
            root.right = build(mid + 1, hi)
            return root

        return build(0, len(nums) - 1)

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
    nums1 = [-10, -3, 0, 5, 9]
    print("Input:  nums = {}".format(nums1))
    print("Output: {}".format(tree_show(Solution().sortedArrayToBST(nums1))))

    nums2 = [1, 3]
    print("Input:  nums = {}".format(nums2))
    print("Output: {}".format(tree_show(Solution().sortedArrayToBST(nums2))))
