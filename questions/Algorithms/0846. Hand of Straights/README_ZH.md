### [一手顺子](https://leetcode-cn.com/problems/hand-of-straights)

<p>爱丽丝有一手（<code>hand</code>）由整数数组给定的牌。 </p>

<p>现在她想把牌重新排列成组，使得每个组的大小都是 <code>W</code>，且由 <code>W</code> 张连续的牌组成。</p>

<p>如果她可以完成分组就返回 <code>true</code>，否则返回 <code>false</code>。</p>

<p> </p>

<p><strong>注意：</strong>此题目与 1296 重复：<a href="https://leetcode-cn.com/problems/divide-array-in-sets-of-k-consecutive-numbers/" target="_blank">https://leetcode-cn.com/problems/divide-array-in-sets-of-k-consecutive-numbers/</a></p>

<p> </p>

<ol>
</ol>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>hand = [1,2,3,6,2,3,4,7,8], W = 3
<strong>输出：</strong>true
<strong>解释：</strong>爱丽丝的手牌可以被重新排列为 <code>[1,2,3]，[2,3,4]，[6,7,8]</code>。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>hand = [1,2,3,4,5], W = 4
<strong>输出：</strong>false
<strong>解释：</strong>爱丽丝的手牌无法被重新排列成几个大小为 4 的组。</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= hand.length <= 10000</code></li>
	<li><code>0 <= hand[i] <= 10^9</code></li>
	<li><code>1 <= W <= hand.length</code></li>
</ul>
