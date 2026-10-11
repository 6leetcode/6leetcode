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
const recoverTree = (root: TreeNode | null): void => {
  const vals: number[] = [];
  const collect = (node: TreeNode | null) => {
    if (!node) return;
    collect(node.left);
    vals.push(node.val);
    collect(node.right);
  };
  collect(root);
  const n = vals.length;
  let i = 0;
  while (i < n - 1 && vals[i] < vals[i + 1]) i++;
  let j = n - 1;
  while (j > 0 && vals[j - 1] < vals[j]) j--;
  [vals[i], vals[j]] = [vals[j], vals[i]];
  let idx = 0;
  const assign = (node: TreeNode | null) => {
    if (!node) return;
    assign(node.left);
    node.val = vals[idx++];
    assign(node.right);
  };
  assign(root);
};
// ------------------------------- solution end ---------------------------------

const root = new TreeNode(1, null, new TreeNode(3, null, new TreeNode(2)));
console.log(`Input:  [1, 3, null, null, 2]`);
recoverTree(root);
const out: number[] = [];
const inorder = (node: TreeNode | null) => {
  if (!node) return;
  inorder(node.left);
  out.push(node.val);
  inorder(node.right);
};
inorder(root);
console.log(`Output: [${out.join(', ')}]`);
