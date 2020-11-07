### [环路检测](https://leetcode-cn.com/problems/linked-list-cycle-lcci)

<p>给定一个链表，如果它是有环链表，实现一个算法返回环路的开头节点。<br>
有环链表的定义：在链表中某个节点的next元素指向在它前面出现过的节点，则表明该链表存在环路。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>head = [3,2,0,-4], pos = 1
<strong>输出：</strong>tail connects to node index 1
<strong>解释：</strong>链表中有一个环，其尾部连接到第二个节点。
</pre>

<p>&nbsp;</p>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>head = [1,2], pos = 0
<strong>输出：</strong>tail connects to node index 0
<strong>解释：</strong>链表中有一个环，其尾部连接到第一个节点。
</pre>

<p>&nbsp;</p>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>head = [1], pos = -1
<strong>输出：</strong>no cycle
<strong>解释：</strong>链表中没有环。</pre>

<p>&nbsp;</p>

<p><strong>进阶：</strong><br>
你是否可以不用额外空间解决此题？</p>

<p>&nbsp;</p>
