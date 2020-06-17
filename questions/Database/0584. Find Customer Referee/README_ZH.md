### [寻找用户推荐人](https://leetcode-cn.com/problems/find-customer-referee)

<p>给定表&nbsp;<code>customer</code>&nbsp;，里面保存了所有客户信息和他们的推荐人。</p>

<pre>+------+------+-----------+
| id   | name | referee_id|
+------+------+-----------+
|    1 | Will |      NULL |
|    2 | Jane |      NULL |
|    3 | Alex |         2 |
|    4 | Bill |      NULL |
|    5 | Zack |         1 |
|    6 | Mark |         2 |
+------+------+-----------+
</pre>

<p>写一个查询语句，返回一个编号列表，列表中编号的推荐人的编号都&nbsp;<strong>不是 </strong>2。</p>

<p>对于上面的示例数据，结果为：</p>

<pre>+------+
| name |
+------+
| Will |
| Jane |
| Bill |
| Zack |
+------+
</pre>
