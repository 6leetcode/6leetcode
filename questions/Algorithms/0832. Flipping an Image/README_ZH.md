### [翻转图像](https://leetcode-cn.com/problems/flipping-an-image)

<p>给定一个二进制矩阵 <code>A</code>，我们想先水平翻转图像，然后反转图像并返回结果。</p>

<p>水平翻转图片就是将图片的每一行都进行翻转，即逆序。例如，水平翻转 <code>[1, 1, 0]</code> 的结果是 <code>[0, 1, 1]</code>。</p>

<p>反转图片的意思是图片中的 <code>0</code> 全部被 <code>1</code> 替换， <code>1</code> 全部被 <code>0</code> 替换。例如，反转 <code>[0, 1, 1]</code> 的结果是 <code>[1, 0, 0]</code>。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>[[1,1,0],[1,0,1],[0,0,0]]
<strong>输出：</strong>[[1,0,0],[0,1,0],[1,1,1]]
<strong>解释：</strong>首先翻转每一行: [[0,1,1],[1,0,1],[0,0,0]]；
     然后反转图片: [[1,0,0],[0,1,0],[1,1,1]]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>[[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
<strong>输出：</strong>[[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
<strong>解释：</strong>首先翻转每一行: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]]；
     然后反转图片: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= A.length = A[0].length <= 20</code></li>
	<li><code>0 <= A[i][j] <= 1</code></li>
</ul>
