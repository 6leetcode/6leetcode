### [二进制手表](https://leetcode-cn.com/problems/binary-watch)

<p>二进制手表顶部有 4 个 LED 代表<strong> 小时（0-11）</strong>，底部的 6 个 LED 代表<strong> 分钟（0-59）</strong>。每个 LED 代表一个 0 或 1，最低位在右侧。</p>

<ul>
	<li>例如，下面的二进制手表读取 <code>"3:25"</code> 。</li>
</ul>

<p><img src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2021/03/29/binary_clock_samui_moon.jpg" style="height: 300px; width" /></p>

<p><small><em>（图源：<a href="https://commons.m.wikimedia.org/wiki/File:Binary_clock_samui_moon.jpg">WikiMedia - Binary clock samui moon.jpg</a> ，许可协议：<a href="https://creativecommons.org/licenses/by-sa/3.0/deed.en">Attribution-ShareAlike 3.0 Unported (CC BY-SA 3.0)</a> ）</em></small></p>

<p>给你一个整数 <code>turnedOn</code> ，表示当前亮着的 LED 的数量，返回二进制手表可以表示的所有可能时间。你可以 <strong>按任意顺序</strong> 返回答案。</p>

<p>小时不会以零开头：</p>

<ul>
	<li>例如，<code>"01:00"</code> 是无效的时间，正确的写法应该是 <code>"1:00"</code> 。</li>
</ul>

<p>分钟必须由两位数组成，可能会以零开头：</p>

<ul>
	<li>例如，<code>"10:2"</code> 是无效的时间，正确的写法应该是 <code>"10:02"</code> 。</li>
</ul>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>turnedOn = 1
<strong>输出：</strong>["0:01","0:02","0:04","0:08","0:16","0:32","1:00","2:00","4:00","8:00"]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>turnedOn = 9
<strong>输出：</strong>[]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>0 <= turnedOn <= 10</code></li>
</ul>
