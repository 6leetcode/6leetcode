### [员工奖金](https://leetcode-cn.com/problems/employee-bonus)

<p>选出所有 bonus &lt; 1000 的员工的 name 及其 bonus。</p>

<p><code>Employee</code> 表单</p>

<pre>+-------+--------+-----------+--------+
| empId |  name  | supervisor| salary |
+-------+--------+-----------+--------+
|   1   | John   |  3        | 1000   |
|   2   | Dan    |  3        | 2000   |
|   3   | Brad   |  null     | 4000   |
|   4   | Thomas |  3        | 4000   |
+-------+--------+-----------+--------+
empId 是这张表单的主关键字
</pre>

<p><code>Bonus</code> 表单</p>

<pre>+-------+-------+
| empId | bonus |
+-------+-------+
| 2     | 500   |
| 4     | 2000  |
+-------+-------+
empId 是这张表单的主关键字
</pre>

<p>输出示例：</p>

<pre>+-------+-------+
| name  | bonus |
+-------+-------+
| John  | null  |
| Dan   | 500   |
| Brad  | null  |
+-------+-------+
</pre>
