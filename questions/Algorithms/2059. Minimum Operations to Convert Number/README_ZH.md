### [转化数字的最小运算数](https://leetcode-cn.com/problems/minimum-operations-to-convert-number)

<p>给你一个下标从 <strong>0</strong> 开始的整数数组 <code>nums</code> ，该数组由 <strong>互不相同</strong> 的数字组成。另给你两个整数 <code>start</code> 和 <code>goal</code> 。</p>

<p>整数 <code>x</code> 的值最开始设为 <code>start</code> ，你打算执行一些运算使 <code>x</code> 转化为 <code>goal</code> 。你可以对数字 <code>x</code> 重复执行下述运算：</p>

<p>如果 <code>0 &lt;= x &lt;= 1000</code> ，那么，对于数组中的任一下标 <code>i</code>（<code>0 &lt;= i &lt; nums.length</code>），可以将 <code>x</code> 设为下述任一值：</p>

<ul>
	<li><code>x + nums[i]</code></li>
	<li><code>x - nums[i]</code></li>
	<li><code>x ^ nums[i]</code>（按位异或 XOR）</li>
</ul>

<p>注意，你可以按任意顺序使用每个 <code>nums[i]</code> 任意次。使 <code>x</code> 越过 <code>0 &lt;= x &lt;= 1000</code> 范围的运算同样可以生效，但该该运算执行后将不能执行其他运算。</p>

<p>返回将 <code>x = start</code><em> </em>转化为<em> </em><code>goal</code><em> </em>的最小操作数；如果无法完成转化，则返回<em> </em><code>-1</code><em> </em>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [2,4,12], start = 2, goal = 12
<strong>输出：</strong>2
<strong>解释：</strong>
可以按 2 → 14 → 12 的转化路径进行，只需执行下述 2 次运算：
- 2 + 12 = 14
- 14 - 2 = 12
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [3,5,7], start = 0, goal = -4
<strong>输出：</strong>2
<strong>解释：</strong>
可以按 0 → 3 → -4 的转化路径进行，只需执行下述 2 次运算：
- 0 + 3 = 3
- 3 - 7 = -4
注意，最后一步运算使 x 超过范围 0 &lt;= x &lt;= 1000 ，但该运算仍然可以生效。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [2,8,16], start = 0, goal = 1
<strong>输出：</strong>-1
<strong>解释：</strong>
无法将 0 转化为 1</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i], goal &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= start &lt;= 1000</code></li>
	<li><code>start != goal</code></li>
	<li><code>nums</code> 中的所有整数互不相同</li>
</ul>
