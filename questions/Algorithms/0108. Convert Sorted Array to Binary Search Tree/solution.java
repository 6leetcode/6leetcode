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
  private TreeNode build(int[] nums, int lo, int hi) {
    if (lo > hi) return null;
    int mid = lo + (hi - lo + 1) / 2;
    TreeNode root = new TreeNode(nums[mid]);
    root.left = build(nums, lo, mid - 1);
    root.right = build(nums, mid + 1, hi);
    return root;
  }

  public TreeNode sortedArrayToBST(int[] nums) {
    return build(nums, 0, nums.length - 1);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] nums1 = new int[] { -10, -3, 0, 5, 9 };
    System.out.printf("Input:  nums = %s\n", intsShow(nums1));
    System.out.printf("Output: %s\n", treeShow(new Solution().sortedArrayToBST(nums1)));

    int[] nums2 = new int[] { 1, 3 };
    System.out.printf("Input:  nums = %s\n", intsShow(nums2));
    System.out.printf("Output: %s\n", treeShow(new Solution().sortedArrayToBST(nums2)));
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
