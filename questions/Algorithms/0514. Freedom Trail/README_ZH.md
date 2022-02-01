### [自由之路](https://leetcode-cn.com/problems/freedom-trail)

<p>电子游戏“辐射4”中，任务 <strong>“通向自由”</strong> 要求玩家到达名为 “<strong>Freedom Trail Ring”</strong> 的金属表盘，并使用表盘拼写特定关键词才能开门。</p>

<p>给定一个字符串&nbsp;<code>ring</code>&nbsp;，表示刻在外环上的编码；给定另一个字符串&nbsp;<code>key</code>&nbsp;，表示需要拼写的关键词。您需要算出能够拼写关键词中所有字符的<strong>最少</strong>步数。</p>

<p>最初，<strong>ring&nbsp;</strong>的第一个字符与 <code>12:00</code> 方向对齐。您需要顺时针或逆时针旋转 <code>ring</code> 以使&nbsp;<strong>key&nbsp;</strong>的一个字符在 <code>12:00</code> 方向对齐，然后按下中心按钮，以此逐个拼写完&nbsp;<strong><code>key</code>&nbsp;</strong>中的所有字符。</p>

<p>旋转&nbsp;<code>ring</code><strong>&nbsp;</strong>拼出 key 字符&nbsp;<code>key[i]</code><strong>&nbsp;</strong>的阶段中：</p>

<ol>
	<li>您可以将&nbsp;<strong>ring&nbsp;</strong>顺时针或逆时针旋转&nbsp;<strong>一个位置&nbsp;</strong>，计为1步。旋转的最终目的是将字符串&nbsp;<strong><code>ring</code>&nbsp;</strong>的一个字符与 <code>12:00</code> 方向对齐，并且这个字符必须等于字符&nbsp;<strong><code>key[i]</code> 。</strong></li>
	<li>如果字符&nbsp;<strong><code>key[i]</code>&nbsp;</strong>已经对齐到12:00方向，您需要按下中心按钮进行拼写，这也将算作&nbsp;<strong>1 步</strong>。按完之后，您可以开始拼写&nbsp;<strong>key&nbsp;</strong>的下一个字符（下一阶段）, 直至完成所有拼写。</li>
</ol>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2018/10/22/ring.jpg" style="height: 450px; width: 450px;" /></p>

<center>&nbsp;</center>

<pre>
<strong>输入:</strong> ring = "godding", key = "gd"
<strong>输出:</strong> 4
<strong>解释:</strong>
 对于 key 的第一个字符 'g'，已经在正确的位置, 我们只需要1步来拼写这个字符。 
 对于 key 的第二个字符 'd'，我们需要逆时针旋转 ring "godding" 2步使它变成 "ddinggo"。
 当然, 我们还需要1步进行拼写。
 因此最终的输出是 4。
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> ring = "godding", key = "godding"
<strong>输出:</strong> 13
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= ring.length, key.length &lt;= 100</code></li>
	<li><code>ring</code>&nbsp;和&nbsp;<code>key</code>&nbsp;只包含小写英文字母</li>
	<li><strong>保证</strong> 字符串&nbsp;<code>key</code>&nbsp;一定可以由字符串 &nbsp;<code>ring</code>&nbsp;旋转拼出</li>
</ul>
