### [骑士拨号器](https://leetcode-cn.com/problems/knight-dialer)

<p>国际象棋中的骑士可以按下图所示进行移动：</p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/11/03/knight.png" style="height: 150px; width: 150px;">&nbsp;.&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;<img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/11/03/keypad.png" style="height: 150px; width: 134px;"></p>

<p><br>
这一次，我们将&nbsp;&ldquo;骑士&rdquo; 放在电话拨号盘的任意数字键（如上图所示）上，接下来，骑士将会跳&nbsp;N-1 步。每一步必须是从一个数字键跳到另一个数字键。</p>

<p>每当它落在一个键上（包括骑士的初始位置），都会拨出键所对应的数字，总共按下&nbsp;<code>N</code> 位数字。</p>

<p>你能用这种方式拨出多少个不同的号码？</p>

<p>因为答案可能很大，<strong>所以输出答案模&nbsp;<code>10^9 + 7</code></strong>。</p>

<p>&nbsp;</p>

<ul>
</ul>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>1
<strong>输出：</strong>10
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>2
<strong>输出：</strong>20
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>3
<strong>输出：</strong>46
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= N &lt;= 5000</code></li>
</ul>
