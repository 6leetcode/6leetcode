### [插入](https://leetcode-cn.com/problems/insert-into-bits-lcci)

<p>插入。给定两个32位的整数<code>N</code>与<code>M</code>，以及表示比特位置的<code>i</code>与<code>j</code>。编写一种方法，将<code>M</code>插入<code>N</code>，使得M从N的第j位开始，到第<code>i</code>位结束。假定从<code>j</code>位到<code>i</code>位足以容纳<code>M</code>，也即若M = 10 011，那么j和i之间至少可容纳5个位。例如，不可能出现j = 3和i = 2的情况，因为第3位和第2位之间放不下M。</p>

<p><strong>示例1:</strong></p>

<pre><strong> 输入</strong>：N = 1024(10000000000), M = 19(10011), i = 2, j = 6
<strong> 输出</strong>：N = 1100(10001001100)
</pre>

<p><strong>示例2:</strong></p>

<pre><strong> 输入</strong>： N = 0, M = 31(11111), i = 0, j = 4
<strong> 输出</strong>：N = 31(11111)
</pre>
