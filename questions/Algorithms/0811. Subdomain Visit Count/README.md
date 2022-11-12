### [Subdomain Visit Count](https://leetcode.com/problems/subdomain-visit-count)

<p>A website domain <code>&quot;discuss.leetcode.com&quot;</code> consists of various subdomains. At the top level, we have <code>&quot;com&quot;</code>, at the next level, we have <code>&quot;leetcode.com&quot;</code>&nbsp;and at the lowest level, <code>&quot;discuss.leetcode.com&quot;</code>. When we visit a domain like <code>&quot;discuss.leetcode.com&quot;</code>, we will also visit the parent domains <code>&quot;leetcode.com&quot;</code> and <code>&quot;com&quot;</code> implicitly.</p>

<p>A <strong>count-paired domain</strong> is a domain that has one of the two formats <code>&quot;rep d1.d2.d3&quot;</code> or <code>&quot;rep d1.d2&quot;</code> where <code>rep</code> is the number of visits to the domain and <code>d1.d2.d3</code> is the domain itself.</p>

<ul>
	<li>For example, <code>&quot;9001 discuss.leetcode.com&quot;</code> is a <strong>count-paired domain</strong> that indicates that <code>discuss.leetcode.com</code> was visited <code>9001</code> times.</li>
</ul>

<p>Given an array of <strong>count-paired domains</strong> <code>cpdomains</code>, return <em>an array of the <strong>count-paired domains</strong> of each subdomain in the input</em>. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> cpdomains = [&quot;9001 discuss.leetcode.com&quot;]
<strong>Output:</strong> [&quot;9001 leetcode.com&quot;,&quot;9001 discuss.leetcode.com&quot;,&quot;9001 com&quot;]
<strong>Explanation:</strong> We only have one website domain: &quot;discuss.leetcode.com&quot;.
As discussed above, the subdomain &quot;leetcode.com&quot; and &quot;com&quot; will also be visited. So they will all be visited 9001 times.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> cpdomains = [&quot;900 google.mail.com&quot;, &quot;50 yahoo.com&quot;, &quot;1 intel.mail.com&quot;, &quot;5 wiki.org&quot;]
<strong>Output:</strong> [&quot;901 mail.com&quot;,&quot;50 yahoo.com&quot;,&quot;900 google.mail.com&quot;,&quot;5 wiki.org&quot;,&quot;5 org&quot;,&quot;1 intel.mail.com&quot;,&quot;951 com&quot;]
<strong>Explanation:</strong> We will visit &quot;google.mail.com&quot; 900 times, &quot;yahoo.com&quot; 50 times, &quot;intel.mail.com&quot; once and &quot;wiki.org&quot; 5 times.
For the subdomains, we will visit &quot;mail.com&quot; 900 + 1 = 901 times, &quot;com&quot; 900 + 50 + 1 = 951 times, and &quot;org&quot; 5 times.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= cpdomain.length &lt;= 100</code></li>
	<li><code>1 &lt;= cpdomain[i].length &lt;= 100</code></li>
	<li><code>cpdomain[i]</code> follows either the <code>&quot;rep<sub>i</sub> d1<sub>i</sub>.d2<sub>i</sub>.d3<sub>i</sub>&quot;</code> format or the <code>&quot;rep<sub>i</sub> d1<sub>i</sub>.d2<sub>i</sub>&quot;</code> format.</li>
	<li><code>rep<sub>i</sub></code> is an integer in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>d1<sub>i</sub></code>, <code>d2<sub>i</sub></code>, and <code>d3<sub>i</sub></code> consist of lowercase English letters.</li>
</ul>
