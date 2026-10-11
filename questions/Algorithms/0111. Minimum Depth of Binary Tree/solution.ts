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
const minDepth = (root: TreeNode | null): number => {
  if (!root) return 0;
  if (!root.left && !root.right) return 1;
  if (!root.left) return minDepth(root.right) + 1;
  if (!root.right) return minDepth(root.left) + 1;
  return 1 + Math.min(minDepth(root.left), minDepth(root.right));
};
// ------------------------------- solution end ---------------------------------

const t1 = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
console.log(`Input:  [3, 9, 20, null, null, 15, 7]`);
console.log(`Output: ${minDepth(t1)}`);

const t2 = new TreeNode(2, null, new TreeNode(3, null, new TreeNode(4, null, new TreeNode(5, null, new TreeNode(6)))));
console.log(`Input:  [2, null, 3, null, 4, null, 5, null, 6]`);
console.log(`Output: ${minDepth(t2)}`);
