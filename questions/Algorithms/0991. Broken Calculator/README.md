### [Broken Calculator](https://leetcode.com/problems/broken-calculator)

<p>On a broken calculator that has a number showing on its display, we can perform two operations:</p>

<ul>
	<li><strong>Double</strong>: Multiply the number on the display by 2, or;</li>
	<li><strong>Decrement</strong>: Subtract 1 from the number on the display.</li>
</ul>

<p>Initially, the calculator is displaying the number <code>x</code>.</p>

<p>Return the minimum number of operations needed to display the number <code>y</code>.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>x = <span id="example-input-1-1">2</span>, y = <span id="example-input-1-2">3</span>
<strong>Output: </strong><span id="example-output-1">2</span>
<strong>Explanation: </strong>Use double operation and then decrement operation {2 -&gt; 4 -&gt; 3}.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>x = <span id="example-input-2-1">5</span>, y = <span id="example-input-2-2">8</span>
<strong>Output: </strong><span id="example-output-2">2</span>
<strong>Explanation: </strong>Use decrement and then double {5 -&gt; 4 -&gt; 8}.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: </strong>x = <span id="example-input-3-1">3</span>, y = <span id="example-input-3-2">10</span>
<strong>Output: </strong><span id="example-output-3">3</span>
<strong>Explanation: </strong> Use double, decrement and double {3 -&gt; 6 -&gt; 5 -&gt; 10}.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input: </strong>x = <span id="example-input-4-1">1024</span>, y = <span id="example-input-4-2">1</span>
<strong>Output: </strong><span id="example-output-4">1023</span>
<strong>Explanation: </strong>Use decrement operations 1023 times.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= x &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= y &lt;= 10<sup>9</sup></code></li>
</ol>
