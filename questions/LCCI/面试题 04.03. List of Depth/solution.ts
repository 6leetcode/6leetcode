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

class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const listOfDepth = (tree: TreeNode | null): Array<ListNode | null> => {
  const res: Array<ListNode | null> = [];
  if (!tree) return res;
  let queue: TreeNode[] = [tree];
  while (queue.length > 0) {
    const levelSize = queue.length;
    const dummy = new ListNode(0);
    let lt: ListNode = dummy;
    for (let i = 0; i < levelSize; i++) {
      const node = queue.shift()!;
      lt.next = new ListNode(node.val);
      lt = lt.next;
      if (node.left) queue.push(node.left);
      if (node.right) queue.push(node.right);
    }
    res.push(dummy.next);
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const root = new TreeNode(1, new TreeNode(2), new TreeNode(3));
root.left!.left = new TreeNode(4);
root.left!.right = new TreeNode(5);
root.right!.right = new TreeNode(7);
root.left!.left!.left = new TreeNode(8);
console.log(`Input:  [1, 2, 3, 4, 5, null, 7, 8]`);
const res = listOfDepth(root);
const out = res.map((l) => {
  const vals: number[] = [];
  let p = l;
  while (p) {
    vals.push(p.val);
    p = p.next;
  }
  return vals;
});
console.log(`Output: ${JSON.stringify(out)}`);
