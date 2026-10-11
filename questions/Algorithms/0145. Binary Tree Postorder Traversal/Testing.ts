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
const postorderTraversal = (root: TreeNode | null): number[] => {
  const out: number[] = [];
  const dfs = (node: TreeNode | null): void => {
    if (node === null) return;
    dfs(node.left);
    dfs(node.right);
    out.push(node.val);
  };
  dfs(root);
  return out;
};
// ------------------------------- solution end ---------------------------------

const showArray = (arr: number[]): string => `[${arr.join(", ")}]`;

const root1 = new TreeNode(1, null, new TreeNode(2, new TreeNode(3)));
const root2 = new TreeNode(1);
const root3 = new TreeNode(1, new TreeNode(2, new TreeNode(4), new TreeNode(5)), new TreeNode(3));

console.log(`Input:  [1, null, 2, 3]`);
console.log(`Output: ${showArray(postorderTraversal(root1))}`);
console.log(`Input:  []`);
console.log(`Output: ${showArray(postorderTraversal(null))}`);
console.log(`Input:  [1]`);
console.log(`Output: ${showArray(postorderTraversal(root2))}`);
console.log(`Input:  [1, 2, 3, 4, 5]`);
console.log(`Output: ${showArray(postorderTraversal(root3))}`);
