### [Word Subsets](https://leetcode.com/problems/word-subsets)

<p>We are given two arrays <code>words1</code> and <code>words2</code> of words.&nbsp; Each word is a string of lowercase letters.</p>

<p>Now, say that&nbsp;word <code>b</code> is a subset of word <code>a</code><strong>&nbsp;</strong>if every letter in <code>b</code> occurs in <code>a</code>, <strong>including multiplicity</strong>.&nbsp; For example, <code>&quot;wrr&quot;</code> is a subset of <code>&quot;warrior&quot;</code>, but is not a subset of <code>&quot;world&quot;</code>.</p>

<p>Now say a word <code>a</code> from <code>words1</code> is <em>universal</em> if for every <code>b</code> in <code>words2</code>, <code>b</code>&nbsp;is a subset of <code>a</code>.&nbsp;</p>

<p>Return a list of all universal words in <code>words1</code>.&nbsp; You can return the words in any order.</p>

<p>&nbsp;</p>

<ol>
</ol>

<div>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>words1 = <span id="example-input-1-1">[&quot;amazon&quot;,&quot;apple&quot;,&quot;facebook&quot;,&quot;google&quot;,&quot;leetcode&quot;]</span>, words2 = <span id="example-input-1-2">[&quot;e&quot;,&quot;o&quot;]</span>
<strong>Output: </strong><span id="example-output-1">[&quot;facebook&quot;,&quot;google&quot;,&quot;leetcode&quot;]</span>
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>words1 = <span id="example-input-2-1">[&quot;amazon&quot;,&quot;apple&quot;,&quot;facebook&quot;,&quot;google&quot;,&quot;leetcode&quot;]</span>, words2 = <span id="example-input-2-2">[&quot;l&quot;,&quot;e&quot;]</span>
<strong>Output: </strong><span id="example-output-2">[&quot;apple&quot;,&quot;google&quot;,&quot;leetcode&quot;]</span>
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: </strong>words1 = <span id="example-input-3-1">[&quot;amazon&quot;,&quot;apple&quot;,&quot;facebook&quot;,&quot;google&quot;,&quot;leetcode&quot;]</span>, words2 = <span id="example-input-3-2">[&quot;e&quot;,&quot;oo&quot;]</span>
<strong>Output: </strong><span id="example-output-3">[&quot;facebook&quot;,&quot;google&quot;]</span>
</pre>

<div>
<p><strong>Example 4:</strong></p>

<pre>
<strong>Input: </strong>words1 = <span id="example-input-4-1">[&quot;amazon&quot;,&quot;apple&quot;,&quot;facebook&quot;,&quot;google&quot;,&quot;leetcode&quot;]</span>, words2 = <span id="example-input-4-2">[&quot;lo&quot;,&quot;eo&quot;]</span>
<strong>Output: </strong><span id="example-output-4">[&quot;google&quot;,&quot;leetcode&quot;]</span>
</pre>

<div>
<p><strong>Example 5:</strong></p>

<pre>
<strong>Input: </strong>words1 = <span id="example-input-5-1">[&quot;amazon&quot;,&quot;apple&quot;,&quot;facebook&quot;,&quot;google&quot;,&quot;leetcode&quot;]</span>, words2 = <span id="example-input-5-2">[&quot;ec&quot;,&quot;oc&quot;,&quot;ceo&quot;]</span>
<strong>Output: </strong><span id="example-output-5">[&quot;facebook&quot;,&quot;leetcode&quot;]</span>
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= words1.length, words2.length &lt;= 10000</code></li>
	<li><code>1 &lt;= words1[i].length, words2[i].length&nbsp;&lt;= 10</code></li>
	<li><code>words1[i]</code> and <code>words2[i]</code> consist only of lowercase letters.</li>
	<li>All words in <code>words1[i]</code> are unique: there isn&#39;t <code>i != j</code> with <code>words1[i] == words1[j]</code>.</li>
</ol>
</div>
</div>
</div>
</div>
</div>
