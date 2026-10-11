import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public boolean isPalindrome(ListNode head) {
    List<Integer> vals = new ArrayList<>();
    for (ListNode p = head; p != null; p = p.next) vals.add(p.val);
    for (int i = 0, j = vals.size() - 1; i < j; i++, j--) {
      if (!vals.get(i).equals(vals.get(j))) return false;
    }
    return true;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    ListNode input = intsToList(new int[] { 1, 2, 2, 1 });
    System.out.println("Input:  " + listToInts(input));
    System.out.println("Output: " + new Solution().isPalindrome(input));
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
