class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        vals = []
        p = head
        while p:
            vals.append(p.val)
            p = p.next
        return vals == vals[::-1]

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
    head = ints_to_list([1, 2, 2, 1])
    print("Input:  {}".format(list_to_ints(head)))
    print("Output: {}".format(Solution().isPalindrome(head)))
