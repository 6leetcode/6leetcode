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
const maxPathSum = (root: TreeNode | null): number => {
  let best = -Infinity;
  const gain = (node: TreeNode | null): number => {
    if (node === null) return 0;
    const left = Math.max(0, gain(node.left));
    const right = Math.max(0, gain(node.right));
    best = Math.max(best, node.val + left + right);
    return node.val + Math.max(left, right);
  };
  gain(root);
  return best;
};
// ------------------------------- solution end ---------------------------------

const root1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
const root2 = new TreeNode(-10, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
const root3 = new TreeNode(-3);
const root4 = new TreeNode(2, new TreeNode(-1), new TreeNode(-2));

console.log(`Input:  [1, 2, 3]`);
console.log(`Output: ${maxPathSum(root1)}`);
console.log(`Input:  [-10, 9, 20, null, null, 15, 7]`);
console.log(`Output: ${maxPathSum(root2)}`);
console.log(`Input:  [-3]`);
console.log(`Output: ${maxPathSum(root3)}`);
console.log(`Input:  [2, -1, -2]`);
console.log(`Output: ${maxPathSum(root4)}`);
