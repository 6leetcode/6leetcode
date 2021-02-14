### [有效的山脉数组](https://leetcode-cn.com/problems/valid-mountain-array)

<p>给定一个整数数组 <code>arr</code>，如果它是有效的山脉数组就返回 <code>true</code>，否则返回 <code>false</code>。</p>

<p>让我们回顾一下，如果 A 满足下述条件，那么它是一个山脉数组：</p>

<ul>
	<li><code>arr.length >= 3</code></li>
	<li>在 <code>0 < i < arr.length - 1</code> 条件下，存在 <code>i</code> 使得：
	<ul>
		<li><code>arr[0] < arr[1] < ... arr[i-1] < arr[i] </code></li>
		<li><code>arr[i] > arr[i+1] > ... > arr[arr.length - 1]</code></li>
	</ul>
	</li>
</ul>

<p> </p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/10/20/hint_valid_mountain_array.png" style="height: 316px; width: 500px;" /></p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>arr = [2,1]
<strong>输出：</strong>false
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>arr = [3,5,5]
<strong>输出：</strong>false
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>arr = [0,3,2,1]
<strong>输出：</strong>true</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= arr.length <= 10<sup>4</sup></code></li>
	<li><code>0 <= arr[i] <= 10<sup>4</sup></code></li>
</ul>
