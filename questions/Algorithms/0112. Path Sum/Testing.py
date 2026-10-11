from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# ------------------------------- solution begin -------------------------------


class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if root is None:
            return False
        targetSum -= root.val
        if root.left is None and root.right is None:
            return targetSum == 0
        return self.hasPathSum(root.left, targetSum) or self.hasPathSum(root.right, targetSum)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root1 = TreeNode(
        5,
        TreeNode(4, TreeNode(11, TreeNode(7), TreeNode(2))),
        TreeNode(8, TreeNode(13), TreeNode(4, None, TreeNode(1))),
    )
    root2 = TreeNode(1, TreeNode(2), TreeNode(3))
    root3 = TreeNode(1, TreeNode(2))

    solution = Solution()

    print("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, null, 1], targetSum = 22")
    print("Output: {}".format(solution.hasPathSum(root1, 22)))

    print("Input:  [1, 2, 3], targetSum = 5")
    print("Output: {}".format(solution.hasPathSum(root2, 5)))

    print("Input:  [], targetSum = 0")
    print("Output: {}".format(solution.hasPathSum(None, 0)))

    print("Input:  [1, 2], targetSum = 3")
    print("Output: {}".format(solution.hasPathSum(root3, 3)))
