### [RLE 迭代器](https://leetcode-cn.com/problems/rle-iterator)

<p>我们可以使用游程编码(即&nbsp;<strong>RLE&nbsp;</strong>)来编码一个整数序列。在偶数长度&nbsp;<code>encoding</code>&nbsp;( <strong>从 0 开始</strong> )的游程编码数组中，对于所有偶数 <code>i</code> ，<code>encoding[i]</code>&nbsp;告诉我们非负整数&nbsp;<code>encoding[i + 1]</code>&nbsp;在序列中重复的次数。</p>

<ul>
	<li>例如，序列&nbsp;<code>arr = [8,8,8,5,5]</code>&nbsp;可以被编码为 <code>encoding =[3,8,2,5]</code> 。<code>encoding =[3,8,0,9,2,5]</code>&nbsp;和 <code>encoding =[2,8,1,8,2,5]</code> 也是&nbsp;<code>arr</code> 有效的 <strong>RLE</strong> 。</li>
</ul>

<p>给定一个游程长度的编码数组，设计一个迭代器来遍历它。</p>

<p>实现 <code>RLEIterator</code> 类:</p>

<ul>
	<li><code>RLEIterator(int[] encoded)</code>&nbsp;用编码后的数组初始化对象。</li>
	<li><code>int next(int n)</code> 以这种方式耗尽后 <code>n</code> 个元素并返回最后一个耗尽的元素。如果没有剩余的元素要耗尽，则返回 <code>-1</code> 。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：
</strong>["RLEIterator","next","next","next","next"]
[[[3,8,0,9,2,5]],[2],[1],[1],[2]]
<strong>输出：
</strong>[null,8,8,5,-1]
<strong>解释：</strong>
RLEIterator rLEIterator = new RLEIterator([3, 8, 0, 9, 2, 5]); // 这映射到序列 [8,8,8,5,5]。
rLEIterator.next(2); // 耗去序列的 2 个项，返回 8。现在剩下的序列是 [8, 5, 5]。
rLEIterator.next(1); // 耗去序列的 1 个项，返回 8。现在剩下的序列是 [5, 5]。
rLEIterator.next(1); // 耗去序列的 1 个项，返回 5。现在剩下的序列是 [5]。
rLEIterator.next(2); // 耗去序列的 2 个项，返回 -1。 这是由于第一个被耗去的项是 5，
但第二个项并不存在。由于最后一个要耗去的项不存在，我们返回 -1。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>2 &lt;= encoding.length &lt;= 1000</code></li>
	<li><code>encoding.length</code>&nbsp;为偶</li>
	<li><code>0 &lt;= encoding[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
	<li>每个测试用例调用<code>next </code>不高于&nbsp;<code>1000</code>&nbsp;次&nbsp;</li>
</ul>
