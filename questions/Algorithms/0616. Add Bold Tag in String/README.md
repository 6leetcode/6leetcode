### [Add Bold Tag in String](https://leetcode.com/problems/add-bold-tag-in-string)

Given a string <b>s</b> and a list of strings <b>dict</b>, you need to add a closed pair of bold tag <code>&lt;b&gt;</code> and <code>&lt;/b&gt;</code> to wrap the substrings in s that exist in dict. If two such substrings overlap, you need to wrap them together by only one pair of closed bold tag. Also, if two substrings wrapped by bold tags are consecutive, you need to combine them. 

<p><b>Example 1:</b><br />
<pre>
<b>Input:</b> 
s = "abcxyz123"
dict = ["abc","123"]
<b>Output:</b>
"&lt;b&gt;abc&lt;/b&gt;xyz&lt;b&gt;123&lt;/b&gt;"
</pre>
</p>

<p><b>Example 2:</b><br />
<pre>
<b>Input:</b> 
s = "aaabbcc"
dict = ["aaa","aab","bc"]
<b>Output:</b>
"&lt;b&gt;aaabbc&lt;/b&gt;c"
</pre>
</p>

<p><b>Note:</b><br>
<ol>
<li>The given dict won't contain duplicates, and its length won't exceed 100.</li>
<li>All the strings in input have length in range [1, 1000]. </li>
</ol>
</p>