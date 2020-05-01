### [锯齿迭代器](https://leetcode-cn.com/problems/zigzag-iterator)

<p>给出两个一维的向量，请你实现一个迭代器，交替返回它们中间的元素。</p>

<p><strong>示例:</strong></p>

<pre><strong>输入:</strong>
v1 = [1,2]
v2 = [3,4,5,6] 

<strong>输出:</strong> <code>[1,3,2,4,5,6]

<strong>解析:</strong></code>&nbsp;通过连续调用 <em>next</em> 函数直到 <em>hasNext</em> 函数返回 <code>false，</code>
&nbsp;    <em>next</em> 函数返回值的次序应依次为: <code>[1,3,2,4,5,6]。</code></pre>

<p><strong>拓展：</strong>假如给你&nbsp;<code>k</code>&nbsp;个一维向量呢？你的代码在这种情况下的扩展性又会如何呢?</p>

<p><strong>拓展声明：</strong><br>
&nbsp;&ldquo;锯齿&rdquo; 顺序对于&nbsp;<code>k &gt; 2</code>&nbsp;的情况定义可能会有些歧义。所以，假如你觉得 &ldquo;锯齿&rdquo; 这个表述不妥，也可以认为这是一种&nbsp;&ldquo;循环&rdquo;。例如：</p>

<pre><strong>输入:</strong>
[1,2,3]
[4,5,6,7]
[8,9]

<strong>输出: </strong><code>[1,4,8,2,5,9,3,6,7]</code>.
</pre>
