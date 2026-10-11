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
  private TreeNode build(int[] inorder, int inStart, int inEnd, int[] postorder, int postStart, int postEnd) {
    if (inStart > inEnd) return null;
    int rootVal = postorder[postEnd];
    int idx = inStart;
    while (inorder[idx] != rootVal) idx++;
    int leftLen = idx - inStart;
    TreeNode root = new TreeNode(rootVal);
    root.left = build(inorder, inStart, idx - 1, postorder, postStart, postStart + leftLen - 1);
    root.right = build(inorder, idx + 1, inEnd, postorder, postStart + leftLen, postEnd - 1);
    return root;
  }

  public TreeNode buildTree(int[] inorder, int[] postorder) {
    return build(inorder, 0, inorder.length - 1, postorder, 0, postorder.length - 1);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] inorder1 = new int[] { 9, 3, 15, 20, 7 };
    int[] postorder1 = new int[] { 9, 15, 7, 20, 3 };
    System.out.printf("Input:  inorder = %s, postorder = %s\n", intsShow(inorder1), intsShow(postorder1));
    System.out.printf("Output: %s\n", treeShow(new Solution().buildTree(inorder1, postorder1)));

    int[] inorder2 = new int[] { -1 };
    int[] postorder2 = new int[] { -1 };
    System.out.printf("Input:  inorder = %s, postorder = %s\n", intsShow(inorder2), intsShow(postorder2));
    System.out.printf("Output: %s\n", treeShow(new Solution().buildTree(inorder2, postorder2)));
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
