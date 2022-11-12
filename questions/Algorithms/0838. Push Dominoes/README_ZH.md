### [推多米诺](https://leetcode-cn.com/problems/push-dominoes)

<p><code>n</code> 张多米诺骨牌排成一行，将每张多米诺骨牌垂直竖立。在开始时，同时把一些多米诺骨牌向左或向右推。</p>

<p>每过一秒，倒向左边的多米诺骨牌会推动其左侧相邻的多米诺骨牌。同样地，倒向右边的多米诺骨牌也会推动竖立在其右侧的相邻多米诺骨牌。</p>

<p>如果一张垂直竖立的多米诺骨牌的两侧同时有多米诺骨牌倒下时，由于受力平衡， 该骨牌仍然保持不变。</p>

<p>就这个问题而言，我们会认为一张正在倒下的多米诺骨牌不会对其它正在倒下或已经倒下的多米诺骨牌施加额外的力。</p>

<p>给你一个字符串 <code>dominoes</code> 表示这一行多米诺骨牌的初始状态，其中：</p>

<ul>
	<li><code>dominoes[i] = 'L'</code>，表示第 <code>i</code> 张多米诺骨牌被推向左侧，</li>
	<li><code>dominoes[i] = 'R'</code>，表示第 <code>i</code> 张多米诺骨牌被推向右侧，</li>
	<li><code>dominoes[i] = '.'</code>，表示没有推动第 <code>i</code> 张多米诺骨牌。</li>
</ul>

<p>返回表示最终状态的字符串。</p>
&nbsp;

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>dominoes = "RR.L"
<strong>输出：</strong>"RR.L"
<strong>解释：</strong>第一张多米诺骨牌没有给第二张施加额外的力。
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/05/18/domino.png" style="height: 196px; width: 512px;" />
<pre>
<strong>输入：</strong>dominoes = ".L.R...LR..L.."
<strong>输出：</strong>"LL.RR.LLRRLL.."
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == dominoes.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>dominoes[i]</code> 为 <code>'L'</code>、<code>'R'</code> 或 <code>'.'</code></li>
</ul>
