### [粉刷房子](https://leetcode-cn.com/problems/paint-house)

<p>假如有一排房子，共 <em>n</em> 个，每个房子可以被粉刷成红色、蓝色或者绿色这三种颜色中的一种，你需要粉刷所有的房子并且使其相邻的两个房子颜色不能相同。</p>

<p>当然，因为市场上不同颜色油漆的价格不同，所以房子粉刷成不同颜色的花费成本也是不同的。每个房子粉刷成不同颜色的花费是以一个&nbsp;<code><em>n</em> x <em>3</em></code><em>&nbsp;</em>的矩阵来表示的。</p>

<p>例如，<code>costs[0][0]</code> 表示第 0 号房子粉刷成红色的成本花费；<code>costs[1][2]</code>&nbsp;表示第 1 号房子粉刷成绿色的花费，以此类推。请你计算出粉刷完所有房子最少的花费成本。</p>

<p><strong>注意：</strong></p>

<p>所有花费均为正整数。</p>

<p><strong>示例：</strong></p>

<pre><strong>输入: </strong>[[17,2,17],[16,16,5],[14,3,19]]
<strong>输出: </strong>10
<strong>解释: 将 0 号房子粉刷成蓝色，1 号房子粉刷成绿色，2 号房子粉刷成蓝色。</strong>
&nbsp;    <strong>最少花费:</strong> 2 + 5 + 3 = 10。
</pre>
