### [最小移动总距离](https://leetcode-cn.com/problems/minimum-total-distance-traveled)

<p>X 轴上有一些机器人和工厂。给你一个整数数组&nbsp;<code>robot</code>&nbsp;，其中&nbsp;<code>robot[i]</code>&nbsp;是第&nbsp;<code>i</code>&nbsp;个机器人的位置。再给你一个二维整数数组&nbsp;<code>factory</code>&nbsp;，其中&nbsp;<code>factory[j] = [position<sub>j</sub>, limit<sub>j</sub>]</code>&nbsp;，表示第 <code>j</code>&nbsp;个工厂的位置在&nbsp;<code>position<sub>j</sub></code>&nbsp;，且第 <code>j</code>&nbsp;个工厂最多可以修理&nbsp;<code>limit<sub>j</sub></code>&nbsp;个机器人。</p>

<p>每个机器人所在的位置 <strong>互不相同</strong>&nbsp;。每个工厂所在的位置也 <strong>互不相同</strong>&nbsp;。注意一个机器人可能一开始跟一个工厂在 <strong>相同的位置</strong>&nbsp;。</p>

<p>所有机器人一开始都是坏的，他们会沿着设定的方向一直移动。设定的方向要么是 X 轴的正方向，要么是 X 轴的负方向。当一个机器人经过一个没达到上限的工厂时，这个工厂会维修这个机器人，且机器人停止移动。</p>

<p><b>任何时刻</b>，你都可以设置&nbsp;<strong>部分</strong>&nbsp;机器人的移动方向。你的目标是最小化所有机器人总的移动距离。</p>

<p>请你返回所有机器人移动的最小总距离。测试数据保证所有机器人都可以被维修。</p>

<p><strong>注意：</strong></p>

<ul>
	<li>所有机器人移动速度相同。</li>
	<li>如果两个机器人移动方向相同，它们永远不会碰撞。</li>
	<li>如果两个机器人迎面相遇，它们也不会碰撞，它们彼此之间会擦肩而过。</li>
	<li>如果一个机器人经过了一个已经达到上限的工厂，机器人会当作工厂不存在，继续移动。</li>
	<li>机器人从位置&nbsp;<code>x</code> 到位置&nbsp;<code>y</code>&nbsp;的移动距离为&nbsp;<code>|y - x|</code>&nbsp;。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://pic.leetcode-cn.com/1667542978-utuiPv-image.png" style="width: 500px; height: 320px;" /></p>

<pre>
<b>输入：</b>robot = [0,4,6], factory = [[2,2],[6,2]]
<b>输出：</b>4
<b>解释：</b>如上图所示：
- 第一个机器人从位置 0 沿着正方向移动，在第一个工厂处维修。
- 第二个机器人从位置 4 沿着负方向移动，在第一个工厂处维修。
- 第三个机器人在位置 6 被第二个工厂维修，它不需要移动。
第一个工厂的维修上限是 2 ，它维修了 2 个机器人。
第二个工厂的维修上限是 2 ，它维修了 1 个机器人。
总移动距离是 |2 - 0| + |2 - 4| + |6 - 6| = 4 。没有办法得到比 4 更少的总移动距离。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://pic.leetcode-cn.com/1667542984-OAIRFN-image.png" style="width: 500px; height: 329px;" /></p>

<pre>
<b>输入：</b>robot = [1,-1], factory = [[-2,1],[2,1]]
<b>输出：</b>2
<b>解释：</b>如上图所示：
- 第一个机器人从位置 1 沿着正方向移动，在第二个工厂处维修。
- 第二个机器人在位置 -1 沿着负方向移动，在第一个工厂处维修。
第一个工厂的维修上限是 1 ，它维修了 1 个机器人。
第二个工厂的维修上限是 1 ，它维修了 1 个机器人。
总移动距离是 |2 - 1| + |(-2) - (-1)| = 2 。没有办法得到比 2 更少的总移动距离。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= robot.length, factory.length &lt;= 100</code></li>
	<li><code>factory[j].length == 2</code></li>
	<li><code>-10<sup>9</sup> &lt;= robot[i], position<sub>j</sub> &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= limit<sub>j</sub> &lt;= robot.length</code></li>
	<li>测试数据保证所有机器人都可以被维修。</li>
</ul>
