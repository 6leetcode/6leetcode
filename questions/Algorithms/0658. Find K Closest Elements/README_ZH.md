### [找到 K 个最接近的元素](https://leetcode-cn.com/problems/find-k-closest-elements)

<p>给定一个排序好的数组 <code>arr</code> ，两个整数 <code>k</code> 和 <code>x</code> ，从数组中找到最靠近 <code>x</code>（两数之差最小）的 <code>k</code> 个数。返回的结果必须要是按升序排好的。</p>

<p>整数 <code>a</code> 比整数 <code>b</code> 更接近 <code>x</code> 需要满足：</p>

<ul>
	<li><code>|a - x| < |b - x|</code> 或者</li>
	<li><code>|a - x| == |b - x|</code> 且 <code>a < b</code></li>
</ul>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>arr = [1,2,3,4,5], k = 4, x = 3
<strong>输出：</strong>[1,2,3,4]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>arr = [1,2,3,4,5], k = 4, x = -1
<strong>输出：</strong>[1,2,3,4]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= k <= arr.length</code></li>
	<li><code>1 <= arr.length <= 10<sup>4</sup></code></li>
	<li>数组里的每个元素与 <code>x</code> 的绝对值不超过 <code>10<sup>4</sup></code></li>
</ul>
