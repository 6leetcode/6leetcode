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
    ListNode cur = head;
    while (cur != null && cur.next != null) {
      if (cur.val == cur.next.val) {
        cur.next = cur.next.next;
      } else {
        cur = cur.next;
      }
    }
    return head;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    ListNode input = intsToList(new int[] { 1, 1, 2 });
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
