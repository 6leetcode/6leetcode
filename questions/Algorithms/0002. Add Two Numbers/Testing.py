# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        dummy = ListNode(0)
        cur = dummy
        carry = 0
        while l1 or l2 or carry:
            n1 = l1.val if l1 else 0
            n2 = l2.val if l2 else 0
            total = n1 + n2 + carry
            carry = total // 10
            cur.next = ListNode(total % 10)
            cur = cur.next
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
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


if __name__ == "__main__":
    l1 = ints_to_list([2, 4, 3])
    l2 = ints_to_list([5, 6, 4])
    print("Input:  {} + {}".format(list_to_ints(l1), list_to_ints(l2)))
    print("Output: {}".format(list_to_ints(Solution().addTwoNumbers(l1, l2))))
