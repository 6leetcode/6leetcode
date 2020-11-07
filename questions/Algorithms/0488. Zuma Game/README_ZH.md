### [祖玛游戏](https://leetcode-cn.com/problems/zuma-game)

<p>回忆一下祖玛游戏。现在桌上有一串球，颜色有红色(R)，黄色(Y)，蓝色(B)，绿色(G)，还有白色(W)。 现在你手里也有几个球。</p>

<p>每一次，你可以从手里的球选一个，然后把这个球插入到一串球中的某个位置上（包括最左端，最右端）。接着，如果有出现三个或者三个以上颜色相同的球相连的话，就把它们移除掉。重复这一步骤直到桌上所有的球都被移除。</p>

<p>找到插入并可以移除掉桌上所有球所需的最少的球数。如果不能移除桌上所有的球，输出 -1 。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>board = "WRRBBW", hand = "RB"
<strong>输出：</strong>-1
<strong>解释：</strong>WRRBBW -> WRR[R]BBW -> WBBW -> WBB[B]W -> WW
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>board = "WWRRBBWW", hand = "WRBRW"
<strong>输出：</strong>2
<strong>解释：</strong>WWRRBBWW -> WWRR[R]BBWW -> WWBBWW -> WWBB[B]WW -> WWWW -> empty
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>board = "G", hand = "GGGGG"
<strong>输出：</strong>2
<strong>解释：</strong>G -> G[G] -> GG[G] -> empty 
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>board = "RBYYBBRRB", hand = "YRBGB"
<strong>输出：</strong>3
<strong>解释：</strong>RBYYBBRRB -> RBYY[Y]BBRRB -> RBBBRRB -> RRRB -> B -> B[B] -> BB[B] -> empty 
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li>你可以假设桌上一开始的球中，不会有三个及三个以上颜色相同且连着的球。</li>
	<li><code>1 <= board.length <= 16</code></li>
	<li><code>1 <= hand.length <= 5</code></li>
	<li>输入的两个字符串均为非空字符串，且只包含字符 'R','Y','B','G','W'。</li>
</ul>
