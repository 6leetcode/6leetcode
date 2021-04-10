### [Baseball Game](https://leetcode.com/problems/baseball-game)

<p>You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds&#39; scores.</p>

<p>At the beginning of the game, you start with an empty record. You are given a list of strings <code>ops</code>, where <code>ops[i]</code> is the <code>i<sup>th</sup></code> operation you must apply to the record and is one of the following:</p>

<ol>
	<li>An integer <code>x</code> - Record a new score of <code>x</code>.</li>
	<li><code>&quot;+&quot;</code> - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.</li>
	<li><code>&quot;D&quot;</code> - Record a new score that is double the previous score. It is guaranteed there will always be a previous score.</li>
	<li><code>&quot;C&quot;</code> - Invalidate the previous score, removing it from the record. It is guaranteed there will always be a previous score.</li>
</ol>

<p>Return <em>the sum of all the scores on the record</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> ops = [&quot;5&quot;,&quot;2&quot;,&quot;C&quot;,&quot;D&quot;,&quot;+&quot;]
<strong>Output:</strong> 30
<strong>Explanation:</strong>
&quot;5&quot; - Add 5 to the record, record is now [5].
&quot;2&quot; - Add 2 to the record, record is now [5, 2].
&quot;C&quot; - Invalidate and remove the previous score, record is now [5].
&quot;D&quot; - Add 2 * 5 = 10 to the record, record is now [5, 10].
&quot;+&quot; - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> ops = [&quot;5&quot;,&quot;-2&quot;,&quot;4&quot;,&quot;C&quot;,&quot;D&quot;,&quot;9&quot;,&quot;+&quot;,&quot;+&quot;]
<strong>Output:</strong> 27
<strong>Explanation:</strong>
&quot;5&quot; - Add 5 to the record, record is now [5].
&quot;-2&quot; - Add -2 to the record, record is now [5, -2].
&quot;4&quot; - Add 4 to the record, record is now [5, -2, 4].
&quot;C&quot; - Invalidate and remove the previous score, record is now [5, -2].
&quot;D&quot; - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
&quot;9&quot; - Add 9 to the record, record is now [5, -2, -4, 9].
&quot;+&quot; - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
&quot;+&quot; - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> ops = [&quot;1&quot;]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= ops.length &lt;= 1000</code></li>
	<li><code>ops[i]</code> is <code>&quot;C&quot;</code>, <code>&quot;D&quot;</code>, <code>&quot;+&quot;</code>, or a string representing an integer in the range <code>[-3 * 10<sup>4</sup>, 3 * 10<sup>4</sup>]</code>.</li>
	<li>For operation <code>&quot;+&quot;</code>, there will always be at least two previous scores on the record.</li>
	<li>For operations <code>&quot;C&quot;</code> and <code>&quot;D&quot;</code>, there will always be at least one previous score on the record.</li>
</ul>
