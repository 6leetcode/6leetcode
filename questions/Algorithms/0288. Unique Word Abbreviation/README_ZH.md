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

<p>假设你有一个字典和一个单词，请你判断该单词的缩写在这本字典中是否唯一。若单词的缩写在字典中没有任何&nbsp;<em>其他 </em>单词与其缩写相同，则被称为单词的唯一缩写。</p>

<p><strong>示例：</strong></p>

<pre>给定 dictionary = [ &quot;deer&quot;, &quot;door&quot;, &quot;cake&quot;, &quot;card&quot; ]

isUnique(&quot;dear&quot;) -&gt; <code>false</code>
isUnique(&quot;cart&quot;) -&gt; <code>true</code>
isUnique(&quot;cane&quot;) -&gt; <code>false</code>
isUnique(&quot;make&quot;) -&gt; <code>true</code>
</pre>
