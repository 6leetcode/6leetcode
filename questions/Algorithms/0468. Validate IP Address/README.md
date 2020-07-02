### [Validate IP Address](https://leetcode.com/problems/validate-ip-address)

<p>Write a function to check whether an input string is a valid IPv4 address or IPv6 address or neither.</p>

<p><b>IPv4</b> addresses are canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots (&quot;.&quot;), e.g.,<code>172.16.254.1</code>;</p>

<p>Besides, leading zeros in the IPv4 is invalid. For example, the address <code>172.16.254.01</code> is invalid.</p>

<p><b>IPv6</b> addresses are represented as eight groups of four hexadecimal digits, each group representing 16 bits. The groups are separated by colons (&quot;:&quot;). For example, the address <code>2001:0db8:85a3:0000:0000:8a2e:0370:7334</code> is a valid one. Also, we could omit some leading zeros among four hexadecimal digits and some low-case characters in the address to upper-case ones, so <code>2001:db8:85a3:0:0:8A2E:0370:7334</code> is also a valid IPv6 address(Omit leading zeros and using upper cases).</p>

<p>However, we don&#39;t replace a consecutive group of zero value with a single empty group using two consecutive colons (::) to pursue simplicity. For example, <code>2001:0db8:85a3::8A2E:0370:7334</code> is an invalid IPv6 address.</p>

<p>Besides, extra leading zeros in the IPv6 is also invalid. For example, the address <code>02001:0db8:85a3:0000:0000:8a2e:0370:7334</code> is invalid.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> IP = &quot;172.16.254.1&quot;
<strong>Output:</strong> &quot;IPv4&quot;
<strong>Explanation:</strong> This is a valid IPv4 address, return &quot;IPv4&quot;.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> IP = &quot;2001:0db8:85a3:0:0:8A2E:0370:7334&quot;
<strong>Output:</strong> &quot;IPv6&quot;
<strong>Explanation:</strong> This is a valid IPv6 address, return &quot;IPv6&quot;.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> IP = &quot;256.256.256.256&quot;
<strong>Output:</strong> &quot;Neither&quot;
<strong>Explanation:</strong> This is neither a IPv4 address nor a IPv6 address.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>IP</code> consists only of English letters, digits and the characters &quot;.&quot; and &quot;:&quot;.</li>
</ul>
