### [稀疏矩阵的乘法](https://leetcode-cn.com/problems/sparse-matrix-multiplication)

<p>给你两个&nbsp;<a href="https://baike.baidu.com/item/%E7%A8%80%E7%96%8F%E7%9F%A9%E9%98%B5" target="_blank">稀疏矩阵</a>&nbsp;<strong>A</strong>&nbsp;和&nbsp;<strong>B</strong>，请你返回&nbsp;<strong>AB</strong> 的结果。你可以默认&nbsp;<strong>A&nbsp;</strong>的列数等于&nbsp;<strong>B&nbsp;</strong>的行数。</p>

<p>请仔细阅读下面的示例。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：

A</strong> = [
  [ 1, 0, 0],
  [-1, 0, 3]
]

<strong>B</strong> = [
  [ 7, 0, 0 ],
  [ 0, 0, 0 ],
  [ 0, 0, 1 ]
]

<strong>输出：</strong>

     |  1 0 0 |   | 7 0 0 |   |  7 0 0 |
<strong>AB</strong> = | -1 0 3 | x | 0 0 0 | = | -7 0 3 |
                  | 0 0 1 |
</pre>
