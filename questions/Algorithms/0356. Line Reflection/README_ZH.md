### [直线镜像](https://leetcode-cn.com/problems/line-reflection)

<p>在一个二维平面空间中，给你 n 个点的坐标。问，是否能找出一条平行于 y<strong> </strong>轴的直线，让这些点关于这条直线成镜像排布？</p>

<p><strong>注意</strong>：题目数据中可能有重复的点。</p>

<p> </p>

<p><strong>进阶：</strong>你能找到比 O(<em>n</em><sup>2</sup>) 更优的解法吗?</p>

<p> </p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/04/23/356_example_1.PNG" style="width: 389px; height: 340px;" />
<pre>
<strong>输入：</strong>points = [[1,1],[-1,1]]
<strong>输出：</strong>true
<strong>解释：</strong>可以找出 x = 0 这条线。
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/04/23/356_example_2.PNG" style="width: 300px; height: 294px;" />
<pre>
<strong>输入：</strong>points = [[1,1],[-1,-1]]
<strong>输出：</strong>false
<strong>解释：</strong>无法找出这样一条线。</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == points.length</code></li>
	<li><code>1 <= n <= 10^4</code></li>
	<li><code>-10^8 <= points[i][j] <= 10^8</code></li>
</ul>
