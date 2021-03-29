### [Long Pressed Name](https://leetcode.com/problems/long-pressed-name)

<p>Your friend is typing his <code>name</code>&nbsp;into a keyboard.&nbsp; Sometimes, when typing a character <code>c</code>, the key might get <em>long pressed</em>, and the character will be typed 1 or more times.</p>

<p>You examine the <code>typed</code>&nbsp;characters of the keyboard.&nbsp; Return <code>True</code> if it is possible that it was your friends name, with some characters (possibly none) being long pressed.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> name = &quot;alex&quot;, typed = &quot;aaleex&quot;
<strong>Output:</strong> true
<strong>Explanation: </strong>&#39;a&#39; and &#39;e&#39; in &#39;alex&#39; were long pressed.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> name = &quot;saeed&quot;, typed = &quot;ssaaedd&quot;
<strong>Output:</strong> false
<strong>Explanation: </strong>&#39;e&#39; must have been pressed twice, but it wasn&#39;t in the typed output.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> name = &quot;leelee&quot;, typed = &quot;lleeelee&quot;
<strong>Output:</strong> true
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> name = &quot;laiden&quot;, typed = &quot;laiden&quot;
<strong>Output:</strong> true
<strong>Explanation: </strong>It&#39;s not necessary to long press any character.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= name.length &lt;= 1000</code></li>
	<li><code>1 &lt;= typed.length &lt;= 1000</code></li>
	<li>The characters of <code>name</code> and <code>typed</code> are lowercase letters.</li>
</ul>
