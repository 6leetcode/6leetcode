### [01 矩阵](https://leetcode-cn.com/problems/01-matrix)

<p>给定一个由 <code>0</code> 和 <code>1</code> 组成的矩阵 <code>mat</code> ，请输出一个大小相同的矩阵，其中每一个格子是 <code>mat</code> 中对应位置元素到最近的 <code>0</code> 的距离。</p>

<p>两个相邻元素间的距离为 <code>1</code> 。</p>

<p> </p>

<p><b>示例 1：</b></p>

<p><img alt="" src="https://pic.leetcode-cn.com/1626667201-NCWmuP-image.png" style="width: 150px; " /></p>

<pre>
<strong>输入：</strong>mat =<strong> </strong>[[0,0,0],[0,1,0],[0,0,0]]
<strong>输出：</strong>[[0,0,0],[0,1,0],[0,0,0]]
</pre>

<p><b>示例 2：</b></p>

<p><img alt="" src="https://pic.leetcode-cn.com/1626667205-xFxIeK-image.png" style="width: 150px; " /></p>

<pre>
<b>输入：</b>mat =<b> </b>[[0,0,0],[0,1,0],[1,1,1]]
<strong>输出：</strong>[[0,0,0],[0,1,0],[1,2,1]]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>m == mat.length</code></li>
	<li><code>n == mat[i].length</code></li>
	<li><code>1 <= m, n <= 10<sup>4</sup></code></li>
	<li><code>1 <= m * n <= 10<sup>4</sup></code></li>
	<li><code>mat[i][j] is either 0 or 1.</code></li>
	<li><code>mat</code> 中至少有一个 <code>0 </code></li>
</ul>
