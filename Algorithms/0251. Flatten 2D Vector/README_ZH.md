### [展开二维向量](https://leetcode-cn.com/problems/flatten-2d-vector)

<p>请设计并实现一个能够展开二维向量的迭代器。该迭代器需要支持&nbsp;<code>next</code> 和&nbsp;<code>hasNext</code>&nbsp;两种操作。、</p>

<p><strong>示例：</strong></p>

<pre>Vector2D iterator = new Vector2D([[1,2],[3],[4]]);

iterator.next(); // 返回 1
iterator.next(); // 返回 2
iterator.next(); // 返回 3
iterator.hasNext(); // 返回 true
iterator.hasNext(); // 返回 true
iterator.next(); // 返回 4
iterator.hasNext(); // 返回 false
</pre>

<p>&nbsp;</p>

<p><strong>注意：</strong></p>

<ol>
	<li>请记得&nbsp;<strong>重置&nbsp;</strong>在 Vector2D 中声明的类变量（静态变量），因为类变量会&nbsp;<strong>在多个测试用例中保持不变</strong>，影响判题准确。请 <a href="https://support.leetcode-cn.com/hc/kb/section/1071534/" target="_blank">查阅</a> 这里。</li>
	<li>你可以假定 <code>next()</code> 的调用总是合法的，即当 <code>next()</code> 被调用时，二维向量总是存在至少一个后续元素。</li>
</ol>

<p>&nbsp;</p>

<p><strong>进阶：</strong></p>

<p>尝试在代码中仅使用 <a href="http://www.cplusplus.com/reference/iterator/iterator/">C++ 提供的迭代器</a> 或 <a href="https://docs.oracle.com/javase/7/docs/api/java/util/Iterator.html">Java 提供的迭代器</a>。</p>
