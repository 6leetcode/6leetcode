### [Sort Features by Popularity](https://leetcode.com/problems/sort-features-by-popularity)

<p>You are given a string array <code>features</code>&nbsp;where <code>features[i]</code>&nbsp;is a single word representing the name of a feature of the latest product you are working on. You made a survey where users reported which features they like. You are given a string array&nbsp;<code>responses</code>, where&nbsp;<code>responses[i]</code>&nbsp;is a string containing space-separated words.</p>

<p>You want to sort the features according to their popularity. More formally, let&nbsp;<code>appearances(word)</code>&nbsp;be the number of&nbsp;<code>i</code>s such that&nbsp;<code>responses[i]</code>&nbsp;contains <code>word</code>&nbsp;as a word. Then the&nbsp;<code>x<sup>th</sup></code>&nbsp;feature&nbsp;is more popular than the&nbsp;<code>y<sup>th</sup></code> feature&nbsp;if&nbsp;<code>appearances(features[x]) &gt; appearances(features[y])</code>.</p>

<p>Return an array <code>sortedFeatures</code>&nbsp;consisting of the&nbsp;feature names&nbsp;sorted by their popularity. If the&nbsp;<code>x<sup>th</sup></code>&nbsp; and <code>y<sup>th&nbsp;</sup></code>features&nbsp;have the same popularity where&nbsp;<code>x &lt; y</code>, then you should put the&nbsp;<code>x<sup>th</sup></code>&nbsp;feature&nbsp;before the&nbsp;<code>y<sup>th</sup></code>&nbsp;one.</p>

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
	<li><code>1 &lt;= features.length&nbsp;&lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= features[i].length &lt;= 10</code></li>
	<li><code>features</code>&nbsp;contains no duplicates.</li>
	<li><code>features[i]</code>&nbsp;consists of lowercase letters.</li>
	<li><code>1 &lt;= responses.length &lt;= 10<sup>2</sup></code></li>
	<li><code>1 &lt;= responses[i].length &lt;= 10<sup>3</sup></code></li>
	<li><code>responses[i]</code>&nbsp;consists of lowercase letters and spaces.</li>
	<li><code>responses[i]</code>&nbsp;contains no two consecutive spaces.</li>
	<li><code>responses[i]</code>&nbsp;has no leading or trailing spaces.</li>
</ul>