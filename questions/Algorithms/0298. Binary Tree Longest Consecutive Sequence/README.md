### [Binary Tree Longest Consecutive Sequence](https://leetcode.com/problems/binary-tree-longest-consecutive-sequence)

<p>Given a binary tree, find the length of the longest consecutive sequence path.</p>

<p>The path refers to any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The longest consecutive path need to be from parent to child (cannot be the reverse).</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong>

   1
    \
     3
    / \
   2   4
        \
         5

<strong>Output:</strong> <code>3</code>

<strong>Explanation: </strong>Longest consecutive sequence path is <code>3-4-5</code><span style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">, so return </span><code>3</code><span style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">.</span></pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:

</strong>   2
    \
     3
    / 
   2    
  / 
 1

<strong>Output: 2 

Explanation: </strong>Longest consecutive sequence path is <code>2-3</code><span style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">, not </span><code>3-2-1</code><span style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">, so return </span><code>2</code><span style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">.</span></pre>