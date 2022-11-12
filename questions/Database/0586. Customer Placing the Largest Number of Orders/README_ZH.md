### [订单最多的客户](https://leetcode-cn.com/problems/customer-placing-the-largest-number-of-orders)

<p>表:&nbsp;<code>Orders</code></p>

<pre>
+-----------------+----------+
| Column Name     | Type     |
+-----------------+----------+
| order_number    | int      |
| customer_number | int      |
+-----------------+----------+
Order_number是该表的主键。
此表包含关于订单ID和客户ID的信息。
</pre>

<p>&nbsp;</p>

<p>编写一个SQL查询，为下了 <strong>最多订单</strong> 的客户查找 <code>customer_number</code> 。</p>

<p>测试用例生成后， <strong>恰好有一个客户</strong> 比任何其他客户下了更多的订单。</p>

<p>查询结果格式如下所示。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> 
Orders 表:
+--------------+-----------------+
| order_number | customer_number |
+--------------+-----------------+
| 1            | 1               |
| 2            | 2               |
| 3            | 3               |
| 4            | 3               |
+--------------+-----------------+
<strong>输出:</strong> 
+-----------------+
| customer_number |
+-----------------+
| 3               |
+-----------------+
<strong>解释:</strong> 
customer_number 为 '3' 的顾客有两个订单，比顾客 '1' 或者 '2' 都要多，因为他们只有一个订单。
所以结果是该顾客的 customer_number ，也就是 3 。
</pre>

<p>&nbsp;</p>

<p><strong>进阶：</strong> 如果有多位顾客订单数并列最多，你能找到他们所有的 <code>customer_number</code> 吗？</p>
