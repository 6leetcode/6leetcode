### [检查一个数是否在数组中占绝大多数](https://leetcode-cn.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array)

<p>给出一个按 <strong>非递减</strong>&nbsp;顺序排列的数组&nbsp;<code>nums</code>，和一个目标数值&nbsp;<code>target</code>。假如数组&nbsp;<code>nums</code> 中绝大多数元素的数值都等于&nbsp;<code>target</code>，则返回&nbsp;<code>True</code>，否则请返回&nbsp;<code>False</code>。</p>

<p>所谓占绝大多数，是指在长度为 <code>N</code>&nbsp;的数组中出现必须<strong>&nbsp;超过&nbsp;<code>N/2</code></strong>&nbsp;<strong>次</strong>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>nums = [2,4,5,5,5,5,5,6,6], target = 5
<strong>输出：</strong>true
<strong>解释：</strong>
数字 5 出现了 5 次，而数组的长度为 9。
所以，5 在数组中占绝大多数，因为 5 次 &gt; 9/2。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>nums = [10,100,101,101], target = 101
<strong>输出：</strong>false
<strong>解释：</strong>
数字 101 出现了 2 次，而数组的长度是 4。
所以，101 <strong>不是 </strong>数组占绝大多数的元素，因为 2 次 = 4/2。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10^9</code></li>
	<li><code>1 &lt;= target &lt;= 10^9</code></li>
</ol>
