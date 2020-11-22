### [航班预订统计](https://leetcode-cn.com/problems/corporate-flight-bookings)

<p>这里有 <code>n</code> 个航班，它们分别从 <code>1</code> 到 <code>n</code> 进行编号。</p>

<p>我们这儿有一份航班预订表，表中第 <code>i</code> 条预订记录 <code>bookings[i] = [j, k, l]</code> 意味着我们在从 <font color="#c7254e" face="Menlo, Monaco, Consolas, Courier New, monospace"><span style="font-size: 12.6px; background-color: rgb(249, 242, 244);">j</span></font> 到 <font color="#c7254e" face="Menlo, Monaco, Consolas, Courier New, monospace"><span style="font-size: 12.6px; background-color: rgb(249, 242, 244);">k</span></font> 的每个航班上预订了 <font color="#c7254e" face="Menlo, Monaco, Consolas, Courier New, monospace"><span style="font-size: 12.6px; background-color: rgb(249, 242, 244);">l</span></font> 个座位。</p>

<p>请你返回一个长度为 <code>n</code> 的数组 <code>answer</code>，按航班编号顺序返回每个航班上预订的座位数。</p>

<p> </p>

<p><strong>示例：</strong></p>

<pre>
<strong>输入：</strong>bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
<strong>输出：</strong>[10,55,45,25,25]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= bookings.length <= 20000</code></li>
	<li><code>1 <= bookings[i][0] <= bookings[i][1] <= n <= 20000</code></li>
	<li><code>1 <= bookings[i][2] <= 10000</code></li>
</ul>
