### [安卓系统手势解锁](https://leetcode-cn.com/problems/android-unlock-patterns)

<p>我们都知道安卓有个手势解锁的界面，是一个&nbsp;<strong>3 x 3 </strong>的点所绘制出来的网格。</p>

<p>给你两个整数，分别为&nbsp;<strong>​​m </strong>和 <strong>n</strong>，其中 1&nbsp;&le; m&nbsp;&le; n&nbsp;&le; 9，那么请你统计一下有多少种解锁手势，是至少需要经过&nbsp;<strong>m</strong>&nbsp;个点，但是最多经过不超过&nbsp;<strong>n</strong> 个点的。</p>

<p>&nbsp;</p>

<p><strong>先来了解下什么是一</strong><strong>个有效的安卓解锁手势:</strong></p>

<ol>
	<li>每一个解锁手势必须至少经过&nbsp;<strong>m</strong> 个点、最多经过&nbsp;<strong>n</strong>&nbsp;个点。</li>
	<li>解锁手势里不能设置经过重复的点。</li>
	<li>假如手势中有两个点是顺序经过的，那么这两个点的手势轨迹之间是绝对不能跨过任何未被经过的点。</li>
	<li>经过点的顺序不同则表示为不同的解锁手势。</li>
</ol>

<p>&nbsp;</p>

<pre><img src="https://assets.leetcode.com/uploads/2018/10/12/android-unlock.png" style="height: 128px; width: 418px;"></pre>

<p>&nbsp;</p>

<p><strong>解释:</strong></p>

<pre>| 1 | 2 | 3 |
| 4 | 5 | 6 |
| 7 | 8 | 9 |</pre>

<p><strong>无效手势：</strong><code>4 - 1 - 3 - 6 </code><br>
连接点 1 和点&nbsp;3 时经过了未被连接过的&nbsp;2 号点。</p>

<p><strong>无效手势：</strong><code>4 - 1 - 9 - 2</code><br>
连接点 1 和点 9 时经过了未被连接过的 5&nbsp;号点。</p>

<p><strong>有效手势：</strong><code>2 - 4 - 1 - 3 - 6</code><br>
连接点 1 和点&nbsp;3 是有效的，因为虽然它经过了点&nbsp;2 ，但是点 2 在该手势中之前已经被连过了。</p>

<p><strong>有效手势：</strong><code>6 - 5 - 4 - 1 - 9 - 2</code><br>
连接点 1 和点&nbsp;9 是有效的，因为虽然它经过了按键 5 ，但是点&nbsp;5 在该手势中之前已经被连过了。</p>

<p>&nbsp;</p>

<p><strong>示例:</strong></p>

<pre><strong>输入: </strong>m = 1，n = 1
<strong>输出: </strong>9
</pre>
