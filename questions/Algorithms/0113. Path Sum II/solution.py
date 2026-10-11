from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# ------------------------------- solution begin -------------------------------


class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        res: List[List[int]] = []
        path: List[int] = []

        def dfs(node, remain):
            if node is None:
                return
            path.append(node.val)
            remain -= node.val
            if node.left is None and node.right is None:
                if remain == 0:
                    res.append(path[:])
            else:
                dfs(node.left, remain)
                dfs(node.right, remain)
            path.pop()

        dfs(root, targetSum)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root1 = TreeNode(
        5,
        TreeNode(4, TreeNode(11, TreeNode(7), TreeNode(2))),
        TreeNode(8, TreeNode(13), TreeNode(4, TreeNode(5), TreeNode(1))),
    )
    root2 = TreeNode(1, TreeNode(2), TreeNode(3))
    root3 = TreeNode(1, TreeNode(2))

    solution = Solution()

    print("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1], targetSum = 22")
    print("Output: {}".format(solution.pathSum(root1, 22)))

    print("Input:  [1, 2, 3], targetSum = 5")
    print("Output: {}".format(solution.pathSum(root2, 5)))

    print("Input:  [1, 2], targetSum = 0")
    print("Output: {}".format(solution.pathSum(root3, 0)))

    print("Input:  [1, 2, 3], targetSum = 3")
    print("Output: {}".format(solution.pathSum(root2, 3)))
