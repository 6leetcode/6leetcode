### [Simplify Path](https://leetcode.com/problems/simplify-path)

<p>Given an <strong>absolute path</strong> for a file (Unix-style), simplify it. Or in other words, convert it to the <strong>canonical path</strong>.</p>

<p>In a UNIX-style file system, a period <code>&#39;.&#39;</code>&nbsp;refers to the current directory. Furthermore, a double period <code>&#39;..&#39;</code>&nbsp;moves the directory up a level.</p>

<p>Note that the returned canonical path must always begin&nbsp;with a slash <code>&#39;/&#39;</code>, and there must be only a single slash <code>&#39;/&#39;</code>&nbsp;between two directory names.&nbsp;The last directory name (if it exists) <b>must not</b>&nbsp;end with a trailing <code>&#39;/&#39;</code>. Also, the canonical path must be the <strong>shortest</strong> string&nbsp;representing the absolute path.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> path = &quot;/home/&quot;
<strong>Output:</strong> &quot;/home&quot;
<strong>Explanation:</strong> Note that there is no trailing slash after the last directory name.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> path = &quot;/../&quot;
<strong>Output:</strong> &quot;/&quot;
<strong>Explanation:</strong> Going one level up from the root directory is a no-op, as the root level is the highest level you can go.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> path = &quot;/home//foo/&quot;
<strong>Output:</strong> &quot;/home/foo&quot;
<strong>Explanation: </strong>In the canonical path, multiple consecutive slashes are replaced by a single one.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> path = &quot;/a/./b/../../c/&quot;
<strong>Output:</strong> &quot;/c&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= path.length &lt;= 3000</code></li>
	<li><code>path</code> consists of English letters, digits, period <code>&#39;.&#39;</code>, slash <code>&#39;/&#39;</code> or <code>&#39;_&#39;</code>.</li>
	<li><code>path</code> is a valid Unix path.</li>
</ul>
