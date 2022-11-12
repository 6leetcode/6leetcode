### [Number of Ways to Select Buildings](https://leetcode.com/problems/number-of-ways-to-select-buildings)

<p>You are given a <strong>0-indexed</strong> binary string <code>s</code> which represents the types of buildings along a street where:</p>

<ul>
	<li><code>s[i] = &#39;0&#39;</code> denotes that the <code>i<sup>th</sup></code> building is an office and</li>
	<li><code>s[i] = &#39;1&#39;</code> denotes that the <code>i<sup>th</sup></code> building is a restaurant.</li>
</ul>

<p>As a city official, you would like to <strong>select</strong> 3 buildings for random inspection. However, to ensure variety, <strong>no two consecutive</strong> buildings out of the <strong>selected</strong> buildings can be of the same type.</p>

<ul>
	<li>For example, given <code>s = &quot;0<u><strong>0</strong></u>1<u><strong>1</strong></u>0<u><strong>1</strong></u>&quot;</code>, we cannot select the <code>1<sup>st</sup></code>, <code>3<sup>rd</sup></code>, and <code>5<sup>th</sup></code> buildings as that would form <code>&quot;0<strong><u>11</u></strong>&quot;</code> which is <strong>not</strong> allowed due to having two consecutive buildings of the same type.</li>
</ul>

<p>Return <em>the <b>number of valid ways</b> to select 3 buildings.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;001101&quot;
<strong>Output:</strong> 6
<strong>Explanation:</strong> 
The following sets of indices selected are valid:
- [0,2,4] from &quot;<u><strong>0</strong></u>0<strong><u>1</u></strong>1<strong><u>0</u></strong>1&quot; forms &quot;010&quot;
- [0,3,4] from &quot;<u><strong>0</strong></u>01<u><strong>10</strong></u>1&quot; forms &quot;010&quot;
- [1,2,4] from &quot;0<u><strong>01</strong></u>1<u><strong>0</strong></u>1&quot; forms &quot;010&quot;
- [1,3,4] from &quot;0<u><strong>0</strong></u>1<u><strong>10</strong></u>1&quot; forms &quot;010&quot;
- [2,4,5] from &quot;00<u><strong>1</strong></u>1<u><strong>01</strong></u>&quot; forms &quot;101&quot;
- [3,4,5] from &quot;001<u><strong>101</strong></u>&quot; forms &quot;101&quot;
No other selection is valid. Thus, there are 6 total ways.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;11100&quot;
<strong>Output:</strong> 0
<strong>Explanation:</strong> It can be shown that there are no valid selections.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s[i]</code> is either <code>&#39;0&#39;</code> or <code>&#39;1&#39;</code>.</li>
</ul>
