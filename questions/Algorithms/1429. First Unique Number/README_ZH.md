### [第一个唯一数字](https://leetcode-cn.com/problems/first-unique-number)

<p>给定一系列整数，插入一个队列中，找出队列中第一个唯一整数。</p>

<p>实现&nbsp;<code>FirstUnique</code>&nbsp;类：</p>

<ul>
	<li><code>FirstUnique(int[] nums)</code> 用数组里的数字初始化队列。</li>
	<li><code>int showFirstUnique()</code>&nbsp;返回队列中的<strong> 第一个唯一 </strong>整数的值。如果没有唯一整数，返回 -1。（译者注：此方法不移除队列中的任何元素）</li>
	<li><code>void add(int value)</code>&nbsp;将 value 插入队列中。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>
[&quot;FirstUnique&quot;,&quot;showFirstUnique&quot;,&quot;add&quot;,&quot;showFirstUnique&quot;,&quot;add&quot;,&quot;showFirstUnique&quot;,&quot;add&quot;,&quot;showFirstUnique&quot;]
[[[2,3,5]],[],[5],[],[2],[],[3],[]]
<strong>输出：</strong>
[null,2,null,2,null,3,null,-1]
<strong>解释：</strong>
FirstUnique firstUnique = new FirstUnique([2,3,5]);
firstUnique.showFirstUnique(); // 返回 2
firstUnique.add(5);            // 此时队列为 [2,3,5,5]
firstUnique.showFirstUnique(); // 返回 2
firstUnique.add(2);&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; // 此时队列为 [2,3,5,5,2]
firstUnique.showFirstUnique(); // 返回 3
firstUnique.add(3);&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; // 此时队列为 [2,3,5,5,2,3]
firstUnique.showFirstUnique(); // 返回 -1
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>
[&quot;FirstUnique&quot;,&quot;showFirstUnique&quot;,&quot;add&quot;,&quot;add&quot;,&quot;add&quot;,&quot;add&quot;,&quot;add&quot;,&quot;showFirstUnique&quot;]
[[[7,7,7,7,7,7]],[],[7],[3],[3],[7],[17],[]]
<strong>输出：</strong>
[null,-1,null,null,null,null,null,17]
<strong>解释：</strong>
FirstUnique firstUnique = new FirstUnique([7,7,7,7,7,7]);
firstUnique.showFirstUnique(); // 返回 -1
firstUnique.add(7);            // 此时队列为 [7,7,7,7,7,7,7]
firstUnique.add(3);&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; // 此时队列为 [7,7,7,7,7,7,7,3]
firstUnique.add(3);&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; // 此时队列为 [7,7,7,7,7,7,7,3,3]
firstUnique.add(7);&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; // 此时队列为 [7,7,7,7,7,7,7,3,3,7]
firstUnique.add(17);&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;// 此时队列为 [7,7,7,7,7,7,7,3,3,7,17]
firstUnique.showFirstUnique(); // 返回 17
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>
[&quot;FirstUnique&quot;,&quot;showFirstUnique&quot;,&quot;add&quot;,&quot;showFirstUnique&quot;]
[[[809]],[],[809],[]]
<strong>输出：</strong>
[null,809,null,-1]
<strong>解释：</strong>
FirstUnique firstUnique = new FirstUnique([809]);
firstUnique.showFirstUnique(); // 返回 809
firstUnique.add(809);          // 此时队列为 [809,809]
firstUnique.showFirstUnique(); // 返回 -1
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10^5</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10^8</code></li>
	<li><code>1 &lt;= value &lt;= 10^8</code></li>
	<li>最多调用 5000 次&nbsp;<code>showFirstUnique</code>&nbsp;和&nbsp;<code>add</code> 。</li>
</ul>
