### [赎金信](https://leetcode-cn.com/problems/ransom-note)

<p>给定一个赎金信 (<code>ransom</code>) 字符串和一个杂志(<code>magazine</code>)字符串，判断第一个字符串 <code>ransom</code> 能不能由第二个字符串 <code>magazines</code> 里面的字符构成。如果可以构成，返回 <code>true</code> ；否则返回 <code>false</code>。</p>

<p>(题目说明：为了不暴露赎金信字迹，要从杂志上搜索各个需要的字母，组成单词来表达意思。杂志字符串中的每个字符只能在赎金信字符串中使用一次。)</p>

<p>&nbsp;</p>

<p><strong>注意：</strong></p>

<p>你可以假设两个字符串均只含有小写字母。</p>

<pre>canConstruct(&quot;a&quot;, &quot;b&quot;) -&gt; false
canConstruct(&quot;aa&quot;, &quot;ab&quot;) -&gt; false
canConstruct(&quot;aa&quot;, &quot;aab&quot;) -&gt; true
</pre>
