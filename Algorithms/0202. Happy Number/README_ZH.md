### [快乐数](https://leetcode-cn.com/problems/happy-number)

<p>编写一个算法来判断一个数 <code>n</code> 是不是快乐数。</p>

<p>「快乐数」定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，也可能是 <strong>无限循环</strong> 但始终变不到 1。如果 <strong>可以变为</strong>&nbsp; 1，那么这个数就是快乐数。</p>

<p>如果 <code>n</code> 是快乐数就返回 <code>True</code> ；不是，则返回 <code>False</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong>19
<strong>输出：</strong>true
<strong>解释：
</strong>1<sup>2</sup> + 9<sup>2</sup> = 82
8<sup>2</sup> + 2<sup>2</sup> = 68
6<sup>2</sup> + 8<sup>2</sup> = 100
1<sup>2</sup> + 0<sup>2</sup> + 0<sup>2</sup> = 1
</pre>
