### [Rearrange String k Distance Apart](https://leetcode.com/problems/rearrange-string-k-distance-apart)

<p>Given a non-empty string <b>s</b> and an integer <b>k</b>, rearrange the string such that the same characters are at least distance <b>k</b> from each other.</p>

<p>All input strings are given in lowercase letters. If it is not possible to rearrange the string, return an empty string <code>&quot;&quot;</code>.</p>

<p><strong>Example 1:</strong></p>

<div>
<pre>
<strong>Input: </strong>s = <span id="example-input-1-1">&quot;aabbcc&quot;</span>, k = <span id="example-input-1-2">3</span>
<strong>Output: </strong><span id="example-output-1">&quot;abcabc&quot; 
<strong>Explanation: </strong></span>The same letters are at least distance 3 from each other.
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>s = <span id="example-input-2-1">&quot;aaabc&quot;</span>, k = <span id="example-input-2-2">3</span>
<strong>Output: </strong><span id="example-output-2">&quot;&quot; 
<strong>Explanation:</strong> </span>It is not possible to rearrange the string.
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: </strong>s = <span id="example-input-3-1">&quot;aaadbbcc&quot;</span>, k = <span id="example-input-3-2">2</span>
<strong>Output: </strong><span id="example-output-3">&quot;abacabcd&quot;
</span><span id="example-output-2"><strong>Explanation:</strong> </span>The same letters are at least distance 2 from each other.
</pre>
</div>
</div>
</div>