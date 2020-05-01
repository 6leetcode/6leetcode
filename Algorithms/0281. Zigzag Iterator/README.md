### [Zigzag Iterator](https://leetcode.com/problems/zigzag-iterator)

<p>Given two 1d vectors, implement an iterator to return their elements alternately.</p>

<p>&nbsp;</p>

<p><strong>Example:</strong></p>

<pre>
<strong>Input:</strong>
v1 = [1,2]
v2 = [3,4,5,6] 
<strong>Output:</strong> <code>[1,3,2,4,5,6]
<strong>Explanation:</strong></code>&nbsp;By calling <i>next</i> repeatedly until <i>hasNext</i> returns <code>false</code>, the order of elements returned by <i>next</i> should be: <code>[1,3,2,4,5,6]</code>.</pre>

<p>&nbsp;</p>

<p><b>Follow up</b>:</p>

<p>What if you are given <code>k</code> 1d vectors? How well can your code be extended to such cases?</p>

<p><strong>Clarification </strong><b>for the follow up question</b><strong>:</strong><br />
The &quot;Zigzag&quot; order is not clearly defined and is ambiguous for <code>k &gt; 2</code> cases. If &quot;Zigzag&quot; does not look right to you, replace &quot;Zigzag&quot; with &quot;Cyclic&quot;. For example:</p>

<pre>
<strong>Input:</strong>
[1,2,3]
[4,5,6,7]
[8,9]

<strong>Output: </strong><code>[1,4,8,2,5,9,3,6,7]</code>.
</pre>
