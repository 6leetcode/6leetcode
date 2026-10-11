from collections import deque
from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def listOfDepth(self, tree: Optional[TreeNode]) -> List[Optional[ListNode]]:
        res = []
        if tree is None:
            return res
        q = deque([tree])
        while q:
            level_size = len(q)
            dummy = ListNode(0)
            lt = dummy
            for _ in range(level_size):
                node = q.popleft()
                lt.next = ListNode(node.val)
                lt = lt.next
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            res.append(dummy.next)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    root = TreeNode(1, TreeNode(2), TreeNode(3))
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)
    root.right.right = TreeNode(7)
    root.left.left.left = TreeNode(8)
    print("Input:  [1, 2, 3, 4, 5, null, 7, 8]")
    res = Solution().listOfDepth(root)
    out = []
    for l in res:
        vals = []
        p = l
        while p:
            vals.append(p.val)
            p = p.next
        out.append(vals)
    print("Output: {}".format(out))
