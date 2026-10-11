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
const height = (node: TreeNode | null): number => {
  if (!node) return 0;
  const left = height(node.left);
  if (left === -1) return -1;
  const right = height(node.right);
  if (right === -1) return -1;
  if (Math.abs(left - right) > 1) return -1;
  return Math.max(left, right) + 1;
};

const isBalanced = (root: TreeNode | null): boolean => height(root) !== -1;
// ------------------------------- solution end ---------------------------------

const t1 = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
console.log(`Input:  [3, 9, 20, null, null, 15, 7]`);
console.log(`Output: ${isBalanced(t1)}`);

const t2 = new TreeNode(1);
t2.left = new TreeNode(2);
t2.right = new TreeNode(2);
t2.left.left = new TreeNode(3);
t2.left.right = new TreeNode(3);
t2.left.left.left = new TreeNode(4);
t2.left.left.right = new TreeNode(4);
console.log(`Input:  [1, 2, 2, 3, 3, null, null, 4, 4]`);
console.log(`Output: ${isBalanced(t2)}`);

console.log(`Input:  []`);
console.log(`Output: ${isBalanced(null)}`);
