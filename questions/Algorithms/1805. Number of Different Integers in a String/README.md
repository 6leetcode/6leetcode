### [Number of Different Integers in a String](https://leetcode.com/problems/number-of-different-integers-in-a-string)

<p>You are given a string <code>word</code> that consists of digits and lowercase English letters.</p>

<p>You will replace every non-digit character with a space. For example, <code>&quot;a123bc34d8ef34&quot;</code> will become <code>&quot; 123&nbsp; 34 8&nbsp; 34&quot;</code>. Notice that you are left with some integers that are separated by at least one space: <code>&quot;123&quot;</code>, <code>&quot;34&quot;</code>, <code>&quot;8&quot;</code>, and <code>&quot;34&quot;</code>.</p>

<p>Return <em>the number of <strong>different</strong> integers after performing the replacement operations on </em><code>word</code>.</p>

<p>Two integers are considered different if their decimal representations <strong>without any leading zeros</strong> are different.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> word = &quot;a<u>123</u>bc<u>34</u>d<u>8</u>ef<u>34</u>&quot;
<strong>Output:</strong> 3
<strong>Explanation: </strong>The three different integers are &quot;123&quot;, &quot;34&quot;, and &quot;8&quot;. Notice that &quot;34&quot; is only counted once.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> word = &quot;leet<u>1234</u>code<u>234</u>&quot;
<strong>Output:</strong> 2
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> word = &quot;a<u>1</u>b<u>01</u>c<u>001</u>&quot;
<strong>Output:</strong> 1
<strong>Explanation: </strong>The three integers &quot;1&quot;, &quot;01&quot;, and &quot;001&quot; all represent the same integer because
the leading zeros are ignored when comparing their decimal values.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= word.length &lt;= 1000</code></li>
	<li><code>word</code> consists of digits and lowercase English letters.</li>
</ul>
