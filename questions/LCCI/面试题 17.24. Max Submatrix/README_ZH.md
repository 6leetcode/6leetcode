### [最大子矩阵](https://leetcode-cn.com/problems/max-submatrix-lcci)

<p>给定一个正整数、负整数和 0 组成的 N &times; M&nbsp;矩阵，编写代码找出元素总和最大的子矩阵。</p>

<p>返回一个数组 <code>[r1, c1, r2, c2]</code>，其中 <code>r1</code>, <code>c1</code> 分别代表子矩阵左上角的行号和列号，<code>r2</code>, <code>c2</code> 分别代表右下角的行号和列号。若有多个满足条件的子矩阵，返回任意一个均可。</p>

<p><strong>注意：</strong>本题相对书上原题稍作改动</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：
</strong><code>[
&nbsp;  [-1,<strong>0</strong>],
&nbsp;  [0,-1]
]</code>
<strong>输出：</strong>[0,1,0,1]
<strong>解释：</strong>输入中标粗的元素即为输出所表示的矩阵</pre>

<p>&nbsp;</p>

<p><strong>说明：</strong></p>

<ul>
	<li><code>1 &lt;= matrix.length, matrix[0].length &lt;= 200</code></li>
</ul>
