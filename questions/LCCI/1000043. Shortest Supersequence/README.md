### [Shortest Supersequence](https://leetcode.com/problems/shortest-supersequence-lcci)

<p>You are given two arrays, one shorter (with all distinct elements) and one longer. Find the shortest subarray in the longer array that contains all the elements in the shorter array. The items can appear in any order.</p>

<p>Return the indexes of the leftmost and the rightmost elements of the array. If there are more than one answer, return the one that has the smallest left index. If there is no answer, return an empty array.</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong>
big = <code>[7,5,9,0,2,1,3,<strong>5,7,9,1</strong>,1,5,8,8,9,7]
small = [1,5,9]</code>
<strong>Output: </strong>[7,10]</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong>
big = <code>[1,2,3]
small = [4]</code>
<strong>Output: </strong>[]</pre>

<p><strong>Note: </strong></p>

<ul>
	<li><code>big.length&nbsp;&lt;= 100000</code></li>
	<li><code>1 &lt;= small.length&nbsp;&lt;= 100000</code></li>
</ul>
