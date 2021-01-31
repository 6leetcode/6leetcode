### [Find the Missing IDs](https://leetcode.com/problems/find-the-missing-ids)

<p>Table: <code>Customers</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| customer_id   | int     |
| customer_name | varchar |
+---------------+---------+
customer_id is the primary key for this table.
Each row of this table contains the name and the id customer.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to find the missing customer IDs. The missing IDs are ones that are not in the <code>Customers</code> table but are in the range between <code>1</code> and the <strong>maximum</strong> <code>customer_id</code> present in the table.</p>

<p><strong>Notice</strong> that the maximum <code>customer_id</code> will not exceed <code>100</code>.</p>

<p>Return the result table ordered by <code>ids</code> in <strong>ascending order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>

<pre>
<code>Customers</code> table:
+-------------+---------------+
| customer_id | customer_name |
+-------------+---------------+
| 1           | Alice         |
| 4           | Bob           |
| 5           | Charlie       |
+-------------+---------------+

Result table:
+-----+
| <code>ids </code>|
+-----+
| 2   |
| 3   |
+-----+
The maximum customer_id present in the table is 5, so in the range [1,5], IDs 2 and 3 are missing from the table.</pre>
