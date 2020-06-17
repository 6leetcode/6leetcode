### [矩阵中 1 的最大数量](https://leetcode-cn.com/problems/maximum-number-of-ones)

<p>现在有一个尺寸为 <code>width * height</code>&nbsp;的矩阵&nbsp;<code>M</code>，矩阵中的每个单元格的值不是&nbsp;<code>0</code>&nbsp;就是&nbsp;<code>1</code>。</p>

<p>而且矩阵 <code>M</code> 中每个大小为&nbsp;<code>sideLength * sideLength</code>&nbsp;的 <strong>正方形</strong> 子阵中，<code>1</code> 的数量不得超过&nbsp;<code>maxOnes</code>。</p>

<p>请你设计一个算法，计算矩阵中最多可以有多少个 <code>1</code>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>width = 3, height = 3, sideLength = 2, maxOnes = 1
<strong>输出：</strong>4
<strong>解释：</strong>
题目要求：在一个 3*3 的矩阵中，每一个 2*2 的子阵中的 1 的数目不超过 1 个。
最好的解决方案中，矩阵 M 里最多可以有 4 个 1，如下所示：
[1,0,1]
[0,0,0]
[1,0,1]
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>width = 3, height = 3, sideLength = 2, maxOnes = 2
<strong>输出：</strong>6
<strong>解释：</strong>
[1,0,1]
[1,0,1]
[1,0,1]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= width, height &lt;= 100</code></li>
	<li><code>1 &lt;= sideLength &lt;= width, height</code></li>
	<li><code>0 &lt;= maxOnes &lt;= sideLength * sideLength</code></li>
</ul>
