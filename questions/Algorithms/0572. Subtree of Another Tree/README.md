### [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree)

<p>Given two <strong>non-empty</strong> binary trees <b>s</b> and <b>t</b>, check whether tree <b>t</b> has exactly the same structure and node values with a subtree of <b>s</b>. A subtree of <b>s</b> is a tree consists of a node in <b>s</b> and all of this node&#39;s descendants. The tree <b>s</b> could also be considered as a subtree of itself.</p>

<p><b>Example 1:</b><br />
Given tree s:</p>

<pre>
     3
    / \
   4   5
  / \
 1   2
</pre>
Given tree t:

<pre>
   4 
  / \
 1   2
</pre>
Return <b>true</b>, because t has the same structure and node values with a subtree of s.

<p>&nbsp;</p>

<p><b>Example 2:</b><br />
Given tree s:</p>

<pre>
     3
    / \
   4   5
  / \
 1   2
    /
   0
</pre>
Given tree t:

<pre>
   4
  / \
 1   2
</pre>
Return <b>false</b>.

<p>&nbsp;</p>
