### [逆序打印不可变链表](https://leetcode-cn.com/problems/print-immutable-linked-list-in-reverse)

<p>给您一个不可变的链表，使用下列接口逆序打印每个节点的值：</p>

<ul>
	<li><code>ImmutableListNode</code>: 描述不可变链表的接口，链表的头节点已给出。</li>
</ul>

<p>您需要使用以下函数来访问此链表（您&nbsp;<strong>不能&nbsp;</strong>直接访问&nbsp;<code>ImmutableListNode</code>）：</p>

<ul>
	<li><code>ImmutableListNode.printValue()</code>：打印当前节点的值。</li>
	<li><code>ImmutableListNode.getNext()</code>：返回下一个节点。</li>
</ul>

<p>输入只用来内部初始化链表。您不可以通过修改链表解决问题。也就是说，您只能通过上述 API 来操作链表。</p>

<p>&nbsp;</p>

<p><strong>进阶：</strong></p>

<p>您是否可以：</p>

<ul>
	<li>使用常数级空间复杂度解决问题？</li>
	<li>使用线性级时间复杂度和低于线性级空间复杂度解决问题？</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>head = [1,2,3,4]
<strong>输出：</strong>[4,3,2,1]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>head = [0,-4,-1,3,-5]
<strong>输出：</strong>[-5,3,-1,-4,0]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>head = [-2,0,6,4,4,-6]
<strong>输出：</strong>[-6,4,4,6,0,-2]
</pre>

<ul>
</ul>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>链表的长度在&nbsp;<code>[1, 1000]</code>&nbsp;之间。</li>
	<li>每个节点的值在&nbsp;<code>[-1000, 1000]</code>&nbsp;之间。</li>
</ul>
