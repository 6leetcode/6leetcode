### [Convert Date Format](https://leetcode.com/problems/convert-date-format)

<p>Table: <code>Days</code></p>

<pre>
+-------------+------+
| Column Name | Type |
+-------------+------+
| day         | date |
+-------------+------+
day is the primary key for this table.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to convert each date in <code>Days</code> into a string formatted as <code>&quot;day_name, month_name day, year&quot;</code>.</p>

<p>Return the result table <strong>in any order</strong>.</p>

<p>The query result format is in the following example:</p>

<p>&nbsp;</p>

<pre>
Days table:
+------------+
| day        |
+------------+
| 2022-04-12 |
| 2021-08-09 |
| 2020-06-26 |
+------------+

Result table:
+-------------------------+
| day                     |
+-------------------------+
| Tuesday, April 12, 2022 |
| Monday, August 9, 2021  |
| Friday, June 26, 2020   |
+-------------------------+
Please note that the output is case-sensitive.
</pre>
