// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
    ListNode a = headA, b = headB;
    while (a != b) {
      a = a == null ? headB : a.next;
      b = b == null ? headA : b.next;
    }
    return a;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    ListNode s1 = new ListNode(8);
    ListNode s2 = new ListNode(4);
    ListNode s3 = new ListNode(5);
    s1.next = s2;
    s2.next = s3;
    ListNode a2 = new ListNode(1);
    a2.next = s1;
    ListNode a1 = new ListNode(4);
    a1.next = a2;
    ListNode b3 = new ListNode(1);
    b3.next = s1;
    ListNode b2 = new ListNode(0);
    b2.next = b3;
    ListNode b1 = new ListNode(5);
    b1.next = b2;
    System.out.println("Input:  [4, 1, 8, 4, 5], [5, 0, 1, 8, 4, 5]");
    ListNode res = new Solution().getIntersectionNode(a1, b1);
    System.out.println(res == null ? "Output: No intersection" : "Output: Intersected at '" + res.val + "'");
  }
}
