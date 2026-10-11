// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode reverseBetween(ListNode head, int left, int right) {
    ListNode dummy = new ListNode(0);
    dummy.next = head;
    ListNode pre = dummy;
    for (int i = 0; i < left - 1; i++) {
      pre = pre.next;
    }
    ListNode cur = pre.next;
    for (int i = 0; i < right - left; i++) {
      ListNode next = cur.next;
      cur.next = next.next;
      next.next = pre.next;
      pre.next = next;
    }
    return dummy.next;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    ListNode input1 = intsToList(new int[] { 1, 2, 3, 4, 5 });
    int input2 = 2, input3 = 4;
    System.out.println("Input:  " + listToInts(input1) + ", " + input2 + ", " + input3);
    ListNode res = new Solution().reverseBetween(input1, input2, input3);
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
