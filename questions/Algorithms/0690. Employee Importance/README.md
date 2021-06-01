### [Employee Importance](https://leetcode.com/problems/employee-importance)

<p>You have a data structure of employee information, which includes the employee&#39;s unique id, their importance value, and their direct subordinates&#39; id.</p>

<p>You are given an array of employees <code>employees</code> where:</p>

<ul>
	<li><code>employees[i].id</code> is the ID of the <code>i<sup>th</sup></code> employee.</li>
	<li><code>employees[i].importance</code> is the importance value of the <code>i<sup>th</sup></code> employee.</li>
	<li><code>employees[i].subordinates</code> is a list of the IDs of the subordinates of the <code>i<sup>th</sup></code> employee.</li>
</ul>

<p>Given an integer <code>id</code> that represents the ID of an employee, return <em>the total importance value of this employee and all their subordinates</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/31/emp1-tree.jpg" style="width: 400px; height: 258px;" />
<pre>
<strong>Input:</strong> employees = [[1,5,[2,3]],[2,3,[]],[3,3,[]]], id = 1
<strong>Output:</strong> 11
<strong>Explanation:</strong> Employee 1 has importance value 5, and he has two direct subordinates: employee 2 and employee 3.
They both have importance value 3.
So the total importance value of employee 1 is 5 + 3 + 3 = 11.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/31/emp2-tree.jpg" style="width: 362px; height: 361px;" />
<pre>
<strong>Input:</strong> employees = [[1,2,[5]],[5,-3,[]]], id = 5
<strong>Output:</strong> -3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= employees.length &lt;= 2000</code></li>
	<li><code>1 &lt;= employees[i].id &lt;= 2000</code></li>
	<li>All <code>employees[i].id</code> are <strong>unique</strong>.</li>
	<li><code>-100 &lt;= employees[i].importance &lt;= 100</code></li>
	<li>One employee has at most one direct leader and may have several subordinates.</li>
	<li><code>id</code> is guaranteed to be a valid employee id.</li>
</ul>
