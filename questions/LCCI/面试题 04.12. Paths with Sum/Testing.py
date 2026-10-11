from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def pathSum(self, root: Optional[TreeNode], sum: int) -> int:
        def count(node, target):
            if node is None:
                return 0
            res = 1 if node.val == target else 0
            res += count(node.left, target - node.val)
            res += count(node.right, target - node.val)
            return res

        if root is None:
            return 0
        return count(root, sum) + self.pathSum(root.left, sum) + self.pathSum(root.right, sum)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root = TreeNode(1, TreeNode(2), TreeNode(3))
    print("Input:  [1, 2, 3], sum = 3")
    print("Output: {}".format(Solution().pathSum(root, 3)))
