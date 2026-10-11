import java.util.Arrays;

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
    ListNode slow = head;
    ListNode fast = head;
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

class Testing {
  public static void main(String[] args) {
    run(new int[] { 3, 2, 0, -4 }, 1);
    run(new int[] { 1, 2 }, 0);
    run(new int[] { 1 }, -1);
    run(new int[] {}, -1);
  }

  static void run(int[] nums, int pos) {
    System.out.printf("Input:  head = %s, pos = %d\n", Arrays.toString(nums), pos);
    ListNode[] nodes = new ListNode[nums.length];
    ListNode head = intsToList(nums, pos, nodes);
    ListNode res = new Solution().detectCycle(head);
    int idx = -1;
    for (int i = 0; i < nodes.length; i++) {
      if (nodes[i] == res) {
        idx = i;
        break;
      }
    }
    if (idx < 0) {
      System.out.println("Output: null");
    } else {
      System.out.printf("Output: %d\n", idx);
    }
  }

  static ListNode intsToList(int[] nums, int pos, ListNode[] nodes) {
    ListNode dummy = new ListNode(0);
    ListNode cur = dummy;
    for (int i = 0; i < nums.length; i++) {
      cur.next = new ListNode(nums[i]);
      cur = cur.next;
      nodes[i] = cur;
    }
    if (pos >= 0 && nodes.length > 0) {
      cur.next = nodes[pos];
    }
    return dummy.next;
  }
}
