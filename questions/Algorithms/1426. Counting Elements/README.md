### [Counting Elements](https://leetcode.com/problems/counting-elements)

<p>Given an integer array <code>arr</code>, count how many elements <code>x</code> there are, such that <code>x + 1</code> is also in <code>arr</code>. If there are duplicates in <code>arr</code>, count them separately.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3]
<strong>Output:</strong> 2
<strong>Explanation:</strong>&nbsp;1 and 2 are counted cause 2 and 3 are in arr.</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,1,3,3,5,5,7,7]
<strong>Output:</strong> 0
<strong>Explanation:</strong>&nbsp;No numbers are counted, cause there&#39;s no 2, 4, 6, or 8 in arr.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,3,2,3,5,0]
<strong>Output:</strong> 3
<strong>Explanation:</strong>&nbsp;0, 1 and 2 are counted cause 1, 2 and 3 are in arr.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,1,2,2]
<strong>Output:</strong> 2
<strong>Explanation:</strong>&nbsp;Two 1s are counted cause 2 is in arr.
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,1,2]
<strong>Output:</strong> 2
<strong>Explanation:</strong>&nbsp;Both 1s are counted because 2 is in the array.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 1000</code></li>
	<li><code>0 &lt;= arr[i] &lt;= 1000</code></li>
</ul>
