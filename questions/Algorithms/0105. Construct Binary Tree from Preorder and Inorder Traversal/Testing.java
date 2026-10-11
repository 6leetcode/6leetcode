import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  TreeNode(int x) {
    val = x;
  }
}

class Solution {
  private TreeNode build(int[] preorder, int preStart, int preEnd, int[] inorder, int inStart, int inEnd) {
    if (preStart > preEnd) return null;
    int rootVal = preorder[preStart];
    int idx = inStart;
    while (inorder[idx] != rootVal) idx++;
    int leftLen = idx - inStart;
    TreeNode root = new TreeNode(rootVal);
    root.left = build(preorder, preStart + 1, preStart + leftLen, inorder, inStart, idx - 1);
    root.right = build(preorder, preStart + leftLen + 1, preEnd, inorder, idx + 1, inEnd);
    return root;
  }

  public TreeNode buildTree(int[] preorder, int[] inorder) {
    return build(preorder, 0, preorder.length - 1, inorder, 0, inorder.length - 1);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] preorder1 = new int[] { 3, 9, 20, 15, 7 };
    int[] inorder1 = new int[] { 9, 3, 15, 20, 7 };
    System.out.printf("Input:  preorder = %s, inorder = %s\n", intsShow(preorder1), intsShow(inorder1));
    System.out.printf("Output: %s\n", treeShow(new Solution().buildTree(preorder1, inorder1)));

    int[] preorder2 = new int[] { -1 };
    int[] inorder2 = new int[] { -1 };
    System.out.printf("Input:  preorder = %s, inorder = %s\n", intsShow(preorder2), intsShow(inorder2));
    System.out.printf("Output: %s\n", treeShow(new Solution().buildTree(preorder2, inorder2)));
  }

  static String intsShow(int[] nums) {
    StringBuilder sb = new StringBuilder("[");
    for (int i = 0; i < nums.length; i++) {
      if (i > 0) sb.append(", ");
      sb.append(nums[i]);
    }
    return sb.append("]").toString();
  }

  static String treeShow(TreeNode root) {
    if (root == null) return "[]";
    List<String> parts = new ArrayList<>();
    Deque<TreeNode> queue = new LinkedList<>();
    queue.add(root);
    while (!queue.isEmpty()) {
      TreeNode node = queue.poll();
      if (node == null) {
        parts.add("null");
      } else {
        parts.add(Integer.toString(node.val));
        queue.add(node.left);
        queue.add(node.right);
      }
    }
    while (!parts.isEmpty() && parts.get(parts.size() - 1).equals("null")) {
      parts.remove(parts.size() - 1);
    }
    StringBuilder sb = new StringBuilder("[");
    for (int i = 0; i < parts.size(); i++) {
      if (i > 0) sb.append(", ");
      sb.append(parts.get(i));
    }
    return sb.append("]").toString();
  }
}
