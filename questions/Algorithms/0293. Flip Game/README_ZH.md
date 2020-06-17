### [翻转游戏](https://leetcode-cn.com/problems/flip-game)

<p>你和朋友玩一个叫做「翻转游戏」的游戏，游戏规则：给定一个只有&nbsp;<code>+</code>&nbsp;和&nbsp;<code>-</code>&nbsp;的字符串。你和朋友轮流将&nbsp;<strong>连续 </strong>的两个&nbsp;<code>&quot;++&quot;</code>&nbsp;反转成&nbsp;<code>&quot;--&quot;</code>。 当一方无法进行有效的翻转时便意味着游戏结束，则另一方获胜。</p>

<p>请你写出一个函数，来计算出每个有效操作后，字符串所有的可能状态。</p>

<p><strong>示例：</strong></p>

<pre><strong>输入:</strong> <code>s = &quot;++++&quot;</code>
<strong>输出:</strong> 
[
  &quot;--++&quot;,
  &quot;+--+&quot;,
  &quot;++--&quot;
]
</pre>

<p><strong>注意：</strong>如果不存在可能的有效操作，请返回一个空列表&nbsp;<code>[]</code>。</p>
