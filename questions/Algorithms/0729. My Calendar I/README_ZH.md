### [我的日程安排表 I](https://leetcode-cn.com/problems/my-calendar-i)

<p>实现一个 <code>MyCalendar</code> 类来存放你的日程安排。如果要添加的时间内没有其他安排，则可以存储这个新的日程安排。</p>

<p><code>MyCalendar</code> 有一个 <code>book(int start, int end)</code>方法。它意味着在 start 到 end 时间内增加一个日程安排，注意，这里的时间是半开区间，即 <code>[start, end)</code>, 实数 <code>x</code> 的范围为，  <code>start <= x < end</code>。</p>

<p>当两个日程安排有一些时间上的交叉时（例如两个日程安排都在同一时间内），就会产生重复预订。</p>

<p>每次调用 <code>MyCalendar.book</code>方法时，如果可以将日程安排成功添加到日历中而不会导致重复预订，返回 <code>true</code>。否则，返回 <code>false</code> 并且不要将该日程安排添加到日历中。</p>

<p>请按照以下步骤调用 <code>MyCalendar</code> 类: <code>MyCalendar cal = new MyCalendar();</code> <code>MyCalendar.book(start, end)</code></p>

<p><strong>示例 1:</strong></p>

<pre>
MyCalendar();
MyCalendar.book(10, 20); // returns true
MyCalendar.book(15, 25); // returns false
MyCalendar.book(20, 30); // returns true
<strong>解释:</strong> 
第一个日程安排可以添加到日历中.  第二个日程安排不能添加到日历中，因为时间 15 已经被第一个日程安排预定了。
第三个日程安排可以添加到日历中，因为第一个日程安排并不包含时间 20 。
</pre>

<p><strong>说明:</strong></p>

<ul>
	<li>每个测试用例，调用 <code>MyCalendar.book</code> 函数最多不超过 <code>1000</code>次。</li>
	<li>调用函数 <code>MyCalendar.book(start, end)</code>时， <code>start</code> 和 <code>end</code> 的取值范围为 <code>[0, 10^9]</code>。</li>
</ul>
