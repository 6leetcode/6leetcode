### [Find Leaves of Binary Tree](https://leetcode.com/problems/find-leaves-of-binary-tree)

<p>Given a binary tree, collect a tree&#39;s nodes as if you were doing this: Collect and remove all leaves, repeat until the tree is empty.</p>

<p>&nbsp;</p>

<p><strong>Example:</strong></p>

<pre>
<strong>Input: </strong><span id="example-input-1-1">[1,2,3,4,5]
&nbsp; 
&nbsp;         </span>1
         / \
        2   3
       / \     
      4   5    

<strong>Output: </strong><span id="example-output-1">[[4,5,3],[2],[1]]</span>
</pre>

<p>&nbsp;</p>

<p><strong>Explanation:</strong></p>

<p>1. Removing the leaves <code>[4,5,3]</code> would result in this tree:</p>

<pre>
          1
         / 
        2          
</pre>

<p>&nbsp;</p>

<p>2. Now removing the leaf <code>[2]</code> would result in this tree:</p>

<pre>
          1          
</pre>

<p>&nbsp;</p>

<p>3. Now removing the leaf <code>[1]</code> would result in the empty tree:</p>

<pre>
          []         
</pre>
[[3,5,4],[2],[1]], [[3,4,5],[2],[1]], etc, are also consider correct answers since per each level it doesn&#39;t matter the order on which elements are returned.