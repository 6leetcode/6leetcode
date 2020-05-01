### [找到连续区间的开始和结束数字](https://leetcode-cn.com/problems/find-the-start-and-end-number-of-continuous-ranges)

<p>表：<code>Logs</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| log_id        | int     |
+---------------+---------+
id 是上表的主键。
上表的每一行包含日志表中的一个 ID。
</pre>

<p>&nbsp;</p>

<p>后来一些 ID 从&nbsp;<code>Logs</code>&nbsp;表中删除。编写一个 SQL 查询得到&nbsp;<code>Logs</code>&nbsp;表中的连续区间的开始数字和结束数字。</p>

<p>将查询表按照 <code>start_id</code>&nbsp;排序。</p>

<p>查询结果格式如下面的例子：</p>

<pre>
Logs 表：
+------------+
| log_id     |
+------------+
| 1          |
| 2          |
| 3          |
| 7          |
| 8          |
| 10         |
+------------+

结果表：
+------------+--------------+
| start_id   | end_id       |
+------------+--------------+
| 1          | 3            |
| 7          | 8            |
| 10         | 10           |
+------------+--------------+
结果表应包含 Logs 表中的所有区间。
从 1 到 3 在表中。
从 4 到 6 不在表中。
从 7 到 8 在表中。
9 不在表中。
10 在表中。
</pre>
