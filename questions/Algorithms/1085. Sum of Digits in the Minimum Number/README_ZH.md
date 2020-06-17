### [最小元素各数位之和](https://leetcode-cn.com/problems/sum-of-digits-in-the-minimum-number)

<p>给你一个正整数的数组&nbsp;<code>A</code>。</p>

<p>然后计算&nbsp;<code>S</code>，使其等于数组&nbsp;<code>A</code>&nbsp;当中最小的那个元素各个数位上数字之和。</p>

<p>最后，假如&nbsp;<code>S</code>&nbsp;所得计算结果是&nbsp;<strong>奇数&nbsp;</strong>的请你返回 0，否则请返回 1。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入：</strong>[34,23,1,24,75,33,54,8]
<strong>输出：</strong>0
<strong>解释：</strong>
最小元素为 1，该元素各个数位上的数字之和 S = 1，是奇数所以答案为 0。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>[99,77,33,66,55]
<strong>输出：</strong>1
<strong>解释：</strong>
最小元素为 33，该元素各个数位上的数字之和 S = 3 + 3 = 6，是偶数所以答案为 1。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= A.length &lt;= 100</code></li>
	<li><code>1 &lt;= A[i].length &lt;= 100</code></li>
</ol>
