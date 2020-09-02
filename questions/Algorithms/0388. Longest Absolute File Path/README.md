### [Longest Absolute File Path](https://leetcode.com/problems/longest-absolute-file-path)

<p>Suppose we have the file system represented in the following picture:</p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/08/28/mdir.jpg" style="width: 681px; height: 322px;" /></p>

<p>We will represent the file system as a string where <code>&quot;\n\t&quot;</code> mean a subdirectory of the main directory, <code>&quot;\n\t\t&quot;</code> means a subdirectory of the subdirectory of the main directory and so on. Each folder will be represented as a string of letters <strong>and/or</strong> digits. Each file will be in the form <code>&quot;s1.s2&quot;</code> where <code>s1</code> and <code>s2</code> are strings of letters <strong>and/or</strong> digits.</p>

<p>For example, the file system above is represented as&nbsp;<code>&quot;dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext&quot;</code>.</p>

<p>Given a string <code>input</code> representing the file system in the explained&nbsp;format, return the length of the longest absolute path to <strong>a file</strong> in the abstracted file system. If there is no file in the system, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/28/dir1.jpg" style="width: 401px; height: 202px;" />
<pre>
<strong>Input:</strong> input = &quot;dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext&quot;
<strong>Output:</strong> 20
<strong>Explanation:</strong> We have only one file and its path is &quot;dir/subdir2/file.ext&quot; of length 20.
The path &quot;dir/subdir1&quot; doesn&#39;t contain any files.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/28/dir2.jpg" style="width: 641px; height: 322px;" />
<pre>
<strong>Input:</strong> input = &quot;dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext&quot;
<strong>Output:</strong> 32
<strong>Explanation:</strong> We have two files:
&quot;dir/subdir1/file1.ext&quot; of length 21
&quot;dir/subdir2/subsubdir2/file2.ext&quot; of length 32.
We return 32 since it is the longest path.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> input = &quot;a&quot;
<strong>Output:</strong> 0
<strong>Explanation:</strong> We don&#39;t have any files.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= input.length &lt;= 10<sup>4</sup></code></li>
	<li><code>input</code>&nbsp;may contain lower-case or upper-case English letters, a new line character <code>&#39;\n&#39;</code>, a tab character <code>&#39;\t&#39;</code>,&nbsp;a dot <code>&#39;.&#39;</code>, a space <code>&#39; &#39;</code>&nbsp;or digits.</li>
</ul>
