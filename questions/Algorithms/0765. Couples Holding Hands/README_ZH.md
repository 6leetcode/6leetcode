### [情侣牵手](https://leetcode-cn.com/problems/couples-holding-hands)

<p><code>n</code> 对情侣坐在连续排列的 <code>2n</code>&nbsp;个座位上，想要牵到对方的手。</p>

<p>人和座位由一个整数数组 <code>row</code> 表示，其中 <code>row[i]</code> 是坐在第 <code>i </code>个座位上的人的 <strong>ID</strong>。情侣们按顺序编号，第一对是&nbsp;<code>(0, 1)</code>，第二对是&nbsp;<code>(2, 3)</code>，以此类推，最后一对是&nbsp;<code>(2n-2, 2n-1)</code>。</p>

<p>返回 <em>最少交换座位的次数，以便每对情侣可以并肩坐在一起</em>。 <i>每次</i>交换可选择任意两人，让他们站起来交换座位。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> row = [0,2,1,3]
<strong>输出:</strong> 1
<strong>解释:</strong> 只需要交换row[1]和row[2]的位置即可。
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> row = [3,2,0,1]
<strong>输出:</strong> 0
<strong>解释:</strong> 无需交换座位，所有的情侣都已经可以手牵手了。
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>2n == row.length</code></li>
	<li><code>2 &lt;= n &lt;= 30</code></li>
	<li><code>n</code>&nbsp;是偶数</li>
	<li><code>0 &lt;= row[i] &lt; 2n</code></li>
	<li><code>row</code>&nbsp;中所有元素均<strong>无重复</strong></li>
</ul>
