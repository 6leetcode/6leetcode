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
const isSymmetric = (root: TreeNode | null): boolean => {
  const isMirror = (a: TreeNode | null, b: TreeNode | null): boolean => {
    if (a === null && b === null) return true;
    if (a === null || b === null) return false;
    return a.val === b.val && isMirror(a.left, b.right) && isMirror(a.right, b.left);
  };
  return isMirror(root, root);
};
// ------------------------------- solution end ---------------------------------

const root = new TreeNode(1, new TreeNode(2), new TreeNode(2));
console.log(`Input:  [1, 2, 2]`);
console.log(`Output: ${isSymmetric(root)}`);
