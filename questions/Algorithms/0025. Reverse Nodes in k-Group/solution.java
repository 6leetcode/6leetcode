// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode reverseKGroup(ListNode head, int k) {
    if (head == null) {
      return head;
    }
    ListNode tail = head;
    for (int i = 0; i < k; i++) {
      if (tail == null) {
        return head;
      }
      tail = tail.next;
    }
    ListNode cur = head, pre = null, next = null;
    while (cur != tail) {
      next = cur.next;
      cur.next = pre;
      pre = cur;
      cur = next;
    }
    head.next = reverseKGroup(tail, k);
    return pre;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    ListNode input1 = intsToList(new int[] { 1, 2, 3, 4, 5 });
    int input2 = 2;
    System.out.println("Input:  " + listToInts(input1) + " " + input2);
    ListNode res = new Solution().reverseKGroup(input1, input2);
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
