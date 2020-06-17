### [找出所有行中最小公共元素](https://leetcode-cn.com/problems/find-smallest-common-element-in-all-rows)

<p>给你一个矩阵&nbsp;<code>mat</code>，其中每一行的元素都已经按 <strong>递增</strong> 顺序排好了。请你帮忙找出在所有这些行中 <strong>最小的公共元素</strong>。</p>

<p>如果矩阵中没有这样的公共元素，就请返回&nbsp;<code>-1</code>。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong>mat = [[1,2,3,4,5],[2,4,5,8,10],[3,5,7,9,11],[1,3,5,7,9]]
<strong>输出：</strong>5
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= mat.length, mat[i].length &lt;= 500</code></li>
	<li><code>1 &lt;= mat[i][j] &lt;= 10^4</code></li>
	<li><code>mat[i]</code>&nbsp;已按递增顺序排列。</li>
</ul>
