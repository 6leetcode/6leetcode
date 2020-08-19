### [猜数字大小](https://leetcode-cn.com/problems/guess-number-higher-or-lower)

<p>猜数字游戏的规则如下：</p>

<ul>
	<li>每轮游戏，系统都会从&nbsp;<strong>1</strong>&nbsp;到&nbsp;<em><strong>n</strong></em> 随机选择一个数字。 请你猜选出的是哪个数字。</li>
	<li>如果你猜错了，系统会告诉你，你猜测的数字比系统选出的数字是大了还是小了。</li>
</ul>

<p>你可以通过调用一个预先定义好的接口&nbsp;<code>guess(int num)</code> 来获取猜测结果，返回值一共有 3 种可能的情况（<code>-1</code>，<code>1</code>&nbsp;或 <code>0</code>）：</p>

<pre>-1 : 你猜测的数字比系统选出的数字大
 1 : 你猜测的数字比系统选出的数字小
 0 : 恭喜！你猜对了！
</pre>

<p>&nbsp;</p>

<p><strong>示例 :</strong></p>

<pre><strong>输入: </strong>n = 10, pick = 6
<strong>输出: </strong>6</pre>
