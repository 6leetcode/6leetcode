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
const buildTree = (inorder: number[], postorder: number[]): TreeNode | null => {
  const build = (inStart: number, inEnd: number, postStart: number, postEnd: number): TreeNode | null => {
    if (inStart > inEnd) return null;
    const rootVal = postorder[postEnd];
    let idx = inStart;
    while (inorder[idx] !== rootVal) idx++;
    const leftLen = idx - inStart;
    const root = new TreeNode(rootVal);
    root.left = build(inStart, idx - 1, postStart, postStart + leftLen - 1);
    root.right = build(idx + 1, inEnd, postStart + leftLen, postEnd - 1);
    return root;
  };
  return build(0, inorder.length - 1, 0, postorder.length - 1);
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

const inorder1 = [9, 3, 15, 20, 7];
const postorder1 = [9, 15, 7, 20, 3];
console.log(`Input:  inorder = ${intsShow(inorder1)}, postorder = ${intsShow(postorder1)}`);
console.log(`Output: ${treeShow(buildTree(inorder1, postorder1))}`);

const inorder2 = [-1];
const postorder2 = [-1];
console.log(`Input:  inorder = ${intsShow(inorder2)}, postorder = ${intsShow(postorder2)}`);
console.log(`Output: ${treeShow(buildTree(inorder2, postorder2))}`);
