from typing import List, Optional


class Node:
    def __init__(self, val: int = 0, neighbors: Optional[List["Node"]] = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []


# ------------------------------- solution begin -------------------------------


class Solution:
    def cloneGraph(self, node: Optional["Node"]) -> Optional["Node"]:
        if node is None:
            return None

        visited = {}

        def dfs(current: "Node") -> "Node":
            if current in visited:
                return visited[current]
            copy = Node(current.val)
            visited[current] = copy
            for neighbor in current.neighbors:
                copy.neighbors.append(dfs(neighbor))
            return copy

        return dfs(node)

# ------------------------------- solution end ---------------------------------


def print_graph(node: Optional["Node"]) -> str:
    by_val = {}

    def collect(current: Optional["Node"]) -> None:
        if current is None or current.val in by_val:
            return
        by_val[current.val] = current
        for neighbor in current.neighbors:
            collect(neighbor)

    collect(node)
    max_val = max(by_val) if by_val else 0
    parts = []
    for v in range(1, max_val + 1):
        parts.append("[{}]".format(", ".join(str(x.val) for x in by_val[v].neighbors)))
    return "[{}]".format(", ".join(parts))


if __name__ == "__main__":
    n1 = Node(1)
    n2 = Node(2)
    n3 = Node(3)
    n4 = Node(4)
    n1.neighbors = [n2, n4]
    n2.neighbors = [n1, n3]
    n3.neighbors = [n2, n4]
    n4.neighbors = [n1, n3]

    print("Input:  [[2, 4], [1, 3], [2, 4], [1, 3]]")
    print("Output: {}".format(print_graph(Solution().cloneGraph(n1))))
