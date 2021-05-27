### [Find K-Length Substrings With No Repeated Characters](https://leetcode.com/problems/find-k-length-substrings-with-no-repeated-characters)

<p>Given a string <code>s</code>, return the number of substrings of length <code>k</code> with no repeated characters.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>s = <span id="example-input-1-1">&quot;havefunonleetcode&quot;</span>, k = <span id="example-input-1-2">5</span>
<strong>Output: </strong><span id="example-output-1">6</span>
<strong>Explanation: </strong>
There are 6 substrings they are : &#39;havef&#39;,&#39;avefu&#39;,&#39;vefun&#39;,&#39;efuno&#39;,&#39;etcod&#39;,&#39;tcode&#39;.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>s = <span id="example-input-2-1">&quot;home&quot;</span>, k = <span id="example-input-2-2">5</span>
<strong>Output: </strong><span id="example-output-2">0</span>
<strong>Explanation: </strong>
Notice k can be larger than the length of s. In this case is not possible to find any substring.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li>All characters of s are lowercase English letters.</li>
	<li><code>1 &lt;= k &lt;= 10<sup>4</sup></code></li>
</ol>
