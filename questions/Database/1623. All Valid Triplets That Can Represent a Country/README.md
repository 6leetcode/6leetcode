### [All Valid Triplets That Can Represent a Country](https://leetcode.com/problems/all-valid-triplets-that-can-represent-a-country)

<p>Table: <code>SchoolA</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| student_id    | int     |
| student_name  | varchar |
+---------------+---------+
student_id is the primary key for this table.
Each row of this table contains the name and the id of a student in school A.
All student_name are distinct.
</pre>

<p>&nbsp;</p>

<p>Table: <code>SchoolB</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| student_id    | int     |
| student_name  | varchar |
+---------------+---------+
student_id is the primary key for this table.
Each row of this table contains the name and the id of a student in school B.
All student_name are distinct.
</pre>

<p>&nbsp;</p>

<p>Table: <code>SchoolC</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| student_id    | int     |
| student_name  | varchar |
+---------------+---------+
student_id is the primary key for this table.
Each row of this table contains the name and the id of a student in school C.
All student_name are distinct.
</pre>

<p>&nbsp;</p>

<p>There is a country with three schools, where each student is enrolled in <strong>exactly one</strong> school. The country is joining a competition and wants to select one student from each school to represent the country such that:</p>

<ul>
	<li><code>member_A</code> is selected from <code>SchoolA</code>,</li>
	<li><code>member_B</code> is selected from <code>SchoolB</code>,</li>
	<li><code>member_C</code> is selected from <code>SchoolC</code>, and</li>
	<li>The selected students&#39; names and IDs are pairwise distinct (i.e. no two students share the same name, and no two students share the same ID).</li>
</ul>

<p>Write an SQL query to find all the possible triplets representing the country under the given constraints.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>

<pre>
<code>SchoolA</code> table:
+------------+--------------+
| student_id | student_name |
+------------+--------------+
| 1          | Alice        |
| 2          | Bob          |
+------------+--------------+

<code>SchoolB</code> table:
+------------+--------------+
| student_id | student_name |
+------------+--------------+
| 3          | Tom          |
+------------+--------------+

<code>SchoolC</code> table:
+------------+--------------+
| student_id | student_name |
+------------+--------------+
| 3          | Tom          |
| 2          | Jerry        |
| 10         | Alice        |
+------------+--------------+

Result table:
+----------+----------+----------+
| member_A | member_B | member_C |
+----------+----------+----------+
| Alice    | Tom      | Jerry    |
| Bob      | Tom      | Alice    |
+----------+----------+----------+
Let us see all the possible triplets.
- (Alice, Tom, Tom) --&gt; Rejected because member_B and member_C have the same name and the same ID.
- (Alice, Tom, Jerry) --&gt; Valid triplet.
- (Alice, Tom, Alice) --&gt; Rejected because member_A and member_C have the same name.
- (Bob, Tom, Tom) --&gt; Rejected because member_B and member_C have the same name and the same ID.
- (Bob, Tom, Jerry) --&gt; Rejected because member_A and member_C have the same ID.
- (Bob, Tom, Alice) --&gt; Valid triplet.
</pre>
