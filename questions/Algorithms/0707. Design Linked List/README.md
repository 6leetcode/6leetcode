### [Design Linked List](https://leetcode.com/problems/design-linked-list)

<p>Design your&nbsp;implementation of the linked list. You can choose to use a singly or doubly linked list.<br />
A node in a singly&nbsp;linked list should have two attributes: <code>val</code>&nbsp;and <code>next</code>. <code>val</code> is the value of the current node, and <code>next</code>&nbsp;is&nbsp;a&nbsp;pointer/reference to the next node.<br />
If you want to use the doubly linked list,&nbsp;you will need&nbsp;one more attribute <code>prev</code> to indicate the previous node in the linked list. Assume all nodes in the linked list are <strong>0-indexed</strong>.</p>

<p>Implement the <code>MyLinkedList</code>&nbsp;class:</p>

<ul>
	<li><code>MyLinkedList()</code>&nbsp;Initializes&nbsp;the&nbsp;<code>MyLinkedList</code> object.</li>
	<li><code>int get(int index)</code>&nbsp;Get the value of&nbsp;the <code>index<sup>th</sup></code>&nbsp;node in the linked list. If the index is invalid, return <code>-1</code>.</li>
	<li><code>void addAtHead(int val)</code>&nbsp;Add a node of value <code>val</code>&nbsp;before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.</li>
	<li><code>void addAtTail(int val)</code>&nbsp;Append a node of value <code>val</code>&nbsp;as the last element of the linked list.</li>
	<li><code>void addAtIndex(int index, int val)</code>&nbsp;Add a node of value <code>val</code>&nbsp;before the <code>index<sup>th</sup></code>&nbsp;node in the linked list.&nbsp;If <code>index</code>&nbsp;equals the length of the linked list, the node will be appended to the end of the linked list. If <code>index</code> is greater than the length, the node <strong>will not be inserted</strong>.</li>
	<li><code>void deleteAtIndex(int index)</code>&nbsp;Delete&nbsp;the <code>index<sup>th</sup></code>&nbsp;node in the linked list, if the index is valid.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input</strong>
[&quot;MyLinkedList&quot;, &quot;addAtHead&quot;, &quot;addAtTail&quot;, &quot;addAtIndex&quot;, &quot;get&quot;, &quot;deleteAtIndex&quot;, &quot;get&quot;]
[[], [1], [3], [1, 2], [1], [1], [1]]
<strong>Output</strong>
[null, null, null, null, 2, null, 3]

<strong>Explanation</strong>
MyLinkedList myLinkedList = new MyLinkedList();
myLinkedList.addAtHead(1);
myLinkedList.addAtTail(3);
myLinkedList.addAtIndex(1, 2);    // linked list becomes 1-&gt;2-&gt;3
myLinkedList.get(1);              // return 2
myLinkedList.deleteAtIndex(1);    // now the linked list is 1-&gt;3
myLinkedList.get(1);              // return 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= index, val &lt;= 1000</code></li>
	<li>Please do not use the built-in LinkedList library.</li>
	<li>At most <code>2000</code>&nbsp;calls will be made to&nbsp;<code>get</code>,&nbsp;<code>addAtHead</code>,&nbsp;<code>addAtTail</code>,&nbsp; <code>addAtIndex</code> and&nbsp;<code>deleteAtIndex</code>.</li>
</ul>
