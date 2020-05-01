### [Largest BST Subtree](https://leetcode.com/problems/largest-bst-subtree)

<p>Given a binary tree, find the largest subtree which is a Binary Search Tree (BST), where largest means subtree with largest number of nodes in it.</p>

<p><b>Note:</b><br />
A subtree must include all of its descendants.</p>

<p><strong>Example:</strong></p>

<pre>
<strong>Input: </strong>[10,5,15,1,8,null,7]

   10 
   / \ 
<font color="red">  5</font>  15 
<font color="red"> / \</font>   \ 
<font color="red">1   8</font>   7

<strong>Output:</strong> 3
<strong>Explanation: </strong>The Largest BST Subtree in this case is the highlighted one.
             The return value is the subtree&#39;s size, which is 3.
</pre>

<p><b>Follow up:</b><br />
Can you figure out ways to solve it with O(n) time complexity?</p>
