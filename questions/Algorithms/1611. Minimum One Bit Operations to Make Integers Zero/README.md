### [Minimum One Bit Operations to Make Integers Zero](https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero)

<p>Given an integer <code>n</code>, you must transform it into <code>0</code> using the following operations any number of times:</p>

<ul>
	<li>Change the rightmost (<code>0<sup>th</sup></code>) bit in the binary representation of <code>n</code>.</li>
	<li>Change the <code>i<sup>th</sup></code> bit in the binary representation of <code>n</code> if the <code>(i-1)<sup>th</sup></code> bit is set to <code>1</code> and the <code>(i-2)<sup>th</sup></code> through <code>0<sup>th</sup></code> bits are set to <code>0</code>.</li>
</ul>

<p>Return <em>the minimum number of operations to transform </em><code>n</code><em> into </em><code>0</code><em>.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 3
<strong>Output:</strong> 2
<strong>Explanation:</strong> The binary representation of 3 is &quot;11&quot;.
&quot;<u>1</u>1&quot; -&gt; &quot;<u>0</u>1&quot; with the 2<sup>nd</sup> operation since the 0<sup>th</sup> bit is 1.
&quot;0<u>1</u>&quot; -&gt; &quot;0<u>0</u>&quot; with the 1<sup>st</sup> operation.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 6
<strong>Output:</strong> 4
<strong>Explanation:</strong> The binary representation of 6 is &quot;110&quot;.
&quot;<u>1</u>10&quot; -&gt; &quot;<u>0</u>10&quot; with the 2<sup>nd</sup> operation since the 1<sup>st</sup> bit is 1 and 0<sup>th</sup> through 0<sup>th</sup> bits are 0.
&quot;01<u>0</u>&quot; -&gt; &quot;01<u>1</u>&quot; with the 1<sup>st</sup> operation.
&quot;0<u>1</u>1&quot; -&gt; &quot;0<u>0</u>1&quot; with the 2<sup>nd</sup> operation since the 0<sup>th</sup> bit is 1.
&quot;00<u>1</u>&quot; -&gt; &quot;00<u>0</u>&quot; with the 1<sup>st</sup> operation.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>
