### [回旋镖的数量](https://leetcode-cn.com/problems/number-of-boomerangs)

<p>给定平面上<em>&nbsp;n </em>对不同的点，&ldquo;回旋镖&rdquo; 是由点表示的元组&nbsp;<code>(i, j, k)</code>&nbsp;，其中&nbsp;<code>i</code>&nbsp;和&nbsp;<code>j</code>&nbsp;之间的距离和&nbsp;<code>i</code>&nbsp;和&nbsp;<code>k</code>&nbsp;之间的距离相等（<strong>需要考虑元组的顺序</strong>）。</p>

<p>找到所有回旋镖的数量。你可以假设<em>&nbsp;n </em>最大为 <strong>500</strong>，所有点的坐标在闭区间<strong> [-10000, 10000] </strong>中。</p>

<p><strong>示例:</strong></p>

<pre>
<strong>输入:</strong>
[[0,0],[1,0],[2,0]]

<strong>输出:</strong>
2

<strong>解释:</strong>
两个回旋镖为 <strong>[[1,0],[0,0],[2,0]]</strong> 和 <strong>[[1,0],[2,0],[0,0]]</strong>
</pre>
