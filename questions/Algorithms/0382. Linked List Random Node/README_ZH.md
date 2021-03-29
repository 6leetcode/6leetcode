### [链表随机节点](https://leetcode-cn.com/problems/linked-list-random-node)

<p>给定一个单链表，随机选择链表的一个节点，并返回相应的节点值。保证每个节点<strong>被选的概率一样</strong>。</p>

<p><strong>进阶:</strong><br />
如果链表十分大且长度未知，如何解决这个问题？你能否使用常数级空间复杂度实现？</p>

<p><strong>示例:</strong></p>

<pre>
// 初始化一个单链表 [1,2,3].
ListNode head = new ListNode(1);
head.next = new ListNode(2);
head.next.next = new ListNode(3);
Solution solution = new Solution(head);

// getRandom()方法应随机返回1,2,3中的一个，保证每个元素被返回的概率相等。
solution.getRandom();
</pre>
