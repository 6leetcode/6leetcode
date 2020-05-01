### [删除区间](https://leetcode-cn.com/problems/remove-interval)

<p>给你一个&nbsp;<strong>有序的&nbsp;</strong>不相交区间列表 <code>intervals</code> 和一个要删除的区间 <code>toBeRemoved</code>，&nbsp;<code>intervals</code>&nbsp;中的每一个区间&nbsp;<code>intervals[i] = [a, b]</code>&nbsp;都表示满足&nbsp;<code>a &lt;= x &lt; b</code> 的所有实数&nbsp; <code>x</code>&nbsp;的集合。</p>

<p>我们将&nbsp;<code>intervals</code> 中任意区间与&nbsp;<code>toBeRemoved</code> 有交集的部分都删除。</p>

<p>返回删除所有交集区间后，&nbsp;<code>intervals</code>&nbsp;剩余部分的&nbsp;<strong>有序&nbsp;</strong>列表。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>intervals = [[0,2],[3,4],[5,7]], toBeRemoved = [1,6]
<strong>输出：</strong>[[0,1],[6,7]]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>intervals = [[0,5]], toBeRemoved = [2,3]
<strong>输出：</strong>[[0,2],[3,5]]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= intervals.length &lt;= 10^4</code></li>
	<li><code>-10^9 &lt;= intervals[i][0] &lt; intervals[i][1] &lt;= 10^9</code></li>
</ul>
