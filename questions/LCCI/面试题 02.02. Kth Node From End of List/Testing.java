// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public int kthToLast(ListNode head, int k) {
    ListNode fast = head, slow = head;
    for (int i = 0; i < k; i++) fast = fast.next;
    while (fast != null) {
      fast = fast.next;
      slow = slow.next;
    }
    return slow.val;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    ListNode input = intsToList(new int[] { 1, 2, 3, 4, 5 });
    int k = 2;
    System.out.println("Input:  " + listToInts(input) + ", " + k);
    System.out.println("Output: " + new Solution().kthToLast(input, k));
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
