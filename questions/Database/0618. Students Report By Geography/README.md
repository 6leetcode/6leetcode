### [Students Report By Geography](https://leetcode.com/problems/students-report-by-geography)

A U.S graduate school has students from Asia, Europe and America. The students&#39; location information are stored in table <code>student</code> as below.
<p>&nbsp;</p>

<pre>
| name   | continent |
|--------|-----------|
| Jack   | America   |
| Pascal | Europe    |
| Xi     | Asia      |
| Jane   | America   |
</pre>

<p>&nbsp;</p>
<a href="https://en.wikipedia.org/wiki/Pivot_table"> Pivot</a> the continent column in this table so that each name is sorted alphabetically and displayed underneath its corresponding continent. The output headers should be America, Asia and Europe respectively. It is guaranteed that the student number from America is no less than either Asia or Europe.

<p>&nbsp;</p>
For the sample input, the output is:

<p>&nbsp;</p>

<pre>
| America | Asia | Europe |
|---------|------|--------|
| Jack    | Xi   | Pascal |
| Jane    |      |        |
</pre>

<p>&nbsp;</p>
<b>Follow-up:</b> If it is unknown which continent has the most students, can you write a query to generate the student report?

<p>&nbsp;</p>
