### [Group the People Given the Group Size They Belong To](https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to)

<p>There are <code>n</code> people, each of them has a <strong>unique ID</strong>&nbsp;from <code>0</code> to <code>n - 1</code> and&nbsp;each person of them belongs to <strong>exactly one group</strong>.</p>

<p>Given an integer array&nbsp;<code>groupSizes</code>&nbsp;which indicated that the person with <code>ID = i</code> belongs to a group of&nbsp;<code>groupSize[i]</code>&nbsp;persons.</p>

<p>Return <em>an array of the groups</em> where <code>ans[j]</code> contains the IDs of the <code>j<sup>th</sup></code> group. Each ID should belong&nbsp;to <strong>exactly one group</strong>&nbsp;and each ID should be present in your answer. Also if a person with <code>ID = i</code>&nbsp;belongs to group <code>j</code> in your answer, then <code>ans[j].length == groupSize[i]</code> should be true.</p>

<p>If there is multiple answers, <strong>return any of them</strong>. It is <strong>guaranteed</strong> that there will be at least one valid solution for the given input.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> groupSizes = [3,3,3,3,3,1,3]
<strong>Output:</strong> [[5],[0,1,2],[3,4,6]]
<b>Explanation:</b> 
Other possible solutions are [[2,1,6],[5],[0,4,3]] and [[5],[0,6,2],[4,3,1]].
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> groupSizes = [2,1,3,3,3,2]
<strong>Output:</strong> [[1],[0,5],[2,3,4]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>groupSizes.length == n</code></li>
	<li><code>1 &lt;= n&nbsp;&lt;= 500</code></li>
	<li><code>1 &lt;=&nbsp;groupSizes[i] &lt;= n</code></li>
</ul>
