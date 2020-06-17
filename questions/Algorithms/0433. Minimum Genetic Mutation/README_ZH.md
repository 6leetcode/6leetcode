### [最小基因变化](https://leetcode-cn.com/problems/minimum-genetic-mutation)

<p>一条基因序列由一个带有8个字符的字符串表示，其中每个字符都属于 <code>&quot;A&quot;</code>, <code>&quot;C&quot;</code>, <code>&quot;G&quot;</code>, <code>&quot;T&quot;</code>中的任意一个。</p>

<p>假设我们要调查一个基因序列的变化。<strong>一次</strong>基因变化意味着这个基因序列中的<strong>一个</strong>字符发生了变化。</p>

<p>例如，基因序列由<code>&quot;AACCGGTT&quot;</code>&nbsp;变化至&nbsp;<code>&quot;AACCGGTA&quot;&nbsp;</code>即发生了一次基因变化。</p>

<p>与此同时，每一次基因变化的结果，都需要是一个合法的基因串，即该结果属于一个基因库。</p>

<p>现在给定3个参数 &mdash; start, end, bank，分别代表起始基因序列，目标基因序列及基因库，请找出能够使起始基因序列变化为目标基因序列所需的最少变化次数。如果无法实现目标变化，请返回 -1。</p>

<p><strong>注意:</strong></p>

<ol>
	<li>起始基因序列默认是合法的，但是它并不一定会出现在基因库中。</li>
	<li>所有的目标基因序列必须是合法的。</li>
	<li>假定起始基因序列与目标基因序列是不一样的。</li>
</ol>

<p><strong>示例 1:</strong></p>

<pre>
start: &quot;AACCGGTT&quot;
end:   &quot;AACCGGTA&quot;
bank: [&quot;AACCGGTA&quot;]

返回值: 1
</pre>

<p><strong>示例 2:</strong></p>

<pre>
start: &quot;AACCGGTT&quot;
end:   &quot;AAACGGTA&quot;
bank: [&quot;AACCGGTA&quot;, &quot;AACCGCTA&quot;, &quot;AAACGGTA&quot;]

返回值: 2
</pre>

<p><strong>示例 3:</strong></p>

<pre>
start: &quot;AAAAACCC&quot;
end:   &quot;AACCCCCC&quot;
bank: [&quot;AAAACCCC&quot;, &quot;AAACCCCC&quot;, &quot;AACCCCCC&quot;]

返回值: 3
</pre>
