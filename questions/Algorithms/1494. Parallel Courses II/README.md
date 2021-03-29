### [Parallel Courses II](https://leetcode.com/problems/parallel-courses-ii)

<p>Given the integer <code>n</code> representing the number of courses at some university labeled from <code>1</code> to <code>n</code>, and the array <code>dependencies</code> where <code>dependencies[i] = [x<sub>i</sub>, y<sub>i</sub>]</code> &nbsp;represents a prerequisite relationship, that is, the course <code>x<sub>i</sub></code>&nbsp;must be taken before the course <code>y<sub>i</sub></code>. &nbsp;Also, you are given the&nbsp;integer <code>k</code>.</p>

<p>In one semester you can take <strong>at most</strong> <code>k</code> courses as long as you have taken all the prerequisites for the courses you are taking.</p>

<p><em>Return the minimum number of semesters to take all courses</em>.&nbsp;It is guaranteed that you can take all courses in some way.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/05/22/leetcode_parallel_courses_1.png" style="width: 300px; height: 164px;" /></strong></p>

<pre>
<strong>Input:</strong> n = 4, dependencies = [[2,1],[3,1],[1,4]], k = 2
<strong>Output:</strong> 3 
<strong>Explanation:</strong> The figure above represents the given graph. In this case we can take courses 2 and 3 in the first semester, then take course 1 in the second semester and finally take course 4 in the third semester.
</pre>

<p><strong>Example 2:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/05/22/leetcode_parallel_courses_2.png" style="width: 300px; height: 234px;" /></strong></p>

<pre>
<strong>Input:</strong> n = 5, dependencies = [[2,1],[3,1],[4,1],[1,5]], k = 2
<strong>Output:</strong> 4 
<strong>Explanation:</strong> The figure above represents the given graph. In this case one optimal way to take all courses is: take courses 2 and 3 in the first semester and take course 4 in the second semester, then take course 1 in the third semester and finally take course 5 in the fourth semester.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 11, dependencies = [], k = 2
<strong>Output:</strong> 6
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 15</code></li>
	<li><code>1 &lt;= k &lt;= n</code></li>
	<li><code>0 &lt;=&nbsp;dependencies.length &lt;= n * (n-1) / 2</code></li>
	<li><code>dependencies[i].length == 2</code></li>
	<li><code>1 &lt;= x<sub>i</sub>, y<sub>i</sub>&nbsp;&lt;= n</code></li>
	<li><code>x<sub>i</sub> != y<sub>i</sub></code></li>
	<li>All prerequisite relationships are distinct, that is, <code>dependencies[i] != dependencies[j]</code>.</li>
	<li>The given graph is a directed acyclic graph.</li>
</ul>
