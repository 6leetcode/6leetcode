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
const checkSubTree = (t1: TreeNode | null, t2: TreeNode | null): boolean => {
  const same = (a: TreeNode | null, b: TreeNode | null): boolean => {
    if (!a && !b) return true;
    if (!a || !b) return false;
    return a.val === b.val && same(a.left, b.left) && same(a.right, b.right);
  };
  if (!t2) return true;
  if (!t1) return false;
  return same(t1, t2) || checkSubTree(t1.left, t2) || checkSubTree(t1.right, t2);
};
// ------------------------------- solution end ---------------------------------

const a3 = new TreeNode(3);
const a4 = new TreeNode(4);
a3.left = a4;
a3.right = new TreeNode(5);
a4.left = new TreeNode(1);
a4.right = new TreeNode(2);
const b4 = new TreeNode(4, new TreeNode(1), new TreeNode(2));
console.log(`Input:  t1 = [3,4,5,1,2], t2 = [4,1,2]`);
console.log(`Output: ${checkSubTree(a3, b4)}`);
