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
const pathSum = (root: TreeNode | null, targetSum: number): number[][] => {
  const res: number[][] = [];
  const path: number[] = [];
  const dfs = (node: TreeNode | null, remain: number): void => {
    if (node === null) return;
    path.push(node.val);
    remain -= node.val;
    if (node.left === null && node.right === null) {
      if (remain === 0) res.push(path.slice());
    } else {
      dfs(node.left, remain);
      dfs(node.right, remain);
    }
    path.pop();
  };
  dfs(root, targetSum);
  return res;
};
// ------------------------------- solution end ---------------------------------

const showMatrix = (m: number[][]): string => `[${m.map((r) => `[${r.join(", ")}]`).join(", ")}]`;

const root1 = new TreeNode(
  5,
  new TreeNode(4, new TreeNode(11, new TreeNode(7), new TreeNode(2))),
  new TreeNode(8, new TreeNode(13), new TreeNode(4, new TreeNode(5), new TreeNode(1))),
);
const root2 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
const root3 = new TreeNode(1, new TreeNode(2));

console.log(`Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1], targetSum = 22`);
console.log(`Output: ${showMatrix(pathSum(root1, 22))}`);
console.log(`Input:  [1, 2, 3], targetSum = 5`);
console.log(`Output: ${showMatrix(pathSum(root2, 5))}`);
console.log(`Input:  [1, 2], targetSum = 0`);
console.log(`Output: ${showMatrix(pathSum(root3, 0))}`);
console.log(`Input:  [1, 2, 3], targetSum = 3`);
console.log(`Output: ${showMatrix(pathSum(root2, 3))}`);
