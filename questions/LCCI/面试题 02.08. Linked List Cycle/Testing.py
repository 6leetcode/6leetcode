class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def detectCycle(self, head: ListNode) -> ListNode:
        slow = fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow is fast:
                p = head
                while p is not slow:
                    p = p.next
                    slow = slow.next
                return p
        return None

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    n1, n2, n3, n4 = ListNode(3), ListNode(2), ListNode(0), ListNode(-4)
    n1.next, n2.next, n3.next, n4.next = n2, n3, n4, n2
    print("Input:  [3, 2, 0, -4], pos = 1")
    res = Solution().detectCycle(n1)
    print("Output: no cycle" if res is None else "Output: tail connects to node with value {}".format(res.val))
