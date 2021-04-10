### [Paint Fence](https://leetcode.com/problems/paint-fence)

<p>There is a fence with n posts, each post can be painted with one of the k colors.</p>

<p>You have to paint all the posts such that no more than two adjacent fence posts have the same color.</p>

<p>Return the total number of ways you can paint the fence.</p>

<p><b>Note:</b><br />
n and k are non-negative integers.</p>

<p><b>Example:</b></p>

<pre>
<b>Input:</b> n = 3, k = 2
<b>Output:</b> 6
<strong>Explanation: </strong>Take c1 as color 1, c2 as color 2. All possible ways are:

&nbsp;           post1  post2  post3      
 -----      -----  -----  -----       
   1         c1     c1     c2 
&nbsp;  2         c1     c2     c1 
&nbsp;  3         c1     c2     c2 
&nbsp;  4         c2     c1     c1&nbsp; 
   5         c2     c1     c2
&nbsp;  6         c2     c2     c1
</pre>
