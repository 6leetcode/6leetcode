### [合并区间](https://leetcode-cn.com/problems/merge-intervals)

<p>给出一个区间的集合，请合并所有重叠的区间。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入:</strong> intervals = [[1,3],[2,6],[8,10],[15,18]]
<strong>输出:</strong> [[1,6],[8,10],[15,18]]
<strong>解释:</strong> 区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
</pre>

<p><strong>示例&nbsp;2:</strong></p>

<pre><strong>输入:</strong> intervals = [[1,4],[4,5]]
<strong>输出:</strong> [[1,5]]
<strong>解释:</strong> 区间 [1,4] 和 [4,5] 可被视为重叠区间。</pre>

<p><strong>注意：</strong>输入类型已于2019年4月15日更改。 请重置默认代码定义以获取新方法签名。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>intervals[i][0] &lt;= intervals[i][1]</code></li>
</ul>
