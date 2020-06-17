### [Flatten 2D Vector](https://leetcode.com/problems/flatten-2d-vector)

<p>Design and implement an iterator to flatten a 2d vector. It should support the following operations: <code>next</code> and <code>hasNext</code>.</p>

<p>&nbsp;</p>

<p><b>Example:</b></p>

<pre>
Vector2D iterator = new Vector2D([[1,2],[3],[4]]);

iterator.next(); // return 1
iterator.next(); // return 2
iterator.next(); // return 3
iterator.hasNext(); // return true
iterator.hasNext(); // return true
iterator.next(); // return 4
iterator.hasNext(); // return false
</pre>

<p>&nbsp;</p>

<p><strong>Notes:</strong></p>

<ol>
	<li>Please remember to <b>RESET</b> your class variables declared in Vector2D, as static/class variables are <b>persisted across multiple test cases</b>. Please see <a href="https://leetcode.com/faq/" target="_blank">here</a> for more details.</li>
	<li>You may assume that <code>next()</code> call will always be valid, that is, there will be at least a next element in the 2d vector when <code>next()</code> is called.</li>
</ol>

<p>&nbsp;</p>

<p><b>Follow up:</b></p>

<p>As an added challenge, try to code it using only <a href="http://www.cplusplus.com/reference/iterator/iterator/" target="_blank">iterators in C++</a> or <a href="http://docs.oracle.com/javase/7/docs/api/java/util/Iterator.html" target="_blank">iterators in Java</a>.</p>
