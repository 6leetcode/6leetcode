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
const sortedArrayToBST = (nums: number[]): TreeNode | null => {
  const build = (lo: number, hi: number): TreeNode | null => {
    if (lo > hi) return null;
    const mid = Math.floor((lo + hi) / 2);
    const root = new TreeNode(nums[mid]);
    root.left = build(lo, mid - 1);
    root.right = build(mid + 1, hi);
    return root;
  };
  return build(0, nums.length - 1);
};
// ------------------------------- solution end ---------------------------------

const nums = [-10, -3, 0, 5, 9];
console.log(`Input:  [-10, -3, 0, 5, 9]`);
const root = sortedArrayToBST(nums);
const pre: number[] = [];
const walk = (n: TreeNode | null) => {
  if (!n) return;
  pre.push(n.val);
  walk(n.left);
  walk(n.right);
};
walk(root);
console.log(`Output: [${pre.join(', ')}]`);
