### [Largest Multiple of Three](https://leetcode.com/problems/largest-multiple-of-three)

<p>Given an integer array of <code>digits</code>,&nbsp;return the largest multiple of <strong>three</strong> that can be formed by concatenating some of the given digits in any order.</p>

<p>Since the answer may not fit in an integer data type, return the answer as a string.</p>

<p>If there is no answer return an empty string.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> digits = [8,1,9]
<strong>Output:</strong> &quot;981&quot;
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> digits = [8,6,7,1,0]
<strong>Output:</strong> &quot;8760&quot;
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> digits = [1]
<strong>Output:</strong> &quot;&quot;
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> digits = [0,0,0,0,0,0]
<strong>Output:</strong> &quot;0&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= digits.length &lt;= 10^4</code></li>
	<li><code>0 &lt;= digits[i] &lt;= 9</code></li>
	<li>The returning answer must not contain unnecessary leading zeros.</li>
</ul>
