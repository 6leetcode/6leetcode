class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

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
const sortedListToBST = (head: ListNode | null): TreeNode | null => {
  const nums: number[] = [];
  while (head) {
    nums.push(head.val);
    head = head.next;
  }
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

const intsToList = (nums: number[]): ListNode | null => {
  const dummy = new ListNode(0);
  let cur = dummy;
  for (const v of nums) {
    cur.next = new ListNode(v);
    cur = cur.next;
  }
  return dummy.next;
};

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
console.log(`Input:  head = ${intsShow(nums1)}`);
console.log(`Output: ${treeShow(sortedListToBST(intsToList(nums1)))}`);

const nums2: number[] = [];
console.log(`Input:  head = ${intsShow(nums2)}`);
console.log(`Output: ${treeShow(sortedListToBST(intsToList(nums2)))}`);
