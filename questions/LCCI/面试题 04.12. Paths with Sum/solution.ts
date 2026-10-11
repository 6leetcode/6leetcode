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
const pathSum = (root: TreeNode | null, sum: number): number => {
  const count = (node: TreeNode | null, target: number): number => {
    if (!node) return 0;
    let res = node.val === target ? 1 : 0;
    res += count(node.left, target - node.val);
    res += count(node.right, target - node.val);
    return res;
  };
  if (!root) return 0;
  return count(root, sum) + pathSum(root.left, sum) + pathSum(root.right, sum);
};
// ------------------------------- solution end ---------------------------------

const root = new TreeNode(1, new TreeNode(2), new TreeNode(3));
console.log(`Input:  [1, 2, 3], sum = 3`);
console.log(`Output: ${pathSum(root, 3)}`);
