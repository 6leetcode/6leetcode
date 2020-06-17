### [单词规律 II](https://leetcode-cn.com/problems/word-pattern-ii)

<p>给你一种规律&nbsp;<code>pattern</code>&nbsp;和一个字符串&nbsp;<code>str</code>，请你判断&nbsp;<code>str</code>&nbsp;是否遵循其相同的规律。</p>

<p>这里我们指的是 <strong>完全遵循</strong>，例如 <code>pattern</code>&nbsp;里的每个字母和字符串&nbsp;<code>str</code><strong>&nbsp;</strong>中每个 <strong>非空</strong> 单词之间，存在着双向连接的对应规律。</p>

<p>&nbsp;</p>

<p><strong>示例1:</strong></p>

<pre><strong>输入:</strong> pattern = <code>&quot;</code>abab<code>&quot;</code>, str = <code>&quot;</code>redblueredblue<code>&quot;</code>
<strong>输出:</strong> true</pre>

<p><strong>示例2:</strong></p>

<pre><strong>输入:</strong> pattern = <code>&quot;</code>aaaa<code>&quot;</code>, str = <code>&quot;</code>asdasdasdasd<code>&quot;</code>
<strong>输出:</strong> true</pre>

<p><strong>示例2:</strong></p>

<pre><strong>输入:</strong> pattern = <code>&quot;</code>aabb<code>&quot;</code>, str = <code>&quot;</code>xyzabcxzyabc<code>&quot;</code>
<strong>输出:</strong> false</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>你可以默认&nbsp;<code>pattern</code>&nbsp;和 <code>str</code>&nbsp;都只会包含小写字母。</li>
</ul>
