class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def removeDuplicateNodes(self, head: ListNode) -> ListNode:
        seen = set()
        dummy = ListNode(0)
        dummy.next = head
        prev, cur = dummy, head
        while cur:
            if cur.val in seen:
                prev.next = cur.next
                cur = prev.next
            else:
                seen.add(cur.val)
                prev = cur
                cur = cur.next
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
    head = ints_to_list([1, 2, 3, 3, 2, 1])
    print("Input:  {}".format(list_to_ints(head)))
    print("Output: {}".format(list_to_ints(Solution().removeDuplicateNodes(head))))
