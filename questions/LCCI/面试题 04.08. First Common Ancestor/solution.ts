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
const lowestCommonAncestor = (root: TreeNode | null, p: TreeNode, q: TreeNode): TreeNode | null => {
  if (!root || root === p || root === q) return root;
  const left = lowestCommonAncestor(root.left, p, q);
  const right = lowestCommonAncestor(root.right, p, q);
  if (left && right) return root;
  return left ? left : right;
};
// ------------------------------- solution end ---------------------------------

const n3 = new TreeNode(3);
const n5 = new TreeNode(5);
const n1 = new TreeNode(1);
n3.left = n5;
n3.right = n1;
console.log(`Input:  root = [3, 5, 1], p = 5, q = 1`);
console.log(`Output: ${lowestCommonAncestor(n3, n5, n1)!.val}`);
