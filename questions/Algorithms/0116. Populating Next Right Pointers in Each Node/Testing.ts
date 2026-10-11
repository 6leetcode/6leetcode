class Node {
  val: number;
  left: Node | null;
  right: Node | null;
  next: Node | null;
  constructor(
    val?: number,
    left?: Node | null,
    right?: Node | null,
    next?: Node | null,
  ) {
    this.val = val === undefined ? 0 : val;
    this.left = left === undefined ? null : left;
    this.right = right === undefined ? null : right;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const connect = (root: Node | null): Node | null => {
  if (!root || !root.left) return root;
  root.left.next = root.right;
  if (root.next) root.right!.next = root.next.left;
  connect(root.left);
  connect(root.right);
  return root;
};
// ------------------------------- solution end ---------------------------------

const firstOfNextLevel = (cur: Node | null): Node | null => {
  while (cur) {
    if (cur.left) return cur.left;
    if (cur.right) return cur.right;
    cur = cur.next;
  }
  return null;
};

const serialize = (root: Node | null): string => {
  const parts: string[] = [];
  let first = true;
  let cur = root;
  while (cur) {
    let node: Node | null = cur;
    while (node) {
      if (!first) parts.push(",");
      parts.push(`${node.val}`);
      first = false;
      node = node.next;
    }
    if (!first) parts.push(",");
    parts.push("#");
    first = false;
    cur = firstOfNextLevel(cur);
  }
  return `[${parts.join("")}]`;
};

const root = new Node(1);
root.left = new Node(2);
root.right = new Node(3);
root.left.left = new Node(4);
root.left.right = new Node(5);
root.right.left = new Node(6);
root.right.right = new Node(7);

console.log("Input:  [1, 2, 3, 4, 5, 6, 7]");
console.log(`Output: ${serialize(connect(root))}`);

console.log("Input:  []");
console.log(`Output: ${serialize(connect(null))}`);
