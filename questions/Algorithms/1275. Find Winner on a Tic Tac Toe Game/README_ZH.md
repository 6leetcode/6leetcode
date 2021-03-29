### [找出井字棋的获胜者](https://leetcode-cn.com/problems/find-winner-on-a-tic-tac-toe-game)

<p><em>A</em> 和&nbsp;<em>B</em>&nbsp;在一个&nbsp;<em>3</em>&nbsp;x&nbsp;<em>3</em>&nbsp;的网格上玩井字棋。</p>

<p>井字棋游戏的规则如下：</p>

<ul>
	<li>玩家轮流将棋子放在空方格 (&quot; &quot;) 上。</li>
	<li>第一个玩家 A 总是用&nbsp;&quot;X&quot; 作为棋子，而第二个玩家 B 总是用 &quot;O&quot; 作为棋子。</li>
	<li>&quot;X&quot; 和 &quot;O&quot; 只能放在空方格中，而不能放在已经被占用的方格上。</li>
	<li>只要有 3 个相同的（非空）棋子排成一条直线（行、列、对角线）时，游戏结束。</li>
	<li>如果所有方块都放满棋子（不为空），游戏也会结束。</li>
	<li>游戏结束后，棋子无法再进行任何移动。</li>
</ul>

<p>给你一个数组 <code>moves</code>，其中每个元素是大小为 <code>2</code> 的另一个数组（元素分别对应网格的行和列），它按照 <em>A</em> 和 <em>B</em> 的行动顺序（先 <em>A</em> 后 <em>B</em>）记录了两人各自的棋子位置。</p>

<p>如果游戏存在获胜者（<em>A</em> 或 <em>B</em>），就返回该游戏的获胜者；如果游戏以平局结束，则返回 &quot;Draw&quot;；如果仍会有行动（游戏未结束），则返回 &quot;Pending&quot;。</p>

<p>你可以假设&nbsp;<code>moves</code>&nbsp;都 <strong>有效</strong>（遵循井字棋规则），网格最初是空的，<em>A</em> 将先行动。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>moves = [[0,0],[2,0],[1,1],[2,1],[2,2]]
<strong>输出：</strong>&quot;A&quot;
<strong>解释：</strong>&quot;A&quot; 获胜，他总是先走。
&quot;X  &quot;    &quot;X  &quot;    &quot;X  &quot;    &quot;X  &quot;    &quot;<strong>X</strong>  &quot;
&quot;   &quot; -&gt; &quot;   &quot; -&gt; &quot; X &quot; -&gt; &quot; X &quot; -&gt; &quot; <strong>X</strong> &quot;
&quot;   &quot;    &quot;O  &quot;    &quot;O  &quot;    &quot;OO &quot;    &quot;OO<strong>X</strong>&quot;
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>moves = [[0,0],[1,1],[0,1],[0,2],[1,0],[2,0]]
<strong>输出：</strong>&quot;B&quot;
<strong>解释：</strong>&quot;B&quot; 获胜。
&quot;X  &quot;    &quot;X  &quot;    &quot;XX &quot;    &quot;XXO&quot;    &quot;XXO&quot;    &quot;XX<strong>O</strong>&quot;
&quot;   &quot; -&gt; &quot; O &quot; -&gt; &quot; O &quot; -&gt; &quot; O &quot; -&gt; &quot;XO &quot; -&gt; &quot;X<strong>O</strong> &quot; 
&quot;   &quot;    &quot;   &quot;    &quot;   &quot;    &quot;   &quot;    &quot;   &quot;    &quot;<strong>O</strong>  &quot;
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>moves = [[0,0],[1,1],[2,0],[1,0],[1,2],[2,1],[0,1],[0,2],[2,2]]
<strong>输出：</strong>&quot;Draw&quot;
<strong>输出：</strong>由于没有办法再行动，游戏以平局结束。
&quot;XXO&quot;
&quot;OOX&quot;
&quot;XOX&quot;
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>moves = [[0,0],[1,1]]
<strong>输出：</strong>&quot;Pending&quot;
<strong>解释：</strong>游戏还没有结束。
&quot;X  &quot;
&quot; O &quot;
&quot;   &quot;
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= moves.length &lt;= 9</code></li>
	<li><code>moves[i].length == 2</code></li>
	<li><code>0 &lt;= moves[i][j] &lt;= 2</code></li>
	<li><code>moves</code>&nbsp;里没有重复的元素。</li>
	<li><code>moves</code> 遵循井字棋的规则。</li>
</ul>
