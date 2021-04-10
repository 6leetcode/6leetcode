### [贪吃蛇](https://leetcode-cn.com/problems/design-snake-game)

<p>请你设计一个&nbsp;<a href="https://baike.baidu.com/item/%E8%B4%AA%E5%90%83%E8%9B%87/9510203?fr=aladdin" target="_blank">贪吃蛇游戏</a>，该游戏将会在一个 <strong>屏幕尺寸 = 宽度 x 高度&nbsp;</strong>的屏幕上运行。如果你不熟悉这个游戏，可以&nbsp;<a href="http://patorjk.com/games/snake/">点击这里</a>&nbsp;在线试玩。</p>

<p>起初时，蛇在左上角的 (0, 0)<strong> </strong>位置，身体长度为 1 个单位。</p>

<p>你将会被给出一个&nbsp;<strong>(行, 列)&nbsp;</strong>形式的食物位置序列。当蛇吃到食物时，身子的长度会增加 1 个单位，得分也会 +1。</p>

<p>食物不会同时出现，会按列表的顺序逐一显示在屏幕上。比方讲，第一个食物被蛇吃掉后，第二个食物才会出现。</p>

<p>当一个食物在屏幕上出现时，它被保证不能出现在被蛇身体占据的格子里。</p>

<p>对于每个&nbsp;<code>move()</code>&nbsp;操作，你需要返回当前得分或 -1（表示蛇与自己身体或墙相撞，意味游戏结束）。</p>

<p><strong>示例：</strong></p>

<pre>给定 width = 3, height = 2, 食物序列为 food = [[1,2],[0,1]]。

Snake snake = new Snake(width, height, food);

初始时，蛇的位置在 (0,0) 且第一个食物在 (1,2)。

|S| | |
| | |F|

snake.move(&quot;R&quot;); -&gt; 函数返回 0

| |S| |
| | |F|

snake.move(&quot;D&quot;); -&gt; 函数返回 0

| | | |
| |S|F|

snake.move(&quot;R&quot;); -&gt; 函数返回 1 (蛇吃掉了第一个食物，同时第二个食物出现在位置 (0,1))

| |F| |
| |S|S|

snake.move(&quot;U&quot;); -&gt; 函数返回 1

| |F|S|
| | |S|

snake.move(&quot;L&quot;); -&gt; 函数返回 2 (蛇吃掉了第二个食物)

| |S|S|
| | |S|

snake.move(&quot;U&quot;); -&gt; 函数返回 -1 (蛇与边界相撞，游戏结束)
</pre>
