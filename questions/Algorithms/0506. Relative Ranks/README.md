### [Relative Ranks](https://leetcode.com/problems/relative-ranks)

<p>You are given an integer array <code>score</code> of size <code>n</code>, where <code>score[i]</code> is the score of the <code>i<sup>th</sup></code> athlete in a competition.</p>

<p>The ranks of the <code>i<sup>th</sup></code> athlete is determined according to the following rules:</p>

<ul>
	<li>The <code>1<sup>st</sup></code> athlete is <code>&quot;Gold Medal&quot;</code>.</li>
	<li>The <code>2<sup>nd</sup></code> athlete is <code>&quot;Silver Medal&quot;</code>.</li>
	<li>The <code>3<sup>rd</sup></code> athlete is <code>&quot;Bronze Medal&quot;</code>.</li>
	<li>From the <code>4<sup>th</sup></code> to the <code>n<sup>th</sup></code> athlete, the <code>x<sup>th</sup></code> athlete&#39;s rank is <code>&quot;x&quot;</code>.</li>
</ul>

<p>The ranks are determined based on the scores of each athlete. All the scores are guaranteed to be <strong>unique</strong>.</p>

<p>Return an array <code>answer</code> of size <code>n</code> where <code>answer[i]</code> is the rank of the <code>i<sup>th</sup></code> athlete.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> score = [5,4,3,2,1]
<strong>Output:</strong> [&quot;Gold Medal&quot;,&quot;Silver Medal&quot;,&quot;Bronze Medal&quot;,&quot;4&quot;,&quot;5&quot;]
<strong>Explanation:</strong> The first three athletes got the top three highest scores, so they got &quot;Gold Medal&quot;, &quot;Silver Medal&quot; and &quot;Bronze Medal&quot;. 
For the last two athletes, you just need to output their relative ranks according to their scores.</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> score = [10,3,8,9,4]
<strong>Output:</strong> [&quot;Gold Medal&quot;,&quot;5&quot;,&quot;Bronze Medal&quot;,&quot;Silver Medal&quot;,&quot;4&quot;]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == score.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= score[i] &lt;= 10<sup>6</sup></code></li>
	<li>All the values of <code>score</code> are <strong>unique</strong>.</li>
</ul>
