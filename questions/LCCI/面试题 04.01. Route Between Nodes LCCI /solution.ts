// ------------------------------- solution begin -------------------------------
const findWhetherExistsPath = (n: number, graph: number[][], start: number, target: number): boolean => {
  const adj: number[][] = Array.from({ length: n + 1 }, () => []);
  for (const [u, v] of graph) adj[u].push(v);
  const visited: boolean[] = new Array(n + 1).fill(false);
  const dfs = (node: number): boolean => {
    if (node === target) return true;
    if (visited[node]) return false;
    visited[node] = true;
    return adj[node].some((next) => dfs(next));
  };
  return dfs(start);
};
// ------------------------------- solution end ---------------------------------

const graph = [
  [0, 1],
  [0, 2],
  [1, 2],
  [1, 2],
];
console.log(`Input:  n = 3, graph = [[0,1],[0,2],[1,2],[1,2]], start = 0, target = 2`);
console.log(`Output: ${findWhetherExistsPath(3, graph, 0, 2)}`);
