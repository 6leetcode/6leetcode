### [Student Attendance Record II](https://leetcode.com/problems/student-attendance-record-ii)

<p>Given an integer <code>n</code>, return <em>the number of all possible attendance records with length</em> <code>n</code>, which will be regarded as rewardable. The answer may be very large, return it modulo <code>10<sup>9</sup> + 7</code>.</p>

<p>A student attendance record is a string that only contains the following three characters:</p>

<ul>
	<li><code>&#39;A&#39;</code>: Absent.</li>
	<li><code>&#39;L&#39;</code>: Late.</li>
	<li><code>&#39;P&#39;</code>: Present.</li>
</ul>

<p>A record is regarded as rewardable if it does not contain more than one <code>&#39;A&#39;</code> (absent) or more than two consecutive <code>&#39;L&#39;</code> (late).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> 8
<strong>Explanation:</strong> There are 8 records with length 2 will be regarded as rewardable:
&quot;PP&quot; , &quot;AP&quot;, &quot;PA&quot;, &quot;LP&quot;, &quot;PL&quot;, &quot;AL&quot;, &quot;LA&quot;, &quot;LL&quot;
Only &quot;AA&quot; won&#39;t be regarded as rewardable owing to more than one absent time.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 3
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 10101
<strong>Output:</strong> 183236316
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
</ul>
