class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def rotateRight(self, head: ListNode, k: int) -> ListNode:
        if head is None or head.next is None or k == 0:
            return head
        length = 1
        tail = head
        while tail.next:
            tail = tail.next
            length += 1
        k %= length
        if k == 0:
            return head
        tail.next = head
        new_tail = head
        for _ in range(length - k - 1):
            new_tail = new_tail.next
        new_head = new_tail.next
        new_tail.next = None
        return new_head

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
    head = ints_to_list([1, 2, 3, 4, 5])
    print("Input:  {}, {}".format(list_to_ints(head), 2))
    print("Output: {}".format(list_to_ints(Solution().rotateRight(head, 2))))
