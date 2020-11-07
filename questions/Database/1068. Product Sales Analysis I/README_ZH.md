### [产品销售分析 I](https://leetcode-cn.com/problems/product-sales-analysis-i)

<p>销售表&nbsp;<code>Sales</code>：</p>

<pre>+-------------+-------+
| Column Name | Type  |
+-------------+-------+
| sale_id     | int   |
| product_id  | int   |
| year        | int   |
| quantity    | int   |
| price       | int   |
+-------------+-------+
(sale_id, year) 是销售表 Sales 的主键.
product_id 是关联到产品表 Product 的外键.
注意: price 表示每单位价格
</pre>

<p>产品表&nbsp;<code>Product</code>：</p>

<pre>+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| product_id   | int     |
| product_name | varchar |
+--------------+---------+
product_id&nbsp;是表的主键.
</pre>

<p>&nbsp;</p>

<p>写一条SQL&nbsp;查询语句获取 <code>Sales</code>&nbsp;表中所有产品对应的 <strong>产品名称 product_name</strong> 以及该产品的所有 <strong>售卖年份 year</strong>&nbsp;和 <strong>价格 price</strong> 。</p>

<p>&nbsp;</p>

<p><strong>示例</strong>：</p>

<pre><code>Sales</code> 表：
+---------+------------+------+----------+-------+
| sale_id | product_id | year | quantity | price |
+---------+------------+------+----------+-------+ 
| 1       | 100        | 2008 | 10       | 5000  |
| 2       | 100        | 2009 | 12       | 5000  |
| 7       | 200        | 2011 | 15       | 9000  |
+---------+------------+------+----------+-------+

Product 表：
+------------+--------------+
| product_id | product_name |
+------------+--------------+
| 100        | Nokia        |
| 200        | Apple        |
| 300        | Samsung      |
+------------+--------------+

Result 表：
+--------------+-------+-------+
| product_name | year  | price |
+--------------+-------+-------+
| Nokia        | 2008  | 5000  |
| Nokia        | 2009  | 5000  |
| Apple        | 2011  | 9000  |
+--------------+-------+-------+
</pre>
