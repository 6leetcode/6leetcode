### [Next Closest Time](https://leetcode.com/problems/next-closest-time)

<p>Given a <code>time</code> represented in the format <code>&quot;HH:MM&quot;</code>, form the next closest time by reusing the current digits. There is no limit on how many times a digit can be reused.</p>

<p>You may assume the given input string is always valid. For example, <code>&quot;01:34&quot;</code>, <code>&quot;12:09&quot;</code> are all valid. <code>&quot;1:34&quot;</code>, <code>&quot;12:9&quot;</code> are all invalid.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> time = &quot;19:34&quot;
<strong>Output:</strong> &quot;19:39&quot;
<strong>Explanation:</strong> The next closest time choosing from digits <strong>1</strong>, <strong>9</strong>, <strong>3</strong>, <strong>4</strong>, is <strong>19:39</strong>, which occurs 5 minutes later.
It is not <strong>19:33</strong>, because this occurs 23 hours and 59 minutes later.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> time = &quot;23:59&quot;
<strong>Output:</strong> &quot;22:22&quot;
<strong>Explanation:</strong> The next closest time choosing from digits <strong>2</strong>, <strong>3</strong>, <strong>5</strong>, <strong>9</strong>, is <strong>22:22</strong>.
It may be assumed that the returned time is next day&#39;s time since it is smaller than the input time numerically.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>time.length == 5</code></li>
	<li><code>time</code> is a valid time in the form <code>&quot;HH:MM&quot;</code>.</li>
	<li><code>0 &lt;= HH &lt; 24</code></li>
	<li><code>0 &lt;= MM &lt; 60</code></li>
</ul>
