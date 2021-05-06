### [Bulb Switcher IV](https://leetcode.com/problems/bulb-switcher-iv)

<p>There is a room with <code>n</code> bulbs, numbered from <code>0</code> to <code>n - 1</code>, arranged in a row from left to right. Initially, all the bulbs are <strong>turned off</strong>.</p>

<p>Your task is to obtain the configuration represented by <code>target</code> where <code>target[i]</code> is <code>&#39;1&#39;</code> if the <code>i<sup>th</sup></code> bulb is turned on and is <code>&#39;0&#39;</code> if it is turned off.</p>

<p>You have a switch to flip the state of the bulb, a flip operation is defined as follows:</p>

<ul>
	<li>Choose <strong>any</strong> bulb (index <code>i</code>) of your current configuration.</li>
	<li>Flip each bulb from index <code>i</code> to index <code>n - 1</code>.</li>
</ul>

<p>When any bulb is flipped it means that if it is <code>&#39;0&#39;</code> it changes to <code>&#39;1&#39;</code> and if it is <code>&#39;1&#39;</code> it changes to <code>&#39;0&#39;</code>.</p>

<p>Return <em>the <strong>minimum</strong> number of flips required to form</em> <code>target</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> target = &quot;10111&quot;
<strong>Output:</strong> 3
<strong>Explanation: </strong>Initial configuration &quot;00000&quot;.
flip from the third bulb:  &quot;00000&quot; -&gt; &quot;00111&quot;
flip from the first bulb:  &quot;00111&quot; -&gt; &quot;11000&quot;
flip from the second bulb:  &quot;11000&quot; -&gt; &quot;10111&quot;
We need at least 3 flip operations to form target.</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> target = &quot;101&quot;
<strong>Output:</strong> 3
<strong>Explanation: </strong>&quot;000&quot; -&gt; &quot;111&quot; -&gt; &quot;100&quot; -&gt; &quot;101&quot;.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> target = &quot;00000&quot;
<strong>Output:</strong> 0
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> target = &quot;001011101&quot;
<strong>Output:</strong> 5
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= target.length &lt;= 10<sup>5</sup></code></li>
	<li><code>target[i]</code> is either <code>&#39;0&#39;</code> or <code>&#39;1&#39;</code>.</li>
</ul>
