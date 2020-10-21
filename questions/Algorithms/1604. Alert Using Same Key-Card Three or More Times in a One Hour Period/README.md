### [Alert Using Same Key-Card Three or More Times in a One Hour Period](https://leetcode.com/problems/alert-using-same-key-card-three-or-more-times-in-a-one-hour-period)

<p>LeetCode company workers use key-cards to unlock office doors. Each time a worker uses their key-card, the security system saves the worker&#39;s name and the time when it was used. The system emits an <strong>alert</strong> if any worker uses the key-card <strong>three or more times</strong> in a one-hour period.</p>

<p>You are given a list of strings <code>keyName</code> and <code>keyTime</code> where <code>[keyName[i], keyTime[i]]</code> corresponds to a person&#39;s name and the time when their key-card was used <strong>in a</strong> <strong>single day</strong>.</p>

<p>Access times are given in the <strong>24-hour time format &quot;HH:MM&quot;</strong>, such as <code>&quot;23:51&quot;</code> and <code>&quot;09:49&quot;</code>.</p>

<p>Return a <em>list of unique worker names who received an alert for frequent keycard use</em>. Sort the names in <strong>ascending order alphabetically</strong>.</p>

<p>Notice that <code>&quot;10:00&quot;</code> - <code>&quot;11:00&quot;</code> is considered to be within a one-hour period, while <code>&quot;22:51&quot;</code> - <code>&quot;23:52&quot;</code> is not considered to be within a one-hour period.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> keyName = [&quot;daniel&quot;,&quot;daniel&quot;,&quot;daniel&quot;,&quot;luis&quot;,&quot;luis&quot;,&quot;luis&quot;,&quot;luis&quot;], keyTime = [&quot;10:00&quot;,&quot;10:40&quot;,&quot;11:00&quot;,&quot;09:00&quot;,&quot;11:00&quot;,&quot;13:00&quot;,&quot;15:00&quot;]
<strong>Output:</strong> [&quot;daniel&quot;]
<strong>Explanation:</strong> &quot;daniel&quot; used the keycard 3 times in a one-hour period (&quot;10:00&quot;,&quot;10:40&quot;, &quot;11:00&quot;).
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> keyName = [&quot;alice&quot;,&quot;alice&quot;,&quot;alice&quot;,&quot;bob&quot;,&quot;bob&quot;,&quot;bob&quot;,&quot;bob&quot;], keyTime = [&quot;12:01&quot;,&quot;12:00&quot;,&quot;18:00&quot;,&quot;21:00&quot;,&quot;21:20&quot;,&quot;21:30&quot;,&quot;23:00&quot;]
<strong>Output:</strong> [&quot;bob&quot;]
<strong>Explanation:</strong> &quot;bob&quot; used the keycard 3 times in a one-hour period (&quot;21:00&quot;,&quot;21:20&quot;, &quot;21:30&quot;).
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> keyName = [&quot;john&quot;,&quot;john&quot;,&quot;john&quot;], keyTime = [&quot;23:58&quot;,&quot;23:59&quot;,&quot;00:01&quot;]
<strong>Output:</strong> []
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> keyName = [&quot;leslie&quot;,&quot;leslie&quot;,&quot;leslie&quot;,&quot;clare&quot;,&quot;clare&quot;,&quot;clare&quot;,&quot;clare&quot;], keyTime = [&quot;13:00&quot;,&quot;13:20&quot;,&quot;14:00&quot;,&quot;18:00&quot;,&quot;18:51&quot;,&quot;19:30&quot;,&quot;19:49&quot;]
<strong>Output:</strong> [&quot;clare&quot;,&quot;leslie&quot;]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= keyName.length, keyTime.length &lt;= 10<sup>5</sup></code></li>
	<li><code>keyName.length == keyTime.length</code></li>
	<li><code>keyTime[i]</code>&nbsp;is in the format <strong>&quot;HH:MM&quot;</strong>.</li>
	<li><code>[keyName[i], keyTime[i]]</code> is <strong>unique</strong>.</li>
	<li><code>1 &lt;= keyName[i].length &lt;= 10</code></li>
	<li><code>keyName[i] contains only lowercase English letters.</code></li>
</ul>
