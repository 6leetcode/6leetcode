### [Not Boring Movies](https://leetcode.com/problems/not-boring-movies)

<p>Table: <code>Cinema</code></p>

<pre>
+----------------+----------+
| Column Name    | Type     |
+----------------+----------+
| id             | int      |
| movie          | varchar  |
| description    | varchar  |
| rating         | float    |
+----------------+----------+
id is the primary key for this table.
Each row contains information about the name of a movie, its genre, and its rating.
rating is a 2 decimal places float in the range [0, 10]
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to report the movies with an odd-numbered ID and a description that is not <code>&quot;boring&quot;</code>.</p>

<p>Return the result table <strong>in descending order by </strong><code>rating</code>.</p>

<p>The query result format is in the following example:</p>

<p>&nbsp;</p>

<pre>
Cinema table:
+----+------------+-------------+--------+
| id | movie      | description | rating |
+----+------------+-------------+--------+
| 1  | War        | great 3D    | 8.9    |
| 2  | Science    | fiction     | 8.5    |
| 3  | irish      | boring      | 6.2    |
| 4  | Ice song   | Fantacy     | 8.6    |
| 5  | House card | Interesting | 9.1    |
+----+------------+-------------+--------+

Result table:
+----+------------+-------------+--------+
| id | movie      | description | rating |
+----+------------+-------------+--------+
| 5  | House card | Interesting | 9.1    |
| 1  | War        | great 3D    | 8.9    |
+----+------------+-------------+--------+

We have three movies with odd-numbered ID: 1, 3, and 5. The movie with ID = 3 is boring so we don&#39;t include it in the answer.</pre>
