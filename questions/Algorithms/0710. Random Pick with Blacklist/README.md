### [Random Pick with Blacklist](https://leetcode.com/problems/random-pick-with-blacklist)

<p>Given a blacklist <code>blacklist</code> containing unique integers from <code>[0, n)</code>, write a function to return a uniform random integer from <code>[0, n)</code> which is <strong>NOT</strong> in <code>blacklist</code>.</p>

<p>Optimize it such that it minimizes the call to system&rsquo;s <code>Math.random()</code>.</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= n &lt;= 1000000000</code></li>
	<li><code>0 &lt;= blacklist.length &lt; min(100000, n)</code></li>
	<li><code>[0, n)</code> does NOT include n. See <a href="https://en.wikipedia.org/wiki/Interval_(mathematics)" target="_blank">interval notation</a>.</li>
</ol>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: 
</strong><span id="example-input-1-1">[&quot;Solution&quot;,&quot;pick&quot;,&quot;pick&quot;,&quot;pick&quot;]
</span><span id="example-input-1-2">[[1,[]],[],[],[]]</span>
<strong>Output: </strong><span id="example-output-1">[null,0,0,0]</span>
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: 
</strong><span id="example-input-2-1">[&quot;Solution&quot;,&quot;pick&quot;,&quot;pick&quot;,&quot;pick&quot;]
</span><span id="example-input-2-2">[[2,[]],[],[],[]]</span>
<strong>Output: </strong><span id="example-output-2">[null,1,1,1]</span>
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: 
</strong><span id="example-input-3-1">[&quot;Solution&quot;,&quot;pick&quot;,&quot;pick&quot;,&quot;pick&quot;]
</span><span id="example-input-3-2">[[3,[1]],[],[],[]]</span>
<strong>Output: </strong><span id="example-output-3">[null,0,0,2]</span>
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input: 
</strong><span id="example-input-4-1">[&quot;Solution&quot;,&quot;pick&quot;,&quot;pick&quot;,&quot;pick&quot;]
</span><span id="example-input-4-2">[[4,[2]],[],[],[]]</span>
<strong>Output: </strong><span id="example-output-4">[null,1,3,1]</span>
</pre>

<p><strong>Explanation of Input Syntax:</strong></p>

<p>The input is two lists: the subroutines called and their arguments. <code>Solution</code>&#39;s constructor has two arguments, <code>n</code> and the blacklist <code>blacklist</code>. <code>pick</code> has no arguments. Arguments are always wrapped with a list, even if there aren&#39;t any.</p>
