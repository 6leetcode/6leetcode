package main.java;

/**
 * @author shenshen.liu Date: 2019-03-08 Time: 19:51
 *
 * You are given two non-empty linked lists representing two non-negative integers.
 * The digits are stored in reverse order and each of their nodes contain a single digit.
 * Add the two numbers and
 * return it as a linked list.
 *
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 *
 * Example:
 *
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 **/
public class No2_AddTwoNumbers {
    public static void main(String[] args) {
        ListNode l1 = new ListNode(2);
        l1.next = new ListNode(4);
        l1.next.next = new ListNode(3);

        ListNode l2 = new ListNode(5);
        l2.next = new ListNode(6);
        l2.next.next = new ListNode(9);
        ListNode listNode = addTwoNumbers(l1, l2);
        System.out.println(listNode);
    }

    private static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode a = l1;
        ListNode b = l2;
        ListNode resultNode = new ListNode(0);
        ListNode finalResult = resultNode;
        int additional = 0;
        while (a != null || b != null) {
            int aVal = a != null ? a.val : 0;
            int bVal = b != null ? b.val : 0;
            // 计算两数相加
            int result = additional + aVal + bVal;
            // 两数相加的余数是下一个链表的值
            int m = result % 10;
            // 求商：如果商大于0,则下一个链表的值需要加n
            additional = result / 10;
            finalResult.next = new ListNode(m);
            finalResult = finalResult.next;
            if (a != null) a = a.next;
            if (b != null) b = b.next;
        }
        if (additional > 0) {
            finalResult.next = new ListNode(additional);
        }
        return resultNode.next;
    }

    public static class ListNode {
        int val;
        ListNode next;

        ListNode(int x) {
            val = x;
        }
    }
}
