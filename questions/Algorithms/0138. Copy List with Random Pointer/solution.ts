class Node {
  val: number;
  next: Node | null;
  random: Node | null;
  constructor(val?: number, next?: Node | null, random?: Node | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
    this.random = random === undefined ? null : random;
  }
}

// ------------------------------- solution begin -------------------------------
const copyRandomList = (head: Node | null): Node | null => {
  if (head === null) return null;

  const mapping = new Map<Node, Node>();
  for (let cur: Node | null = head; cur; cur = cur.next) {
    mapping.set(cur, new Node(cur.val));
  }

  for (let cur: Node | null = head; cur; cur = cur.next) {
    const copy = mapping.get(cur)!;
    copy.next = cur.next ? mapping.get(cur.next)! : null;
    copy.random = cur.random ? mapping.get(cur.random)! : null;
  }

  return mapping.get(head)!;
};
// ------------------------------- solution end ---------------------------------

const vals = [7, 13, 11, 10, 1];
const randoms = [-1, 0, 4, 2, 0];

const nodes: Node[] = vals.map((v) => new Node(v));
nodes.forEach((node, i) => {
  if (i + 1 < nodes.length) node.next = nodes[i + 1];
  if (randoms[i] >= 0) node.random = nodes[randoms[i]];
});

console.log("Input:  [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]");
const clone = copyRandomList(nodes[0]);

const list: Node[] = [];
for (let cur: Node | null = clone; cur; cur = cur.next) {
  list.push(cur);
}

const parts = list.map((node) => {
  const index = node.random ? list.indexOf(node.random) : -1;
  return `[${node.val}, ${index >= 0 ? index : "null"}]`;
});
console.log(`Output: [${parts.join(", ")}]`);
