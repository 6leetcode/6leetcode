### [向公司CEO汇报工作的所有人](https://leetcode-cn.com/problems/all-people-report-to-the-given-manager)

<p>员工表：<code>Employees</code></p>

<pre>+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| employee_id   | int     |
| employee_name | varchar |
| manager_id    | int     |
+---------------+---------+
employee_id 是这个表的主键。
这个表中每一行中，employee_id 表示职工的 ID，employee_name 表示职工的名字，manager_id 表示该职工汇报工作的直线经理。
这个公司 CEO 是 employee_id = 1 的人。
</pre>

<p>&nbsp;</p>

<p>用 SQL 查询出所有直接或间接向公司 CEO 汇报工作的职工的 employee_id 。</p>

<p>由于公司规模较小，经理之间的间接关系不超过 3 个经理。</p>

<p>可以以任何顺序返回的结果，不需要去重。</p>

<p>查询结果示例如下：</p>

<pre><code>Employees </code>table:
+-------------+---------------+------------+
| employee_id | employee_name | manager_id |
+-------------+---------------+------------+
| 1           | Boss          | 1          |
| 3           | Alice         | 3          |
| 2           | Bob           | 1          |
| 4           | Daniel        | 2          |
| 7           | Luis          | 4          |
| 8           | Jhon          | 3          |
| 9           | Angela        | 8          |
| 77          | Robert        | 1          |
+-------------+---------------+------------+

<code>Result </code>table:
+-------------+
| employee_id |
+-------------+
| 2           |
| 77          |
| 4           |
| 7           |
+-------------+

公司 CEO 的 employee_id 是 1.
employee_id 是 2 和 77 的职员直接汇报给公司 CEO。
employee_id 是 4 的职员间接汇报给公司 CEO 4 --&gt; 2 --&gt; 1 。
employee_id 是 7 的职员间接汇报给公司 CEO 7 --&gt; 4 --&gt; 2 --&gt; 1 。
employee_id 是 3, 8 ，9 的职员不会直接或间接的汇报给公司 CEO。 
</pre>
