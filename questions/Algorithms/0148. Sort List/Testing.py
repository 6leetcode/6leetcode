from typing import Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        slow, fast = head, head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        mid = slow.next
        slow.next = None

        left = self.sortList(head)
        right = self.sortList(mid)
        return self._merge(left, right)

    def _merge(self, a: Optional[ListNode], b: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0)
        tail = dummy
        while a and b:
            if a.val <= b.val:
                tail.next = a
                a = a.next
            else:
                tail.next = b
                b = b.next
            tail = tail.next
        tail.next = a if a else b
        return dummy.next

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


def run(nums):
    head = ints_to_list(nums)
    print("Input:  {}".format(list_to_ints(head)))
    print("Output: {}".format(list_to_ints(Solution().sortList(head))))


if __name__ == "__main__":
    run([4, 2, 1, 3])
    run([-1, 5, 3, 4, 0])
    run([])
