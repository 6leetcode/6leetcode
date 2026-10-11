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
const convertBiNode = (root: TreeNode | null): TreeNode | null => {
  const dummy = new TreeNode(0);
  let prev: TreeNode = dummy;
  const inorder = (node: TreeNode | null) => {
    if (!node) return;
    inorder(node.left);
    node.left = null;
    prev.right = node;
    prev = node;
    inorder(node.right);
  };
  inorder(root);
  prev.right = null;
  return dummy.right;
};
// ------------------------------- solution end ---------------------------------

const n4 = new TreeNode(4);
const n2 = new TreeNode(2);
const n5 = new TreeNode(5);
n4.left = n2;
n4.right = n5;
n2.left = new TreeNode(1);
n2.right = new TreeNode(3);
n5.right = new TreeNode(6);
n2.left.left = new TreeNode(0);
console.log(`Input:  [4,2,5,1,3,null,6,0]`);
let head = convertBiNode(n4);
const out: string[] = [];
while (head) {
  out.push(`${head.val}, null`);
  head = head.right;
}
console.log(`Output: [${out.join(', ')}]`);
