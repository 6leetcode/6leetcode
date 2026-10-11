from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# ------------------------------- solution begin -------------------------------


class Solution:
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        def dfs(node, current):
            if node is None:
                return 0
            current = current * 10 + node.val
            if node.left is None and node.right is None:
                return current
            return dfs(node.left, current) + dfs(node.right, current)

        return dfs(root, 0)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root1 = TreeNode(1, TreeNode(2), TreeNode(3))
    root2 = TreeNode(4, TreeNode(9, TreeNode(5), TreeNode(1)), TreeNode(0))
    root3 = TreeNode(0)
    root4 = TreeNode(1, TreeNode(5))

    solution = Solution()

    print("Input:  [1, 2, 3]")
    print("Output: {}".format(solution.sumNumbers(root1)))

    print("Input:  [4, 9, 0, 5, 1]")
    print("Output: {}".format(solution.sumNumbers(root2)))

    print("Input:  [0]")
    print("Output: {}".format(solution.sumNumbers(root3)))

    print("Input:  [1, 5]")
    print("Output: {}".format(solution.sumNumbers(root4)))
