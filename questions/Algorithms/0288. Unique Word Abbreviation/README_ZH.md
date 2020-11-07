### [单词的唯一缩写](https://leetcode-cn.com/problems/unique-word-abbreviation)

<p>一个单词的缩写需要遵循&nbsp;&lt;起始字母&gt;&lt;中间字母数&gt;&lt;结尾字母&gt; 这样的格式。</p>

<p>以下是一些单词缩写的范例：</p>

<pre>a) it                      --&gt; it    (没有缩写)

     1
     &darr;
b) d|o|g                   --&gt; d1g

              1    1  1
     1---5----0----5--8
     &darr;   &darr;    &darr;    &darr;  &darr;    
c) i|nternationalizatio|n  --&gt; i18n

              1
     1---5----0
&nbsp;    &darr;   &darr;    &darr;
d) l|ocalizatio|n          --&gt; l10n
</pre>

<p>请你判断单词缩写在字典中是否唯一。当单词的缩写满足下面任何一个条件是，可以认为该单词缩写是唯一的：</p>

<ul>
	<li>字典 <code>dictionary</code> 中没有任何其他单词的缩写与该单词 <code>word</code> 的缩写相同。</li>
	<li>字典 <code>dictionary</code> 中的所有缩写与该单词 <code>word</code> 的缩写相同的单词都与 <code>word</code> 相同。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>
[&quot;ValidWordAbbr&quot;,&quot;isUnique&quot;,&quot;isUnique&quot;,&quot;isUnique&quot;,&quot;isUnique&quot;]
[[[&quot;deer&quot;,&quot;door&quot;,&quot;cake&quot;,&quot;card&quot;]],[&quot;dear&quot;],[&quot;cart&quot;],[&quot;cane&quot;],[&quot;make&quot;]]
<strong>输出：</strong>
[null,false,true,false,true]

<strong>解释：</strong>
ValidWordAbbr validWordAbbr = new ValidWordAbbr([&quot;deer&quot;, &quot;door&quot;, &quot;cake&quot;, &quot;card&quot;]);
validWordAbbr.isUnique(&quot;dear&quot;); // return False
validWordAbbr.isUnique(&quot;cart&quot;); // return True
validWordAbbr.isUnique(&quot;cane&quot;); // return False
validWordAbbr.isUnique(&quot;make&quot;); // return True
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>每个单词都只由小写字符组成</li>
</ul>
