### [Replace Words](https://leetcode.com/problems/replace-words)

<p>In English, we have a concept called <code>root</code>, which can be followed by some other words to form another longer word - let&#39;s call this word <code>successor</code>. For example, the root <code>an</code>, followed by <code>other</code>, which can form another word <code>another</code>.</p>

<p>Now, given a dictionary consisting of many roots and a sentence. You need to replace all the <code>successor</code> in the sentence with the <code>root</code> forming it. If a <code>successor</code> has many <code>roots</code> can form it, replace it with the root with the shortest length.</p>

<p>You need to output the sentence after the replacement.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> dict = [&quot;cat&quot;,&quot;bat&quot;,&quot;rat&quot;], sentence = &quot;the cattle was rattled by the battery&quot;
<strong>Output:</strong> &quot;the cat was rat by the bat&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The input will only have lower-case letters.</li>
	<li><code>1 &lt;= dict.length&nbsp;&lt;= 1000</code></li>
	<li><code>1 &lt;= dict[i].length &lt;= 100</code></li>
	<li>1 &lt;= sentence words number &lt;= 1000</li>
	<li>1 &lt;= sentence words length &lt;= 1000</li>
</ul>
