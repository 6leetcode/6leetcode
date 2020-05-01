### [移位字符串分组](https://leetcode-cn.com/problems/group-shifted-strings)

<p>给定一个字符串，对该字符串可以进行 &ldquo;移位&rdquo; 的操作，也就是将字符串中每个字母都变为其在字母表中后续的字母，比如：<code>&quot;abc&quot; -&gt; &quot;bcd&quot;</code>。这样，我们可以持续进行 &ldquo;移位&rdquo; 操作，从而生成如下移位序列：</p>

<pre>&quot;abc&quot; -&gt; &quot;bcd&quot; -&gt; ... -&gt; &quot;xyz&quot;</pre>

<p>给定一个包含仅小写字母字符串的列表，将该列表中所有满足&nbsp;&ldquo;移位&rdquo; 操作规律的组合进行分组并返回。</p>

<p><strong>示例：</strong></p>

<pre><strong>输入: </strong><code>[&quot;abc&quot;, &quot;bcd&quot;, &quot;acef&quot;, &quot;xyz&quot;, &quot;az&quot;, &quot;ba&quot;, &quot;a&quot;, &quot;z&quot;]</code>
<strong>输出:</strong> 
[
  [&quot;abc&quot;,&quot;bcd&quot;,&quot;xyz&quot;],
  [&quot;az&quot;,&quot;ba&quot;],
  [&quot;acef&quot;],
  [&quot;a&quot;,&quot;z&quot;]
]
</pre>
