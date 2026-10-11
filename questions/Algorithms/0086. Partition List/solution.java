// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode partition(ListNode head, int x) {
    ListNode lessDummy = new ListNode(0);
    ListNode greaterDummy = new ListNode(0);
    ListNode less = lessDummy, greater = greaterDummy;
    for (ListNode cur = head; cur != null; cur = cur.next) {
      if (cur.val < x) {
        less.next = cur;
        less = cur;
      } else {
        greater.next = cur;
        greater = cur;
      }
    }
    greater.next = null;
    less.next = greaterDummy.next;
    return lessDummy.next;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    ListNode input1 = intsToList(new int[] { 1, 4, 3, 2, 5, 2 });
    int input2 = 3;
    System.out.println("Input:  " + listToInts(input1) + ", " + input2);
    ListNode res = new Solution().partition(input1, input2);
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
