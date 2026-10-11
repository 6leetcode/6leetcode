### [Super Pow](https://leetcode.com/problems/super-pow)

<p>Your task is to calculate <code>a<sup>b</sup></code> mod <code>1337</code> where <code>a</code> is a positive integer and <code>b</code> is an extremely large positive integer given in the form of an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">a = 2, b = [3]</span></p>

<p><strong>Output:</strong> <span class="example-io">8</span></p>

<p><strong>Explanation:</strong></p>

<p>The array <code>b = [3]</code> represents the exponent 3. Therefore, <code>a<sup>3</sup> = 2<sup>3</sup> = 8</code>, so the result is 8.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">a = 2, b = [1,0]</span></p>

<p><strong>Output:</strong> <span class="example-io">1024</span></p>

<p><strong>Explanation:</strong></p>

<p>The array <code>b = [1, 0]</code> represents the exponent 10. Therefore, <code>a<sup>10</sup> = 2<sup>10</sup> = 1024</code>, so the result is 1024.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">a = 1, b = [4,3,3,8,5,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p>The array <code>b = [4, 3, 3, 8, 5, 2]</code> represents a positive exponent. Since <code>a = 1</code>, any positive power of 1 is 1. Therefore, the result is 1.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>1 &lt;= b.length &lt;= 2000</code></li>
	<li><code>0 &lt;= b[i] &lt;= 9</code></li>
	<li><code>b</code> does not contain leading zeros.</li>
</ul>
