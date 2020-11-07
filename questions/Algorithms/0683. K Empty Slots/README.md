### [K Empty Slots](https://leetcode.com/problems/k-empty-slots)

<p>You have <code>N</code> bulbs in a row numbered from <code>1</code> to <code>N</code>. Initially, all the bulbs are turned off. We turn on exactly one bulb everyday until all bulbs are on after <code>N</code> days.</p>

<p>You are given an array <code>bulbs</code>&nbsp;of length <code>N</code>&nbsp;where <code>bulbs[i] = x</code> means that on the <code>(i+1)th</code> day, we will turn on the bulb at position <code>x</code>&nbsp;where&nbsp;<code>i</code>&nbsp;is&nbsp;<code>0-indexed</code>&nbsp;and&nbsp;<code>x</code>&nbsp;is&nbsp;<code>1-indexed.</code></p>

<p>Given an integer <code>K</code>, find out the <strong>minimum day number</strong> such that there exists two <strong>turned on</strong> bulbs that have <strong>exactly</strong>&nbsp;<code>K</code> bulbs between them that are <strong>all turned off</strong>.</p>

<p>If there isn&#39;t such day, return <code>-1</code>.</p>

<p>&nbsp;</p>

<p><b>Example 1:</b></p>

<pre>
<b>Input:</b> 
bulbs: [1,3,2]
K: 1
<b>Output:</b> 2
<b>Explanation:</b>
On the first day: bulbs[0] = 1, first bulb is turned on: [1,0,0]
On the second day: bulbs[1] = 3, third bulb is turned on: [1,0,1]
On the third day: bulbs[2] = 2, second bulb is turned on: [1,1,1]
We return 2 because on the second day, there were two on bulbs with one off bulb between them.
</pre>

<p><b>Example 2:</b></p>

<pre>
<b>Input:</b> 
bulbs: [1,2,3]
K: 1
<b>Output:</b> -1
</pre>

<p>&nbsp;</p>

<p><b>Note:</b></p>

<ol>
	<li><code>1 &lt;= N &lt;= 20000</code></li>
	<li><code>1 &lt;= bulbs[i] &lt;= N</code></li>
	<li><code>bulbs</code>&nbsp;is a permutation of numbers from&nbsp;<code>1</code>&nbsp;to&nbsp;<code>N</code>.</li>
	<li><code>0 &lt;= K &lt;= 20000</code></li>
</ol>
