from typing import Optional


class Node:
    def __init__(self, x: int, next: Optional["Node"] = None, random: Optional["Node"] = None):
        self.val = x
        self.next = next
        self.random = random


# ------------------------------- solution begin -------------------------------


class Solution:
    def copyRandomList(self, head: Optional["Node"]) -> Optional["Node"]:
        if head is None:
            return None

        mapping = {}
        cur = head
        while cur:
            mapping[cur] = Node(cur.val)
            cur = cur.next

        cur = head
        while cur:
            mapping[cur].next = mapping.get(cur.next)
            mapping[cur].random = mapping.get(cur.random)
            cur = cur.next

        return mapping[head]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    vals = [7, 13, 11, 10, 1]
    randoms = [-1, 0, 4, 2, 0]

    nodes = [Node(v) for v in vals]
    for i, node in enumerate(nodes):
        if i + 1 < len(nodes):
            node.next = nodes[i + 1]
        if randoms[i] >= 0:
            node.random = nodes[randoms[i]]

    print("Input:  [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]")
    clone = Solution().copyRandomList(nodes[0])

    linked = []
    cur = clone
    while cur:
        linked.append(cur)
        cur = cur.next

    parts = []
    for node in linked:
        index = linked.index(node.random) if node.random in linked else -1
        parts.append("[{}, {}]".format(node.val, index if index >= 0 else "null"))
    print("Output: [{}]".format(", ".join(parts)))
