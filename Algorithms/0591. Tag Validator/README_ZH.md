### [标签验证器](https://leetcode-cn.com/problems/tag-validator)

<p>给定一个表示代码片段的字符串，你需要实现一个验证器来解析这段代码，并返回它是否合法。合法的代码片段需要遵守以下的所有规则：</p>

<ol>
	<li>代码必须被<strong>合法的闭合标签</strong>包围。否则，代码是无效的。</li>
	<li><strong>闭合标签</strong>（不一定合法）要严格符合格式：<code>&lt;TAG_NAME&gt;TAG_CONTENT&lt;/TAG_NAME&gt;</code>。其中，<code>&lt;TAG_NAME&gt;</code>是起始标签，<code>&lt;/TAG_NAME&gt;</code>是结束标签。起始和结束标签中的 TAG_NAME 应当相同。当且仅当&nbsp;TAG_NAME 和 TAG_CONTENT 都是合法的，闭合标签才是<strong>合法的</strong>。</li>
	<li><strong>合法的</strong>&nbsp;<code>TAG_NAME</code>&nbsp;仅含有<strong>大写字母</strong>，长度在范围 [1,9] 之间。否则，该&nbsp;<code>TAG_NAME</code>&nbsp;是<strong>不合法的</strong>。</li>
	<li><strong>合法的</strong>&nbsp;<code>TAG_CONTENT</code>&nbsp;可以包含其他<strong>合法的闭合标签</strong>，<strong>cdata</strong>&nbsp;（请参考规则7）和任意字符（注意参考规则1）<strong>除了</strong>不匹配的<code>&lt;</code>、不匹配的起始和结束标签、不匹配的或带有不合法 TAG_NAME 的闭合标签。否则，<code>TAG_CONTENT</code>&nbsp;是<strong>不合法的</strong>。</li>
	<li>一个起始标签，如果没有具有相同&nbsp;TAG_NAME 的结束标签与之匹配，是不合法的。反之亦然。不过，你也需要考虑标签嵌套的问题。</li>
	<li>一个<code>&lt;</code>，如果你找不到一个后续的<code>&gt;</code>与之匹配，是不合法的。并且当你找到一个<code>&lt;</code>或<code>&lt;/</code>时，所有直到下一个<code>&gt;</code>的前的字符，都应当被解析为&nbsp;TAG_NAME（不一定合法）。</li>
	<li>cdata 有如下格式：<code>&lt;![CDATA[CDATA_CONTENT]]&gt;</code>。<code>CDATA_CONTENT</code>&nbsp;的范围被定义成&nbsp;<code>&lt;![CDATA[</code>&nbsp;和<strong>后续的第一个</strong>&nbsp;<code>]]&gt;</code>之间的字符。</li>
	<li><code>CDATA_CONTENT</code>&nbsp;可以包含<strong>任意字符</strong>。cdata 的功能是阻止验证器解析<code>CDATA_CONTENT</code>，所以即使其中有一些字符可以被解析为标签（无论合法还是不合法），也应该将它们视为<strong>常规字符</strong>。</li>
</ol>

<p><strong>合法代码的例子:</strong></p>

<pre>
<strong>输入:</strong> &quot;&lt;DIV&gt;This is the first line &lt;![CDATA[&lt;div&gt;]]&gt;&lt;/DIV&gt;&quot;

<strong>输出:</strong> True

<strong>解释:</strong> 

代码被包含在了闭合的标签内： &lt;DIV&gt; 和 &lt;/DIV&gt; 。

TAG_NAME 是合法的，TAG_CONTENT 包含了一些字符和 cdata 。 

即使 CDATA_CONTENT 含有不匹配的起始标签和不合法的 TAG_NAME，它应该被视为普通的文本，而不是标签。

所以 TAG_CONTENT 是合法的，因此代码是合法的。最终返回True。


<strong>输入:</strong> &quot;&lt;DIV&gt;&gt;&gt;  ![cdata[]] &lt;![CDATA[&lt;div&gt;]&gt;]]&gt;]]&gt;&gt;]&lt;/DIV&gt;&quot;

<strong>输出:</strong> True

<strong>解释:</strong>

我们首先将代码分割为： start_tag|tag_content|end_tag 。

start_tag -&gt; <strong>&quot;&lt;DIV&gt;&quot;</strong>

end_tag -&gt; <strong>&quot;&lt;/DIV&gt;&quot;</strong>

tag_content 也可被分割为： text1|cdata|text2 。

text1 -&gt; <strong>&quot;&gt;&gt;  ![cdata[]] &quot;</strong>

cdata -&gt; <strong>&quot;&lt;![CDATA[&lt;div&gt;]&gt;]]&gt;&quot;</strong> ，其中 CDATA_CONTENT 为 <strong>&quot;&lt;div&gt;]&gt;&quot;</strong>

text2 -&gt; <strong>&quot;]]&gt;&gt;]&quot;</strong>


start_tag <strong>不</strong>是 <strong>&quot;&lt;DIV&gt;&gt;&gt;&quot;</strong> 的原因参照规则 6 。
cdata <strong>不</strong>是 <strong>&quot;&lt;![CDATA[&lt;div&gt;]&gt;]]&gt;]]&gt;&quot;</strong> 的原因参照规则 7 。
</pre>

<p><strong>不合法代码的例子:</strong></p>

<pre>
<strong>输入:</strong> &quot;&lt;A&gt;  &lt;B&gt; &lt;/A&gt;   &lt;/B&gt;&quot;
<strong>输出:</strong> False
<strong>解释:</strong> 不合法。如果 &quot;&lt;A&gt;&quot; 是闭合的，那么 &quot;&lt;B&gt;&quot; 一定是不匹配的，反之亦然。

<strong>输入:</strong> &quot;&lt;DIV&gt;  div tag is not closed  &lt;DIV&gt;&quot;
<strong>输出:</strong> False

<strong>输入:</strong> &quot;&lt;DIV&gt;  unmatched &lt;  &lt;/DIV&gt;&quot;
<strong>输出:</strong> False

<strong>输入:</strong> &quot;&lt;DIV&gt; closed tags with invalid tag name  &lt;b&gt;123&lt;/b&gt; &lt;/DIV&gt;&quot;
<strong>输出:</strong> False

<strong>输入:</strong> &quot;&lt;DIV&gt; unmatched tags with invalid tag name  &lt;/1234567890&gt; and &lt;CDATA[[]]&gt;  &lt;/DIV&gt;&quot;
<strong>输出:</strong> False

<strong>输入:</strong> &quot;&lt;DIV&gt;  unmatched start tag &lt;B&gt;  and unmatched end tag &lt;/C&gt;  &lt;/DIV&gt;&quot;
<strong>输出:</strong> False
</pre>

<p><strong>注意:</strong></p>

<ol>
	<li>为简明起见，你可以假设输入的代码（包括提到的<strong>任意字符</strong>）只包含<code>数字</code>, <font color="#c7254e" face="Menlo, Monaco, Consolas, Courier New, monospace"><span style="background-color:#f9f2f4; font-size:12.6px">字母</span></font>, <code>&#39;&lt;&#39;</code>,<code>&#39;&gt;&#39;</code>,<code>&#39;/&#39;</code>,<code>&#39;!&#39;</code>,<code>&#39;[&#39;</code>,<code>&#39;]&#39;</code>和<code>&#39; &#39;</code>。</li>
</ol>
