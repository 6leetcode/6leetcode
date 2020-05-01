### [Customers Who Bought All Products](https://leetcode.com/problems/customers-who-bought-all-products)

<p>Table:&nbsp;<code>Customer</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| customer_id | int     |
| product_key | int     |
+-------------+---------+
product_key is a foreign key to <code>Product</code> table.
</pre>

<p>Table:&nbsp;<code>Product</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| product_key | int     |
+-------------+---------+
product_key is the primary key column for this table.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query for a report that provides the customer ids from the&nbsp;<code>Customer</code>&nbsp;table&nbsp;that bought all the products in the <code>Product</code>&nbsp;table.</p>

<p>For example:</p>

<pre>
Customer table:
+-------------+-------------+
| customer_id | product_key |
+-------------+-------------+
| 1           | 5           |
| 2           | 6           |
| 3           | 5           |
| 3           | 6           |
| 1           | 6           |
+-------------+-------------+

Product table:
+-------------+
| product_key |
+-------------+
| 5           |
| 6           |
+-------------+

Result table:
+-------------+
| customer_id |
+-------------+
| 1           |
| 3           |
+-------------+
The customers who bought all the products (5 and 6) are customers with id 1 and 3.
</pre>
