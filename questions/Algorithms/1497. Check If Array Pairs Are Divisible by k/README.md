### [Check If Array Pairs Are Divisible by k](https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k)

<p>Given an array of integers <code>arr</code> of even length <code>n</code> and an integer <code>k</code>.</p>

<p>We want to divide the array into exactly <code>n /&nbsp;2</code> pairs such that the sum of each pair is divisible by <code>k</code>.</p>

<p>Return <em>True</em> If you can find a way to do that or <em>False</em> otherwise.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3,4,5,10,6,7,8,9], k = 5
<strong>Output:</strong> true
<strong>Explanation:</strong> Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3,4,5,6], k = 7
<strong>Output:</strong> true
<strong>Explanation:</strong> Pairs are (1,6),(2,5) and(3,4).
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3,4,5,6], k = 10
<strong>Output:</strong> false
<strong>Explanation:</strong> You can try all possible pairs to see that there is no way to divide arr into 3 pairs each with sum divisible by 10.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> arr = [-10,10], k = 2
<strong>Output:</strong> true
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> arr = [-1,1,-2,2,-3,3,-4,4], k = 3
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>arr.length == n</code></li>
	<li><code>1 &lt;= n &lt;= 10^5</code></li>
	<li><code>n</code> is even.</li>
	<li><code>-10^9 &lt;= arr[i] &lt;= 10^9</code></li>
	<li><code>1 &lt;= k &lt;= 10^5</code></li>
</ul>
