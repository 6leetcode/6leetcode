import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  TreeNode(int x) {
    val = x;
  }
}

class Solution {
  private TreeNode build(List<Integer> nums, int lo, int hi) {
    if (lo > hi) return null;
    int mid = lo + (hi - lo + 1) / 2;
    TreeNode root = new TreeNode(nums.get(mid));
    root.left = build(nums, lo, mid - 1);
    root.right = build(nums, mid + 1, hi);
    return root;
  }

  public TreeNode sortedListToBST(ListNode head) {
    List<Integer> nums = new ArrayList<>();
    while (head != null) {
      nums.add(head.val);
      head = head.next;
    }
    return build(nums, 0, nums.size() - 1);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    ListNode head1 = intsToList(new int[] { -10, -3, 0, 5, 9 });
    System.out.printf("Input:  head = %s\n", listToInts(head1));
    System.out.printf("Output: %s\n", treeShow(new Solution().sortedListToBST(head1)));

    ListNode head2 = intsToList(new int[] {});
    System.out.printf("Input:  head = %s\n", listToInts(head2));
    System.out.printf("Output: %s\n", treeShow(new Solution().sortedListToBST(head2)));
  }

  static ListNode intsToList(int[] nums) {
    ListNode dummy = new ListNode(0);
    ListNode cur = dummy;
    for (int n : nums) {
      cur.next = new ListNode(n);
      cur = cur.next;
    }
    return dummy.next;
  }

  static String listToInts(ListNode head) {
    StringBuilder sb = new StringBuilder("[");
    boolean first = true;
    while (head != null) {
      sb.append(first ? "" : ", ").append(head.val);
      first = false;
      head = head.next;
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
