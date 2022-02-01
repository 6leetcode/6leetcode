### [图片平滑器](https://leetcode-cn.com/problems/image-smoother)

<p><strong>图像平滑器</strong> 是大小为&nbsp;<code>3 x 3</code>&nbsp;的过滤器，可以计算是周围的8个单元和它本身的值求平均灰度(即蓝色平滑器中9个单元的平均值)来应用于图像的每个单元。如果一个单元的一个或多个周围的单元不存在，我们不考虑它的平均值(即红色平滑器中的四个单元的平均值)。</p>

<p><img src="https://assets.leetcode.com/uploads/2021/05/03/smoother-grid.jpg" style="height: 493px; width: 493px;" /></p>

<p>给定一个代表图像灰度的 <code>m x n</code> 整数矩阵 <code>img</code> ，<em>返回对图像的每个单元格平滑处理后的图像</em>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2021/05/03/smooth-grid.jpg" /></p>

<pre>
<strong>输入:</strong>img = [[1,1,1],[1,0,1],[1,1,1]]
<strong>输出:</strong>[[0, 0, 0],[0, 0, 0], [0, 0, 0]]
<strong>解释:</strong>
对于点 (0,0), (0,2), (2,0), (2,2): 平均(3/4) = 平均(0.75) = 0
对于点 (0,1), (1,0), (1,2), (2,1): 平均(5/6) = 平均(0.83333333) = 0
对于点 (1,1): 平均(8/9) = 平均(0.88888889) = 0
</pre>

<p><strong>示例 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/smooth2-grid.jpg" />
<pre>
<strong>输入:</strong> img = [[100,200,100],[200,50,200],[100,200,100]]
<strong>输出:</strong> [[137,141,137],[141,138,141],[137,141,137]]
<strong>解释:</strong>
对于点 (0,0), (0,2), (2,0), (2,2): floor((100+200+200+50)/4) = floor(137.5) = 137
对于点 (0,1), (1,0), (1,2), (2,1): floor((200+200+50+200+100+100)/6) = floor(141.666667) = 141
对于点 (1,1): floor((50+200+200+200+200+100+100+100+100)/9) = floor(138.888889) = 138
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>m == img.length</code></li>
	<li><code>n == img[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 200</code></li>
	<li><code>0 &lt;= img[i][j] &lt;= 255</code></li>
</ul>
