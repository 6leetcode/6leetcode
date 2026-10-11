// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  private ListNode mergeTwoLists(ListNode a, ListNode b) {
    ListNode dummy = new ListNode(0);
    ListNode tail = dummy;
    while (a != null && b != null) {
      if (a.val <= b.val) {
        tail.next = a;
        a = a.next;
      } else {
        tail.next = b;
        b = b.next;
      }
      tail = tail.next;
    }
    tail.next = a != null ? a : b;
    return dummy.next;
  }

  public ListNode sortList(ListNode head) {
    if (head == null || head.next == null) {
      return head;
    }

    ListNode slow = head;
    ListNode fast = head.next;
    while (fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;
    }

    ListNode mid = slow.next;
    slow.next = null;

    return mergeTwoLists(sortList(head), sortList(mid));
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    run(new int[] { 4, 2, 1, 3 });
    run(new int[] { -1, 5, 3, 4, 0 });
    run(new int[] {});
  }

  public static void run(int[] nums) {
    ListNode input = intsToList(nums);
    System.out.println("Input:  " + listToInts(input));
    ListNode res = new Solution().sortList(input);
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
