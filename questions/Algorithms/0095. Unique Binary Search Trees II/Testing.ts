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
const generateTrees = (n: number): Array<TreeNode | null> => {
  if (n === 0) return [];

  const gen = (start: number, end: number): Array<TreeNode | null> => {
    if (start > end) return [null];
    const res: Array<TreeNode | null> = [];
    for (let i = start; i <= end; i++) {
      const lefts = gen(start, i - 1);
      const rights = gen(i + 1, end);
      for (const l of lefts) {
        for (const r of rights) {
          res.push(new TreeNode(i, l, r));
        }
      }
    }
    return res;
  };

  return gen(1, n);
};
// ------------------------------- solution end ---------------------------------

const input = 3;
console.log(`Input:  ${input}`);
console.log(`Output: ${generateTrees(input).length}`);
