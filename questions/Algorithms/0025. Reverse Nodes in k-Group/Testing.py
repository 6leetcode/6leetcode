class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def reverseKGroup(self, head: ListNode, k: int) -> ListNode:
        if head is None:
            return head
        tail = head
        for _ in range(k):
            if tail is None:
                return head
            tail = tail.next
        pre, cur = None, head
        while cur is not tail:
            nxt = cur.next
            cur.next = pre
            pre = cur
            cur = nxt
        head.next = self.reverseKGroup(tail, k)
        return pre

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
    print("Input:  {} {}".format(list_to_ints(head), 2))
    print("Output: {}".format(list_to_ints(Solution().reverseKGroup(head, 2))))
