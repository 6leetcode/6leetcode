class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

// -------------------------------solution begin-------------------------------
class Solution {
  public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    ListNode a = l1;
    ListNode b = l2;
    ListNode resultNode = new ListNode(0);
    ListNode finalResult = resultNode;
    int additional = 0;
    while (a != null || b != null) {
      int aVal = a != null ? a.val : 0;
      int bVal = b != null ? b.val : 0;
      int result = additional + aVal + bVal; // 计算两数相加
      int m = result % 10; // 两数相加的余数是下一个链表的值
      additional = result / 10; // 求商：如果商大于0,则下一个链表的值需要加n
      finalResult.next = new ListNode(m);
      finalResult = finalResult.next;
      if (a != null) {
        a = a.next;
      }
      if (b != null) {
        b = b.next;
      }
    }
    if (additional > 0) {
      finalResult.next = new ListNode(additional);
    }
    return resultNode.next;
  }
}

// -------------------------------solution end---------------------------------

public class java {
  public static void main(String[] args) {
    ListNode input1_0 = new ListNode(2);
    ListNode input1_1 = new ListNode(4);
    ListNode input1_2 = new ListNode(3);
    input1_0.next = input1_1;
    input1_1.next = input1_2;

    ListNode input2_0 = new ListNode(5);
    ListNode input2_1 = new ListNode(6);
    ListNode input2_2 = new ListNode(4);
    input2_0.next = input2_1;
    input2_1.next = input2_2;

    System.out.printf("Input:  (%d", input1_0.val);
    ListNode a = input1_0.next;
    while (a != null) {
      System.out.printf(" -> %d", a.val);
      a = a.next;
    }
    System.out.printf(") + (");

    System.out.printf("%d", input2_0.val);
    ListNode b = input2_0.next;
    while (b != null) {
      System.out.printf(" -> %d", b.val);
      b = b.next;
    }
    System.out.println(")");

    Solution solution = new Solution();
    ListNode result = solution.addTwoNumbers(input1_0, input2_0);

    System.out.printf("Output: (%d", result.val);
    ListNode c = result.next;
    while (c != null) {
      System.out.printf(" -> %d", c.val);
      c = c.next;
    }
    System.out.println(")");
  }
}
