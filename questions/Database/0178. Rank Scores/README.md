### [Rank Scores](https://leetcode.com/problems/rank-scores)

<p>Write a SQL query to rank scores. If there is a tie between two scores, both should have the same ranking. Note that after a tie, the next ranking number should be the next consecutive integer value. In other words, there should be no &quot;holes&quot; between ranks.</p>

<pre>
+----+-------+
| Id | Score |
+----+-------+
| 1  | 3.50  |
| 2  | 3.65  |
| 3  | 4.00  |
| 4  | 3.85  |
| 5  | 4.00  |
| 6  | 3.65  |
+----+-------+
</pre>

<p>For example, given the above <code>Scores</code> table, your query should generate the following report (order by highest score):</p>

<pre>
+-------+------+
| Score | Rank |
+-------+------+
| 4.00  | 1    |
| 4.00  | 1    |
| 3.85  | 2    |
|&nbsp;3.65  | 3    |
| 3.65  | 3    |
| 3.50  | 4    |
+-------+------+
</pre>
