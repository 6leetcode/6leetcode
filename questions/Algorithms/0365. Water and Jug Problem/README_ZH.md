### [水壶问题](https://leetcode-cn.com/problems/water-and-jug-problem)

<p>有两个水壶，容量分别为&nbsp;<code>jug1Capacity</code>&nbsp;和 <code>jug2Capacity</code> 升。水的供应是无限的。确定是否有可能使用这两个壶准确得到&nbsp;<code>targetCapacity</code> 升。</p>

<p>如果可以得到&nbsp;<code>targetCapacity</code>&nbsp;升水，最后请用以上水壶中的一或两个来盛放取得的&nbsp;<code>targetCapacity</code>&nbsp;升水。</p>

<p>你可以：</p>

<ul>
	<li>装满任意一个水壶</li>
	<li>清空任意一个水壶</li>
	<li>从一个水壶向另外一个水壶倒水，直到装满或者倒空</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1:</strong>&nbsp;</p>

<pre>
<strong>输入:</strong> jug1Capacity = 3, jug2Capacity = 5, targetCapacity = 4
<strong>输出:</strong> true
<strong>解释</strong>：来自著名的&nbsp;<a href="https://www.youtube.com/watch?v=BVtQNK_ZUJg"><em>"Die Hard"</em></a></pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> jug1Capacity = 2, jug2Capacity = 6, targetCapacity = 5
<strong>输出:</strong> false
</pre>

<p><strong>示例 3:</strong></p>

<pre>
<strong>输入:</strong> jug1Capacity = 1, jug2Capacity = 2, targetCapacity = 3
<strong>输出:</strong> true
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>1 &lt;= jug1Capacity, jug2Capacity, targetCapacity &lt;= 10<sup>6</sup></code></li>
</ul>
