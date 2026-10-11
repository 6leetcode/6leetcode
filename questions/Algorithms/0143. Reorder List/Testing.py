from typing import Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        if not head or not head.next:
            return

        slow = head
        fast = head
        while fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next

        second = slow.next
        slow.next = None

        prev = None
        while second:
            nxt = second.next
            second.next = prev
            prev = second
            second = nxt

        first = head
        second = prev
        while second:
            fnext = first.next
            snext = second.next
            first.next = second
            second.next = fnext
            first = fnext
            second = snext

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
    Solution().reorderList(head)
    print("Output: {}".format(list_to_ints(head)))


if __name__ == "__main__":
    run([1, 2, 3, 4])
    run([1, 2, 3, 4, 5])
    run([1])
