from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def height(node):
            if node is None:
                return 0
            left = height(node.left)
            if left == -1:
                return -1
            right = height(node.right)
            if right == -1:
                return -1
            if abs(left - right) > 1:
                return -1
            return max(left, right) + 1

        return height(root) != -1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()

    t1 = TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))
    print("Input:  [3, 9, 20, null, null, 15, 7]")
    print("Output: {}".format(solution.isBalanced(t1)))

    t2 = TreeNode(1)
    t2.left = TreeNode(2)
    t2.right = TreeNode(2)
    t2.left.left = TreeNode(3)
    t2.left.right = TreeNode(3)
    t2.left.left.left = TreeNode(4)
    t2.left.left.right = TreeNode(4)
    print("Input:  [1, 2, 2, 3, 3, null, null, 4, 4]")
    print("Output: {}".format(solution.isBalanced(t2)))

    print("Input:  []")
    print("Output: {}".format(solution.isBalanced(None)))
