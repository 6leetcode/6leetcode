### [Logger Rate Limiter](https://leetcode.com/problems/logger-rate-limiter)

<p>Design a logger system that receive stream of messages along with its timestamps, each message should be printed if and only if it is <b>not printed in the last 10 seconds</b>.</p>

<p>Given a message and a timestamp (in seconds granularity), return true if the message should be printed in the given timestamp, otherwise returns false.</p>

<p>It is possible that several messages arrive roughly at the same time.</p>

<p><b>Example:</b></p>

<pre>
Logger logger = new Logger();

// logging string &quot;foo&quot; at timestamp 1
logger.shouldPrintMessage(1, &quot;foo&quot;); returns true; 

// logging string &quot;bar&quot; at timestamp 2
logger.shouldPrintMessage(2,&quot;bar&quot;); returns true;

// logging string &quot;foo&quot; at timestamp 3
logger.shouldPrintMessage(3,&quot;foo&quot;); returns false;

// logging string &quot;bar&quot; at timestamp 8
logger.shouldPrintMessage(8,&quot;bar&quot;); returns false;

// logging string &quot;foo&quot; at timestamp 10
logger.shouldPrintMessage(10,&quot;foo&quot;); returns false;

// logging string &quot;foo&quot; at timestamp 11
logger.shouldPrintMessage(11,&quot;foo&quot;); returns true;
</pre>