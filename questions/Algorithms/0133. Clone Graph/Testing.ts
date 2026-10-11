class Node {
  val: number;
  neighbors: Node[];
  constructor(val?: number, neighbors?: Node[]) {
    this.val = val === undefined ? 0 : val;
    this.neighbors = neighbors === undefined ? [] : neighbors;
  }
}

// ------------------------------- solution begin -------------------------------
const cloneGraph = (node: Node | null): Node | null => {
  if (node === null) return null;

  const visited = new Map<Node, Node>();

  const dfs = (current: Node): Node => {
    const cached = visited.get(current);
    if (cached) return cached;
    const copy = new Node(current.val);
    visited.set(current, copy);
    for (const neighbor of current.neighbors) {
      copy.neighbors.push(dfs(neighbor));
    }
    return copy;
  };

  return dfs(node);
};
// ------------------------------- solution end ---------------------------------

const printGraph = (node: Node | null): string => {
  const byVal = new Map<number, Node>();

  const collect = (current: Node | null) => {
    if (current === null || byVal.has(current.val)) return;
    byVal.set(current.val, current);
    for (const neighbor of current.neighbors) collect(neighbor);
  };
  collect(node);

  const max = byVal.size === 0 ? 0 : Math.max(...byVal.keys());
  const parts: string[] = [];
  for (let v = 1; v <= max; v++) {
    const current = byVal.get(v)!;
    parts.push(`[${current.neighbors.map((x) => x.val).join(", ")}]`);
  }
  return `[${parts.join(", ")}]`;
};

const n1 = new Node(1);
const n2 = new Node(2);
const n3 = new Node(3);
const n4 = new Node(4);
n1.neighbors = [n2, n4];
n2.neighbors = [n1, n3];
n3.neighbors = [n2, n4];
n4.neighbors = [n1, n3];

console.log("Input:  [[2, 4], [1, 3], [2, 4], [1, 3]]");
console.log(`Output: ${printGraph(cloneGraph(n1))}`);
