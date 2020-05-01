### [上升下降字符串](https://leetcode-cn.com/problems/increasing-decreasing-string)

<p>给你一个字符串&nbsp;<code>s</code>&nbsp;，请你根据下面的算法重新构造字符串：</p>

<ol>
	<li>从 <code>s</code>&nbsp;中选出 <strong>最小</strong>&nbsp;的字符，将它 <strong>接在</strong>&nbsp;结果字符串的后面。</li>
	<li>从 <code>s</code>&nbsp;剩余字符中选出&nbsp;<strong>最小</strong>&nbsp;的字符，且该字符比上一个添加的字符大，将它 <strong>接在</strong>&nbsp;结果字符串后面。</li>
	<li>重复步骤 2 ，直到你没法从 <code>s</code>&nbsp;中选择字符。</li>
	<li>从 <code>s</code>&nbsp;中选出 <strong>最大</strong>&nbsp;的字符，将它 <strong>接在</strong>&nbsp;结果字符串的后面。</li>
	<li>从 <code>s</code>&nbsp;剩余字符中选出&nbsp;<strong>最大</strong>&nbsp;的字符，且该字符比上一个添加的字符小，将它 <strong>接在</strong>&nbsp;结果字符串后面。</li>
	<li>重复步骤 5&nbsp;，直到你没法从 <code>s</code>&nbsp;中选择字符。</li>
	<li>重复步骤 1 到 6 ，直到 <code>s</code>&nbsp;中所有字符都已经被选过。</li>
</ol>

<p>在任何一步中，如果最小或者最大字符不止一个&nbsp;，你可以选择其中任意一个，并将其添加到结果字符串。</p>

<p>请你返回将&nbsp;<code>s</code>&nbsp;中字符重新排序后的 <strong>结果字符串</strong> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = &quot;aaaabbbbcccc&quot;
<strong>输出：</strong>&quot;abccbaabccba&quot;
<strong>解释：</strong>第一轮的步骤 1，2，3 后，结果字符串为 result = &quot;abc&quot;
第一轮的步骤 4，5，6 后，结果字符串为 result = &quot;abccba&quot;
第一轮结束，现在 s = &quot;aabbcc&quot; ，我们再次回到步骤 1
第二轮的步骤 1，2，3 后，结果字符串为 result = &quot;abccbaabc&quot;
第二轮的步骤 4，5，6 后，结果字符串为 result = &quot;abccbaabccba&quot;
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = &quot;rat&quot;
<strong>输出：</strong>&quot;art&quot;
<strong>解释：</strong>单词 &quot;rat&quot; 在上述算法重排序以后变成 &quot;art&quot;
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = &quot;leetcode&quot;
<strong>输出：</strong>&quot;cdelotee&quot;
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = &quot;ggggggg&quot;
<strong>输出：</strong>&quot;ggggggg&quot;
</pre>

<p><strong>示例 5：</strong></p>

<pre><strong>输入：</strong>s = &quot;spo&quot;
<strong>输出：</strong>&quot;ops&quot;
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 500</code></li>
	<li><code>s</code>&nbsp;只包含小写英文字母。</li>
</ul>
