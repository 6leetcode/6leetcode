from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# ------------------------------- solution begin -------------------------------


class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        out: List[int] = []

        def dfs(node):
            if node is None:
                return
            out.append(node.val)
            dfs(node.left)
            dfs(node.right)

        dfs(root)
        return out

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root1 = TreeNode(1, None, TreeNode(2, TreeNode(3)))
    root2 = TreeNode(1)
    root3 = TreeNode(1, TreeNode(2, TreeNode(4), TreeNode(5)), TreeNode(3))

    solution = Solution()

    print("Input:  [1, null, 2, 3]")
    print("Output: {}".format(solution.preorderTraversal(root1)))

    print("Input:  []")
    print("Output: {}".format(solution.preorderTraversal(None)))

    print("Input:  [1]")
    print("Output: {}".format(solution.preorderTraversal(root2)))

    print("Input:  [1, 2, 3, 4, 5]")
    print("Output: {}".format(solution.preorderTraversal(root3)))
