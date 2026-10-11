// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode insertionSortList(ListNode head) {
    ListNode dummy = new ListNode(0);
    ListNode cur = head;
    while (cur != null) {
      ListNode next = cur.next;
      ListNode prev = dummy;
      while (prev.next != null && prev.next.val < cur.val) {
        prev = prev.next;
      }
      cur.next = prev.next;
      prev.next = cur;
      cur = next;
    }
    return dummy.next;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    run(new int[] { 4, 2, 1, 3 });
    run(new int[] { -1, 5, 3, 4, 0 });
  }

  public static void run(int[] nums) {
    ListNode input = intsToList(nums);
    System.out.println("Input:  " + listToInts(input));
    ListNode res = new Solution().insertionSortList(input);
    System.out.println("Output: " + listToInts(res));
  }

  public static ListNode intsToList(int[] nums) {
    ListNode dummy = new ListNode(0);
    ListNode cur = dummy;
    for (int n : nums) {
      cur.next = new ListNode(n);
      cur = cur.next;
    }
    return dummy.next;
  }

  public static String listToInts(ListNode head) {
    StringBuilder sb = new StringBuilder("[");
    boolean first = true;
    while (head != null) {
      sb.append(first ? "" : ", ").append(head.val);
      first = false;
      head = head.next;
    }
    return sb.append("]").toString();
  }
}
