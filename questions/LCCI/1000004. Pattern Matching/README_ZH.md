### [模式匹配](https://leetcode-cn.com/problems/pattern-matching-lcci)

<p>你有两个字符串，即<code>pattern</code>和<code>value</code>。 <code>pattern</code>字符串由字母<code>&quot;a&quot;</code>和<code>&quot;b&quot;</code>组成，用于描述字符串中的模式。例如，字符串<code>&quot;catcatgocatgo&quot;</code>匹配模式<code>&quot;aabab&quot;</code>（其中<code>&quot;cat&quot;</code>是<code>&quot;a&quot;</code>，<code>&quot;go&quot;</code>是<code>&quot;b&quot;</code>），该字符串也匹配像<code>&quot;a&quot;</code>、<code>&quot;ab&quot;</code>和<code>&quot;b&quot;</code>这样的模式。但需注意<code>&quot;a&quot;</code>和<code>&quot;b&quot;</code>不能同时表示相同的字符串。编写一个方法判断<code>value</code>字符串是否匹配<code>pattern</code>字符串。</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong> pattern = &quot;abba&quot;, value = &quot;dogcatcatdog&quot;
<strong>输出：</strong> true
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong> pattern = &quot;abba&quot;, value = &quot;dogcatcatfish&quot;
<strong>输出：</strong> false
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong> pattern = &quot;aaaa&quot;, value = &quot;dogcatcatdog&quot;
<strong>输出：</strong> false
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong> pattern = &quot;abba&quot;, value = &quot;dogdogdogdog&quot;
<strong>输出：</strong> true
<strong>解释：</strong> &quot;a&quot;=&quot;dogdog&quot;,b=&quot;&quot;，反之也符合规则
</pre>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= len(pattern) &lt;= 1000</code></li>
	<li><code>0 &lt;= len(value) &lt;= 1000</code></li>
	<li>你可以假设<code>pattern</code>只包含字母<code>&quot;a&quot;</code>和<code>&quot;b&quot;</code>，<code>value</code>仅包含小写字母。</li>
</ul>
