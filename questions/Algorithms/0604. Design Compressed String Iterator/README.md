### [Design Compressed String Iterator](https://leetcode.com/problems/design-compressed-string-iterator)

<p>
Design and implement a data structure for a compressed string iterator. It should support the following operations: <code>next</code> and <code>hasNext</code>.
</p>

<p>
The given compressed string will be in the form of each letter followed by a positive integer representing the number of this letter existing in the original uncompressed string.
</p>

<p>
<code>next()</code> - if the original string still has uncompressed characters, return the next letter; Otherwise return a white space.<br>
<code>hasNext()</code> - Judge whether there is any letter needs to be uncompressed.
</p>

<p>
<b>Note:</b><br />
Please remember to <b>RESET</b> your class variables declared in StringIterator, as static/class variables are <b>persisted across multiple test cases</b>. Please see <a href="https://leetcode.com/faq/#different-output">here</a> for more details.
</p>


<p><b>Example:</b>
<pre>
StringIterator iterator = new StringIterator("L1e2t1C1o1d1e1");

iterator.next(); // return 'L'
iterator.next(); // return 'e'
iterator.next(); // return 'e'
iterator.next(); // return 't'
iterator.next(); // return 'C'
iterator.next(); // return 'o'
iterator.next(); // return 'd'
iterator.hasNext(); // return true
iterator.next(); // return 'e'
iterator.hasNext(); // return false
iterator.next(); // return ' '
</pre>
</p>