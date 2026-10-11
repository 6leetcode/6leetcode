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
const isSameTree = (p: TreeNode | null, q: TreeNode | null): boolean => {
  if (p === null && q === null) return true;
  if (p === null || q === null) return false;
  return p.val === q.val && isSameTree(p.left, q.left) && isSameTree(p.right, q.right);
};
// ------------------------------- solution end ---------------------------------

const node1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
console.log(`Input:  [1, 2, 3]`);
console.log(`Output: ${isSameTree(node1, node1)}`);
