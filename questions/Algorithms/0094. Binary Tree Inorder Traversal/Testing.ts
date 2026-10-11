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
const inorderTraversal = (root: TreeNode | null): number[] => {
  const res: number[] = [];
  const inorder = (node: TreeNode | null) => {
    if (!node) return;
    inorder(node.left);
    res.push(node.val);
    inorder(node.right);
  };
  inorder(root);
  return res;
};
// ------------------------------- solution end ---------------------------------

const root = new TreeNode(1, new TreeNode(2), new TreeNode(3));
console.log(`Input:  [1, 2, 3]`);
console.log(`Output: ${JSON.stringify(inorderTraversal(root))}`);
