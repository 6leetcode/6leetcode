### [Rotate String](https://leetcode.com/problems/rotate-string)

<p>We are given two strings, <code>s</code> and <code>goal</code>.</p>

<p>A <em>shift on </em><code>s</code> consists of taking string <code>s</code> and moving the leftmost character to the rightmost position. For example, if <code>s = &#39;abcde&#39;</code>, then it will be <code>&#39;bcdea&#39;</code> after one shift on <code>s</code>. Return <code>true</code> if and only if <code>s</code> can become <code>goal</code> after some number of shifts on <code>s</code>.</p>

<pre>
<strong>Example 1:</strong>
<strong>Input:</strong> s = &#39;abcde&#39;, goal = &#39;cdeab&#39;
<strong>Output:</strong> true

<strong>Example 2:</strong>
<strong>Input:</strong> s = &#39;abcde&#39;, goal = &#39;abced&#39;
<strong>Output:</strong> false
</pre>

<p><strong>Note:</strong></p>

<ul>
	<li><code>s</code> and <code>goal</code> will have length at most <code>100</code>.</li>
</ul>
