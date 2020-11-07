### [栅栏涂色](https://leetcode-cn.com/problems/paint-fence)

<p>有 k 种颜色的涂料和一个包含 n 个栅栏柱的栅栏，每个栅栏柱可以用其中一种颜色进行上色。</p>

<p>你需要给所有栅栏柱上色，并且保证其中相邻的栅栏柱 <strong>最多连续两个&nbsp;</strong>颜色相同。然后，返回所有有效涂色的方案数。</p>

<p><strong>注意:</strong><br>
n 和&nbsp;k 均为非负的整数。</p>

<p><strong>示例:</strong></p>

<pre><strong>输入:</strong> n = 3，k = 2
<strong>输出:</strong> 6
<strong>解析: </strong>用<strong> </strong>c1 表示颜色 1，c2 表示颜色 2，所有可能的涂色方案有:

&nbsp;           柱 1    柱 2   柱 3     
 -----      -----  -----  -----       
   1         c1     c1     c2 
&nbsp;  2         c1     c2     c1 
&nbsp;  3         c1     c2     c2 
&nbsp;  4         c2     c1     c1&nbsp; 
   5         c2     c1     c2
&nbsp;  6         c2     c2     c1
</pre>
