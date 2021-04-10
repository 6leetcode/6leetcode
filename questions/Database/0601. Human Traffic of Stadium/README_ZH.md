### [体育馆的人流量](https://leetcode-cn.com/problems/human-traffic-of-stadium)

表：<code>Stadium</code>
<div class="original__bRMd">
<div>
<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| id            | int     |
| visit_date    | date    |
| people        | int     |
+---------------+---------+
visit_date 是表的主键
每日人流量信息被记录在这三列信息中：<strong>序号</strong> (id)、<strong>日期</strong> (visit_date)、 <strong>人流量</strong> (people)
每天只有一行记录，日期随着 id 的增加而增加
</pre>

<p> </p>

<p class="MachineTrans-lang-zh-CN">编写一个 SQL 查询以找出每行的人数大于或等于 <code>100</code> 且 <code>id</code> 连续的三行或更多行记录。</p>

<p class="MachineTrans-lang-zh-CN">返回按 <code>visit_date</code> 升序排列的结果表。</p>

<p class="MachineTrans-lang-zh-CN">查询结果格式如下所示。</p>

<pre>
<code>Stadium</code> table:
+------+------------+-----------+
| id   | visit_date | people    |
+------+------------+-----------+
| 1    | 2017-01-01 | 10        |
| 2    | 2017-01-02 | 109       |
| 3    | 2017-01-03 | 150       |
| 4    | 2017-01-04 | 99        |
| 5    | 2017-01-05 | 145       |
| 6    | 2017-01-06 | 1455      |
| 7    | 2017-01-07 | 199       |
| 8    | 2017-01-09 | 188       |
+------+------------+-----------+

Result table:
+------+------------+-----------+
| id   | visit_date | people    |
+------+------------+-----------+
| 5    | 2017-01-05 | 145       |
| 6    | 2017-01-06 | 1455      |
| 7    | 2017-01-07 | 199       |
| 8    | 2017-01-09 | 188       |
+------+------------+-----------+
<strong>id</strong> 为 5、6、7、8 的四行 id 连续，并且每行都有 >= 100 的人数记录。
请注意，即使第 7 行和第 8 行的 visit_date 不是连续的，输出也应当包含第 8 行，因为我们只需要考虑 id 连续的记录。
不输出 id 为 2 和 3 的行，因为至少需要三条 id 连续的记录。
</pre>
</div>
</div>
