### [Rank Scores](https://leetcode.com/problems/rank-scores)

<p>Table: <code>Scores</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| Id          | int     |
| Score       | decimal |
+-------------+---------+
Id is the primary key for this table.
Each row of this table contains the score of a game. Score is a floating point value with two decimal places.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to rank the scores. The ranking should be calculated according to the following rules:</p>

<ul>
	<li>The scores should be ranked from the highest to the lowest.</li>
	<li>If there is a tie between two scores, both should have the same ranking.</li>
	<li>After a tie, the next ranking number should be the next consecutive integer value. In other words, there should be no holes between ranks.</li>
</ul>

<p>Return the result table ordered by <code>score</code> in descending order.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Scores table:
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
<strong>Output:</strong> 
+-------+------+
| Score | Rank |
+-------+------+
| 4.00  | 1    |
| 4.00  | 1    |
| 3.85  | 2    |
| 3.65  | 3    |
| 3.65  | 3    |
| 3.50  | 4    |
+-------+------+
</pre>
