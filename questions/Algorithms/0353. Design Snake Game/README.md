### [Design Snake Game](https://leetcode.com/problems/design-snake-game)

<p>Design a <a href="https://en.wikipedia.org/wiki/Snake_(video_game)" target="_blank">Snake game</a> that is played on a device with screen size = <i>width</i> x <i>height</i>. <a href="http://patorjk.com/games/snake/" target="_blank">Play the game online</a> if you are not familiar with the game.</p>

<p>The snake is initially positioned at the top left corner (0,0) with length = 1 unit.</p>

<p>You are given a list of food&#39;s positions in row-column order. When a snake eats the food, its length and the game&#39;s score both increase by 1.</p>

<p>Each food appears one by one on the screen. For example, the second food will not appear until the first food was eaten by the snake.</p>

<p>When a food does appear on the screen, it is guaranteed that it will not appear on a block occupied by the snake.</p>

<p><b>Example:</b></p>

<pre>
Given width = 3, height = 2, and food = [[1,2],[0,1]].

Snake snake = new Snake(width, height, food);

Initially the snake appears at position (0,0) and the food at (1,2).

|S| | |
| | |F|

snake.move(&quot;R&quot;); -&gt; Returns 0

| |S| |
| | |F|

snake.move(&quot;D&quot;); -&gt; Returns 0

| | | |
| |S|F|

snake.move(&quot;R&quot;); -&gt; Returns 1 (Snake eats the first food and right after that, the second food appears at (0,1) )

| |F| |
| |S|S|

snake.move(&quot;U&quot;); -&gt; Returns 1

| |F|S|
| | |S|

snake.move(&quot;L&quot;); -&gt; Returns 2 (Snake eats the second food)

| |S|S|
| | |S|

snake.move(&quot;U&quot;); -&gt; Returns -1 (Game over because snake collides with border)
</pre>
