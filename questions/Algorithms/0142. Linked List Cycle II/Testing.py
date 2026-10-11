from typing import List, Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = head
        fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow is fast:
                p = head
                while p is not slow:
                    p = p.next
                    slow = slow.next
                return p
        return None

# ------------------------------- solution end ---------------------------------


def ints_to_list(nums, pos):
    dummy = ListNode(0)
    cur = dummy
    nodes = []
    for v in nums:
        cur.next = ListNode(v)
        cur = cur.next
        nodes.append(cur)
    if pos >= 0 and nodes:
        cur.next = nodes[pos]
    return dummy.next, nodes


def run(nums, pos):
    print("Input:  head = {}, pos = {}".format(nums, pos))
    head, nodes = ints_to_list(nums, pos)
    res = Solution().detectCycle(head)
    idx = -1
    for i, n in enumerate(nodes):
        if n is res:
            idx = i
            break
    print("Output: {}".format(idx if idx >= 0 else "null"))


if __name__ == "__main__":
    run([3, 2, 0, -4], 1)
    run([1, 2], 0)
    run([1], -1)
    run([], -1)
