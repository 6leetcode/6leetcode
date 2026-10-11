from typing import List, Optional

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def mergeTwoLists(self, a: ListNode, b: ListNode) -> ListNode:
        if a is None:
            return b
        if b is None:
            return a
        if a.val < b.val:
            a.next = self.mergeTwoLists(a.next, b)
            return a
        b.next = self.mergeTwoLists(a, b.next)
        return b

    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        ans = None
        for l in lists:
            ans = self.mergeTwoLists(ans, l)
        return ans

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
    lists = [ints_to_list([1, 4, 5]), ints_to_list([1, 3, 4]), ints_to_list([2, 6])]
    print("Input:  {}".format([list_to_ints(l) for l in lists]))
    print("Output: {}".format(list_to_ints(Solution().mergeKLists(lists))))
