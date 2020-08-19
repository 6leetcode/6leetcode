### [Validate IP Address](https://leetcode.com/problems/validate-ip-address)

<p>Given a string <code>IP</code>. We need to check If <code>IP</code> is&nbsp;a valid <strong>IPv4</strong> address, valid&nbsp;<strong>IPv6</strong> address or <strong>not a valid IP address</strong>.</p>

<p>Return <code>&quot;IPv4&quot;</code> if IP is a valid IPv4 address,&nbsp;<code>&quot;IPv6&quot;</code> if&nbsp;IP is a valid IPv6 address or <code>&quot;Neither&quot;</code> if IP is not a valid IP of any type.</p>

<p><strong>A valid IPv4</strong> address&nbsp;is an IP in the form <code>&quot;x<sub>1</sub>.x<sub>2</sub>.x<sub>3</sub>.x<sub>4</sub>&quot;</code> where <code>0 &lt;=&nbsp;x<sub><span style="font-size: 10.8333px;">i</span></sub>&nbsp;&lt;= 255</code> and <code>x<sub>i</sub></code> <strong>cannot contain</strong> leading zeros. For example, <code>&quot;192.168.1.1&quot;</code> and&nbsp;<code>&quot;192.168.1.0&quot;</code> are valid IPv4 addresses but <code>&quot;192.168.01.1&quot;</code>, <code>&quot;192.168.1.00&quot;</code>&nbsp;and <code>&quot;192.168@1.1&quot;</code> are invalid IPv4 adresses.</p>

<p><strong>A valid IPv6</strong> address&nbsp;is an IP in the form <code>&quot;x<sub>1</sub>:x<sub>2</sub>:x<sub>3</sub>:x<sub>4:</sub>x<sub>5</sub>:x<sub>6</sub>:x<sub>7</sub>:x<sub>8</sub>&quot;</code> where:</p>

<ul>
	<li><code>1 &lt;= x<sub>i</sub>.length &lt;= 4</code></li>
	<li><code>x<sub>i</sub></code> is <strong>hexadecimal string</strong> whcih may contain digits, lower-case English letter (<code>&#39;a&#39;</code> to <code>&#39;f&#39;</code>) <strong>and/or</strong> upper-case English letters (<code>&#39;A&#39;</code> to <code>&#39;F&#39;</code>).</li>
	<li>Leading zeros are allowed in <code>x<sub>i</sub></code>.</li>
</ul>

<p>For example,&nbsp;&quot;<code>2001:0db8:85a3:0000:0000:8a2e:0370:7334&quot;</code>&nbsp;and &quot;<code>2001:db8:85a3:0:0:8A2E:0370:7334&quot;</code> are valid IPv6 addresses but &quot;<code>2001:0db8:85a3::8A2E:037j:7334&quot;</code>&nbsp;and &quot;<code>02001:0db8:85a3:0000:0000:8a2e:0370:7334&quot;</code> are invalid IPv6 addresses.</p>

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

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> IP = &quot;2001:0db8:85a3:0:0:8A2E:0370:7334:&quot;
<strong>Output:</strong> &quot;Neither&quot;
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> IP = &quot;1e1.4.5.6&quot;
<strong>Output:</strong> &quot;Neither&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>IP</code> consists only of English letters, digits and the characters <code>&#39;.&#39;</code> and <code>&#39;:&#39;</code>.</li>
</ul>
