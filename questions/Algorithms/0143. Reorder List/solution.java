// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public void reorderList(ListNode head) {
    if (head == null || head.next == null) {
      return;
    }

    ListNode slow = head;
    ListNode fast = head;
    while (fast.next != null && fast.next.next != null) {
      slow = slow.next;
      fast = fast.next.next;
    }

    ListNode second = slow.next;
    slow.next = null;

    ListNode prev = null;
    while (second != null) {
      ListNode nxt = second.next;
      second.next = prev;
      prev = second;
      second = nxt;
    }

    ListNode first = head;
    second = prev;
    while (second != null) {
      ListNode fnext = first.next;
      ListNode snext = second.next;
      first.next = second;
      second.next = fnext;
      first = fnext;
      second = snext;
    }
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    run(new int[] { 1, 2, 3, 4 });
    run(new int[] { 1, 2, 3, 4, 5 });
    run(new int[] { 1 });
  }

  static void run(int[] nums) {
    ListNode head = intsToList(nums);
    System.out.println("Input:  " + listToInts(head));
    new Solution().reorderList(head);
    System.out.println("Output: " + listToInts(head));
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
}
