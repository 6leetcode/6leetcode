// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode rotateRight(ListNode head, int k) {
    if (head == null || head.next == null || k == 0) {
      return head;
    }
    int len = 1;
    ListNode tail = head;
    while (tail.next != null) {
      tail = tail.next;
      len++;
    }
    k %= len;
    if (k == 0) {
      return head;
    }
    tail.next = head;
    ListNode newTail = head;
    for (int i = 0; i < len - k - 1; i++) {
      newTail = newTail.next;
    }
    ListNode newHead = newTail.next;
    newTail.next = null;
    return newHead;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    ListNode input1 = intsToList(new int[] { 1, 2, 3, 4, 5 });
    int input2 = 2;
    System.out.println("Input:  " + listToInts(input1) + ", " + input2);
    ListNode res = new Solution().rotateRight(input1, input2);
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
