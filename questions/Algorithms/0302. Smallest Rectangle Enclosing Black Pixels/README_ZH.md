### [包含全部黑色像素的最小矩形](https://leetcode-cn.com/problems/smallest-rectangle-enclosing-black-pixels)

<p>图片在计算机处理中往往是使用二维矩阵来表示的。</p>

<p>假设，这里我们用的是一张黑白的图片，那么&nbsp;<code>0</code>&nbsp;代表白色像素，<code>1</code>&nbsp;代表黑色像素。</p>

<p>其中黑色的像素他们相互连接，也就是说，图片中只会有一片连在一块儿的黑色像素（像素点是水平或竖直方向连接的）。</p>

<p>那么，给出某一个黑色像素点&nbsp;<code>(x, y)</code>&nbsp;的位置，你是否可以找出包含全部黑色像素的最小矩形（与坐标轴对齐）的面积呢？</p>

<p><img src="https://assets.leetcode-cn.com/aliyun-lc-upload/original_images/302_smallest_rectangle_enclosing_black_pixels.png" style="width: 100px;"></p>

<p><strong>示例:</strong></p>

<pre><strong>输入:</strong>
[
  &quot;0010&quot;,
  &quot;0110&quot;,
  &quot;0100&quot;
]
<code>和 x = 0, </code><code>y = 2</code>

<strong>输出:</strong> 6
</pre>

<p>&nbsp;</p>
