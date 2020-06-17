### [Number of Transactions per Visit](https://leetcode.com/problems/number-of-transactions-per-visit)

<p>Table: <code>Visits</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| user_id       | int     |
| visit_date    | date    |
+---------------+---------+
(user_id, visit_date) is the primary key for this table.
Each row of this table indicates that user_id has visited the bank in visit_date.
</pre>

<p>&nbsp;</p>

<p>Table: <code>Transactions</code></p>

<pre>
+------------------+---------+
| Column Name      | Type    |
+------------------+---------+
| user_id          | int     |
| transaction_date | date    |
| amount           | int     |
+------------------+---------+
There is no primary key for this table, it may contain duplicates.
Each row of this table indicates that user_id has done a transaction of amount in transaction_date.
It is guaranteed that the user has visited the bank in the transaction_date.(i.e The Visits table contains (user_id, transaction_date) in one row)
</pre>

<p>&nbsp;</p>

<p>A bank wants to draw a chart of the number of transactions bank visitors did in one visit to the bank and the corresponding number of visitors who have done this number of transaction in one visit.</p>

<p>Write an SQL query to find how many users visited the bank and didn&#39;t do any transactions, how many visited the bank and did one transaction and so on.</p>

<p>The result table will contain two columns:</p>

<ul>
	<li><code>transactions_count</code> which is the number of transactions done in one visit.</li>
	<li><code>visits_count</code> which is the corresponding&nbsp;number of users who did&nbsp;<code>transactions_count</code> in one visit to the bank.</li>
</ul>

<p><code>transactions_count</code> should take all values from <code>0</code> to <code>max(transactions_count)</code> done by one or more users.</p>

<p>Order the result table by <code>transactions_count</code>.</p>

<p>The query result format is in the following example:</p>

<pre>
<code>Visits</code> table:
+---------+------------+
| user_id | visit_date |
+---------+------------+
| 1       | 2020-01-01 |
| 2       | 2020-01-02 |
| 12      | 2020-01-01 |
| 19      | 2020-01-03 |
| 1       | 2020-01-02 |
| 2       | 2020-01-03 |
| 1       | 2020-01-04 |
| 7       | 2020-01-11 |
| 9       | 2020-01-25 |
| 8       | 2020-01-28 |
+---------+------------+
<code>Transactions</code> table:
+---------+------------------+--------+
| user_id | transaction_date | amount |
+---------+------------------+--------+
| 1       | 2020-01-02       | 120    |
| 2       | 2020-01-03       | 22     |
| 7       | 2020-01-11       | 232    |
| 1       | 2020-01-04       | 7      |
| 9       | 2020-01-25       | 33     |
| 9       | 2020-01-25       | 66     |
| 8       | 2020-01-28       | 1      |
| 9       | 2020-01-25       | 99     |
+---------+------------------+--------+
Result table:
+--------------------+--------------+
| <code>transactions_count</code> | visits_count |
+--------------------+--------------+
| 0                  | 4            |
| 1                  | 5            |
| 2                  | 0            |
| 3                  | 1            |
+--------------------+--------------+
* For transactions_count = 0, The visits (1, &quot;2020-01-01&quot;), (2, &quot;2020-01-02&quot;), (12, &quot;2020-01-01&quot;) and (19, &quot;2020-01-03&quot;) did no transactions so visits_count = 4.
* For transactions_count = 1, The visits (2, &quot;2020-01-03&quot;), (7, &quot;2020-01-11&quot;), (8, &quot;2020-01-28&quot;),&nbsp;(1, &quot;2020-01-02&quot;) and (1, &quot;2020-01-04&quot;) did one transaction&nbsp;so visits_count = 5.
* For transactions_count = 2, No customers visited the bank and did two transactions so visits_count = 0.
* For transactions_count = 3, The visit&nbsp;(9, &quot;2020-01-25&quot;) did three&nbsp;transactions so visits_count = 1.
* For transactions_count &gt;= 4, No customers visited the bank and did more than three transactions so we will stop at&nbsp;transactions_count = 3

The chart drawn for this example is as follows:
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/31/chart.png" style="width: 600px; height: 359px;" />
</pre>
