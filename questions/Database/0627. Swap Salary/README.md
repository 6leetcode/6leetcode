### [Swap Salary](https://leetcode.com/problems/swap-salary)

<p>Table: <code>Salary</code></p>

<pre>
+-------------+----------+
| Column Name | Type     |
+-------------+----------+
| id          | int      |
| name        | varchar  |
| sex         | ENUM     |
| salary      | int      |
+-------------+----------+
id is the primary key for this table.
The sex column is ENUM value of type (&#39;m&#39;, &#39;f&#39;).
The table contains information about an employee.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to swap all <code>&#39;f&#39;</code> and <code>&#39;m&#39;</code> values (i.e., change all <code>&#39;f&#39;</code> values to <code>&#39;m&#39;</code> and vice versa) with a <strong>single update statement</strong> and no intermediate temp table(s).</p>

<p>Note that you must write a single update statement, <strong>DO NOT</strong> write any select statement for this problem.</p>

<p>The query result format is in the following example:</p>

<p>&nbsp;</p>

<pre>
Salary table:
+----+------+-----+--------+
| id | name | sex | salary |
+----+------+-----+--------+
| 1  | A    | m   | 2500   |
| 2  | B    | f   | 1500   |
| 3  | C    | m   | 5500   |
| 4  | D    | f   | 500    |
+----+------+-----+--------+

Result table:
+----+------+-----+--------+
| id | name | sex | salary |
+----+------+-----+--------+
| 1  | A    | f   | 2500   |
| 2  | B    | m   | 1500   |
| 3  | C    | f   | 5500   |
| 4  | D    | m   | 500    |
+----+------+-----+--------+
(1, A) and (2, C) were changed from &#39;m&#39; to &#39;f&#39;.
(2, B) and (4, D) were changed from &#39;f&#39; to &#39;m&#39;.
</pre>
