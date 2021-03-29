### [Pancake Sorting](https://leetcode.com/problems/pancake-sorting)

<p>Given an array of integers&nbsp;<code>arr</code>, sort the array by performing a series of <strong>pancake flips</strong>.</p>

<p>In one pancake flip we do the following steps:</p>

<ul>
	<li>Choose an integer <code>k</code> where <code>1 &lt;= k &lt;= arr.length</code>.</li>
	<li>Reverse the sub-array <code>arr[1...k]</code>.</li>
</ul>

<p>For example, if <code>arr = [3,2,1,4]</code> and we performed a pancake flip choosing <code>k = 3</code>, we reverse the sub-array <code>[3,2,1]</code>, so <code>arr = [<strong>1,2,3</strong>,4]</code> after the pancake flip at <code>k = 3</code>.</p>

<p>Return <em>the <code>k</code>-values corresponding to a sequence of pancake flips that sort <code>arr</code></em>.&nbsp;Any valid answer that sorts the array within <code>10 * arr.length</code> flips will be judged as correct.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [3,2,4,1]
<strong>Output:</strong> [4,2,4,3]
<strong>Explanation: </strong>
We perform 4 pancake flips, with k values 4, 2, 4, and 3.
Starting state: arr = [3, 2, 4, 1]
After 1st flip (k = 4): arr = [<strong>1, 4, 2, 3</strong>]
After 2nd flip (k = 2): arr = [<strong>4, 1</strong>, 2, 3]
After 3rd flip (k = 4): arr = [<strong>3, 2, 1, 4</strong>]
After 4th flip (k = 3): arr = [<strong>1, 2, 3</strong>, 4], which is sorted.
Notice that we return an array of the chosen k values of the pancake flips.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,3]
<strong>Output:</strong> []
<strong>Explanation: </strong>The input is already sorted, so there is no need to flip anything.
Note that other answers, such as [3, 3], would also be accepted.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 100</code></li>
	<li><code>1 &lt;= arr[i] &lt;= arr.length</code></li>
	<li>All integers in <code>arr</code> are unique (i.e. <code>arr</code> is a permutation of the integers from <code>1</code> to <code>arr.length</code>).</li>
</ul>
