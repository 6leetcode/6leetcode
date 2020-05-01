### [Sparse Matrix Multiplication](https://leetcode.com/problems/sparse-matrix-multiplication)

<p>Given two <a href="https://en.wikipedia.org/wiki/Sparse_matrix" target="_blank">sparse matrices</a> <b>A</b> and <b>B</b>, return the result of <b>AB</b>.</p>

<p>You may assume that <b>A</b>&#39;s column number is equal to <b>B</b>&#39;s row number.</p>

<p><b>Example:</b></p>

<pre>
<b>Input:

</b><strong>A</strong> = [
  [ 1, 0, 0],
  [-1, 0, 3]
]

<strong>B</strong> = [
  [ 7, 0, 0 ],
  [ 0, 0, 0 ],
  [ 0, 0, 1 ]
]

<strong>Output:</strong>

     |  1 0 0 |   | 7 0 0 |   |  7 0 0 |
<b>AB</b> = | -1 0 3 | x | 0 0 0 | = | -7 0 3 |
                  | 0 0 1 |
</pre>
