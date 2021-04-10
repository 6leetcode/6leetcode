### [Valid Number](https://leetcode.com/problems/valid-number)

<p>Validate if a given string can be interpreted as&nbsp;a decimal number.</p>

<p>Some examples:<br />
<code>&quot;0&quot;</code> =&gt; <code>true</code><br />
<code>&quot; 0.1 &quot;</code> =&gt; <code>true</code><br />
<code>&quot;abc&quot;</code> =&gt; <code>false</code><br />
<code>&quot;1 a&quot;</code> =&gt; <code>false</code><br />
<code>&quot;2e10&quot;</code> =&gt; <code>true</code><br />
<code>&quot; -90e3&nbsp; &nbsp;&quot;</code> =&gt; <code>true</code><br />
<code>&quot; 1e&quot;</code> =&gt; <code>false</code><br />
<code>&quot;e3&quot;</code> =&gt; <code>false</code><br />
<code>&quot; 6e-1&quot;</code> =&gt; <code>true</code><br />
<code>&quot; 99e2.5&nbsp;&quot;</code> =&gt; <code>false</code><br />
<code>&quot;53.5e93&quot;</code> =&gt; <code>true</code><br />
<code>&quot; --6 &quot;</code> =&gt; <code>false</code><br />
<code>&quot;-+3&quot;</code> =&gt; <code>false</code><br />
<code>&quot;95a54e53&quot;</code> =&gt; <code>false</code></p>

<p><strong>Note:</strong> It is intended for the problem statement to be ambiguous. It would be best if you gathered all requirements up front before implementing one. However, here is a list of characters that can be in a valid decimal number:</p>

<ul>
	<li>Numbers 0-9</li>
	<li>Exponent - &quot;e&quot;</li>
	<li>Positive/negative sign - &quot;+&quot;/&quot;-&quot;</li>
	<li>Decimal point - &quot;.&quot;</li>
</ul>

<p>Of course, the context of these characters also matters in the input.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> s = "0"
<strong>Output:</strong> true
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> s = "3"
<strong>Output:</strong> true
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 20</code></li>
	<li><code>s</code> consists of only English letters, digits, space <code>&#39; &#39;</code>, plus <code>&#39;+&#39;</code>, minus <code>&#39;-&#39;</code>, or dot <code>&#39;.&#39;</code>.</li>
</ul>
