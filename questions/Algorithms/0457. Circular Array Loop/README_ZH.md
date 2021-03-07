### [环形数组是否存在循环](https://leetcode-cn.com/problems/circular-array-loop)

<p>存在一个不含 <code>0</code> 的<strong> 环形 </strong>数组 <code>nums</code> ，每个 <code>nums[i]</code> 都表示位于下标 <code>i</code> 的角色应该向前或向后移动的下标个数：</p>

<ul>
	<li>如果 <code>nums[i]</code> 是正数，<strong>向前</strong> 移动 <code>nums[i]</code> 步</li>
	<li>如果 <code>nums[i]</code> 是负数，<strong>向后</strong> 移动 <code>nums[i]</code> 步</li>
</ul>

<p>因为数组是 <strong>环形</strong> 的，所以可以假设从最后一个元素向前移动一步会到达第一个元素，而第一个元素向后移动一步会到达最后一个元素。</p>

<p>数组中的 <strong>循环</strong> 由长度为 <code>k</code> 的下标序列 <code>seq</code> ：</p>

<ul>
	<li>遵循上述移动规则将导致重复下标序列 <code>seq[0] -> seq[1] -> ... -> seq[k - 1] -> seq[0] -> ...</code></li>
	<li>所有 <code>nums[seq[j]]</code> 应当不是 <strong>全正</strong> 就是 <strong>全负</strong></li>
	<li><code>k > 1</code></li>
</ul>

<p>如果 <code>nums</code> 中存在循环，返回 <code>true</code> ；否则，返回<em> </em><code>false</code><em> </em>。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [2,-1,1,2,2]
<strong>输出：</strong>true
<strong>解释：</strong>存在循环，按下标 0 -> 2 -> 3 -> 0 。循环长度为 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [-1,2]
<strong>输出：</strong>false
<strong>解释：</strong>按下标 1 -> 1 -> 1 ... 的运动无法构成循环，因为循环的长度为 1 。根据定义，循环的长度必须大于 1 。
</pre>

<p><strong>示例 3:</strong></p>

<pre>
<strong>输入：</strong>nums = [-2,1,-1,-2,-2]
<strong>输出：</strong>false
<strong>解释：</strong>按下标 1 -> 2 -> 1 -> ... 的运动无法构成循环，因为 nums[1] 是正数，而 nums[2] 是负数。
所有 nums[seq[j]] 应当不是全正就是全负。</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= nums.length <= 5000</code></li>
	<li><code>-1000 <= nums[i] <= 1000</code></li>
	<li><code>nums[i] != 0</code></li>
</ul>

<p> </p>

<p><strong>进阶：</strong>你能设计一个时间复杂度为 <code>O(n)</code> 且额外空间复杂度为 <code>O(1)</code> 的算法吗？</p>
