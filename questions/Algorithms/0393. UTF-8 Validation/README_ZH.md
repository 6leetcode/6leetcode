### [UTF-8 编码验证](https://leetcode-cn.com/problems/utf-8-validation)

<p>给定一个表示数据的整数数组&nbsp;<code>data</code>&nbsp;，返回它是否为有效的 <strong>UTF-8</strong> 编码。</p>

<p><strong>UTF-8</strong> 中的一个字符可能的长度为 <strong>1 到 4 字节</strong>，遵循以下的规则：</p>

<ol>
	<li>对于 <strong>1 字节</strong>&nbsp;的字符，字节的第一位设为 0 ，后面 7 位为这个符号的 unicode 码。</li>
	<li>对于 <strong>n 字节</strong>&nbsp;的字符 (n &gt; 1)，第一个字节的前 n 位都设为1，第 n+1 位设为 0 ，后面字节的前两位一律设为 10 。剩下的没有提及的二进制位，全部为这个符号的 unicode 码。</li>
</ol>

<p>这是 UTF-8 编码的工作方式：</p>

<pre>
<code>      </code>Number of Bytes<code>  |        UTF-8 octet sequence
                       |              (binary)
   --------------------+---------------------------------------------
            1          | 0xxxxxxx
            2          | 110xxxxx 10xxxxxx
            3          | 1110xxxx 10xxxxxx 10xxxxxx
            4          | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
</code></pre>

<p><code>x</code>&nbsp;表示二进制形式的一位，可以是 <code>0</code>&nbsp;或 <code>1</code>。</p>

<p><strong>注意：</strong>输入是整数数组。只有每个整数的 <strong>最低 8 个有效位</strong> 用来存储数据。这意味着每个整数只表示 1 字节的数据。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>data = [197,130,1]
<strong>输出：</strong>true
<strong>解释：</strong>数据表示字节序列:<strong>11000101 10000010 00000001</strong>。
这是有效的 utf-8 编码，为一个 2 字节字符，跟着一个 1 字节字符。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>data = [235,140,4]
<strong>输出：</strong>false
<strong>解释：</strong>数据表示 8 位的序列: <strong>11101011 10001100 00000100</strong>.
前 3 位都是 1 ，第 4 位为 0 表示它是一个 3 字节字符。
下一个字节是开头为 10 的延续字节，这是正确的。
但第二个延续字节不以 10 开头，所以是不符合规则的。
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>1 &lt;= data.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= data[i] &lt;= 255</code></li>
</ul>
