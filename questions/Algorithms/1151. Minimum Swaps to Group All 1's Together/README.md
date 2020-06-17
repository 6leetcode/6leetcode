### [Minimum Swaps to Group All 1's Together](https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together)

<p>Given a&nbsp;binary array <code>data</code>, return&nbsp;the minimum number of swaps required to group all <code>1</code>&rsquo;s present in the array together in <strong>any place</strong> in the array.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong><span id="example-input-1-1">[1,0,1,0,1]</span>
<strong>Output: </strong><span id="example-output-1">1</span>
<strong>Explanation: </strong>
There are 3 ways to group all 1&#39;s together:
[1,1,1,0,0] using 1 swap.
[0,1,1,1,0] using 2 swaps.
[0,0,1,1,1] using 1 swap.
The minimum is 1.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong><span id="example-input-2-1">[0,0,0,1,0]</span>
<strong>Output: </strong><span id="example-output-2">0</span>
<strong>Explanation: </strong>
Since there is only one 1 in the array, no swaps needed.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: </strong><span id="example-input-3-1">[1,0,1,0,1,0,0,1,1,0,1]</span>
<strong>Output: </strong><span id="example-output-3">3</span>
<strong>Explanation: </strong>
One possible solution that uses 3 swaps is [0,0,0,0,0,1,1,1,1,1,1].
</pre>

<p>&nbsp;</p>

<p><span><strong>Note</strong><strong>:</strong></span></p>

<ol>
	<li><code>1 &lt;= data.length &lt;= 10^5</code></li>
	<li><code>0 &lt;= data[i] &lt;= 1</code></li>
</ol>
