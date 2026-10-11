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
    const mid = lo + Math.floor((hi - lo + 1) / 2);
    const root = new TreeNode(nums[mid]);
    root.left = build(lo, mid - 1);
    root.right = build(mid + 1, hi);
    return root;
  };
  return build(0, nums.length - 1);
};
// ------------------------------- solution end ---------------------------------

const intsShow = (nums: number[]): string => `[${nums.join(", ")}]`;

const treeShow = (root: TreeNode | null): string => {
  if (!root) return "[]";
  const parts: string[] = [];
  const queue: (TreeNode | null)[] = [root];
  while (queue.length) {
    const node = queue.shift()!;
    if (!node) {
      parts.push("null");
    } else {
      parts.push(String(node.val));
      queue.push(node.left, node.right);
    }
  }
  while (parts.length && parts[parts.length - 1] === "null") parts.pop();
  return `[${parts.join(", ")}]`;
};

const nums1 = [-10, -3, 0, 5, 9];
console.log(`Input:  nums = ${intsShow(nums1)}`);
console.log(`Output: ${treeShow(sortedArrayToBST(nums1))}`);

const nums2 = [1, 3];
console.log(`Input:  nums = ${intsShow(nums2)}`);
console.log(`Output: ${treeShow(sortedArrayToBST(nums2))}`);
