from collections import deque
from typing import List, Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# ------------------------------- solution begin -------------------------------


class Solution:
    def sortedListToBST(self, head: Optional[ListNode]) -> Optional[TreeNode]:
        nums = []
        while head:
            nums.append(head.val)
            head = head.next

        def build(lo, hi):
            if lo > hi:
                return None
            mid = lo + (hi - lo + 1) // 2
            root = TreeNode(nums[mid])
            root.left = build(lo, mid - 1)
            root.right = build(mid + 1, hi)
            return root

        return build(0, len(nums) - 1)

# ------------------------------- solution end ---------------------------------


def ints_to_list(nums):
    dummy = ListNode(0)
    cur = dummy
    for n in nums:
        cur.next = ListNode(n)
        cur = cur.next
    return dummy.next


def list_to_ints(head):
    res = []
    while head:
        res.append(head.val)
        head = head.next
    return res


def tree_show(root):
    if root is None:
        return "[]"
    parts = []
    queue = deque([root])
    while queue:
        node = queue.popleft()
        if node is None:
            parts.append("null")
        else:
            parts.append(str(node.val))
            queue.append(node.left)
            queue.append(node.right)
    while parts and parts[-1] == "null":
        parts.pop()
    return "[" + ", ".join(parts) + "]"


if __name__ == "__main__":
    head1 = ints_to_list([-10, -3, 0, 5, 9])
    print("Input:  head = {}".format(list_to_ints(head1)))
    print("Output: {}".format(tree_show(Solution().sortedListToBST(head1))))

    head2 = ints_to_list([])
    print("Input:  head = {}".format(list_to_ints(head2)))
    print("Output: {}".format(tree_show(Solution().sortedListToBST(head2))))
