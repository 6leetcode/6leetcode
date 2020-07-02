### [Group Shifted Strings](https://leetcode.com/problems/group-shifted-strings)

<p>Given a string, we can &quot;shift&quot; each of its letter to its successive letter, for example: <code>&quot;abc&quot; -&gt; &quot;bcd&quot;</code>. We can keep &quot;shifting&quot; which forms the sequence:</p>

<pre>
&quot;abc&quot; -&gt; &quot;bcd&quot; -&gt; ... -&gt; &quot;xyz&quot;</pre>

<p>Given a list of <strong>non-empty</strong> strings which contains only lowercase alphabets, group all strings that belong to the same shifting sequence.</p>

<p><b>Example:</b></p>

<pre>
<b>Input:</b> <code>[&quot;abc&quot;, &quot;bcd&quot;, &quot;acef&quot;, &quot;xyz&quot;, &quot;az&quot;, &quot;ba&quot;, &quot;a&quot;, &quot;z&quot;],</code>
<b>Output:</b> 
[
  [&quot;abc&quot;,&quot;bcd&quot;,&quot;xyz&quot;],
  [&quot;az&quot;,&quot;ba&quot;],
  [&quot;acef&quot;],
  [&quot;a&quot;,&quot;z&quot;]
]
</pre>
