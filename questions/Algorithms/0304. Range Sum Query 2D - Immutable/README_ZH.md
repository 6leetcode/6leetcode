### [二维区域和检索 - 矩阵不可变](https://leetcode-cn.com/problems/range-sum-query-2d-immutable)

<p><big><small>给定一个二维矩阵 <code>matrix</code>，</small></big>以下类型的多个请求：</p>

<ul>
	<li><big><small>计算其子矩形范围内元素的总和，该子矩阵的左上角为 <code>(row1, col1)</code> ，右下角为 <code>(row2, col2)</code> 。</small></big></li>
</ul>

<p>实现 <code>NumMatrix</code> 类：</p>

<ul>
	<li><code>NumMatrix(int[][] matrix)</code> 给定整数矩阵 <code>matrix</code> 进行初始化</li>
	<li><code>int sumRegion(int row1, int col1, int row2, int col2)</code> 返回<big><small>左上角</small></big><big><small> <code>(row1, col1)</code> 、右下角 <code>(row2, col2)</code></small></big> 的子矩阵的元素总和。</li>
</ul>

<p> </p>

<p><strong>示例 1：</strong></p>

<p><img src="https://pic.leetcode-cn.com/1626332422-wUpUHT-image.png" style="width: 200px;" /></p>

<pre>
<strong>输入:</strong> 
["NumMatrix","sumRegion","sumRegion","sumRegion"]
[[[[3,0,1,4,2],[5,6,3,2,1],[1,2,0,1,5],[4,1,0,1,7],[1,0,3,0,5]]],[2,1,4,3],[1,1,2,2],[1,2,2,4]]
<strong>输出:</strong> 
[null, 8, 11, 12]

<strong>解释:</strong>
NumMatrix numMatrix = new NumMatrix([[3,0,1,4,2],[5,6,3,2,1],[1,2,0,1,5],[4,1,0,1,7],[1,0,3,0,5]]]);
numMatrix.sumRegion(2, 1, 4, 3); // return 8 (红色矩形框的元素总和)
numMatrix.sumRegion(1, 1, 2, 2); // return 11 (绿色矩形框的元素总和)
numMatrix.sumRegion(1, 2, 2, 4); // return 12 (蓝色矩形框的元素总和)
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>m == matrix.length</code></li>
	<li><code>n == matrix[i].length</code></li>
	<li><code>1 <= m, n <= 200</code><meta charset="UTF-8" /></li>
	<li><code>-10<sup>5</sup> <= matrix[i][j] <= 10<sup>5</sup></code></li>
	<li><code>0 <= row1 <= row2 < m</code></li>
	<li><code>0 <= col1 <= col2 < n</code></li>
	<li><meta charset="UTF-8" />最多调用 <code>10<sup>4</sup></code> 次 <code>sumRegion</code> 方法</li>
</ul>
