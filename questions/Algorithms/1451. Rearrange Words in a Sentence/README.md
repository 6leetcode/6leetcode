### [Rearrange Words in a Sentence](https://leetcode.com/problems/rearrange-words-in-a-sentence)

<p>Given a sentence&nbsp;<code>text</code> (A&nbsp;<em>sentence</em>&nbsp;is a string of space-separated words) in the following format:</p>

<ul>
	<li>First letter is in upper case.</li>
	<li>Each word in <code>text</code> are separated by a single space.</li>
</ul>

<p>Your task is to rearrange the words in text such that&nbsp;all words are rearranged in an increasing order of their lengths. If two words have the same length, arrange them in their original order.</p>

<p>Return the new text&nbsp;following the format shown above.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;Leetcode is cool&quot;
<strong>Output:</strong> &quot;Is cool leetcode&quot;
<strong>Explanation: </strong>There are 3 words, &quot;Leetcode&quot; of length 8, &quot;is&quot; of length 2 and &quot;cool&quot; of length 4.
Output is ordered by length and the new first word starts with capital letter.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;Keep calm and code on&quot;
<strong>Output:</strong> &quot;On and keep calm code&quot;
<strong>Explanation: </strong>Output is ordered as follows:
&quot;On&quot; 2 letters.
&quot;and&quot; 3 letters.
&quot;keep&quot; 4 letters in case of tie order by position in original text.
&quot;calm&quot; 4 letters.
&quot;code&quot; 4 letters.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;To be or not to be&quot;
<strong>Output:</strong> &quot;To be or to be not&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>text</code> begins with a capital letter and then contains lowercase letters and single space between words.</li>
	<li><code>1 &lt;= text.length &lt;= 10^5</code></li>
</ul>
