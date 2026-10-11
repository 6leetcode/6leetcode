from typing import List, Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow is fast:
                return True
        return False

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
    return dummy.next


def run(nums, pos):
    print("Input:  head = {}, pos = {}".format(nums, pos))
    print("Output: {}".format(Solution().hasCycle(ints_to_list(nums, pos))))


if __name__ == "__main__":
    run([3, 2, 0, -4], 1)
    run([1, 2], 0)
    run([1], -1)
    run([], -1)
