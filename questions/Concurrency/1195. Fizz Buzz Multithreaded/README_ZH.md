### [交替打印字符串](https://leetcode-cn.com/problems/fizz-buzz-multithreaded)

<p>编写一个可以从 1 到 n 输出代表这个数字的字符串的程序，但是：</p>

<ul>
	<li>如果这个数字可以被 3 整除，输出 &quot;fizz&quot;。</li>
	<li>如果这个数字可以被 5 整除，输出&nbsp;&quot;buzz&quot;。</li>
	<li>如果这个数字可以同时被 3 和 5 整除，输出 &quot;fizzbuzz&quot;。</li>
</ul>

<p>例如，当&nbsp;<code>n = 15</code>，输出：&nbsp;<code>1, 2, fizz, 4, buzz, fizz, 7, 8, fizz, buzz, 11, fizz, 13, 14, fizzbuzz</code>。</p>

<p>假设有这么一个类：</p>

<pre>class FizzBuzz {
&nbsp; public FizzBuzz(int n) { ... }&nbsp;              // constructor
  public void fizz(printFizz) { ... }          // only output &quot;fizz&quot;
  public void buzz(printBuzz) { ... }          // only output &quot;buzz&quot;
  public void fizzbuzz(printFizzBuzz) { ... }  // only output &quot;fizzbuzz&quot;
  public void number(printNumber) { ... }      // only output the numbers
}</pre>

<p>请你实现一个有四个线程的多线程版&nbsp;&nbsp;<code>FizzBuzz</code>，&nbsp;同一个&nbsp;<code>FizzBuzz</code>&nbsp;实例会被如下四个线程使用：</p>

<ol>
	<li>线程A将调用&nbsp;<code>fizz()</code>&nbsp;来判断是否能被 3 整除，如果可以，则输出&nbsp;<code>fizz</code>。</li>
	<li>线程B将调用&nbsp;<code>buzz()</code>&nbsp;来判断是否能被 5 整除，如果可以，则输出&nbsp;<code>buzz</code>。</li>
	<li>线程C将调用&nbsp;<code>fizzbuzz()</code>&nbsp;来判断是否同时能被 3 和 5 整除，如果可以，则输出&nbsp;<code>fizzbuzz</code>。</li>
	<li>线程D将调用&nbsp;<code>number()</code>&nbsp;来实现输出既不能被 3 整除也不能被 5 整除的数字。</li>
</ol>
