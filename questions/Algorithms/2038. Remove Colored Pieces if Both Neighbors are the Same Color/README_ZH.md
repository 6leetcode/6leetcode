### [如果相邻两个颜色均相同则删除当前颜色](https://leetcode-cn.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color)

<p>总共有 <code>n</code>&nbsp;个颜色片段排成一列，每个颜色片段要么是&nbsp;<code>'A'</code>&nbsp;要么是&nbsp;<code>'B'</code>&nbsp;。给你一个长度为&nbsp;<code>n</code>&nbsp;的字符串&nbsp;<code>colors</code>&nbsp;，其中&nbsp;<code>colors[i]</code>&nbsp;表示第&nbsp;<code>i</code>&nbsp;个颜色片段的颜色。</p>

<p>Alice 和 Bob 在玩一个游戏，他们 <strong>轮流</strong>&nbsp;从这个字符串中删除颜色。Alice <strong>先手</strong>&nbsp;。</p>

<ul>
	<li>如果一个颜色片段为 <code>'A'</code>&nbsp;且 <strong>相邻两个颜色</strong>&nbsp;都是颜色 <code>'A'</code>&nbsp;，那么 Alice 可以删除该颜色片段。Alice&nbsp;<strong>不可以</strong>&nbsp;删除任何颜色&nbsp;<code>'B'</code>&nbsp;片段。</li>
	<li>如果一个颜色片段为 <code>'B'</code>&nbsp;且 <strong>相邻两个颜色</strong>&nbsp;都是颜色 <code>'B'</code>&nbsp;，那么 Bob 可以删除该颜色片段。Bob <strong>不可以</strong>&nbsp;删除任何颜色 <code>'A'</code>&nbsp;片段。</li>
	<li>Alice 和 Bob <strong>不能</strong>&nbsp;从字符串两端删除颜色片段。</li>
	<li>如果其中一人无法继续操作，则该玩家 <b>输</b>&nbsp;掉游戏且另一玩家 <strong>获胜</strong>&nbsp;。</li>
</ul>

<p>假设 Alice 和 Bob 都采用最优策略，如果 Alice 获胜，请返回&nbsp;<code>true</code>，否则 Bob 获胜，返回<em>&nbsp;</em><code>false</code>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>colors = "AAABABB"
<b>输出：</b>true
<b>解释：</b>
A<em><strong>A</strong></em>ABABB -&gt; AABABB
Alice 先操作。
她删除从左数第二个 'A' ，这也是唯一一个相邻颜色片段都是 'A' 的 'A' 。

现在轮到 Bob 操作。
Bob 无法执行任何操作，因为没有相邻位置都是 'B' 的颜色片段 'B' 。
因此，Alice 获胜，返回 true 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>colors = "AA"
<b>输出：</b>false
<strong>解释：</strong>
Alice 先操作。
只有 2 个 'A' 且它们都在字符串的两端，所以她无法执行任何操作。
因此，Bob 获胜，返回 false 。
</pre>

<p><strong>示例 3：</strong></p>

<pre><b>输入：</b>colors = "ABBBBBBBAAA"
<b>输出：</b>false
<strong>解释：</strong>
ABBBBBBBA<em><strong>A</strong></em>A -&gt; ABBBBBBBAA
Alice 先操作。
她唯一的选择是删除从右数起第二个 'A' 。

ABBBB<strong><em>B</em></strong>BBAA -&gt; ABBBBBBAA
接下来轮到 Bob 操作。
他有许多选择，他可以选择任何一个 'B' 删除。

然后轮到 Alice 操作，她无法删除任何片段。
所以 Bob 获胜，返回 false 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;=&nbsp;colors.length &lt;= 10<sup>5</sup></code></li>
	<li><code>colors</code>&nbsp;只包含字母&nbsp;<code>'A'</code>&nbsp;和&nbsp;<code>'B'</code></li>
</ul>
