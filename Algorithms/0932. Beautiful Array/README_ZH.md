### [漂亮数组](https://leetcode-cn.com/problems/beautiful-array)

<p>对于某些固定的&nbsp;<code>N</code>，如果数组&nbsp;<code>A</code>&nbsp;是整数&nbsp;<code>1, 2, ..., N</code>&nbsp;组成的排列，使得：</p>

<p>对于每个&nbsp;<code>i &lt; j</code>，都<strong>不存在</strong>&nbsp;<code>k</code> 满足&nbsp;<code>i &lt; k &lt; j</code>&nbsp;使得&nbsp;<code>A[k] * 2 = A[i] + A[j]</code>。</p>

<p>那么数组 <code>A</code>&nbsp;是漂亮数组。</p>

<p>&nbsp;</p>

<p>给定&nbsp;<code>N</code>，返回<strong>任意</strong>漂亮数组&nbsp;<code>A</code>（保证存在一个）。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>4
<strong>输出：</strong>[2,1,4,3]
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>5
<strong>输出：</strong>[3,1,2,5,4]</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= N &lt;= 1000</code></li>
</ul>

<p>&nbsp;</p>
