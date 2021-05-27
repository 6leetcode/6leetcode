### [IP to CIDR](https://leetcode.com/problems/ip-to-cidr)

<p>Given a start IP address <code>ip</code> and the number of IPs we need to cover <code>n</code>, return <em>a representation of the range as a list (of smallest possible length) of <strong>CIDR blocks</strong></em>.</p>

<p>A <strong>CIDR block</strong> is a string consisting of an IP, followed by a slash, and then the prefix length.</p>

<ul>
	<li>For example: <code>&quot;123.45.67.89/20&quot;</code>. That prefix length <code>20</code>&nbsp;represents the number of common prefix bits in the specified range.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> ip = &quot;255.0.0.7&quot;, n = 10
<strong>Output:</strong> [&quot;255.0.0.7/32&quot;,&quot;255.0.0.8/29&quot;,&quot;255.0.0.16/32&quot;]
<strong>Explanation:</strong>
The initial ip address, when converted to binary, looks like this (spaces added for clarity):
255.0.0.7 -&gt; 11111111 00000000 00000000 00000111
The address &quot;255.0.0.7/32&quot; specifies all addresses with a common prefix of 32 bits to the given address,
ie. just this one address.
The address &quot;255.0.0.8/29&quot; specifies all addresses with a common prefix of 29 bits to the given address:
255.0.0.8 -&gt; 11111111 00000000 00000000 00001000
Addresses with common prefix of 29 bits are:
11111111 00000000 00000000 00001000
11111111 00000000 00000000 00001001
11111111 00000000 00000000 00001010
11111111 00000000 00000000 00001011
11111111 00000000 00000000 00001100
11111111 00000000 00000000 00001101
11111111 00000000 00000000 00001110
11111111 00000000 00000000 00001111

The address &quot;255.0.0.16/32&quot; specifies all addresses with a common prefix of 32 bits to the given address,
ie. just 11111111 00000000 00000000 00010000.

In total, the answer specifies the range of 10 ips starting with the address 255.0.0.7 .

There were other representations, such as:
[&quot;255.0.0.7/32&quot;,&quot;255.0.0.8/30&quot;, &quot;255.0.0.12/30&quot;, &quot;255.0.0.16/32&quot;],
but our answer was the shortest possible.

Also note that a representation beginning with say, &quot;255.0.0.7/30&quot; would be incorrect,
because it includes addresses like 255.0.0.4 = 11111111 00000000 00000000 00000100 
that are outside the specified range.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> ip = &quot;117.145.102.62&quot;, n = 8
<strong>Output:</strong> [&quot;117.145.102.62/31&quot;,&quot;117.145.102.64/30&quot;,&quot;117.145.102.68/31&quot;]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>7 &lt;= ip.length &lt;= 15</code></li>
	<li><code>ip</code> is a valid <strong>IPv4</strong> on the form <code>&quot;a.b.c.d&quot;</code> where <code>a</code>, <code>b</code>, <code>c</code>, and <code>d</code> are integers in the range <code>[0, 255]</code>.</li>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
	<li>Every implied address <code>ip + x</code> (for <code>x &lt; n</code>) will be a valid IPv4 address.</li>
</ul>
