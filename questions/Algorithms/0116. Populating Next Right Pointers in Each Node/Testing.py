class Node:
    def __init__(self, val: int = 0, left=None, right=None, next=None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next

# ------------------------------- solution begin -------------------------------


class Solution:
    def connect(self, root: "Node") -> "Node":
        if root is None or root.left is None:
            return root
        root.left.next = root.right
        if root.next is not None:
            root.right.next = root.next.left
        self.connect(root.left)
        self.connect(root.right)
        return root

# ------------------------------- solution end ---------------------------------


def first_of_next_level(cur):
    while cur:
        if cur.left:
            return cur.left
        if cur.right:
            return cur.right
        cur = cur.next
    return None


def show(root):
    parts = []
    first = True
    cur = root
    while cur:
        node = cur
        while node:
            if not first:
                parts.append(",")
            parts.append(str(node.val))
            first = False
            node = node.next
        if not first:
            parts.append(",")
        parts.append("#")
        first = False
        cur = first_of_next_level(cur)
    print("[{}]".format("".join(parts)))


if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.right.left = Node(6)
    root.right.right = Node(7)

    print("Input:  [1, 2, 3, 4, 5, 6, 7]")
    print("Output: ", end="")
    show(Solution().connect(root))

    print("Input:  []")
    print("Output: ", end="")
    show(Solution().connect(None))
