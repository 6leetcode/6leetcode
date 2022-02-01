### [Count Words Obtained After Adding a Letter](https://leetcode.com/problems/count-words-obtained-after-adding-a-letter)

<p>You are given two <strong>0-indexed</strong> arrays of strings <code>startWords</code> and <code>targetWords</code>. Each string consists of <strong>lowercase English letters</strong> only.</p>

<p>For each string in <code>targetWords</code>, check if it is possible to choose a string from <code>startWords</code> and perform a <strong>conversion operation</strong> on it to be equal to that from <code>targetWords</code>.</p>

<p>The <strong>conversion operation</strong> is described in the following two steps:</p>

<ol>
	<li><strong>Append</strong> any lowercase letter that is <strong>not present</strong> in the string to its end.

	<ul>
		<li>For example, if the string is <code>&quot;abc&quot;</code>, the letters <code>&#39;d&#39;</code>, <code>&#39;e&#39;</code>, or <code>&#39;y&#39;</code> can be added to it, but not <code>&#39;a&#39;</code>. If <code>&#39;d&#39;</code> is added, the resulting string will be <code>&quot;abcd&quot;</code>.</li>
	</ul>
	</li>
	<li><strong>Rearrange</strong> the letters of the new string in <strong>any</strong> arbitrary order.
	<ul>
		<li>For example, <code>&quot;abcd&quot;</code> can be rearranged to <code>&quot;acbd&quot;</code>, <code>&quot;bacd&quot;</code>, <code>&quot;cbda&quot;</code>, and so on. Note that it can also be rearranged to <code>&quot;abcd&quot;</code> itself.</li>
	</ul>
	</li>
</ol>

<p>Return <em>the <strong>number of strings</strong> in </em><code>targetWords</code><em> that can be obtained by performing the operations on <strong>any</strong> string of </em><code>startWords</code>.</p>

<p><strong>Note</strong> that you will only be verifying if the string in <code>targetWords</code> can be obtained from a string in <code>startWords</code> by performing the operations. The strings in <code>startWords</code> <strong>do not</strong> actually change during this process.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> startWords = [&quot;ant&quot;,&quot;act&quot;,&quot;tack&quot;], targetWords = [&quot;tack&quot;,&quot;act&quot;,&quot;acti&quot;]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
- In order to form targetWords[0] = &quot;tack&quot;, we use startWords[1] = &quot;act&quot;, append &#39;k&#39; to it, and rearrange &quot;actk&quot; to &quot;tack&quot;.
- There is no string in startWords that can be used to obtain targetWords[1] = &quot;act&quot;.
  Note that &quot;act&quot; does exist in startWords, but we <strong>must</strong> append one letter to the string before rearranging it.
- In order to form targetWords[2] = &quot;acti&quot;, we use startWords[1] = &quot;act&quot;, append &#39;i&#39; to it, and rearrange &quot;acti&quot; to &quot;acti&quot; itself.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> startWords = [&quot;ab&quot;,&quot;a&quot;], targetWords = [&quot;abc&quot;,&quot;abcd&quot;]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
- In order to form targetWords[0] = &quot;abc&quot;, we use startWords[0] = &quot;ab&quot;, add &#39;c&#39; to it, and rearrange it to &quot;abc&quot;.
- There is no string in startWords that can be used to obtain targetWords[1] = &quot;abcd&quot;.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= startWords.length, targetWords.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= startWords[i].length, targetWords[j].length &lt;= 26</code></li>
	<li>Each string of <code>startWords</code> and <code>targetWords</code> consists of lowercase English letters only.</li>
	<li>No letter occurs more than once in any string of <code>startWords</code> or <code>targetWords</code>.</li>
</ul>
