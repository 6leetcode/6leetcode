### [Design File System](https://leetcode.com/problems/design-file-system)

<p>You are asked to design a file system&nbsp;which provides two functions:</p>

<ul>
	<li><strong>createPath(path, value):</strong>&nbsp;Creates a new path and associates a value to it if possible and returns <code>True</code>.&nbsp;Returns <code>False</code>&nbsp;if the path already exists or its parent path doesn&#39;t exist.</li>
	<li><strong>get(path):</strong>&nbsp;Returns the value associated with a path or returns&nbsp;<code>-1</code>&nbsp;if the path doesn&#39;t exist.</li>
</ul>

<p>The format of a path is&nbsp;one or more concatenated strings of the form:&nbsp;<code>/</code> followed by one or more lowercase English letters. For example, <code>/leetcode</code>&nbsp;and <code>/leetcode/problems</code>&nbsp;are valid paths while an empty string and <code>/</code>&nbsp;are not.</p>

<p>Implement the two functions.</p>

<p>Please refer to the examples for clarifications.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
[&quot;FileSystem&quot;,&quot;createPath&quot;,&quot;get&quot;]
[[],[&quot;/a&quot;,1],[&quot;/a&quot;]]
<strong>Output:</strong> 
[null,true,1]
<strong>Explanation:</strong> 
FileSystem fileSystem = new FileSystem();

fileSystem.createPath(&quot;/a&quot;, 1); // return true
fileSystem.get(&quot;/a&quot;); // return 1
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> 
[&quot;FileSystem&quot;,&quot;createPath&quot;,&quot;createPath&quot;,&quot;get&quot;,&quot;createPath&quot;,&quot;get&quot;]
[[],[&quot;/leet&quot;,1],[&quot;/leet/code&quot;,2],[&quot;/leet/code&quot;],[&quot;/c/d&quot;,1],[&quot;/c&quot;]]
<strong>Output:</strong> 
[null,true,true,2,false,-1]
<strong>Explanation:</strong> 
FileSystem fileSystem = new FileSystem();

fileSystem.createPath(&quot;/leet&quot;, 1); // return true
fileSystem.createPath(&quot;/leet/code&quot;, 2); // return true
fileSystem.get(&quot;/leet/code&quot;); // return 2
fileSystem.createPath(&quot;/c/d&quot;, 1); // return false because the parent path &quot;/c&quot; doesn&#39;t exist.
fileSystem.get(&quot;/c&quot;); // return -1 because this path doesn&#39;t exist.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of&nbsp;calls to the two functions&nbsp;is less than or equal to <code>10^4</code> in total.</li>
	<li><code>2 &lt;= path.length &lt;= 100</code></li>
	<li><code>1 &lt;= value &lt;= 10^9</code></li>
</ul>

<p><strong>NOTE:</strong>&nbsp;create method has been changed on August&nbsp;29, 2019 to createPath. Please reset to default code definition to get new method signature.</p>
