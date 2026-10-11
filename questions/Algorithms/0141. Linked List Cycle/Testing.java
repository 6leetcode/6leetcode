// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public boolean hasCycle(ListNode head) {
    ListNode slow = head;
    ListNode fast = head;
    while (fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;
      if (slow == fast) {
        return true;
      }
    }
    return false;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    run(new int[] { 3, 2, 0, -4 }, 1);
    run(new int[] { 1, 2 }, 0);
    run(new int[] { 1 }, -1);
    run(new int[] {}, -1);
  }

  static void run(int[] nums, int pos) {
    System.out.printf("Input:  head = %s, pos = %d\n", listToInts(intsToList(nums, pos)), pos);
    Solution solution = new Solution();
    System.out.printf("Output: %b\n", solution.hasCycle(intsToList(nums, pos)));
  }

  static ListNode intsToList(int[] nums, int pos) {
    ListNode dummy = new ListNode(0);
    ListNode cur = dummy;
    ListNode[] nodes = new ListNode[nums.length];
    for (int i = 0; i < nums.length; i++) {
      cur.next = new ListNode(nums[i]);
      cur = cur.next;
      nodes[i] = cur;
    }
    if (pos >= 0 && nodes.length > 0) {
      cur.next = nodes[pos];
    }
    return dummy.next;
  }

  static String listToInts(ListNode head) {
    StringBuilder sb = new StringBuilder("[");
    boolean first = true;
    for (int i = 0; head != null && i < 20; i++) {
      sb.append(first ? "" : ", ").append(head.val);
      first = false;
      head = head.next;
    }
    return sb.append("]").toString();
  }
}
