// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode detectCycle(ListNode head) {
    ListNode slow = head, fast = head;
    while (fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;
      if (slow == fast) {
        ListNode p = head;
        while (p != slow) {
          p = p.next;
          slow = slow.next;
        }
        return p;
      }
    }
    return null;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    ListNode n1 = new ListNode(3);
    ListNode n2 = new ListNode(2);
    ListNode n3 = new ListNode(0);
    ListNode n4 = new ListNode(-4);
    n1.next = n2;
    n2.next = n3;
    n3.next = n4;
    n4.next = n2;
    System.out.println("Input:  [3, 2, 0, -4], pos = 1");
    ListNode res = new Solution().detectCycle(n1);
    System.out.println(res == null ? "Output: no cycle" : "Output: tail connects to node with value " + res.val);
  }
}
