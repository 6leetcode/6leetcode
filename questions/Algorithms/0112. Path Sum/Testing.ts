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
const hasPathSum = (root: TreeNode | null, targetSum: number): boolean => {
  if (root === null) return false;
  const remain = targetSum - root.val;
  if (root.left === null && root.right === null) return remain === 0;
  return hasPathSum(root.left, remain) || hasPathSum(root.right, remain);
};
// ------------------------------- solution end ---------------------------------

const root1 = new TreeNode(
  5,
  new TreeNode(4, new TreeNode(11, new TreeNode(7), new TreeNode(2))),
  new TreeNode(8, new TreeNode(13), new TreeNode(4, null, new TreeNode(1))),
);
const root2 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
const root3 = new TreeNode(1, new TreeNode(2));

console.log(`Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, null, 1], targetSum = 22`);
console.log(`Output: ${hasPathSum(root1, 22)}`);
console.log(`Input:  [1, 2, 3], targetSum = 5`);
console.log(`Output: ${hasPathSum(root2, 5)}`);
console.log(`Input:  [], targetSum = 0`);
console.log(`Output: ${hasPathSum(null, 0)}`);
console.log(`Input:  [1, 2], targetSum = 3`);
console.log(`Output: ${hasPathSum(root3, 3)}`);
