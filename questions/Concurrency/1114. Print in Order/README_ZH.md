### [按序打印](https://leetcode-cn.com/problems/print-in-order)

<p>我们提供了一个类：</p>

<pre>public class Foo {
&nbsp; public void first() { print(&quot;first&quot;); }
&nbsp; public void second() { print(&quot;second&quot;); }
&nbsp; public void third() { print(&quot;third&quot;); }
}</pre>

<p>三个不同的线程将会共用一个&nbsp;<code>Foo</code>&nbsp;实例。</p>

<ul>
	<li>线程 A 将会调用 <code>first()</code> 方法</li>
	<li>线程 B 将会调用&nbsp;<code>second()</code> 方法</li>
	<li>线程 C 将会调用 <code>third()</code> 方法</li>
</ul>

<p>请设计修改程序，以确保 <code>second()</code> 方法在 <code>first()</code> 方法之后被执行，<code>third()</code> 方法在 <code>second()</code> 方法之后被执行。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入:</strong> [1,2,3]
<strong>输出:</strong> &quot;firstsecondthird&quot;
<strong>解释:</strong> 
有三个线程会被异步启动。
输入 [1,2,3] 表示线程 A 将会调用 first() 方法，线程 B 将会调用 second() 方法，线程 C 将会调用 third() 方法。
正确的输出是 &quot;firstsecondthird&quot;。
</pre>

<p><strong>示例 2:</strong></p>

<pre><strong>输入:</strong> [1,3,2]
<strong>输出:</strong> &quot;firstsecondthird&quot;
<strong>解释:</strong> 
输入 [1,3,2] 表示线程 A 将会调用 first() 方法，线程 B 将会调用 third() 方法，线程 C 将会调用 second() 方法。
正确的输出是 &quot;firstsecondthird&quot;。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>尽管输入中的数字似乎暗示了顺序，但是我们并不保证线程在操作系统中的调度顺序。</li>
	<li>你看到的输入格式主要是为了确保测试的全面性。</li>
</ul>
