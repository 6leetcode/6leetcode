### [你能构造出连续值的最大数目](https://leetcode-cn.com/problems/maximum-number-of-consecutive-values-you-can-make)

<p>给你一个长度为 <code>n</code> 的整数数组 <code>coins</code> ，它代表你拥有的 <code>n</code> 个硬币。第 <code>i</code> 个硬币的值为 <code>coins[i]</code> 。如果你从这些硬币中选出一部分硬币，它们的和为 <code>x</code> ，那么称，你可以 <strong>构造</strong> 出 <code>x</code> 。</p>

<p>请返回从 <code>0</code> 开始（<strong>包括</strong> <code>0</code> ），你最多能 <strong>构造</strong> 出多少个连续整数。</p>

<p>你可能有多个相同值的硬币。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>coins = [1,3]
<b>输出：</b>2
<strong>解释：</strong>你可以得到以下这些值：
- 0：什么都不取 []
- 1：取 [1]
从 0 开始，你可以构造出 2 个连续整数。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>coins = [1,1,1,4]
<b>输出：</b>8
<strong>解释：</strong>你可以得到以下这些值：
- 0：什么都不取 []
- 1：取 [1]
- 2：取 [1,1]
- 3：取 [1,1,1]
- 4：取 [4]
- 5：取 [4,1]
- 6：取 [4,1,1]
- 7：取 [4,1,1,1]
从 0 开始，你可以构造出 8 个连续整数。</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>nums = [1,4,10,3,1]
<b>输出：</b>20</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>coins.length == n</code></li>
	<li><code>1 <= n <= 4 * 10<sup>4</sup></code></li>
	<li><code>1 <= coins[i] <= 4 * 10<sup>4</sup></code></li>
</ul>
