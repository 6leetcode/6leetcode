### [查询差绝对值的最小值](https://leetcode-cn.com/problems/minimum-absolute-difference-queries)

<p>一个数组 <code>a</code> 的 <strong>差绝对值的最小值</strong> 定义为：<code>0 <= i < j < a.length</code> 且 <code>a[i] != a[j]</code> 的<strong> </strong><code><span style="">|a[i] - a[j]|</span></code> 的 <strong>最小值</strong>。如果 <code>a</code> 中所有元素都 <strong>相同</strong> ，那么差绝对值的最小值为 <code>-1</code> 。</p>

<ul>
	<li>比方说，数组 <code>[5,<strong>2</strong>,<strong>3</strong>,7,2]</code> 差绝对值的最小值是 <code>|2 - 3| = 1</code> 。注意答案不为 <code>0</code> ，因为 <code>a[i]</code> 和 <code>a[j]</code> 必须不相等。</li>
</ul>

<p>给你一个整数数组 <code>nums</code> 和查询数组 <code>queries</code> ，其中 <code>queries[i] = [l<sub>i</sub>, r<sub>i</sub>]</code> 。对于每个查询 <code>i</code> ，计算 <strong>子数组</strong> <code>nums[l<sub>i</sub>...r<sub>i</sub>]</code> 中 <strong>差绝对值的最小值</strong> ，子数组 <code>nums[l<sub>i</sub>...r<sub>i</sub>]</code> 包含 <code>nums</code> 数组（下标从 <strong>0</strong> 开始）中下标在 <code>l<sub>i</sub></code> 和 <code>r<sub>i</sub></code> 之间的所有元素（包含 <code>l<sub>i</sub></code> 和 <code>r<sub>i</sub></code> 在内）。</p>

<p>请你返回 <code>ans</code> <strong>数组</strong>，其中 <code>ans[i]</code> 是第 <code>i</code> 个查询的答案。</p>

<p><strong>子数组</strong> 是一个数组中连续的一段元素。</p>

<p><code>|x|</code> 的值定义为：</p>

<ul>
	<li>如果 <code>x >= 0</code> ，那么值为 <code>x</code> 。</li>
	<li>如果 <code>x < 0</code> ，那么值为 <code>-x</code> 。</li>
</ul>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums = [1,3,4,8], queries = [[0,1],[1,2],[2,3],[0,3]]
<b>输出：</b>[2,1,4,1]
<b>解释：</b>查询结果如下：
- queries[0] = [0,1]：子数组是 [<strong>1</strong>,<strong>3</strong>] ，差绝对值的最小值为 |1-3| = 2 。
- queries[1] = [1,2]：子数组是 [<strong>3</strong>,<strong>4</strong>] ，差绝对值的最小值为 |3-4| = 1 。
- queries[2] = [2,3]：子数组是 [<strong>4</strong>,<strong>8</strong>] ，差绝对值的最小值为 |4-8| = 4 。
- queries[3] = [0,3]：子数组是 [1,<strong>3</strong>,<strong>4</strong>,8] ，差的绝对值的最小值为 |3-4| = 1 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums = [4,5,2,2,7,10], queries = [[2,3],[0,2],[0,5],[3,5]]
<b>输出：</b>[-1,1,1,3]
<strong>解释：</strong>查询结果如下：
- queries[0] = [2,3]：子数组是 [2,2] ，差绝对值的最小值为 -1 ，因为所有元素相等。
- queries[1] = [0,2]：子数组是 [<strong>4</strong>,<strong>5</strong>,2] ，差绝对值的最小值为 |4-5| = 1 。
- queries[2] = [0,5]：子数组是 [<strong>4</strong>,<strong>5</strong>,2,2,7,10] ，差绝对值的最小值为 |4-5| = 1 。
- queries[3] = [3,5]：子数组是 [2,<strong>7</strong>,<strong>10</strong>] ，差绝对值的最小值为 |7-10| = 3 。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>2 <= nums.length <= 10<sup>5</sup></code></li>
	<li><code>1 <= nums[i] <= 100</code></li>
	<li><code>1 <= queries.length <= 2 * 10<sup>4</sup></code></li>
	<li><code>0 <= l<sub>i</sub> < r<sub>i</sub> < nums.length</code></li>
</ul>
