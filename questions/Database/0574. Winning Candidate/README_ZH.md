### [当选者](https://leetcode-cn.com/problems/winning-candidate)

<p>表: <code>Candidate</code></p>

<pre>+-----+---------+
| id  | Name    |
+-----+---------+
| 1   | A       |
| 2   | B       |
| 3   | C       |
| 4   | D       |
| 5   | E       |
+-----+---------+  
</pre>

<p>表: <code>Vote</code></p>

<pre>+-----+--------------+
| id  | CandidateId  |
+-----+--------------+
| 1   |     2        |
| 2   |     4        |
| 3   |     3        |
| 4   |     2        |
| 5   |     5        |
+-----+--------------+
id 是自动递增的主键，
CandidateId 是 Candidate 表中的 id.
</pre>

<p>请编写 sql 语句来找到当选者的名字，上面的例子将返回当选者 <code>B</code>.</p>

<pre>+------+
| Name |
+------+
| B    |
+------+
</pre>

<p><strong>注意:</strong></p>

<ol>
	<li>你可以假设<strong>没有平局</strong>，换言之，<strong>最多</strong>只有一位当选者。</li>
</ol>

<p>&nbsp;</p>
