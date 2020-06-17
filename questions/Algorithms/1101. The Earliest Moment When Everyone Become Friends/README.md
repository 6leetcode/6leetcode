### [The Earliest Moment When Everyone Become Friends](https://leetcode.com/problems/the-earliest-moment-when-everyone-become-friends)

<p>In a social group, there are <code>N</code> people, with unique integer ids from <code>0</code> to <code>N-1</code>.</p>

<p>We have a list of <code>logs</code>, where each <code>logs[i] = [timestamp, id_A, id_B]</code> contains a non-negative&nbsp;integer timestamp, and the ids of two different people.</p>

<p>Each log represents the time in which two different people became friends. &nbsp;Friendship is symmetric: if A is friends with B, then B is friends with A.</p>

<p>Let&#39;s say that person A is acquainted with person B if A is friends with B, or A is a friend of someone acquainted with B.</p>

<p>Return the earliest time for which every person became acquainted with every other person. Return -1 if there is no&nbsp;such&nbsp;earliest time.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>logs = <span id="example-input-1-1">[[20190101,0,1],[20190104,3,4],[20190107,2,3],[20190211,1,5],[20190224,2,4],[20190301,0,3],[20190312,1,2],[20190322,4,5]]</span>, N = <span id="example-input-1-2">6</span>
<strong>Output: </strong><span id="example-output-1">20190301</span>
<strong>Explanation: </strong>
The first event occurs at timestamp = 20190101 and after 0 and 1 become friends we have the following friendship groups [0,1], [2], [3], [4], [5].
The second event occurs at timestamp = 20190104 and after 3 and 4 become friends we have the following friendship groups [0,1], [2], [3,4], [5].
The third event occurs at timestamp = 20190107 and after 2 and 3 become friends we have the following friendship groups [0,1], [2,3,4], [5].
The fourth event occurs at timestamp = 20190211 and after 1 and 5 become friends we have the following friendship groups [0,1,5], [2,3,4].
The fifth event occurs at timestamp = 20190224 and as 2 and 4 are already friend anything happens.
The sixth event occurs at timestamp = 20190301 and after 0 and 3 become friends we have that all become friends.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>2 &lt;= N &lt;= 100</code></li>
	<li><code>1 &lt;= logs.length &lt;= 10^4</code></li>
	<li><code>0 &lt;= logs[i][0] &lt;= 10^9</code></li>
	<li><code>0 &lt;= logs[i][1], logs[i][2] &lt;= N - 1</code></li>
	<li>It&#39;s guaranteed that all timestamps in <code>logs[i][0]</code> are different.</li>
	<li><code>logs </code>are not necessarily ordered by some criteria.</li>
	<li><code>logs[i][1] != logs[i][2]</code></li>
</ol>
