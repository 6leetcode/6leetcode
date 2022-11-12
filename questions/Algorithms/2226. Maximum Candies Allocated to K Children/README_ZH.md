### [每个小孩最多能分到多少糖果](https://leetcode-cn.com/problems/maximum-candies-allocated-to-k-children)

<p>给你一个 <strong>下标从 0 开始</strong> 的整数数组 <code>candies</code> 。数组中的每个元素表示大小为 <code>candies[i]</code> 的一堆糖果。你可以将每堆糖果分成任意数量的 <strong>子堆</strong> ，但 <strong>无法</strong> 再将两堆合并到一起。</p>

<p>另给你一个整数 <code>k</code> 。你需要将这些糖果分配给 <code>k</code> 个小孩，使每个小孩分到 <strong>相同</strong> 数量的糖果。每个小孩可以拿走 <strong>至多一堆</strong> 糖果，有些糖果可能会不被分配。</p>

<p>返回每个小孩可以拿走的 <strong>最大糖果数目</strong><em> </em>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>candies = [5,8,6], k = 3
<strong>输出：</strong>5
<strong>解释：</strong>可以将 candies[1] 分成大小分别为 5 和 3 的两堆，然后把 candies[2] 分成大小分别为 5 和 1 的两堆。现在就有五堆大小分别为 5、5、3、5 和 1 的糖果。可以把 3 堆大小为 5 的糖果分给 3 个小孩。可以证明无法让每个小孩得到超过 5 颗糖果。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>candies = [2,5], k = 11
<strong>输出：</strong>0
<strong>解释：</strong>总共有 11 个小孩，但只有 7 颗糖果，但如果要分配糖果的话，必须保证每个小孩至少能得到 1 颗糖果。因此，最后每个小孩都没有得到糖果，答案是 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= candies.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= candies[i] &lt;= 10<sup>7</sup></code></li>
	<li><code>1 &lt;= k &lt;= 10<sup>12</sup></code></li>
</ul>
