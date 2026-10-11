class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def partition(self, head: ListNode, x: int) -> ListNode:
        less_dummy = ListNode(0)
        greater_dummy = ListNode(0)
        less, greater = less_dummy, greater_dummy
        cur = head
        while cur:
            if cur.val < x:
                less.next = cur
                less = cur
            else:
                greater.next = cur
                greater = cur
            cur = cur.next
        greater.next = None
        less.next = greater_dummy.next
        return less_dummy.next

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


if __name__ == "__main__":
    head = ints_to_list([1, 4, 3, 2, 5, 2])
    print("Input:  {}, {}".format(list_to_ints(head), 3))
    print("Output: {}".format(list_to_ints(Solution().partition(head, 3))))
