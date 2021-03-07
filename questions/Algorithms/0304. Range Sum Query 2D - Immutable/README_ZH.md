### [二维区域和检索 - 矩阵不可变](https://leetcode-cn.com/problems/range-sum-query-2d-immutable)

<p>给定一个二维矩阵，计算其子矩形范围内元素的总和，该子矩阵的左上角为 <code>(row1, col1)</code> ，右下角为 <code>(row2, col2)</code> 。</p>

<p><img alt="Range Sum Query 2D" src="https://assets.leetcode-cn.com/aliyun-lc-upload/images/304.png" style="width: 130px;" /><br />
<small>上图子矩阵左上角 (row1, col1) = <strong>(2, 1)</strong> ，右下角(row2, col2) = <strong>(4, 3)，</strong>该子矩形内元素的总和为 8。</small></p>

<p> </p>

<p><strong>示例：</strong></p>

<pre>
给定 matrix = [
  [3, 0, 1, 4, 2],
  [5, 6, 3, 2, 1],
  [1, 2, 0, 1, 5],
  [4, 1, 0, 1, 7],
  [1, 0, 3, 0, 5]
]

sumRegion(2, 1, 4, 3) -> 8
sumRegion(1, 1, 2, 2) -> 11
sumRegion(1, 2, 2, 4) -> 12
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li>你可以假设矩阵不可变。</li>
	<li>会多次调用 <code>sumRegion</code><em> </em>方法<em>。</em></li>
	<li>你可以假设 <code>row1 ≤ row2</code> 且 <code>col1 ≤ col2</code> 。</li>
</ul>
