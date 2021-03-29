### [二维区域和检索 - 矩阵不可变](https://leetcode-cn.com/problems/range-sum-query-2d-immutable)

<p>给定一个二维矩阵，计算其子矩形范围内元素的总和，该子矩阵的左上角为 (<em>row</em>1,&nbsp;<em>col</em>1) ，右下角为 (<em>row</em>2,&nbsp;<em>col</em>2)。</p>

<p><img alt="Range Sum Query 2D" src="https://assets.leetcode-cn.com/aliyun-lc-upload/images/304.png" style="width: 130px;"><br>
<small>上图子矩阵左上角&nbsp;(row1, col1) = <strong>(2, 1)</strong>&nbsp;，右下角(row2, col2) = <strong>(4, 3)，</strong>该子矩形内元素的总和为 8。</small></p>

<p><strong>示例:</strong></p>

<pre>给定 matrix = [
  [3, 0, 1, 4, 2],
  [5, 6, 3, 2, 1],
  [1, 2, 0, 1, 5],
  [4, 1, 0, 1, 7],
  [1, 0, 3, 0, 5]
]

sumRegion(2, 1, 4, 3) -&gt; 8
sumRegion(1, 1, 2, 2) -&gt; 11
sumRegion(1, 2, 2, 4) -&gt; 12
</pre>

<p><strong>说明:</strong></p>

<ol>
	<li>你可以假设矩阵不可变。</li>
	<li>会多次调用&nbsp;<em>sumRegion&nbsp;</em>方法<em>。</em></li>
	<li>你可以假设&nbsp;<em>row</em>1 &le; <em>row</em>2 且&nbsp;<em>col</em>1 &le; <em>col</em>2。</li>
</ol>
