### [Minimum Window Subsequence](https://leetcode.com/problems/minimum-window-subsequence)

<p>Given strings <code>s1</code> and <code>s2</code>, find the minimum (contiguous) <b>substring</b> <code>part</code> of <code>s1</code>, so that <code>s2</code> is a <b>subsequence</b> of <code>part</code>.</p>

<p>If there is no such window in <code>s1</code> that covers all characters in <code>s2</code>, return the empty string <code>&quot;&quot;</code>. If there are multiple such minimum-length windows, return the one with the left-most starting index.</p>

<p><b>Example 1:</b></p>

<pre>
<b>Input:</b> 
s1 = &quot;abcdebdde&quot;, s2 = &quot;bde&quot;
<b>Output:</b> &quot;bcde&quot;
<b>Explanation:</b> 
&quot;bcde&quot; is the answer because it occurs before &quot;bdde&quot; which has the same length.
&quot;deb&quot; is not a smaller window because the elements of s2 in the window must occur in order.
</pre>

<p>&nbsp;</p>

<p><b>Note:</b></p>

<ul>
	<li>All the strings in the input will only contain lowercase letters.</li>
	<li>The length of <code>s1</code> will be in the range <code>[1, 20000]</code>.</li>
	<li>The length of <code>s2</code> will be in the range <code>[1, 100]</code>.</li>
</ul>
