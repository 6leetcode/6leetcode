### [不动点](https://leetcode-cn.com/problems/fixed-point)

<p>给定已经按升序排列、由不同整数组成的数组 <code>A</code>，返回满足 <code>A[i] == i</code> 的最小索引&nbsp;<code>i</code>。如果不存在这样的&nbsp;<code>i</code>，返回 <code>-1</code>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>[-10,-5,0,3,7]
<strong>输出：</strong>3
<strong>解释：</strong>
对于给定的数组，<code>A[0] = -10，A[1] = -5，A[2] = 0，A[3] = 3</code>，因此输出为 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>[0,2,5,8,17]
<strong>输出：</strong>0
<strong>示例：</strong>
<code>A[0] = 0</code>，因此输出为 0 。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>[-10,-5,3,4,7,9]
<strong>输出：</strong>-1
<strong>解释： </strong>
不存在这样的 i 满足 <code>A[i] = i</code>，因此输出为 -1 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= A.length &lt; 10^4</code></li>
	<li><code>-10^9 &lt;= A[i] &lt;= 10^9</code></li>
</ol>
