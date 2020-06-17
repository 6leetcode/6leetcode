### [易混淆数](https://leetcode-cn.com/problems/confusing-number)

<p>给定一个数字 <code>N</code>，当它满足以下条件的时候返回 <code>true</code>：</p>

<p>原数字旋转 180&deg; 以后可以得到新的数字。</p>

<p>如 0, 1, 6, 8, 9 旋转 180&deg; 以后，得到了新的数字 0, 1, 9, 8, 6 。</p>

<p>2, 3, 4, 5, 7 旋转 180&deg; 后，得到的<strong>不是</strong>数字。</p>

<p>易混淆数&nbsp;(confusing number) 在旋转180&deg;以后，可以得到和原来<strong>不同</strong>的数，且新数字的每一位都是有效的。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/03/23/1268_1.png" style="height: 90px; width: 180px;"></p>

<pre><strong>输入：</strong>6
<strong>输出：</strong>true
<strong>解释： 
</strong>把 6 旋转 180&deg; 以后得到 9，9 是有效数字且 9!=6 。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/03/23/1268_2.png" style="height: 90px; width: 180px;"></p>

<pre><strong>输入：</strong>89
<strong>输出：</strong>true
<strong>解释: 
</strong>把 89 旋转 180&deg; 以后得到 68，<code>86</code> 是有效数字且 86!=89 。
</pre>

<p><strong>示例 3：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/03/26/1268_3.png" style="height: 121px; width: 301px;"></p>

<pre><strong>输入：</strong>11
<strong>输出：</strong>false
<strong>解释：
</strong>把 11 旋转 180&deg; 以后得到 11，11 是有效数字但是值保持不变，所以 11 不是易混淆数字。 
</pre>

<p><strong>示例 4：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/03/23/1268_4.png" style="height: 90px; width: 180px;"></p>

<pre><strong>输入：</strong>25
<strong>输出：</strong>false
<strong>解释：</strong>
把 25 旋转 180&deg; 以后得到的不是数字。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>0 &lt;= N &lt;= 10^9</code></li>
	<li>可以忽略掉旋转后得到的前导零，例如，如果我们旋转后得到 <code>0008</code> 那么该数字就是 <code>8</code> 。</li>
</ol>
