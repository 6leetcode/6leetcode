### [除数博弈](https://leetcode-cn.com/problems/divisor-game)

<p>爱丽丝和鲍勃一起玩游戏，他们轮流行动。爱丽丝先手开局。</p>

<p>最初，黑板上有一个数字&nbsp;<code>n</code>&nbsp;。在每个玩家的回合，玩家需要执行以下操作：</p>

<ul>
	<li>选出任一&nbsp;<code>x</code>，满足&nbsp;<code>0 &lt; x &lt; n</code>&nbsp;且&nbsp;<code>n % x == 0</code>&nbsp;。</li>
	<li>用 <code>n - x</code>&nbsp;替换黑板上的数字&nbsp;<code>n</code> 。</li>
</ul>

<p>如果玩家无法执行这些操作，就会输掉游戏。</p>

<p><em>只有在爱丽丝在游戏中取得胜利时才返回&nbsp;<code>true</code>&nbsp;。假设两个玩家都以最佳状态参与游戏。</em></p>

<p>&nbsp;</p>

<ol>
</ol>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>n = 2
<strong>输出：</strong>true
<strong>解释：</strong>爱丽丝选择 1，鲍勃无法进行操作。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 3
<strong>输出：</strong>false
<strong>解释：</strong>爱丽丝选择 1，鲍勃也选择 1，然后爱丽丝无法进行操作。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
</ul>
