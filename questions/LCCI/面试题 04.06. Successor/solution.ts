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
const inorderSuccessor = (root: TreeNode | null, p: TreeNode): TreeNode | null => {
  if (p.right) {
    let node = p.right;
    while (node.left) node = node.left;
    return node;
  }
  let succ: TreeNode | null = null;
  let node = root;
  while (node) {
    if (p.val < node.val) {
      succ = node;
      node = node.left;
    } else if (p.val > node.val) {
      node = node.right;
    } else {
      break;
    }
  }
  return succ;
};
// ------------------------------- solution end ---------------------------------

const n2 = new TreeNode(2);
const n1 = new TreeNode(1);
const n3 = new TreeNode(3);
n2.left = n1;
n2.right = n3;
console.log(`Input:  root = [2, 1, 3], p = 1`);
const res = inorderSuccessor(n2, n1);
console.log(res ? `Output: ${res.val}` : 'Output: null');
