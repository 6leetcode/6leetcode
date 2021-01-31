### [Fix Product Name Format](https://leetcode.com/problems/fix-product-name-format)

<p>Table:&nbsp;<code>Sales</code></p>

<pre>
+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| sale_id      | int     |
| product_name | varchar |
| sale_date    | date    |
+--------------+---------+
sale_id is the primary key for this table.
Each row of this table contains the product name and the date it was sold.

</pre>

<p>Since table Sales was filled manually in the year 2000,&nbsp;<code data-stringify-type="code">product_name</code>&nbsp;may contain leading and/or trailing white spaces, also they are case-insensitive.</p>

<p>Write an SQL query to report</p>

<ul data-indent="0" data-stringify-type="unordered-list">
	<li><code data-stringify-type="code">product_name</code>&nbsp;in lowercase without leading or trailing white spaces.</li>
	<li><code data-stringify-type="code">sale_date</code>&nbsp;in the format&nbsp;<code data-stringify-type="code">(&#39;YYYY-MM&#39;)</code>&nbsp;</li>
	<li><code data-stringify-type="code">total</code>&nbsp;the number of times the product was sold in this month.</li>
</ul>

<p>Return the result table ordered by&nbsp;<code data-stringify-type="code">product_name</code>&nbsp;in&nbsp;<b data-stringify-type="bold">ascending order</b>, in case of a tie order it&nbsp;by&nbsp;<code data-stringify-type="code">sale_date</code>&nbsp;in&nbsp;<b data-stringify-type="bold">ascending order</b>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>

<pre>
<code>Sales</code>
+------------+------------------+--------------+
| sale_id    | product_name     | sale_date    |
+------------+------------------+--------------+
| 1          |      LCPHONE     | 2000-01-16   |
| 2    &nbsp;     |    LCPhone       | 2000-01-17   |
| 3    &nbsp;     |     LcPhOnE     &nbsp;| 2000-02-18   |
| 4 &nbsp;        |      LCKeyCHAiN  | 2000-02-19   |
| 5 &nbsp;        |   LCKeyChain     | 2000-02-28   |
| 6        &nbsp; | Matryoshka     &nbsp; | 2000-03-31   | 
+------------+------------------+--------------+

Result table:
+--------------+--------------+----------+
| product_name | sale_date    | total    |
+--------------+--------------+----------+
| lcphone   &nbsp;  | 2000-01     &nbsp;| 2       &nbsp;|
| lckeychain   | 2000-02  &nbsp;   | 2       &nbsp;| 
| lcphone      | 2000-02    &nbsp; | 1       &nbsp;| 
| matryoshka   | 2000-03 &nbsp;    | 1       &nbsp;| 
+--------------+--------------+----------+

In January, 2 LcPhones were sold, please note that the product names are not case sensitive and may contain spaces.
In Februery, 2 LCKeychains and 1 LCPhone were sold.
In March, 1 matryoshka was sold.
</pre>
