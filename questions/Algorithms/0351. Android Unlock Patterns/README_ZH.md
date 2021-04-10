### [安卓系统手势解锁](https://leetcode-cn.com/problems/android-unlock-patterns)

<p>我们都知道安卓有个手势解锁的界面，是一个 <strong>3 x 3 </strong>的点所绘制出来的网格。用户可以设置一个 “解锁模式” ，通过连接特定序列中的点，形成一系列彼此连接的线段，每个线段的端点都是序列中两个连续的点。如果满足以下两个条件，则 <code>k</code> 点序列是有效的解锁模式：</p>

<ul>
	<li>解锁模式中的所有点 <strong>互不相同</strong> 。</li>
	<li>假如模式中两个连续点的线段需要经过其他点，那么要经过的点必须事先出现在序列中（已经经过），不能跨过任何还未被经过的点。</li>
</ul>

<p> </p>

<p>以下是一些有效和无效解锁模式的示例：</p>

<p><img src="https://assets.leetcode.com/uploads/2018/10/12/android-unlock.png" style="height: 128px; width: 418px;" /></p>
 

<ul>
	<li><strong>无效手势：</strong><code>[4,1,3,6]</code> ，连接点 1 和点 3 时经过了未被连接过的 2 号点。</li>
	<li><strong>无效手势：</strong><code>[4,1,9,2]</code> ，连接点 1 和点 9 时经过了未被连接过的 5 号点。</li>
	<li><strong>有效手势：</strong><code>[2,4,1,3,6]</code> ，连接点 1 和点 3 是有效的，因为虽然它经过了点 2 ，但是点 2 在该手势中之前已经被连过了。</li>
	<li><strong>有效手势：</strong><code>[6,5,4,1,9,2]</code> ，连接点 1 和点 9 是有效的，因为虽然它经过了按键 5 ，但是点 5 在该手势中之前已经被连过了。</li>
</ul>

<p>给你两个整数，分别为 ​​<code>m</code> 和 <code>n</code> ，那么请你统计一下有多少种 <strong>不同且有效的解锁模式 </strong>，是 <strong>至少</strong> 需要经过 <code>m</code> 个点，但是 <strong>不超过</strong> <code>n</code> 个点的。</p>

<p>两个解锁模式 <strong>不同</strong> 需满足：经过的点不同或者经过点的顺序不同。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>m = 1, n = 1
<strong>输出：</strong>9
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>m = 1, n = 2
<strong>输出：</strong>65
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= m, n <= 9</code></li>
</ul>
