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
const maxDepth = (root: TreeNode | null): number => {
  if (!root) return 0;
  return 1 + Math.max(maxDepth(root.left), maxDepth(root.right));
};
// ------------------------------- solution end ---------------------------------

const t1 = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
console.log(`Input:  [3, 9, 20, null, null, 15, 7]`);
console.log(`Output: ${maxDepth(t1)}`);

const t2 = new TreeNode(1, null, new TreeNode(2));
console.log(`Input:  [1, null, 2]`);
console.log(`Output: ${maxDepth(t2)}`);
