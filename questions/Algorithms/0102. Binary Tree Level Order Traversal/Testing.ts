import matrix from '../../library/typescript/matrix';

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
const levelOrder = (root: TreeNode | null): number[][] => {
  const res: number[][] = [];
  if (!root) return res;
  const queue: TreeNode[] = [root];
  while (queue.length > 0) {
    const size = queue.length;
    const level: number[] = [];
    for (let i = 0; i < size; i++) {
      const node = queue.shift()!;
      level.push(node.val);
      if (node.left) queue.push(node.left);
      if (node.right) queue.push(node.right);
    }
    res.push(level);
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const t1 = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
console.log(`Input:  [3, 9, 20, null, null, 15, 7]`);
console.log(`Output: ${matrix(levelOrder(t1))}`);

const t2 = new TreeNode(1);
console.log(`Input:  [1]`);
console.log(`Output: ${matrix(levelOrder(t2))}`);

console.log(`Input:  []`);
console.log(`Output: ${matrix(levelOrder(null))}`);
