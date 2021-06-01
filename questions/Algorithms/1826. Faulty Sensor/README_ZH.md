### [有缺陷的传感器](https://leetcode-cn.com/problems/faulty-sensor)

<p>实验室里正在进行一项实验。为了确保数据的准确性，同时使用 <strong>两个</strong> 传感器来采集数据。您将获得2个数组 <code>sensor1</code> and <code>sensor2</code>，其中 <code>sensor1[i]</code> 和 <code>sensor2[i]</code> 分别是两个传感器对<span style="">第 <code>i</code> 个</span>数据点采集到的数据。</p>

<p>但是，这种类型的传感器有可能存在缺陷，它会导致 <strong>某一个</strong> 数据点采集的数据（掉落值）被丢弃。</p>

<p>数据被丢弃后，所有在其右侧的数据点采集的数据，都会被向左移动一个位置，最后一个数据点采集的数据会被一些随机值替换。可以保证此随机值不等于掉落值。</p>

<ul>
	<li>举个例子, 如果正确的数据是 <code>[1,2,<em><strong>3</strong></em>,4,5]</code> ， 此时 <code>3</code> 被丢弃了, 传感器会返回 <code>[1,2,4,5,<em><strong>7</strong></em>]</code> (最后的位置可以是任何值, 不仅仅是 <code>7</code>).</li>
</ul>

<p>可以确定的是，<strong>最多有一个</strong> 传感器有缺陷。请返回这个有缺陷的传感器的编号 （<code>1</code> 或 <code>2</code>）。如果任一传感器 <strong>没有缺陷</strong> ，或者 <strong>无法</strong> 确定有缺陷的传感器，则返回 <code>-1</code> 。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>sensor1 = [2,3,4,5], sensor2 = [2,1,3,4]
<strong>输出：</strong>1
<strong>解释：</strong>传感器 2 返回了所有正确的数据.
传感器2对第二个数据点采集的数据，被传感器1丢弃了，传感器1返回的最后一个数据被替换为 5 。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>sensor1 = [2,2,2,2,2], sensor2 = [2,2,2,2,5]
<strong>输出：</strong>-1
<strong>解释：</strong>无法判定拿个传感器是有缺陷的。
假设任一传感器丢弃的数据是最后一位，那么，另一个传感器就能给出与之对应的输出。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>sensor1 = [2,3,2,2,3,2], sensor2 = [2,3,2,3,2,7]
<strong>输出：</strong>2
<strong>解释：</strong>传感器 1 返回了所有正确的数据.
传感器 1 对第四个数据点的采集数据，被传感器2丢失了, 传感器 2 返回的最后一个数据被替换为 7 。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>sensor1.length == sensor2.length</code></li>
	<li><code>1 <= sensor1.length <= 100</code></li>
	<li><code>1 <= sensor1[i], sensor2[i] <= 100</code></li>
</ul>
