### [用 Read4 读取 N 个字符](https://leetcode-cn.com/problems/read-n-characters-given-read4)

<p>给你一个文件，并且该文件只能通过给定的&nbsp;<code>read4</code>&nbsp;方法来读取，请实现一个方法使其能够读取 n 个字符。</p>

<p><strong>read4 方法：</strong></p>

<p>API&nbsp;<code>read4</code>&nbsp;可以从文件中读取 4 个连续的字符，并且将它们写入缓存数组&nbsp;<code>buf</code>&nbsp;中。</p>

<p>返回值为实际读取的字符个数。</p>

<p>注意&nbsp;<code>read4()</code> 自身拥有文件指针，很类似于 C 语言中的 <code>FILE *fp</code> 。</p>

<p><strong>read4 的定义：</strong></p>

<pre>参数类型: char[] buf
返回类型: int

注意: buf[] 是目标缓存区不是源缓存区，read4 的返回结果将会复制到 buf[] 当中。
</pre>

<p>下列是一些使用 <code>read4</code> 的例子：</p>

<pre><code>File file(&quot;abcdefghijk&quot;); // 文件名为 &quot;abcdefghijk&quot;， 初始文件指针 (fp) 指向 &#39;a&#39; 
char[] buf = new char[4]; // 创建一个缓存区使其能容纳足够的字符
read4(buf); // read4 返回 4。现在 buf = &quot;abcd&quot;，fp 指向 &#39;e&#39;
read4(buf); // read4 返回 4。现在 buf = &quot;efgh&quot;，fp 指向 &#39;i&#39;
read4(buf); // read4 返回 3。现在 buf = &quot;ijk&quot;，fp 指向文件末尾</code></pre>

<p><strong>read 方法：</strong></p>

<p>通过使用 <code>read4</code> 方法，实现&nbsp;<code>read</code> 方法。该方法可以从文件中读取 n 个字符并将其存储到缓存数组&nbsp;<code>buf</code> 中。您&nbsp;<strong>不能&nbsp;</strong>直接操作文件。</p>

<p>返回值为实际读取的字符。</p>

<p><strong>read&nbsp;的定义：</strong></p>

<pre>参数类型:   char[] buf, int n
返回类型:   int

注意: buf[] 是目标缓存区不是源缓存区，你需要将结果写入 buf[] 中。
</pre>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入： </strong>file = &quot;abc&quot;, n = 4
<strong>输出： </strong>3
<strong>解释： 当执行你的 rand 方法后，buf 需要包含 &quot;abc&quot;。 文件一共 3 个字符，因此返回 3。 注意 &quot;abc&quot; 是文件的内容，不是 buf 的内容，buf 是你需要写入结果的目标缓存区。 </strong></pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入： </strong>file = &quot;abcde&quot;, n = 5
<strong>输出： </strong>5
<strong>解释： 当执行你的 rand 方法后，buf 需要包含 &quot;abcde&quot;。文件共 5 个字符，因此返回 5。</strong>
</pre>

<p><strong>示例 3:</strong></p>

<pre><strong>输入： </strong>file = &quot;abcdABCD1234&quot;, n = 12
<strong>输出： </strong>12
<strong>解释： 当执行你的 rand 方法后，buf 需要包含 &quot;</strong>abcdABCD1234<strong>&quot;。文件一共 12 个字符，因此返回 12。</strong>
</pre>

<p><strong>示例 4:</strong></p>

<pre><strong>输入： </strong>file = &quot;leetcode&quot;, n = 5
<strong>输出： </strong>5
<strong>解释： 当执行你的 rand 方法后，buf 需要包含 &quot;</strong>leetc<strong>&quot;。文件中一共 5 个字符，因此返回 5。</strong>
</pre>

<p>&nbsp;</p>

<p><strong>注意：</strong></p>

<ol>
	<li>你 <strong>不能</strong> 直接操作该文件，文件只能通过 <code>read4</code> 获取而 <strong>不能</strong> 通过 <code>read</code>。</li>
	<li><code>read</code>&nbsp; 函数只在每个测试用例调用一次。</li>
	<li>你可以假定目标缓存数组&nbsp;<code>buf</code> 保证有足够的空间存下 n 个字符。&nbsp;</li>
</ol>
