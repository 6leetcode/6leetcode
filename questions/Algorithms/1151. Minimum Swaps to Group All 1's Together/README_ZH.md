### [最少交换次数来组合所有的 1](https://leetcode-cn.com/problems/minimum-swaps-to-group-all-1s-together)

<p>给出一个二进制数组&nbsp;<code>data</code>，你需要通过交换位置，将数组中 <strong>任何位置</strong> 上的 1 组合到一起，并返回所有可能中所需&nbsp;<strong>最少的交换次数</strong>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>[1,0,1,0,1]
<strong>输出：</strong>1
<strong>解释： </strong>
有三种可能的方法可以把所有的 1 组合在一起：
[1,1,1,0,0]，交换 1 次；
[0,1,1,1,0]，交换 2 次；
[0,0,1,1,1]，交换 1 次。
所以最少的交换次数为 1。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>[0,0,0,1,0]
<strong>输出：</strong>0
<strong>解释： </strong>
由于数组中只有一个 1，所以不需要交换。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>[1,0,1,0,1,0,0,1,1,0,1]
<strong>输出：</strong>3
<strong>解释：</strong>
交换 3 次，一种可行的只用 3 次交换的解决方案是 [0,0,0,0,0,1,1,1,1,1,1]。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= data.length &lt;= 10^5</code></li>
	<li><code>0 &lt;= data[i] &lt;= 1</code></li>
</ol>
