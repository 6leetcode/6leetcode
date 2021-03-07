### [Student Attendance Record I](https://leetcode.com/problems/student-attendance-record-i)

You are given a string <code>s</code> representing an attendance record for a student. The record only contains the following three characters:
<ul>
	<li><code>&#39;A&#39;</code>: Absent.</li>
	<li><code>&#39;L&#39;</code>: Late.</li>
	<li><code>&#39;P&#39;</code>: Present.</li>
</ul>

<p>A student could be rewarded if his attendance record does not contain more than one <code>&#39;A&#39;</code> (absent) or more than two consecutive <code>&#39;L&#39;</code> (late).</p>

<p>Return <code>true</code> if the student could be rewarded according to his attendance record, and <code>false</code> otherwise.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> s = "PPALLP"
<strong>Output:</strong> true
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> s = "PPALLL"
<strong>Output:</strong> false
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s[i]</code> is either <code>&#39;A&#39;</code>, <code>&#39;L&#39;</code>, or <code>&#39;P&#39;</code>.</li>
</ul>
