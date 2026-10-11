from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def build(lo: int, hi: int) -> Optional[TreeNode]:
            if lo > hi:
                return None
            mid = (lo + hi) // 2
            root = TreeNode(nums[mid])
            root.left = build(lo, mid - 1)
            root.right = build(mid + 1, hi)
            return root

        return build(0, len(nums) - 1)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [-10, -3, 0, 5, 9]
    print("Input:  [-10, -3, 0, 5, 9]")
    root = Solution().sortedArrayToBST(nums)
    pre = []

    def walk(n):
        if n is None:
            return
        pre.append(n.val)
        walk(n.left)
        walk(n.right)

    walk(root)
    print("Output: {}".format(pre))
