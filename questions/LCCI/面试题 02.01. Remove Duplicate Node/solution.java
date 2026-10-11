import java.util.HashSet;
import java.util.Set;

// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode removeDuplicateNodes(ListNode head) {
    Set<Integer> seen = new HashSet<>();
    ListNode dummy = new ListNode(0);
    dummy.next = head;
    ListNode prev = dummy, cur = head;
    while (cur != null) {
      if (seen.contains(cur.val)) {
        prev.next = cur.next;
        cur = prev.next;
      } else {
        seen.add(cur.val);
        prev = cur;
        cur = cur.next;
      }
    }
    return dummy.next;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    ListNode input = intsToList(new int[] { 1, 2, 3, 3, 2, 1 });
    System.out.println("Input:  " + listToInts(input));
    ListNode res = new Solution().removeDuplicateNodes(input);
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
