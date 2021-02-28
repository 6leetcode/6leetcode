### [Kill Process](https://leetcode.com/problems/kill-process)

<p>You have <code>n</code> processes. You are given two integer arrays <code>pid</code> and <code>ppid</code>, where the ID of the <code>i<sup>th</sup></code> process is <code>pid[i]</code> and the ID of the parent process of the <code>i<sup>th</sup></code> process is <code>ppid[i]</code>.</p>

<p>Each process only has <strong>one parent process</strong> but may have one or more children processes. This is just like a tree structure. Only one process has <code>ppid[i]</code> that is <code>0</code>, which means this process has <strong>no parent process</strong>.</p>

<p>Given an integer <code>kill</code> representing the ID of a process you want to kill, return a list of the IDs of the processes that will be killed in the end. You should assume that when a process is killed, all its children processes will be killed. No order is required for the final answer.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/24/ptree.jpg" style="width: 207px; height: 302px;" />
<pre>
<strong>Input:</strong> pid = [1,3,10,5], ppid = [3,0,5,3], kill = 5
<strong>Output:</strong> [5,10]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> pid = [1], ppid = [0], kill = 1
<strong>Output:</strong> [1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == pid.length</code></li>
	<li><code>n == ppid.length</code></li>
	<li><code>1 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= pid[i] &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= ppid[i] &lt;= 5 * 10<sup>4</sup></code></li>
	<li>Only one process has no parent.</li>
	<li>All the values of <code>pid</code> are <strong>unique</strong>.</li>
	<li><code>kill</code> is <strong>guaranteed</strong> to be one of the values of <code>pid</code>.</li>
</ul>
