### [字符串交织](https://leetcode-cn.com/problems/IY6buf)

<p>给定三个字符串&nbsp;<code>s1</code>、<code>s2</code>、<code>s3</code>，请判断&nbsp;<code>s3</code>&nbsp;能不能由&nbsp;<code>s1</code>&nbsp;和&nbsp;<code>s2</code><em>&nbsp;</em><strong>交织（交错）</strong>&nbsp;组成。</p>

<p>两个字符串 <code>s</code> 和 <code>t</code> <strong>交织</strong>&nbsp;的定义与过程如下，其中每个字符串都会被分割成若干 <strong>非空</strong> 子字符串：</p>

<ul>
	<li><code>s = s<sub>1</sub> + s<sub>2</sub> + ... + s<sub>n</sub></code></li>
	<li><code>t = t<sub>1</sub> + t<sub>2</sub> + ... + t<sub>m</sub></code></li>
	<li><code>|n - m| &lt;= 1</code></li>
	<li><b>交织</b> 是 <code>s<sub>1</sub> + t<sub>1</sub> + s<sub>2</sub> + t<sub>2</sub> + s<sub>3</sub> + t<sub>3</sub> + ...</code> 或者 <code>t<sub>1</sub> + s<sub>1</sub> + t<sub>2</sub> + s<sub>2</sub> + t<sub>3</sub> + s<sub>3</sub> + ...</code></li>
</ul>

<p><strong>提示：</strong><code>a + b</code> 意味着字符串 <code>a</code> 和 <code>b</code> 连接。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/09/02/interleave.jpg" style="width: 561px; height: 203px;" /></p>

<pre>
<strong>输入：</strong>s1 = &quot;aabcc&quot;, s2 = &quot;dbbca&quot;, s3 = &quot;aadbbcbcac&quot;
<strong>输出：</strong>true
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s1 = &quot;aabcc&quot;, s2 = &quot;dbbca&quot;, s3 = &quot;aadbbbaccc&quot;
<strong>输出：</strong>false
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s1 = &quot;&quot;, s2 = &quot;&quot;, s3 = &quot;&quot;
<strong>输出：</strong>true
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>0 &lt;= s1.length, s2.length &lt;= 100</code></li>
	<li><code>0 &lt;= s3.length &lt;= 200</code></li>
	<li><code>s1</code>、<code>s2</code>、和 <code>s3</code> 都由小写英文字母组成</li>
</ul>

<p>&nbsp;</p>

<p><meta charset="UTF-8" />注意：本题与主站 97&nbsp;题相同：&nbsp;<a href="https://leetcode-cn.com/problems/interleaving-string/">https://leetcode-cn.com/problems/interleaving-string/</a></p>
