### [Minimum Possible Integer After at Most K Adjacent Swaps On Digits](https://leetcode.com/problems/minimum-possible-integer-after-at-most-k-adjacent-swaps-on-digits)

<p>Given a string <code>num</code> representing <strong>the digits</strong> of&nbsp;a very large integer and an integer <code>k</code>.</p>

<p>You are allowed to swap any two adjacent digits of the integer <strong>at most</strong> <code>k</code> times.</p>

<p>Return <em>the minimum integer</em> you can obtain also as a string.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/17/q4_1.jpg" style="width: 500px; height: 40px;" />
<pre>
<strong>Input:</strong> num = &quot;4321&quot;, k = 4
<strong>Output:</strong> &quot;1342&quot;
<strong>Explanation:</strong> The steps to obtain the minimum integer from 4321 with 4 adjacent swaps are shown.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;100&quot;, k = 1
<strong>Output:</strong> &quot;010&quot;
<strong>Explanation:</strong> It&#39;s ok for the output to have leading zeros, but the input is guaranteed not to have any leading zeros.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;36789&quot;, k = 1000
<strong>Output:</strong> &quot;36789&quot;
<strong>Explanation:</strong> We can keep the number without any swaps.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;22&quot;, k = 22
<strong>Output:</strong> &quot;22&quot;
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;9438957234785635408&quot;, k = 23
<strong>Output:</strong> &quot;0345989723478563548&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num.length &lt;= 30000</code></li>
	<li><code>num</code> contains <strong>digits</strong> only and doesn&#39;t have <strong>leading zeros</strong>.</li>
	<li><code>1 &lt;= k &lt;= 10^9</code></li>
</ul>
