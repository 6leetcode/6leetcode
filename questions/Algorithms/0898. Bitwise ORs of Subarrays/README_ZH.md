### [子数组按位或操作](https://leetcode-cn.com/problems/bitwise-ors-of-subarrays)

<p>我们有一个非负整数数组<meta charset="UTF-8" />&nbsp;<code>arr</code>&nbsp;。</p>

<p>对于每个（连续的）子数组<meta charset="UTF-8" />&nbsp;<code>sub = [arr[i], arr[i + 1], ..., arr[j]]</code>&nbsp;（&nbsp;<code>i &lt;= j</code>），我们对<meta charset="UTF-8" />&nbsp;<code>sub</code>&nbsp;中的每个元素进行按位或操作，获得结果<meta charset="UTF-8" />&nbsp;<code>arr[i] | arr[i + 1] | ... | arr[j]</code>&nbsp;。</p>

<p>返回可能结果的数量。 多次出现的结果在最终答案中仅计算一次。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>arr = [0]
<strong>输出：</strong>1
<strong>解释：</strong>
只有一个可能的结果 0 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>arr = [1,1,2]
<strong>输出：</strong>3
<strong>解释：</strong>
可能的子数组为 [1]，[1]，[2]，[1, 1]，[1, 2]，[1, 1, 2]。
产生的结果为 1，1，2，1，3，3 。
有三个唯一值，所以答案是 3 。
</pre>

<p><strong>示例&nbsp;3：</strong></p>

<pre>
<strong>输入：</strong>arr = [1,2,4]
<strong>输出：</strong>6
<strong>解释：</strong>
可能的结果是 1，2，3，4，6，以及 7 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong><meta charset="UTF-8" /></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i]&nbsp;&lt;= 10<sup>9</sup></code>​​​​​​​</li>
</ul>
