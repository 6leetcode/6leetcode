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
const buildTree = (preorder: number[], inorder: number[]): TreeNode | null => {
  const build = (preStart: number, preEnd: number, inStart: number, inEnd: number): TreeNode | null => {
    if (preStart > preEnd) return null;
    const rootVal = preorder[preStart];
    let idx = inStart;
    while (inorder[idx] !== rootVal) idx++;
    const leftLen = idx - inStart;
    const root = new TreeNode(rootVal);
    root.left = build(preStart + 1, preStart + leftLen, inStart, idx - 1);
    root.right = build(preStart + leftLen + 1, preEnd, idx + 1, inEnd);
    return root;
  };
  return build(0, preorder.length - 1, 0, inorder.length - 1);
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

const preorder1 = [3, 9, 20, 15, 7];
const inorder1 = [9, 3, 15, 20, 7];
console.log(`Input:  preorder = ${intsShow(preorder1)}, inorder = ${intsShow(inorder1)}`);
console.log(`Output: ${treeShow(buildTree(preorder1, inorder1))}`);

const preorder2 = [-1];
const inorder2 = [-1];
console.log(`Input:  preorder = ${intsShow(preorder2)}, inorder = ${intsShow(inorder2)}`);
console.log(`Output: ${treeShow(buildTree(preorder2, inorder2))}`);
