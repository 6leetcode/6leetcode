### [二进制手表](https://leetcode-cn.com/problems/binary-watch)

<p>二进制手表顶部有 4 个 LED 代表<strong> 小时（0-11）</strong>，底部的 6 个 LED 代表<strong> 分钟（0-59）</strong>。</p>

<p>每个 LED 代表一个 0 或 1，最低位在右侧。</p>

<p><img src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2021/03/29/binary_clock_samui_moon.jpg" style="height: 300px; width" /></p>

<p><small><em>（图源：<a href="https://commons.m.wikimedia.org/wiki/File:Binary_clock_samui_moon.jpg">WikiMedia - Binary clock samui moon.jpg</a> ，许可协议：<a href="https://creativecommons.org/licenses/by-sa/3.0/deed.en">Attribution-ShareAlike 3.0 Unported (CC BY-SA 3.0)</a> ）</em></small></p>

<p>例如，上面的二进制手表读取 “3:25”。</p>

<p>给定一个非负整数 <em>n </em>代表当前 LED 亮着的数量，返回所有可能的时间。</p>

<p> </p>

<p><strong>示例：</strong></p>

<pre>
输入: n = 1
返回: ["1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"]</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li>输出的顺序没有要求。</li>
	<li>小时不会以零开头，比如 “01:00” 是不允许的，应为 “1:00”。</li>
	<li>分钟必须由两位数组成，可能会以零开头，比如 “10:2” 是无效的，应为 “10:02”。</li>
	<li>超过表示范围（<strong>小时 0-11，分钟 0-59</strong>）的数据将会被舍弃，也就是说不会出现 "13:00", "0:61" 等时间。</li>
</ul>
