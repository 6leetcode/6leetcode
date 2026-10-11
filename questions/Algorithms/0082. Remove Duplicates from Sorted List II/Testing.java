// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode deleteDuplicates(ListNode head) {
    ListNode dummy = new ListNode(0);
    dummy.next = head;
    ListNode prev = dummy;
    ListNode cur = head;
    while (cur != null) {
      if (cur.next != null && cur.val == cur.next.val) {
        while (cur.next != null && cur.val == cur.next.val) {
          cur = cur.next;
        }
        prev.next = cur.next;
        cur = cur.next;
      } else {
        prev = cur;
        cur = cur.next;
      }
    }
    return dummy.next;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    ListNode input = intsToList(new int[] { 1, 2, 3, 3, 4, 4, 5 });
    System.out.println("Input:  " + listToInts(input));
    ListNode res = new Solution().deleteDuplicates(input);
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
