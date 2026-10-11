### [Design SQL](https://leetcode.com/problems/design-sql)

<p>You are given two string arrays, <code>names</code> and <code>columns</code>, both of size <code>n</code>. The <code>i<sup>th</sup></code> table is represented by the name <code>names[i]</code> and contains <code>columns[i]</code> number of columns.</p>

<p>You need to implement a class that supports the following <strong>operations</strong>:</p>

<ul>
	<li><strong>Insert</strong> a row in a specific table with an id assigned using an <em>auto-increment</em> method, where the id of the first inserted row is 1, and the id of each <em>new </em>row inserted into the same table is <strong>one greater</strong> than the id of the <strong>last inserted</strong> row, even if the last row was <em>removed</em>.</li>
	<li><strong>Remove</strong> a row from a specific table. Removing a row <strong>does not</strong> affect the id of the next inserted row.</li>
	<li><strong>Select</strong> a specific cell from any table and return its value.</li>
	<li><strong>Export</strong> all rows from any table in csv format.</li>
</ul>

<p>Implement the <code>SQL</code> class:</p>

<ul>
	<li><code>SQL(String[] names, int[] columns)</code>

	<ul>
		<li>Creates the <code>n</code> tables.</li>
	</ul>
	</li>
	<li><code>bool ins(String name, String[] row)</code>
	<ul>
		<li>Inserts <code>row</code> into the table <code>name</code> and returns <code>true</code>.</li>
		<li>If <code>row.length</code> <strong>does not</strong> match the expected number of columns, or <code>name</code> is <strong>not</strong> a valid table, returns <code>false</code> without any insertion.</li>
	</ul>
	</li>
	<li><code>void rmv(String name, int rowId)</code>
	<ul>
		<li>Removes the row <code>rowId</code> from the table <code>name</code>.</li>
		<li>If <code>name</code> is <strong>not</strong> a valid table or there is no row with id <code>rowId</code>, no removal is performed.</li>
	</ul>
	</li>
	<li><code>String sel(String name, int rowId, int columnId)</code>
	<ul>
		<li>Returns the value of the cell at the specified <code>rowId</code> and <code>columnId</code> in the table <code>name</code>.</li>
		<li>If <code>name</code> is <strong>not</strong> a valid table, or the cell <code>(rowId, columnId)</code> is <strong>invalid</strong>, returns <code>&quot;&lt;null&gt;&quot;</code>.</li>
	</ul>
	</li>
	<li><code>String[] exp(String name)</code>
	<ul>
		<li>Returns the rows present in the table <code>name</code>.</li>
		<li>If name is <strong>not</strong> a valid table, returns an empty array. Each row is represented as a string, with each cell value (<strong>including</strong> the row&#39;s id) separated by a <code>&quot;,&quot;</code>.</li>
	</ul>
	</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong></p>

<pre class="example-io">
[&quot;SQL&quot;,&quot;ins&quot;,&quot;sel&quot;,&quot;ins&quot;,&quot;exp&quot;,&quot;rmv&quot;,&quot;sel&quot;,&quot;exp&quot;]
[[[&quot;one&quot;,&quot;two&quot;,&quot;three&quot;],[2,3,1]],[&quot;two&quot;,[&quot;first&quot;,&quot;second&quot;,&quot;third&quot;]],[&quot;two&quot;,1,3],[&quot;two&quot;,[&quot;fourth&quot;,&quot;fifth&quot;,&quot;sixth&quot;]],[&quot;two&quot;],[&quot;two&quot;,1],[&quot;two&quot;,2,2],[&quot;two&quot;]]
</pre>

<p><strong>Output:</strong></p>

<pre class="example-io">
[null,true,&quot;third&quot;,true,[&quot;1,first,second,third&quot;,&quot;2,fourth,fifth,sixth&quot;],null,&quot;fifth&quot;,[&quot;2,fourth,fifth,sixth&quot;]]</pre>

<p><strong>Explanation:</strong></p>

<pre class="example-io">
// Creates three tables.
SQL sql = new SQL([&quot;one&quot;, &quot;two&quot;, &quot;three&quot;], [2, 3, 1]);

// Adds a row to the table &quot;two&quot; with id 1. Returns True.
sql.ins(&quot;two&quot;, [&quot;first&quot;, &quot;second&quot;, &quot;third&quot;]);

// Returns the value &quot;third&quot; from the third column
// in the row with id 1 of the table &quot;two&quot;.
sql.sel(&quot;two&quot;, 1, 3);

// Adds another row to the table &quot;two&quot; with id 2. Returns True.
sql.ins(&quot;two&quot;, [&quot;fourth&quot;, &quot;fifth&quot;, &quot;sixth&quot;]);

// Exports the rows of the table &quot;two&quot;.
// Currently, the table has 2 rows with ids 1 and 2.
sql.exp(&quot;two&quot;);

// Removes the first row of the table &quot;two&quot;. Note that the second row
// will still have the id 2.
sql.rmv(&quot;two&quot;, 1);

// Returns the value &quot;fifth&quot; from the second column
// in the row with id 2 of the table &quot;two&quot;.
sql.sel(&quot;two&quot;, 2, 2);

// Exports the rows of the table &quot;two&quot;.
// Currently, the table has 1 row with id 2.
sql.exp(&quot;two&quot;);
</pre>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong></p>

<pre class="example-io">
[&quot;SQL&quot;,&quot;ins&quot;,&quot;sel&quot;,&quot;rmv&quot;,&quot;sel&quot;,&quot;ins&quot;,&quot;ins&quot;]
[[[&quot;one&quot;,&quot;two&quot;,&quot;three&quot;],[2,3,1]],[&quot;two&quot;,[&quot;first&quot;,&quot;second&quot;,&quot;third&quot;]],[&quot;two&quot;,1,3],[&quot;two&quot;,1],[&quot;two&quot;,1,2],[&quot;two&quot;,[&quot;fourth&quot;,&quot;fifth&quot;]],[&quot;two&quot;,[&quot;fourth&quot;,&quot;fifth&quot;,&quot;sixth&quot;]]]
</pre>

<p><strong>Output:</strong></p>

<pre class="example-io">
[null,true,&quot;third&quot;,null,&quot;&lt;null&gt;&quot;,false,true]
</pre>

<p><strong>Explanation:</strong></p>

<pre class="example-io">
// Creates three tables.
SQL sQL = new SQL([&quot;one&quot;, &quot;two&quot;, &quot;three&quot;], [2, 3, 1]); 

// Adds a row to the table &quot;two&quot; with id 1. Returns True. 
sQL.ins(&quot;two&quot;, [&quot;first&quot;, &quot;second&quot;, &quot;third&quot;]); 

// Returns the value &quot;third&quot; from the third column 
// in the row with id 1 of the table &quot;two&quot;.
sQL.sel(&quot;two&quot;, 1, 3); 

// Removes the first row of the table &quot;two&quot;.
sQL.rmv(&quot;two&quot;, 1); 

// Returns &quot;&lt;null&gt;&quot; as the cell with id 1 
// has been removed from table &quot;two&quot;.
sQL.sel(&quot;two&quot;, 1, 2); 

// Returns False as number of columns are not correct.
sQL.ins(&quot;two&quot;, [&quot;fourth&quot;, &quot;fifth&quot;]); 

// Adds a row to the table &quot;two&quot; with id 2. Returns True.
sQL.ins(&quot;two&quot;, [&quot;fourth&quot;, &quot;fifth&quot;, &quot;sixth&quot;]); 
</pre>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == names.length == columns.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= names[i].length, row[i].length, name.length &lt;= 10</code></li>
	<li><code>names[i]</code>, <code>row[i]</code>, and <code>name</code> consist only of lowercase English letters.</li>
	<li><code>1 &lt;= columns[i] &lt;= 10</code></li>
	<li><code>1 &lt;= row.length &lt;= 10</code></li>
	<li>All <code>names[i]</code> are <strong>distinct</strong>.</li>
	<li>At most <code>2000</code> calls will be made to <code>ins</code> and <code>rmv</code>.</li>
	<li>At most <code>10<sup>4</sup></code> calls will be made to <code>sel</code>.</li>
	<li>At most <code>500</code> calls will be made to <code>exp</code>.</li>
</ul>

<p>&nbsp;</p>
<strong>Follow-up:</strong> Which approach would you choose if the table might become sparse due to many deletions, and why? Consider the impact on memory usage and performance.