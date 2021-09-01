### [优美的排列](https://leetcode-cn.com/problems/beautiful-arrangement)

<p>假设有从 1 到 n 的 n 个整数。用这些整数构造一个数组 <code>perm</code>（<strong>下标从 1 开始</strong>），只要满足下述条件 <strong>之一</strong> ，该数组就是一个 <strong>优美的排列</strong> ：</p>

<ul>
	<li><code>perm[i]</code> 能够被 <code>i</code> 整除</li>
	<li><code>i</code> 能够被 <code>perm[i]</code> 整除</li>
</ul>

<p>给你一个整数 <code>n</code> ，返回可以构造的 <strong>优美排列 </strong>的 <strong>数量</strong> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>n = 2
<strong>输出：</strong>2
<b>解释：</b>
第 1 个优美的排列是 [1,2]：
    - perm[1] = 1 能被 i = 1 整除
    - perm[2] = 2 能被 i = 2 整除
第 2 个优美的排列是 [2,1]:
    - perm[1] = 2 能被 i = 1 整除
    - i = 2 能被 perm[2] = 1 整除
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 1
<strong>输出：</strong>1
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 15</code></li>
</ul>
