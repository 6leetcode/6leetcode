### [Find Customer Referee](https://leetcode.com/problems/find-customer-referee)

<p>Given a table <code>customer</code> holding customers information and the referee.</p>

<pre>
+------+------+-----------+
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

<p>Write a query to return the list of customers <b>NOT</b> referred by the person with id &#39;2&#39;.</p>

<p>For the sample data above, the result is:</p>

<pre>
+------+
| name |
+------+
| Will |
| Jane |
| Bill |
| Zack |
+------+
</pre>
