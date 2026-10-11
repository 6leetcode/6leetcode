// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  private ListNode mergeTwoLists(ListNode a, ListNode b) {
    if (a == null) {
      return b;
    }
    if (b == null) {
      return a;
    }
    if (a.val < b.val) {
      a.next = mergeTwoLists(a.next, b);
      return a;
    }
    b.next = mergeTwoLists(a, b.next);
    return b;
  }

  public ListNode mergeKLists(ListNode[] lists) {
    ListNode ans = null;
    for (ListNode l : lists) {
      ans = mergeTwoLists(ans, l);
    }
    return ans;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    ListNode[] input = new ListNode[] {
        intsToList(new int[] { 1, 4, 5 }),
        intsToList(new int[] { 1, 3, 4 }),
        intsToList(new int[] { 2, 6 }),
    };
    System.out.println("Input:  " + listToInts(input[0]) + " " + listToInts(input[1]) + " " + listToInts(input[2]));
    ListNode res = new Solution().mergeKLists(input);
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
