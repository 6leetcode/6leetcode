### [消费者下单频率](https://leetcode-cn.com/problems/customer-order-frequency)

<p>表: <code>Customers</code></p>

<pre>+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| customer_id   | int     |
| name          | varchar |
| country       | varchar |
+---------------+---------+
customer_id 是该表主键.
该表包含公司消费者的信息.
</pre>

<p>&nbsp;</p>

<p>表: <code>Product</code></p>

<pre>+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| product_id    | int     |
| description   | varchar |
| price         | int     |
+---------------+---------+
product_id 是该表主键.
该表包含公司产品的信息.
price 是本产品的花销.</pre>

<p>&nbsp;</p>

<p>表: <code>Orders</code></p>

<pre>+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| order_id      | int     |
| customer_id   | int     |
| product_id    | int     |
| order_date    | date    |
| quantity      | int     |
+---------------+---------+
order_id 是该表主键.
该表包含消费者下单的信息.
customer_id 是买了数量为&quot;quantity&quot;, id为&quot;product_id&quot;产品的消费者的 id.
Order_date 是订单发货的日期, 格式为(&#39;YYYY-MM-DD&#39;).</pre>

<p>&nbsp;</p>

<p>写一个 SQL 语句,&nbsp; 报告消费者的 id 和名字,&nbsp;其中消费者在 2020 年 6 月和 7 月,&nbsp;每月至少花费了$100.</p>

<p>结果表无顺序要求.</p>

<p>查询结果格式如下例所示.</p>

<p>&nbsp;</p>

<pre><code>Customers</code>
+--------------+-----------+-------------+
| customer_id  | name &nbsp;    | country &nbsp; &nbsp; |
+--------------+-----------+-------------+
| 1    &nbsp;       | Winston  &nbsp;| USA        &nbsp;|
| 2          &nbsp; | Jonathan  | Peru       &nbsp;|
| 3          &nbsp; | Moustafa &nbsp;| Egypt      &nbsp;|
+--------------+-----------+-------------+

<code>Product</code>
+--------------+-------------+-------------+
| product_id   | description | price   &nbsp; &nbsp; |
+--------------+-------------+-------------+
| 10   &nbsp;       | LC Phone &nbsp;  | 300        &nbsp;|
| 20         &nbsp; | LC T-Shirt  | 10         &nbsp;|
| 30         &nbsp; | LC Book    &nbsp;| 45         &nbsp;|
| 40           | LC Keychain&nbsp;| 2         &nbsp; |
+--------------+-------------+-------------+

<code>Orders</code>
+--------------+-------------+-------------+-------------+-----------+
| order_id     | customer_id | product_id  | order_date  | quantity  |
+--------------+-------------+-------------+-------------+-----------+
| 1    &nbsp;       | 1        &nbsp;  | 10         &nbsp;| 2020-06-10  | 1         |
| 2          &nbsp; | 1           | 20         &nbsp;| 2020-07-01  | 1         |
| 3          &nbsp; | 1           | 30         &nbsp;| 2020-07-08  | 2         |
| 4    &nbsp;       | 2        &nbsp;  | 10         &nbsp;| 2020-06-15  | 2         |
| 5          &nbsp; | 2           | 40         &nbsp;| 2020-07-01  | 10        |
| 6          &nbsp; | 3           | 20         &nbsp;| 2020-06-24  | 2         |
| 7    &nbsp;       | 3        &nbsp;  | 30         &nbsp;| 2020-06-25  | 2         |
| 9          &nbsp; | 3           | 30         &nbsp;| 2020-05-08  | 3         |
+--------------+-------------+-------------+-------------+-----------+

Result 表:
+--------------+------------+
| customer_id  | name       |  
+--------------+------------+
| 1            | Winston    |
+--------------+------------+ 
Winston 在2020年6月花费了$300(300 * 1), 在7月花费了$100(10 * 1 + 45 * 2).
Jonathan 在2020年6月花费了$600(300 * 2), 在7月花费了$20(2 * 10).
Moustafa 在2020年6月花费了$110 (10 * 2 + 45 * 2), 在7月花费了$0.
</pre>
