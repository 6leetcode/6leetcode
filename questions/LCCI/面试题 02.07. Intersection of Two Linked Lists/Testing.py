class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        a, b = headA, headB
        while a is not b:
            a = a.next if a else headB
            b = b.next if b else headA
        return a

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    s1, s2, s3 = ListNode(8), ListNode(4), ListNode(5)
    s1.next, s2.next = s2, s3
    a2 = ListNode(1)
    a2.next = s1
    a1 = ListNode(4)
    a1.next = a2
    b3 = ListNode(1)
    b3.next = s1
    b2 = ListNode(0)
    b2.next = b3
    b1 = ListNode(5)
    b1.next = b2
    print("Input:  [4, 1, 8, 4, 5], [5, 0, 1, 8, 4, 5]")
    res = Solution().getIntersectionNode(a1, b1)
    print("Output: No intersection" if res is None else "Output: Intersected at '{}'".format(res.val))
