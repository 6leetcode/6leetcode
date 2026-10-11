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
const BSTSequences = (root: TreeNode | null): number[][] => {
  if (!root) return [[]];
  const left = BSTSequences(root.left);
  const right = BSTSequences(root.right);
  const res: number[][] = [];

  const weave = (l: number[], r: number[], prefix: number[]) => {
    if (l.length === 0 && r.length === 0) {
      res.push([...prefix]);
      return;
    }
    if (l.length > 0) weave(l.slice(1), r, [...prefix, l[0]]);
    if (r.length > 0) weave(l, r.slice(1), [...prefix, r[0]]);
  };

  for (const l of left) {
    for (const r of right) {
      weave(l, r, [root.val]);
    }
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const root = new TreeNode(2, new TreeNode(1), new TreeNode(3));
console.log(`Input:  [2, 1, 3]`);
console.log(`Output: ${JSON.stringify(BSTSequences(root))}`);
