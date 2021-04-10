### [指定日期的产品价格](https://leetcode-cn.com/problems/product-price-at-a-given-date)

<p>产品数据表: <code>Products</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| product_id    | int     |
| new_price     | int     |
| change_date   | date    |
+---------------+---------+
这张表的主键是 (product_id, change_date)。
这张表的每一行分别记录了 某产品 在某个日期 更改后 的新价格。</pre>

<p>&nbsp;</p>

<p>写一段 SQL来查找在&nbsp;<strong>2019-08-16 </strong>时全部产品的价格，假设所有产品在修改前的价格都是&nbsp;<strong>10。</strong></p>

<p>查询结果格式如下例所示：</p>

<pre>
<code>Products</code> table:
+------------+-----------+-------------+
| product_id | new_price | change_date |
+------------+-----------+-------------+
| 1          | 20        | 2019-08-14  |
| 2          | 50        | 2019-08-14  |
| 1          | 30        | 2019-08-15  |
| 1          | 35        | 2019-08-16  |
| 2          | 65        | 2019-08-17  |
| 3          | 20        | 2019-08-18  |
+------------+-----------+-------------+

Result table:
+------------+-------+
| product_id | price |
+------------+-------+
| 2          | 50    |
| 1          | 35    |
| 3          | 10    |
+------------+-------+
</pre>
