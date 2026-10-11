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
const isValidBST = (root: TreeNode | null): boolean => {
  const validate = (node: TreeNode | null, min: number, max: number): boolean => {
    if (!node) return true;
    if (node.val <= min || node.val >= max) return false;
    return validate(node.left, min, node.val) && validate(node.right, node.val, max);
  };
  return validate(root, -Infinity, Infinity);
};
// ------------------------------- solution end ---------------------------------

const root = new TreeNode(2, new TreeNode(1), new TreeNode(3));
console.log(`Input:  [2, 1, 3]`);
console.log(`Output: ${isValidBST(root)}`);
