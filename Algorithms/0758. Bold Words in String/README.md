### [Bold Words in String](https://leetcode.com/problems/bold-words-in-string)

<p>
Given a set of keywords <code>words</code> and a string <code>S</code>, make all appearances of all keywords in <code>S</code> bold.  Any letters between <code>&lt;b&gt;</code> and <code>&lt;/b&gt;</code> tags become bold.
</p><p>
The returned string should use the least number of tags possible, and of course the tags should form a valid combination.
</p>
<p>
For example, given that <code>words = ["ab", "bc"]</code> and  <code>S = "aabcd"</code>, we should return <code>"a&lt;b&gt;abc&lt;/b&gt;d"</code>.  Note that returning <code>"a&lt;b&gt;a&lt;b&gt;b&lt;/b&gt;c&lt;/b&gt;d"</code> would use more tags, so it is incorrect.
</p>

<p><b>Note:</b><ol>
<li><code>words</code> has length in range <code>[0, 50]</code>.</li>
<li><code>words[i]</code> has length in range <code>[1, 10]</code>.</li>
<li><code>S</code> has length in range <code>[0, 500]</code>.</li>
<li>All characters in <code>words[i]</code> and <code>S</code> are lowercase letters.</li>
</ol></p>