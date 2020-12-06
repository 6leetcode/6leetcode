### [Minimum Swaps to Make Strings Equal](https://leetcode.com/problems/minimum-swaps-to-make-strings-equal)

<p>You are given two strings&nbsp;<code>s1</code>&nbsp;and&nbsp;<code>s2</code>&nbsp;of equal length&nbsp;consisting of letters <code>&quot;x&quot;</code> and <code>&quot;y&quot;</code> <strong>only</strong>. Your task is to&nbsp;make these two strings equal to each other. You can swap any two characters that belong to <strong>different</strong> strings,&nbsp;which means: swap <code>s1[i]</code> and <code>s2[j]</code>.</p>

<p>Return&nbsp;the minimum number of swaps required&nbsp;to make&nbsp;<code>s1</code>&nbsp;and <code>s2</code> equal, or return&nbsp;<code>-1</code>&nbsp;if it is&nbsp;impossible to do so.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s1 = &quot;xx&quot;, s2 = &quot;yy&quot;
<strong>Output:</strong> 1
<strong>Explanation: 
</strong>Swap s1[0] and s2[1], s1 = &quot;yx&quot;, s2 = &quot;yx&quot;.</pre>

<p><strong>Example 2:&nbsp;</strong></p>

<pre>
<strong>Input:</strong> s1 = &quot;xy&quot;, s2 = &quot;yx&quot;
<strong>Output:</strong> 2
<strong>Explanation: 
</strong>Swap s1[0] and s2[0], s1 = &quot;yy&quot;, s2 = &quot;xx&quot;.
Swap s1[0] and s2[1], s1 = &quot;xy&quot;, s2 = &quot;xy&quot;.
Note that you can&#39;t swap s1[0] and s1[1] to make s1 equal to &quot;yx&quot;, cause we can only swap chars in different strings.</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> s1 = &quot;xx&quot;, s2 = &quot;xy&quot;
<strong>Output:</strong> -1
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> s1 = &quot;xxyyxyxyxx&quot;, s2 = &quot;xyyxyxxxyx&quot;
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s1.length, s2.length &lt;= 1000</code></li>
	<li><code>s1, s2</code>&nbsp;only contain <code>&#39;x&#39;</code> or <code>&#39;y&#39;</code>.</li>
</ul>