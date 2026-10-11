class TreeNode {
  val: number;
  left: TreeNode | null;
  right: TreeNode | null;
  constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
    this.val = val === undefined ? 0 : val;
    this.left = left === undefined ? null : left;
    this.right = right === undefined ? null : right;
  }
}

// ------------------------------- solution begin -------------------------------
const flatten = (root: TreeNode | null): void => {
  let cur = root;
  while (cur) {
    if (cur.left) {
      let prev = cur.left;
      while (prev.right) prev = prev.right;
      prev.right = cur.right;
      cur.right = cur.left;
      cur.left = null;
    }
    cur = cur.right;
  }
};
// ------------------------------- solution end ---------------------------------

const treeShow = (root: TreeNode | null): string => {
  if (!root) return "[]";
  const parts: string[] = [];
  const queue: (TreeNode | null)[] = [root];
  while (queue.length) {
    const node = queue.shift()!;
    if (!node) {
      parts.push("null");
    } else {
      parts.push(String(node.val));
      queue.push(node.left, node.right);
    }
  }
  while (parts.length && parts[parts.length - 1] === "null") parts.pop();
  return `[${parts.join(", ")}]`;
};

const root1 = new TreeNode(1, new TreeNode(2, new TreeNode(3), new TreeNode(4)), new TreeNode(5, null, new TreeNode(6)));
console.log(`Input:  root = ${treeShow(root1)}`);
flatten(root1);
console.log(`Output: ${treeShow(root1)}`);

const root2 = new TreeNode(0);
console.log(`Input:  root = ${treeShow(root2)}`);
flatten(root2);
console.log(`Output: ${treeShow(root2)}`);

const root3: TreeNode | null = null;
console.log(`Input:  root = ${treeShow(root3)}`);
flatten(root3);
console.log(`Output: ${treeShow(root3)}`);
