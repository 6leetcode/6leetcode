class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# ------------------------------- solution begin -------------------------------


class Solution:
    def deleteNode(self, node: ListNode) -> None:
        nxt = node.next
        node.val = nxt.val
        node.next = nxt.next

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
    head = ints_to_list([4, 5, 1, 9])
    print("Input:  {}".format(list_to_ints(head)))
    Solution().deleteNode(head.next)
    print("Output: {}".format(list_to_ints(head)))
