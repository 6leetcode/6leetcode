### [Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements)

<p>Given a sorted array <code>arr</code>, two integers <code>k</code> and <code>x</code>, find the <code>k</code> closest elements to <code>x</code> in the array. The result should also be sorted in ascending order. If there is a tie, the smaller elements are always preferred.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> arr = [1,2,3,4,5], k = 4, x = 3
<strong>Output:</strong> [1,2,3,4]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> arr = [1,2,3,4,5], k = 4, x = -1
<strong>Output:</strong> [1,2,3,4]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= arr.length</code></li>
	<li><code>1 &lt;= arr.length&nbsp;&lt;= 10^4</code></li>
	<li>Absolute value of elements in the array and <code>x</code> will not exceed 10<sup>4</sup></li>
</ul>
