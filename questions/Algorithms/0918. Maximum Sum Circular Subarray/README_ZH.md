### [环形子数组的最大和](https://leetcode-cn.com/problems/maximum-sum-circular-subarray)

<p>给定一个长度为 <code>n</code> 的<strong>环形整数数组</strong>&nbsp;<code>nums</code>&nbsp;，返回<em>&nbsp;<code>nums</code>&nbsp;的非空 <strong>子数组</strong> 的最大可能和&nbsp;</em>。</p>

<p><strong>环形数组</strong><em>&nbsp;</em>意味着数组的末端将会与开头相连呈环状。形式上， <code>nums[i]</code> 的下一个元素是 <code>nums[(i + 1) % n]</code> ， <code>nums[i]</code>&nbsp;的前一个元素是 <code>nums[(i - 1 + n) % n]</code> 。</p>

<p><strong>子数组</strong> 最多只能包含固定缓冲区&nbsp;<code>nums</code>&nbsp;中的每个元素一次。形式上，对于子数组&nbsp;<code>nums[i], nums[i + 1], ..., nums[j]</code>&nbsp;，不存在&nbsp;<code>i &lt;= k1, k2 &lt;= j</code>&nbsp;其中&nbsp;<code>k1 % n == k2 % n</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,-2,3,-2]
<strong>输出：</strong>3
<strong>解释：</strong>从子数组 [3] 得到最大和 3
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [5,-3,5]
<strong>输出：</strong>10
<strong>解释：</strong>从子数组 [5,5] 得到最大和 5 + 5 = 10
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [3,-2,2,-3]
<strong>输出：</strong>3
<strong>解释：</strong>从子数组 [3] 和 [3,-2,2] 都可以得到最大和 3
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-3 * 10<sup>4</sup>&nbsp;&lt;= nums[i] &lt;= 3 * 10<sup>4</sup></code>​​​​​​​</li>
</ul>
