### [恰好移动 k 步到达某一位置的方法数目](https://leetcode-cn.com/problems/number-of-ways-to-reach-a-position-after-exactly-k-steps)

<p>给你两个 <strong>正</strong> 整数 <code>startPos</code> 和 <code>endPos</code> 。最初，你站在 <strong>无限</strong> 数轴上位置 <code>startPos</code> 处。在一步移动中，你可以向左或者向右移动一个位置。</p>

<p>给你一个正整数 <code>k</code> ，返回从 <code>startPos</code> 出发、<strong>恰好</strong> 移动 <code>k</code> 步并到达 <code>endPos</code> 的 <strong>不同</strong> 方法数目。由于答案可能会很大，返回对 <code>10<sup>9</sup> + 7</code> <strong>取余</strong> 的结果。</p>

<p>如果所执行移动的顺序不完全相同，则认为两种方法不同。</p>

<p><strong>注意：</strong>数轴包含负整数<strong>。</strong></p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>startPos = 1, endPos = 2, k = 3
<strong>输出：</strong>3
<strong>解释：</strong>存在 3 种从 1 到 2 且恰好移动 3 步的方法：
- 1 -&gt; 2 -&gt; 3 -&gt; 2.
- 1 -&gt; 2 -&gt; 1 -&gt; 2.
- 1 -&gt; 0 -&gt; 1 -&gt; 2.
可以证明不存在其他方法，所以返回 3 。</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>startPos = 2, endPos = 5, k = 10
<strong>输出：</strong>0
<strong>解释：</strong>不存在从 2 到 5 且恰好移动 10 步的方法。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= startPos, endPos, k &lt;= 1000</code></li>
</ul>
