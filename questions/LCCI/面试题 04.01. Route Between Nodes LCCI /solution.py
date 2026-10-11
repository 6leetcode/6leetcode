from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findWhetherExistsPath(self, n: int, graph: List[List[int]], start: int, target: int) -> bool:
        adj = [[] for _ in range(n + 1)]
        for u, v in graph:
            adj[u].append(v)
        visited = [False] * (n + 1)

        def dfs(node: int) -> bool:
            if node == target:
                return True
            if visited[node]:
                return False
            visited[node] = True
            return any(dfs(nxt) for nxt in adj[node])

        return dfs(start)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    graph = [[0, 1], [0, 2], [1, 2], [1, 2]]
    print("Input:  n = 3, graph = [[0,1],[0,2],[1,2],[1,2]], start = 0, target = 2")
    print("Output: {}".format(Solution().findWhetherExistsPath(3, graph, 0, 2)))
