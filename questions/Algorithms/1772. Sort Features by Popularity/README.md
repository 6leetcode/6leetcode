### [Sort Features by Popularity](https://leetcode.com/problems/sort-features-by-popularity)

<p>You are given a string array <code>features</code> where <code>features[i]</code> is a single word that represents the name of a feature of the latest product you are working on. You have made a survey where users have reported which features they like. You are given a string array <code>responses</code>, where each <code>responses[i]</code> is a string containing space-separated words.</p>

<p>The <strong>popularity</strong> of a feature is the number of <code>responses[i]</code> that contain the feature. You want to sort the features in non-increasing order by their popularity. If two features have the same popularity, order them by their original index in <code>features</code>. Notice that one response could contain the same feature multiple times; this feature is only counted once in its popularity.</p>

<p>Return <em>the features in sorted order.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> features = [&quot;cooler&quot;,&quot;lock&quot;,&quot;touch&quot;], responses = [&quot;i like cooler cooler&quot;,&quot;lock touch cool&quot;,&quot;locker like touch&quot;]
<strong>Output:</strong> [&quot;touch&quot;,&quot;cooler&quot;,&quot;lock&quot;]
<strong>Explanation:</strong> appearances(&quot;cooler&quot;) = 1, appearances(&quot;lock&quot;) = 1, appearances(&quot;touch&quot;) = 2. Since &quot;cooler&quot; and &quot;lock&quot; both had 1 appearance, &quot;cooler&quot; comes first because &quot;cooler&quot; came first in the features array.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> features = [&quot;a&quot;,&quot;aa&quot;,&quot;b&quot;,&quot;c&quot;], responses = [&quot;a&quot;,&quot;a aa&quot;,&quot;a a a a a&quot;,&quot;b a&quot;]
<strong>Output:</strong> [&quot;a&quot;,&quot;aa&quot;,&quot;b&quot;,&quot;c&quot;]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= features.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= features[i].length &lt;= 10</code></li>
	<li><code>features</code> contains no duplicates.</li>
	<li><code>features[i]</code> consists of lowercase letters.</li>
	<li><code>1 &lt;= responses.length &lt;= 10<sup>2</sup></code></li>
	<li><code>1 &lt;= responses[i].length &lt;= 10<sup>3</sup></code></li>
	<li><code>responses[i]</code> consists of lowercase letters and spaces.</li>
	<li><code>responses[i]</code> contains no two consecutive spaces.</li>
	<li><code>responses[i]</code> has no leading or trailing spaces.</li>
</ul>
