### [日志速率限制器](https://leetcode-cn.com/problems/logger-rate-limiter)

<p>请你设计一个日志系统，可以流式接收日志以及它的时间戳。</p>

<p>该日志会被打印出来，需要满足一个条件：当且仅当日志内容&nbsp;<strong>在过去的 10 秒钟内没有被打印过</strong>。</p>

<p>给你一条日志的内容和它的时间戳（粒度为秒级），如果这条日志在给定的时间戳应该被打印出来，则返回&nbsp;true，否则请返回&nbsp;false。</p>

<p>要注意的是，可能会有多条日志在同一时间被系统接收。</p>

<p><strong>示例：</strong></p>

<pre>Logger logger = new Logger();

// 日志内容 &quot;foo&quot; 在时刻 1 到达系统
logger.shouldPrintMessage(1, &quot;foo&quot;); returns true; 

// 日志内容 &quot;bar&quot; 在时刻 2 到达系统
logger.shouldPrintMessage(2,&quot;bar&quot;); returns true;

// 日志内容 &quot;foo&quot; 在时刻 3 到达系统
logger.shouldPrintMessage(3,&quot;foo&quot;); returns false;

// 日志内容 &quot;bar&quot; 在时刻 8 到达系统
logger.shouldPrintMessage(8,&quot;bar&quot;); returns false;

// 日志内容 &quot;foo&quot; 在时刻 10 到达系统
logger.shouldPrintMessage(10,&quot;foo&quot;); returns false;

// 日志内容 &quot;foo&quot; 在时刻 11 到达系统
logger.shouldPrintMessage(11,&quot;foo&quot;); returns true;
</pre>
