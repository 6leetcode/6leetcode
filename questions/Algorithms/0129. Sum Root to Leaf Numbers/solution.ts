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
const sumNumbers = (root: TreeNode | null): number => {
  const dfs = (node: TreeNode | null, current: number): number => {
    if (node === null) return 0;
    const value = current * 10 + node.val;
    if (node.left === null && node.right === null) return value;
    return dfs(node.left, value) + dfs(node.right, value);
  };
  return dfs(root, 0);
};
// ------------------------------- solution end ---------------------------------

const root1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
const root2 = new TreeNode(4, new TreeNode(9, new TreeNode(5), new TreeNode(1)), new TreeNode(0));
const root3 = new TreeNode(0);
const root4 = new TreeNode(1, new TreeNode(5));

console.log(`Input:  [1, 2, 3]`);
console.log(`Output: ${sumNumbers(root1)}`);
console.log(`Input:  [4, 9, 0, 5, 1]`);
console.log(`Output: ${sumNumbers(root2)}`);
console.log(`Input:  [0]`);
console.log(`Output: ${sumNumbers(root3)}`);
console.log(`Input:  [1, 5]`);
console.log(`Output: ${sumNumbers(root4)}`);
