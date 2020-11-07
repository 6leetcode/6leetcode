### [产品名称格式修复](https://leetcode-cn.com/problems/fix-product-name-format)

<p>表：<code>Sales</code></p>

<pre>+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| sale_id      | int     |
| product_name | varchar |
| sale_date    | date    |
+--------------+---------+
sale_id 是该表主键
该表的每一行包含了产品的名称及其销售日期
</pre>

<p>因为在 2000 年该表是手工填写的，<code>product_name</code>&nbsp;可能包含前后空格，而且包含大小写。</p>

<p>写一个 SQL 语句报告：</p>

<ul>
	<li><code>product_name</code>&nbsp;是小写字母且不包含前后空格</li>
	<li><code>sale_date</code>&nbsp;格式为&nbsp;<code>(&#39;YYYY-MM&#39;)</code>&nbsp;</li>
	<li><code>total</code>&nbsp;是产品在本月销售的次数</li>
</ul>

<p>返回结果以&nbsp;<code>product_name</code>&nbsp;<strong>升序</strong> 排列，如果有排名相同,&nbsp;再以&nbsp;<code>sale_date</code> <strong>升序 </strong>排列。</p>

<p>查询结果格式如下所示：</p>

<pre><code>Sales</code> 表：
+------------+------------------+--------------+
| sale_id    | product_name     | sale_date    |
+------------+------------------+--------------+
| 1          |      LCPHONE     | 2000-01-16   |
| 2    &nbsp;     |    LCPhone       | 2000-01-17   |
| 3    &nbsp;     |     LcPhOnE     &nbsp;| 2000-02-18   |
| 4 &nbsp;        |      LCKeyCHAiN  | 2000-02-19   |
| 5 &nbsp;        |   LCKeyChain     | 2000-02-28   |
| 6        &nbsp; | Matryoshka     &nbsp; | 2000-03-31   | 
+------------+------------------+--------------+

Result 表：
+--------------+--------------+----------+
| product_name | sale_date    | total    |
+--------------+--------------+----------+
| lcphone   &nbsp;  | 2000-01     &nbsp;| 2       &nbsp;|
| lckeychain   | 2000-02  &nbsp;   | 2       &nbsp;| 
| lcphone      | 2000-02    &nbsp; | 1       &nbsp;| 
| matryoshka   | 2000-03 &nbsp;    | 1       &nbsp;| 
+--------------+--------------+----------+

1 月份，卖了 2 个 LcPhones，请注意产品名称是小写的，中间可能包含空格
2 月份，卖了 2 个 LCKeychains 和 1 个 LCPhone
3 月份，卖了 1 个 matryoshka
</pre>
