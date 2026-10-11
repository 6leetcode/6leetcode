from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        res = []
        if root is None:
            return res
        queue = [root]
        while queue:
            size = len(queue)
            level = []
            for _ in range(size):
                node = queue.pop(0)
                level.append(node.val)
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            if len(res) % 2 == 1:
                level.reverse()
            res.append(level)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()

    t1 = TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))
    print("Input:  [3, 9, 20, null, null, 15, 7]")
    print("Output: {}".format(solution.zigzagLevelOrder(t1)))

    t2 = TreeNode(1)
    print("Input:  [1]")
    print("Output: {}".format(solution.zigzagLevelOrder(t2)))

    print("Input:  []")
    print("Output: {}".format(solution.zigzagLevelOrder(None)))
