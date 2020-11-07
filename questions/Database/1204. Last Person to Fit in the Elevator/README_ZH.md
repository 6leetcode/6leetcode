### [最后一个能进入电梯的人](https://leetcode-cn.com/problems/last-person-to-fit-in-the-elevator)

<p>表: <code>Queue</code></p>

<pre>+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| person_id   | int     |
| person_name | varchar |
| weight      | int     |
| turn        | int     |
+-------------+---------+
person_id 是这个表的主键。
该表展示了所有等待电梯的人的信息。
表中 person_id 和 turn 列将包含从 1 到 n 的所有数字，其中 n 是表中的行数。
</pre>

<p>&nbsp;</p>

<p>电梯最大载重量为 <strong>1000</strong>。</p>

<p>写一条 SQL 查询语句查找最后一个能进入电梯且不超过重量限制的 <code>person_name</code> 。题目确保队列中第一位的人可以进入电梯 。</p>

<p>查询结果如下所示 :</p>

<pre>Queue 表
+-----------+-------------------+--------+------+
| person_id | person_name       | weight | turn |
+-----------+-------------------+--------+------+
| 5         | George Washington | 250    | 1    |
| 3         | John Adams        | 350    | 2    |
| 6         | Thomas Jefferson  | 400    | 3    |
| 2         | Will Johnliams    | 200    | 4    |
| 4         | Thomas Jefferson  | 175    | 5    |
| 1         | James Elephant    | 500    | 6    |
+-----------+-------------------+--------+------+

Result 表
+-------------------+
| person_name       |
+-------------------+
| Thomas Jefferson  |
+-------------------+

为了简化，Queue 表按 turn 列由小到大排序。
上例中 George Washington(id 5), John Adams(id 3) 和 Thomas Jefferson(id 6) 将可以进入电梯,因为他们的体重和为 250 + 350 + 400 = 1000。
Thomas Jefferson(id 6) 是最后一个体重合适并进入电梯的人。
</pre>
