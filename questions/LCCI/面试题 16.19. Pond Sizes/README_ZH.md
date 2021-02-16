### [水域大小](https://leetcode-cn.com/problems/pond-sizes-lcci)

<p>你有一个用于表示一片土地的整数矩阵<code>land</code>，该矩阵中每个点的值代表对应地点的海拔高度。若值为0则表示水域。由垂直、水平或对角连接的水域为池塘。池塘的大小是指相连接的水域的个数。编写一个方法来计算矩阵中所有池塘的大小，返回值需要从小到大排序。</p>
<p><strong>示例：</strong></p>
<pre><strong>输入：</strong>
[
  [0,2,1,0],
  [0,1,0,1],
  [1,1,0,1],
  [0,1,0,1]
]
<strong>输出：</strong> [1,2,4]
</pre>
<p><strong>提示：</strong></p>
<ul>
<li><code>0 < len(land) <= 1000</code></li>
<li><code>0 < len(land[i]) <= 1000</code></li>
</ul>
