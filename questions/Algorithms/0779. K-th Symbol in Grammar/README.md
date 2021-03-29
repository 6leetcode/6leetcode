### [K-th Symbol in Grammar](https://leetcode.com/problems/k-th-symbol-in-grammar)

<p>On the first row, we write a <code>0</code>. Now in every subsequent row, we look at the previous row and replace each occurrence of <code>0</code> with <code>01</code>, and each occurrence of <code>1</code> with <code>10</code>.</p>

<p>Given row <code>N</code> and index <code>K</code>, return the <code>K</code>-th indexed symbol in row <code>N</code>. (The values of <code>K</code> are 1-indexed.) (1 indexed).</p>

<pre>
<strong>Examples:</strong>
<strong>Input:</strong> N = 1, K = 1
<strong>Output:</strong> 0

<strong>Input:</strong> N = 2, K = 1
<strong>Output:</strong> 0

<strong>Input:</strong> N = 2, K = 2
<strong>Output:</strong> 1

<strong>Input:</strong> N = 4, K = 5
<strong>Output:</strong> 1

<strong>Explanation:</strong>
row 1: 0
row 2: 01
row 3: 0110
row 4: 01101001
</pre>

<p><strong>Note:</strong></p>

<ol>
	<li><code>N</code> will be an integer in the range <code>[1, 30]</code>.</li>
	<li><code>K</code> will be an integer in the range <code>[1, 2^(N-1)]</code>.</li>
</ol>
