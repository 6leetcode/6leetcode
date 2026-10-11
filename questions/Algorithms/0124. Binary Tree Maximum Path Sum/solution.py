from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# ------------------------------- solution begin -------------------------------


class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        best = float("-inf")

        def gain(node):
            nonlocal best
            if node is None:
                return 0
            left = max(0, gain(node.left))
            right = max(0, gain(node.right))
            best = max(best, node.val + left + right)
            return node.val + max(left, right)

        gain(root)
        return best

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root1 = TreeNode(1, TreeNode(2), TreeNode(3))
    root2 = TreeNode(-10, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))
    root3 = TreeNode(-3)
    root4 = TreeNode(2, TreeNode(-1), TreeNode(-2))

    solution = Solution()

    print("Input:  [1, 2, 3]")
    print("Output: {}".format(solution.maxPathSum(root1)))

    print("Input:  [-10, 9, 20, null, null, 15, 7]")
    print("Output: {}".format(solution.maxPathSum(root2)))

    print("Input:  [-3]")
    print("Output: {}".format(solution.maxPathSum(root3)))

    print("Input:  [2, -1, -2]")
    print("Output: {}".format(solution.maxPathSum(root4)))
