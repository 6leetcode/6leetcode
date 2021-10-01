### [Customers Who Never Order](https://leetcode.com/problems/customers-who-never-order)

<p>Table: <code>Customers</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| Id          | int     |
| Name        | varchar |
+-------------+---------+
Id is the primary key column for this table.
Each row of this table indicates the ID and name of a customer.
</pre>

<p>&nbsp;</p>

<p>Table: <code>Orders</code></p>

<pre>
+-------------+------+
| Column Name | Type |
+-------------+------+
| Id          | int  |
| CustomerId  | int  |
+-------------+------+
Id is the primary key column for this table.
CustomerId is a foreign key of the ID from the Customers table.
Each row of this table indicates the ID of an order and the ID of the customer who ordered it.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to report all customers who never order anything.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Customers table:
+----+-------+
| Id | Name  |
+----+-------+
| 1  | Joe   |
| 2  | Henry |
| 3  | Sam   |
| 4  | Max   |
+----+-------+
Orders table:
+----+------------+
| Id | CustomerId |
+----+------------+
| 1  | 3          |
| 2  | 1          |
+----+------------+
<strong>Output:</strong> 
+-----------+
| Customers |
+-----------+
| Henry     |
| Max       |
+-----------+
</pre>
