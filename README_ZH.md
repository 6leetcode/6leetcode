# LeetCode

LeetCode 题解

## 文件规则

- 每个题目按照题目序号编排。
- 每个题目文件夹下有相关的题目说明，文件名为 `readme.md`。
- 每个文件夹中同一种语言可以有多重解决方案，按照算法优化程度排名，文件名前缀为语言名字。例如：`c1.c` 的性能是比 `c2.c` 的性能更优的。
- 每个题目里边都要含有 `main` 函数，含有可以想到的所有测试案例，方便线下运行。题解函数，单独写成一个独立的函数。

## 本地测试

- 进入某种语言的环境仅需要 `make $language`，例如进入 python 的环境就是 `make python`，第一次进入某一种环境可能会需要一些时间，首先会编译这个 `Docker` 镜像。
- 本目录的所有文件将会映射到 `Container` 的 `/app` 目录下。
- `Container` 的环境可能是 `Debian` 或者 `Alpine`。

## Solutions' list

<details>

  <summary>Algorithms</summary>

|Index|Difficulty|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|[0001](https://leetcode-cn.com/problems/two-sum)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0001.%20Two%20Sum/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0001.%20Two%20Sum/cpp.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0001.%20Two%20Sum/golang/golang.go)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0001.%20Two%20Sum/java.java)|||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0001.%20Two%20Sum/python.py)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0001.%20Two%20Sum/rust.rs)|||
|[0002](https://leetcode-cn.com/problems/add-two-numbers)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0002.%20Add%20Two%20Numbers/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0002.%20Add%20Two%20Numbers/cpp.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0002.%20Add%20Two%20Numbers/golang/golang.go)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0002.%20Add%20Two%20Numbers/java.java)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0002.%20Add%20Two%20Numbers/php.php)|||||
|[0003](https://leetcode-cn.com/problems/longest-substring-without-repeating-characters)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/c.c)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/go1/go1.go) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/go2/go2.go)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/java1.java) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/java2.java) [3](https://github.com/leet/leet/blob/main/questions/Algorithms/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/java3.java) [4](https://github.com/leet/leet/blob/main/questions/Algorithms/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/java4.java)|||||||
|[0004](https://leetcode-cn.com/problems/median-of-two-sorted-arrays)|Hard|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0004.%20Median%20of%20Two%20Sorted%20Arrays/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0004.%20Median%20of%20Two%20Sorted%20Arrays/cpp.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0004.%20Median%20of%20Two%20Sorted%20Arrays/go1/go1.go) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0004.%20Median%20of%20Two%20Sorted%20Arrays/go2/go2.go)|||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0004.%20Median%20of%20Two%20Sorted%20Arrays/php1.php) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0004.%20Median%20of%20Two%20Sorted%20Arrays/php2.php)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0004.%20Median%20of%20Two%20Sorted%20Arrays/python1.py) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0004.%20Median%20of%20Two%20Sorted%20Arrays/python2.py)||||
|[0005](https://leetcode-cn.com/problems/longest-palindromic-substring)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0005.%20Longest%20Palindromic%20Substring/c.c)||||||||||
|[0006](https://leetcode-cn.com/problems/zigzag-conversion)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0006.%20ZigZag%20Conversion/c.c)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0006.%20ZigZag%20Conversion/golang/golang.go)|||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0006.%20ZigZag%20Conversion/php1.php)|||||
|[0007](https://leetcode-cn.com/problems/reverse-integer)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0007.%20Reverse%20Integer/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0007.%20Reverse%20Integer/cpp.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0007.%20Reverse%20Integer/golang/golang.go)|||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0007.%20Reverse%20Integer/rust1.rs)|||
|[0008](https://leetcode-cn.com/problems/string-to-integer-atoi)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0008.%20String%20to%20Integer%20%28atoi%29/c.c)||||||||||
|[0009](https://leetcode-cn.com/problems/palindrome-number)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0009.%20Palindrome%20Number/c.c)||||||||||
|[0010](https://leetcode-cn.com/problems/regular-expression-matching)|Hard|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0010.%20Regular%20Expression%20Matching/c.c)||||||||||
|[0011](https://leetcode-cn.com/problems/container-with-most-water)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0011.%20Container%20With%20Most%20Water/c.c)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0011.%20Container%20With%20Most%20Water/golang/golang.go)||||||||
|[0012](https://leetcode-cn.com/problems/integer-to-roman)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0012.%20Integer%20to%20Roman/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0012.%20Integer%20to%20Roman/cpp.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0012.%20Integer%20to%20Roman/golang/golang.go)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0012.%20Integer%20to%20Roman/javascript.js)|||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0012.%20Integer%20to%20Roman/rust.rs)|||
|[0013](https://leetcode-cn.com/problems/roman-to-integer)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0013.%20Roman%20to%20Integer/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0013.%20Roman%20to%20Integer/cpp.cc)|||||||||
|[0014](https://leetcode-cn.com/problems/longest-common-prefix)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0014.%20Longest%20Common%20Prefix/c.c)||||||||||
|[0015](https://leetcode-cn.com/problems/3sum)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0015.%203Sum/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0015.%203Sum/cpp.cc)|||||||||
|[0016](https://leetcode-cn.com/problems/3sum-closest)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0016.%203Sum%20Closest/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0016.%203Sum%20Closest/cpp.cc)|||||||||
|[0017](https://leetcode-cn.com/problems/letter-combinations-of-a-phone-number)|Medium|||||||||||
|[0018](https://leetcode-cn.com/problems/4sum)|Medium|||||||||||
|[0019](https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list)|Medium|||||||||||
|[0020](https://leetcode-cn.com/problems/valid-parentheses)|Easy|||||||||||
|[0021](https://leetcode-cn.com/problems/merge-two-sorted-lists)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0021.%20Merge%20Two%20Sorted%20Lists/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0021.%20Merge%20Two%20Sorted%20Lists/cpp1.cc)|||||||||
|[0022](https://leetcode-cn.com/problems/generate-parentheses)|Medium|||||||||||
|[0023](https://leetcode-cn.com/problems/merge-k-sorted-lists)|Hard|||||||||||
|[0024](https://leetcode-cn.com/problems/swap-nodes-in-pairs)|Medium|||||||||||
|[0025](https://leetcode-cn.com/problems/reverse-nodes-in-k-group)|Hard|||||||||||
|[0026](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array)|Easy|||||||||||
|[0027](https://leetcode-cn.com/problems/remove-element)|Easy|||||||||||
|[0028](https://leetcode-cn.com/problems/implement-strstr)|Easy|||||||||||
|[0029](https://leetcode-cn.com/problems/divide-two-integers)|Medium|||||||||||
|[0030](https://leetcode-cn.com/problems/substring-with-concatenation-of-all-words)|Hard|||||||||||
|[0031](https://leetcode-cn.com/problems/next-permutation)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0031.%20Next%20Permutation/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0031.%20Next%20Permutation/cpp1.cc)|||||||||
|[0032](https://leetcode-cn.com/problems/longest-valid-parentheses)|Hard|||||||||||
|[0033](https://leetcode-cn.com/problems/search-in-rotated-sorted-array)|Medium|||||||||||
|[0034](https://leetcode-cn.com/problems/find-first-and-last-position-of-element-in-sorted-array)|Medium|||||||||||
|[0035](https://leetcode-cn.com/problems/search-insert-position)|Easy|||||||||||
|[0036](https://leetcode-cn.com/problems/valid-sudoku)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0036.%20Valid%20Sudoku/c1.c)||||||||||
|[0037](https://leetcode-cn.com/problems/sudoku-solver)|Hard|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0037.%20Sudoku%20Solver/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0037.%20Sudoku%20Solver/cpp1.cc)||||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0037.%20Sudoku%20Solver/rust1.rs)|||
|[0038](https://leetcode-cn.com/problems/count-and-say)|Easy|||||||||||
|[0039](https://leetcode-cn.com/problems/combination-sum)|Medium|||||||||||
|[0040](https://leetcode-cn.com/problems/combination-sum-ii)|Medium|||||||||||
|[0041](https://leetcode-cn.com/problems/first-missing-positive)|Hard|||||||||||
|[0042](https://leetcode-cn.com/problems/trapping-rain-water)|Hard|||||||||||
|[0043](https://leetcode-cn.com/problems/multiply-strings)|Medium|||||||||||
|[0044](https://leetcode-cn.com/problems/wildcard-matching)|Hard|||||||||||
|[0045](https://leetcode-cn.com/problems/jump-game-ii)|Medium|||||||||||
|[0046](https://leetcode-cn.com/problems/permutations)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0046.%20Permutations/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0046.%20Permutations/c2.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0046.%20Permutations/go1/go1.go)||||||||
|[0047](https://leetcode-cn.com/problems/permutations-ii)|Medium|||||||||||
|[0048](https://leetcode-cn.com/problems/rotate-image)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0048.%20Rotate%20Image/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0048.%20Rotate%20Image/cpp1.cc)|||||||||
|[0049](https://leetcode-cn.com/problems/group-anagrams)|Medium|||||||||||
|[0050](https://leetcode-cn.com/problems/powx-n)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0050.%20Pow%28x%2C%20n%29/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0050.%20Pow%28x%2C%20n%29/cpp1.cc)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0050.%20Pow%28x%2C%20n%29/java1.java)|||||||
|[0051](https://leetcode-cn.com/problems/n-queens)|Hard|||||||||||
|[0052](https://leetcode-cn.com/problems/n-queens-ii)|Hard|||||||||||
|[0053](https://leetcode-cn.com/problems/maximum-subarray)|Easy|||||||||||
|[0054](https://leetcode-cn.com/problems/spiral-matrix)|Medium|||||||||||
|[0055](https://leetcode-cn.com/problems/jump-game)|Medium|||||||||||
|[0056](https://leetcode-cn.com/problems/merge-intervals)|Medium|||||||||||
|[0057](https://leetcode-cn.com/problems/insert-interval)|Medium|||||||||||
|[0058](https://leetcode-cn.com/problems/length-of-last-word)|Easy|||||||||||
|[0059](https://leetcode-cn.com/problems/spiral-matrix-ii)|Medium|||||||||||
|[0060](https://leetcode-cn.com/problems/permutation-sequence)|Hard|||||||||||
|[0061](https://leetcode-cn.com/problems/rotate-list)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0061.%20Rotate%20List/c1.c)||||||||||
|[0062](https://leetcode-cn.com/problems/unique-paths)|Medium|||||||||||
|[0063](https://leetcode-cn.com/problems/unique-paths-ii)|Medium|||||||||||
|[0064](https://leetcode-cn.com/problems/minimum-path-sum)|Medium|||||||||||
|[0065](https://leetcode-cn.com/problems/valid-number)|Hard|||||||||||
|[0066](https://leetcode-cn.com/problems/plus-one)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0066.%20Plus%20One/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0066.%20Plus%20One/cpp.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0066.%20Plus%20One/golang/golang.go)||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0066.%20Plus%20One/python.py)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0066.%20Plus%20One/rust1.rs)|||
|[0067](https://leetcode-cn.com/problems/add-binary)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0067.%20Add%20Binary/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0067.%20Add%20Binary/cpp.cc)|||||||||
|[0068](https://leetcode-cn.com/problems/text-justification)|Hard|||||||||||
|[0069](https://leetcode-cn.com/problems/sqrtx)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0069.%20Sqrt%28x%29/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0069.%20Sqrt%28x%29/cpp.cc)|||||||||
|[0070](https://leetcode-cn.com/problems/climbing-stairs)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0070.%20Climbing%20Stairs/c1.c) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0070.%20Climbing%20Stairs/c2.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0070.%20Climbing%20Stairs/cpp1.cc) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0070.%20Climbing%20Stairs/cpp2.cc)||||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0070.%20Climbing%20Stairs/rust1.rs)|||
|[0071](https://leetcode-cn.com/problems/simplify-path)|Medium|||||||||||
|[0072](https://leetcode-cn.com/problems/edit-distance)|Hard|||||||||||
|[0073](https://leetcode-cn.com/problems/set-matrix-zeroes)|Medium|||||||||||
|[0074](https://leetcode-cn.com/problems/search-a-2d-matrix)|Medium||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0074.%20Search%20a%202D%20Matrix/cpp.cc)|||||||||
|[0075](https://leetcode-cn.com/problems/sort-colors)|Medium||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0075.%20Sort%20Colors/cpp.cc)|||||||||
|[0076](https://leetcode-cn.com/problems/minimum-window-substring)|Hard|||||||||||
|[0077](https://leetcode-cn.com/problems/combinations)|Medium|||||||||||
|[0078](https://leetcode-cn.com/problems/subsets)|Medium|||||||||||
|[0079](https://leetcode-cn.com/problems/word-search)|Medium|||||||||||
|[0080](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii)|Medium|||||||||||
|[0081](https://leetcode-cn.com/problems/search-in-rotated-sorted-array-ii)|Medium|||||||||||
|[0082](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii)|Medium|||||||||||
|[0083](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list)|Easy|||||||||||
|[0084](https://leetcode-cn.com/problems/largest-rectangle-in-histogram)|Hard|||||||||||
|[0085](https://leetcode-cn.com/problems/maximal-rectangle)|Hard|||||||||||
|[0086](https://leetcode-cn.com/problems/partition-list)|Medium|||||||||||
|[0087](https://leetcode-cn.com/problems/scramble-string)|Hard|||||||||||
|[0088](https://leetcode-cn.com/problems/merge-sorted-array)|Easy|||||||||||
|[0089](https://leetcode-cn.com/problems/gray-code)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0089.%20Gray%20Code/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0089.%20Gray%20Code/cpp1.cc)|||||||||
|[0090](https://leetcode-cn.com/problems/subsets-ii)|Medium|||||||||||
|[0091](https://leetcode-cn.com/problems/decode-ways)|Medium|||||||||||
|[0092](https://leetcode-cn.com/problems/reverse-linked-list-ii)|Medium|||||||||||
|[0093](https://leetcode-cn.com/problems/restore-ip-addresses)|Medium|||||||||||
|[0094](https://leetcode-cn.com/problems/binary-tree-inorder-traversal)|Medium|||||||||||
|[0095](https://leetcode-cn.com/problems/unique-binary-search-trees-ii)|Medium|||||||||||
|[0096](https://leetcode-cn.com/problems/unique-binary-search-trees)|Medium|||||||||||
|[0097](https://leetcode-cn.com/problems/interleaving-string)|Medium|||||||||||
|[0098](https://leetcode-cn.com/problems/validate-binary-search-tree)|Medium|||||||||||
|[0099](https://leetcode-cn.com/problems/recover-binary-search-tree)|Hard|||||||||||
|[0100](https://leetcode-cn.com/problems/same-tree)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0100.%20Same%20Tree/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0100.%20Same%20Tree/cpp1.cc)|||||||||
|[0101](https://leetcode-cn.com/problems/symmetric-tree)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0101.%20Symmetric%20Tree/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0101.%20Symmetric%20Tree/cpp1.cc)|||||||||
|[0102](https://leetcode-cn.com/problems/binary-tree-level-order-traversal)|Medium|||||||||||
|[0103](https://leetcode-cn.com/problems/binary-tree-zigzag-level-order-traversal)|Medium|||||||||||
|[0104](https://leetcode-cn.com/problems/maximum-depth-of-binary-tree)|Easy|||||||||||
|[0105](https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal)|Medium|||||||||||
|[0106](https://leetcode-cn.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal)|Medium|||||||||||
|[0107](https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii)|Medium|||||||||||
|[0108](https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree)|Easy|||||||||||
|[0109](https://leetcode-cn.com/problems/convert-sorted-list-to-binary-search-tree)|Medium|||||||||||
|[0110](https://leetcode-cn.com/problems/balanced-binary-tree)|Easy|||||||||||
|[0111](https://leetcode-cn.com/problems/minimum-depth-of-binary-tree)|Easy|||||||||||
|[0112](https://leetcode-cn.com/problems/path-sum)|Easy|||||||||||
|[0113](https://leetcode-cn.com/problems/path-sum-ii)|Medium|||||||||||
|[0114](https://leetcode-cn.com/problems/flatten-binary-tree-to-linked-list)|Medium|||||||||||
|[0115](https://leetcode-cn.com/problems/distinct-subsequences)|Hard|||||||||||
|[0116](https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node)|Medium|||||||||||
|[0117](https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node-ii)|Medium|||||||||||
|[0118](https://leetcode-cn.com/problems/pascals-triangle)|Easy||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0118.%20Pascal%27s%20Triangle/cpp1.cc)|||||||||
|[0119](https://leetcode-cn.com/problems/pascals-triangle-ii)|Easy|||||||||||
|[0120](https://leetcode-cn.com/problems/triangle)|Medium|||||||||||
|[0121](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock)|Easy||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0121.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock/cpp1.cc)|||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0121.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock/python1.py)||||
|[0122](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii)|Easy|||||||||||
|[0123](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-iii)|Hard|||||||||||
|[0124](https://leetcode-cn.com/problems/binary-tree-maximum-path-sum)|Hard|||||||||||
|[0125](https://leetcode-cn.com/problems/valid-palindrome)|Easy|||||||||||
|[0126](https://leetcode-cn.com/problems/word-ladder-ii)|Hard|||||||||||
|[0127](https://leetcode-cn.com/problems/word-ladder)|Hard|||||||||||
|[0128](https://leetcode-cn.com/problems/longest-consecutive-sequence)|Hard|||||||||||
|[0129](https://leetcode-cn.com/problems/sum-root-to-leaf-numbers)|Medium|||||||||||
|[0130](https://leetcode-cn.com/problems/surrounded-regions)|Medium|||||||||||
|[0131](https://leetcode-cn.com/problems/palindrome-partitioning)|Medium|||||||||||
|[0132](https://leetcode-cn.com/problems/palindrome-partitioning-ii)|Hard|||||||||||
|[0133](https://leetcode-cn.com/problems/clone-graph)|Medium|||||||||||
|[0134](https://leetcode-cn.com/problems/gas-station)|Medium|||||||||||
|[0135](https://leetcode-cn.com/problems/candy)|Hard|||||||||||
|[0136](https://leetcode-cn.com/problems/single-number)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0136.%20Single%20Number/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0136.%20Single%20Number/cpp1.cc)|||||||||
|[0137](https://leetcode-cn.com/problems/single-number-ii)|Medium|||||||||||
|[0138](https://leetcode-cn.com/problems/copy-list-with-random-pointer)|Medium|||||||||||
|[0139](https://leetcode-cn.com/problems/word-break)|Medium|||||||||||
|[0140](https://leetcode-cn.com/problems/word-break-ii)|Hard|||||||||||
|[0141](https://leetcode-cn.com/problems/linked-list-cycle)|Easy|||||||||||
|[0142](https://leetcode-cn.com/problems/linked-list-cycle-ii)|Medium|||||||||||
|[0143](https://leetcode-cn.com/problems/reorder-list)|Medium|||||||||||
|[0144](https://leetcode-cn.com/problems/binary-tree-preorder-traversal)|Medium|||||||||||
|[0145](https://leetcode-cn.com/problems/binary-tree-postorder-traversal)|Medium|||||||||||
|[0146](https://leetcode-cn.com/problems/lru-cache)|Medium|||||||||||
|[0147](https://leetcode-cn.com/problems/insertion-sort-list)|Medium|||||||||||
|[0148](https://leetcode-cn.com/problems/sort-list)|Medium|||||||||||
|[0149](https://leetcode-cn.com/problems/max-points-on-a-line)|Hard|||||||||||
|[0150](https://leetcode-cn.com/problems/evaluate-reverse-polish-notation)|Medium|||||||||||
|[0151](https://leetcode-cn.com/problems/reverse-words-in-a-string)|Medium|||||||||||
|[0152](https://leetcode-cn.com/problems/maximum-product-subarray)|Medium|||||||||||
|[0153](https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array)|Medium|||||||||||
|[0154](https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array-ii)|Hard|||||||||||
|[0155](https://leetcode-cn.com/problems/min-stack)|Easy|||||||||||
|[0156](https://leetcode-cn.com/problems/binary-tree-upside-down)|Medium|||||||||||
|[0157](https://leetcode-cn.com/problems/read-n-characters-given-read4)|Easy|||||||||||
|[0158](https://leetcode-cn.com/problems/read-n-characters-given-read4-ii-call-multiple-times)|Hard|||||||||||
|[0159](https://leetcode-cn.com/problems/longest-substring-with-at-most-two-distinct-characters)|Medium|||||||||||
|[0160](https://leetcode-cn.com/problems/intersection-of-two-linked-lists)|Easy|||||||||||
|[0161](https://leetcode-cn.com/problems/one-edit-distance)|Medium|||||||||||
|[0162](https://leetcode-cn.com/problems/find-peak-element)|Medium|||||||||||
|[0163](https://leetcode-cn.com/problems/missing-ranges)|Easy|||||||||||
|[0164](https://leetcode-cn.com/problems/maximum-gap)|Hard|||||||||||
|[0165](https://leetcode-cn.com/problems/compare-version-numbers)|Medium|||||||||||
|[0166](https://leetcode-cn.com/problems/fraction-to-recurring-decimal)|Medium|||||||||||
|[0167](https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted)|Easy|||||||||||
|[0168](https://leetcode-cn.com/problems/excel-sheet-column-title)|Easy|||||||||||
|[0169](https://leetcode-cn.com/problems/majority-element)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0169.%20Majority%20Element/c1.c) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0169.%20Majority%20Element/c2.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0169.%20Majority%20Element/cpp1.cc)||||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0169.%20Majority%20Element/rust1.rs)|||
|[0170](https://leetcode-cn.com/problems/two-sum-iii-data-structure-design)|Easy|||||||||||
|[0171](https://leetcode-cn.com/problems/excel-sheet-column-number)|Easy|||||||||||
|[0172](https://leetcode-cn.com/problems/factorial-trailing-zeroes)|Easy|||||||||||
|[0173](https://leetcode-cn.com/problems/binary-search-tree-iterator)|Medium|||||||||||
|[0174](https://leetcode-cn.com/problems/dungeon-game)|Hard|||||||||||
|[0179](https://leetcode-cn.com/problems/largest-number)|Medium|||||||||||
|[0186](https://leetcode-cn.com/problems/reverse-words-in-a-string-ii)|Medium|||||||||||
|[0187](https://leetcode-cn.com/problems/repeated-dna-sequences)|Medium|||||||||||
|[0188](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-iv)|Hard|||||||||||
|[0189](https://leetcode-cn.com/problems/rotate-array)|Medium|||||||||||
|[0190](https://leetcode-cn.com/problems/reverse-bits)|Easy|||||||||||
|[0191](https://leetcode-cn.com/problems/number-of-1-bits)|Easy|||||||||||
|[0198](https://leetcode-cn.com/problems/house-robber)|Medium|||||||||||
|[0199](https://leetcode-cn.com/problems/binary-tree-right-side-view)|Medium|||||||||||
|[0200](https://leetcode-cn.com/problems/number-of-islands)|Medium|||||||||||
|[0201](https://leetcode-cn.com/problems/bitwise-and-of-numbers-range)|Medium|||||||||||
|[0202](https://leetcode-cn.com/problems/happy-number)|Easy|||||||||||
|[0203](https://leetcode-cn.com/problems/remove-linked-list-elements)|Easy|||||||||||
|[0204](https://leetcode-cn.com/problems/count-primes)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0204.%20Count%20Primes/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0204.%20Count%20Primes/cpp1.cc)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0204.%20Count%20Primes/java1.java)|||||||
|[0205](https://leetcode-cn.com/problems/isomorphic-strings)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0205.%20Isomorphic%20Strings/c.c)||||||||||
|[0206](https://leetcode-cn.com/problems/reverse-linked-list)|Easy|||||||||||
|[0207](https://leetcode-cn.com/problems/course-schedule)|Medium|||||||||||
|[0208](https://leetcode-cn.com/problems/implement-trie-prefix-tree)|Medium|||||||||||
|[0209](https://leetcode-cn.com/problems/minimum-size-subarray-sum)|Medium|||||||||||
|[0210](https://leetcode-cn.com/problems/course-schedule-ii)|Medium|||||||||||
|[0211](https://leetcode-cn.com/problems/design-add-and-search-words-data-structure)|Medium|||||||||||
|[0212](https://leetcode-cn.com/problems/word-search-ii)|Hard|||||||||||
|[0213](https://leetcode-cn.com/problems/house-robber-ii)|Medium|||||||||||
|[0214](https://leetcode-cn.com/problems/shortest-palindrome)|Hard|||||||||||
|[0215](https://leetcode-cn.com/problems/kth-largest-element-in-an-array)|Medium|||||||||||
|[0216](https://leetcode-cn.com/problems/combination-sum-iii)|Medium|||||||||||
|[0217](https://leetcode-cn.com/problems/contains-duplicate)|Easy|||||||||||
|[0218](https://leetcode-cn.com/problems/the-skyline-problem)|Hard|||||||||||
|[0219](https://leetcode-cn.com/problems/contains-duplicate-ii)|Easy|||||||||||
|[0220](https://leetcode-cn.com/problems/contains-duplicate-iii)|Medium|||||||||||
|[0221](https://leetcode-cn.com/problems/maximal-square)|Medium|||||||||||
|[0222](https://leetcode-cn.com/problems/count-complete-tree-nodes)|Medium|||||||||||
|[0223](https://leetcode-cn.com/problems/rectangle-area)|Medium|||||||||||
|[0224](https://leetcode-cn.com/problems/basic-calculator)|Hard|||||||||||
|[0225](https://leetcode-cn.com/problems/implement-stack-using-queues)|Easy|||||||||||
|[0226](https://leetcode-cn.com/problems/invert-binary-tree)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0226.%20Invert%20Binary%20Tree/c1.c)||||||||||
|[0227](https://leetcode-cn.com/problems/basic-calculator-ii)|Medium|||||||||||
|[0228](https://leetcode-cn.com/problems/summary-ranges)|Easy|||||||||||
|[0229](https://leetcode-cn.com/problems/majority-element-ii)|Medium|||||||||||
|[0230](https://leetcode-cn.com/problems/kth-smallest-element-in-a-bst)|Medium|||||||||||
|[0231](https://leetcode-cn.com/problems/power-of-two)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0231.%20Power%20of%20Two/c1.c) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0231.%20Power%20of%20Two/c2.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0231.%20Power%20of%20Two/cpp1.cc) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0231.%20Power%20of%20Two/cpp2.cc)|||||||||
|[0232](https://leetcode-cn.com/problems/implement-queue-using-stacks)|Easy|||||||||||
|[0233](https://leetcode-cn.com/problems/number-of-digit-one)|Hard|||||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0233.%20Number%20of%20Digit%20One/python1.py)||||
|[0234](https://leetcode-cn.com/problems/palindrome-linked-list)|Easy|||||||||||
|[0235](https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree)|Easy|||||||||||
|[0236](https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree)|Medium|||||||||||
|[0237](https://leetcode-cn.com/problems/delete-node-in-a-linked-list)|Easy|||||||||||
|[0238](https://leetcode-cn.com/problems/product-of-array-except-self)|Medium|||||||||||
|[0239](https://leetcode-cn.com/problems/sliding-window-maximum)|Hard|||||||||||
|[0240](https://leetcode-cn.com/problems/search-a-2d-matrix-ii)|Medium|||||||||||
|[0241](https://leetcode-cn.com/problems/different-ways-to-add-parentheses)|Medium|||||||||||
|[0242](https://leetcode-cn.com/problems/valid-anagram)|Easy|||||||||||
|[0243](https://leetcode-cn.com/problems/shortest-word-distance)|Easy|||||||||||
|[0244](https://leetcode-cn.com/problems/shortest-word-distance-ii)|Medium|||||||||||
|[0245](https://leetcode-cn.com/problems/shortest-word-distance-iii)|Medium|||||||||||
|[0246](https://leetcode-cn.com/problems/strobogrammatic-number)|Easy|||||||||||
|[0247](https://leetcode-cn.com/problems/strobogrammatic-number-ii)|Medium|||||||||||
|[0248](https://leetcode-cn.com/problems/strobogrammatic-number-iii)|Hard|||||||||||
|[0249](https://leetcode-cn.com/problems/group-shifted-strings)|Medium|||||||||||
|[0250](https://leetcode-cn.com/problems/count-univalue-subtrees)|Medium|||||||||||
|[0251](https://leetcode-cn.com/problems/flatten-2d-vector)|Medium|||||||||||
|[0252](https://leetcode-cn.com/problems/meeting-rooms)|Easy|||||||||||
|[0253](https://leetcode-cn.com/problems/meeting-rooms-ii)|Medium|||||||||||
|[0254](https://leetcode-cn.com/problems/factor-combinations)|Medium|||||||||||
|[0255](https://leetcode-cn.com/problems/verify-preorder-sequence-in-binary-search-tree)|Medium|||||||||||
|[0256](https://leetcode-cn.com/problems/paint-house)|Medium|||||||||||
|[0257](https://leetcode-cn.com/problems/binary-tree-paths)|Easy|||||||||||
|[0258](https://leetcode-cn.com/problems/add-digits)|Easy|||||||||||
|[0259](https://leetcode-cn.com/problems/3sum-smaller)|Medium|||||||||||
|[0260](https://leetcode-cn.com/problems/single-number-iii)|Medium|||||||||||
|[0261](https://leetcode-cn.com/problems/graph-valid-tree)|Medium|||||||||||
|[0263](https://leetcode-cn.com/problems/ugly-number)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0263.%20Ugly%20Number/c.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0263.%20Ugly%20Number/cpp.cc)|||||||||
|[0264](https://leetcode-cn.com/problems/ugly-number-ii)|Medium|||||||||||
|[0265](https://leetcode-cn.com/problems/paint-house-ii)|Hard|||||||||||
|[0266](https://leetcode-cn.com/problems/palindrome-permutation)|Easy|||||||||||
|[0267](https://leetcode-cn.com/problems/palindrome-permutation-ii)|Medium|||||||||||
|[0268](https://leetcode-cn.com/problems/missing-number)|Easy|||||||||||
|[0269](https://leetcode-cn.com/problems/alien-dictionary)|Hard|||||||||||
|[0270](https://leetcode-cn.com/problems/closest-binary-search-tree-value)|Easy|||||||||||
|[0271](https://leetcode-cn.com/problems/encode-and-decode-strings)|Medium|||||||||||
|[0272](https://leetcode-cn.com/problems/closest-binary-search-tree-value-ii)|Hard|||||||||||
|[0273](https://leetcode-cn.com/problems/integer-to-english-words)|Hard|||||||||||
|[0274](https://leetcode-cn.com/problems/h-index)|Medium|||||||||||
|[0275](https://leetcode-cn.com/problems/h-index-ii)|Medium|||||||||||
|[0276](https://leetcode-cn.com/problems/paint-fence)|Medium|||||||||||
|[0277](https://leetcode-cn.com/problems/find-the-celebrity)|Medium|||||||||||
|[0278](https://leetcode-cn.com/problems/first-bad-version)|Easy|||||||||||
|[0279](https://leetcode-cn.com/problems/perfect-squares)|Medium|||||||||||
|[0280](https://leetcode-cn.com/problems/wiggle-sort)|Medium|||||||||||
|[0281](https://leetcode-cn.com/problems/zigzag-iterator)|Medium|||||||||||
|[0282](https://leetcode-cn.com/problems/expression-add-operators)|Hard|||||||||||
|[0283](https://leetcode-cn.com/problems/move-zeroes)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0283.%20Move%20Zeroes/c1.c)||||||||||
|[0284](https://leetcode-cn.com/problems/peeking-iterator)|Medium|||||||||||
|[0285](https://leetcode-cn.com/problems/inorder-successor-in-bst)|Medium|||||||||||
|[0286](https://leetcode-cn.com/problems/walls-and-gates)|Medium|||||||||||
|[0287](https://leetcode-cn.com/problems/find-the-duplicate-number)|Medium|||||||||||
|[0288](https://leetcode-cn.com/problems/unique-word-abbreviation)|Medium|||||||||||
|[0289](https://leetcode-cn.com/problems/game-of-life)|Medium|||||||||||
|[0290](https://leetcode-cn.com/problems/word-pattern)|Easy|||||||||||
|[0291](https://leetcode-cn.com/problems/word-pattern-ii)|Medium|||||||||||
|[0292](https://leetcode-cn.com/problems/nim-game)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0292.%20Nim%20Game/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0292.%20Nim%20Game/cpp1.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0292.%20Nim%20Game/go1/go1.go)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0292.%20Nim%20Game/java1.java)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0292.%20Nim%20Game/js1.js)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0292.%20Nim%20Game/python1.py)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0292.%20Nim%20Game/rust1.rs)|||
|[0293](https://leetcode-cn.com/problems/flip-game)|Easy|||||||||||
|[0294](https://leetcode-cn.com/problems/flip-game-ii)|Medium|||||||||||
|[0295](https://leetcode-cn.com/problems/find-median-from-data-stream)|Hard|||||||||||
|[0296](https://leetcode-cn.com/problems/best-meeting-point)|Hard|||||||||||
|[0297](https://leetcode-cn.com/problems/serialize-and-deserialize-binary-tree)|Hard|||||||||||
|[0298](https://leetcode-cn.com/problems/binary-tree-longest-consecutive-sequence)|Medium|||||||||||
|[0299](https://leetcode-cn.com/problems/bulls-and-cows)|Medium|||||||||||
|[0300](https://leetcode-cn.com/problems/longest-increasing-subsequence)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0300.%20Longest%20Increasing%20Subsequence/c1.c) [2](https://github.com/leet/leet/blob/main/questions/Algorithms/0300.%20Longest%20Increasing%20Subsequence/c2.c)||||||||||
|[0301](https://leetcode-cn.com/problems/remove-invalid-parentheses)|Hard|||||||||||
|[0302](https://leetcode-cn.com/problems/smallest-rectangle-enclosing-black-pixels)|Hard|||||||||||
|[0303](https://leetcode-cn.com/problems/range-sum-query-immutable)|Easy|||||||||||
|[0304](https://leetcode-cn.com/problems/range-sum-query-2d-immutable)|Medium|||||||||||
|[0305](https://leetcode-cn.com/problems/number-of-islands-ii)|Hard|||||||||||
|[0306](https://leetcode-cn.com/problems/additive-number)|Medium|||||||||||
|[0307](https://leetcode-cn.com/problems/range-sum-query-mutable)|Medium|||||||||||
|[0308](https://leetcode-cn.com/problems/range-sum-query-2d-mutable)|Hard|||||||||||
|[0309](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-with-cooldown)|Medium|||||||||||
|[0310](https://leetcode-cn.com/problems/minimum-height-trees)|Medium|||||||||||
|[0311](https://leetcode-cn.com/problems/sparse-matrix-multiplication)|Medium|||||||||||
|[0312](https://leetcode-cn.com/problems/burst-balloons)|Hard|||||||||||
|[0313](https://leetcode-cn.com/problems/super-ugly-number)|Medium|||||||||||
|[0314](https://leetcode-cn.com/problems/binary-tree-vertical-order-traversal)|Medium|||||||||||
|[0315](https://leetcode-cn.com/problems/count-of-smaller-numbers-after-self)|Hard||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0315.%20Count%20of%20Smaller%20Numbers%20After%20Self/cpp1.cc)|||||||||
|[0316](https://leetcode-cn.com/problems/remove-duplicate-letters)|Medium|||||||||||
|[0317](https://leetcode-cn.com/problems/shortest-distance-from-all-buildings)|Hard|||||||||||
|[0318](https://leetcode-cn.com/problems/maximum-product-of-word-lengths)|Medium|||||||||||
|[0319](https://leetcode-cn.com/problems/bulb-switcher)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0319.%20Bulb%20Switcher/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0319.%20Bulb%20Switcher/cpp1.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0319.%20Bulb%20Switcher/go1/go1.go)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0319.%20Bulb%20Switcher/js1.js)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0319.%20Bulb%20Switcher/python1.py)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0319.%20Bulb%20Switcher/rust1.rs)|||
|[0320](https://leetcode-cn.com/problems/generalized-abbreviation)|Medium|||||||||||
|[0321](https://leetcode-cn.com/problems/create-maximum-number)|Hard|||||||||||
|[0322](https://leetcode-cn.com/problems/coin-change)|Medium|||||||||||
|[0323](https://leetcode-cn.com/problems/number-of-connected-components-in-an-undirected-graph)|Medium|||||||||||
|[0324](https://leetcode-cn.com/problems/wiggle-sort-ii)|Medium|||||||||||
|[0325](https://leetcode-cn.com/problems/maximum-size-subarray-sum-equals-k)|Medium|||||||||||
|[0326](https://leetcode-cn.com/problems/power-of-three)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0326.%20Power%20of%20Three/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0326.%20Power%20of%20Three/cpp1.cc)|||||||||
|[0327](https://leetcode-cn.com/problems/count-of-range-sum)|Hard|||||||||||
|[0328](https://leetcode-cn.com/problems/odd-even-linked-list)|Medium|||||||||||
|[0329](https://leetcode-cn.com/problems/longest-increasing-path-in-a-matrix)|Hard|||||||||||
|[0330](https://leetcode-cn.com/problems/patching-array)|Hard|||||||||||
|[0331](https://leetcode-cn.com/problems/verify-preorder-serialization-of-a-binary-tree)|Medium|||||||||||
|[0332](https://leetcode-cn.com/problems/reconstruct-itinerary)|Medium|||||||||||
|[0333](https://leetcode-cn.com/problems/largest-bst-subtree)|Medium|||||||||||
|[0334](https://leetcode-cn.com/problems/increasing-triplet-subsequence)|Medium|||||||||||
|[0335](https://leetcode-cn.com/problems/self-crossing)|Hard|||||||||||
|[0336](https://leetcode-cn.com/problems/palindrome-pairs)|Hard|||||||||||
|[0337](https://leetcode-cn.com/problems/house-robber-iii)|Medium|||||||||||
|[0338](https://leetcode-cn.com/problems/counting-bits)|Medium|||||||||||
|[0339](https://leetcode-cn.com/problems/nested-list-weight-sum)|Easy|||||||||||
|[0340](https://leetcode-cn.com/problems/longest-substring-with-at-most-k-distinct-characters)|Medium|||||||||||
|[0341](https://leetcode-cn.com/problems/flatten-nested-list-iterator)|Medium|||||||||||
|[0342](https://leetcode-cn.com/problems/power-of-four)|Easy|||||||||||
|[0343](https://leetcode-cn.com/problems/integer-break)|Medium|||||||||||
|[0344](https://leetcode-cn.com/problems/reverse-string)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0344.%20Reverse%20String/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0344.%20Reverse%20String/cpp1.cc)|||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0344.%20Reverse%20String/python1.py)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0344.%20Reverse%20String/rust1.rs)|||
|[0345](https://leetcode-cn.com/problems/reverse-vowels-of-a-string)|Easy|||||||||||
|[0346](https://leetcode-cn.com/problems/moving-average-from-data-stream)|Easy|||||||||||
|[0347](https://leetcode-cn.com/problems/top-k-frequent-elements)|Medium|||||||||||
|[0348](https://leetcode-cn.com/problems/design-tic-tac-toe)|Medium|||||||||||
|[0349](https://leetcode-cn.com/problems/intersection-of-two-arrays)|Easy|||||||||||
|[0350](https://leetcode-cn.com/problems/intersection-of-two-arrays-ii)|Easy|||||||||||
|[0351](https://leetcode-cn.com/problems/android-unlock-patterns)|Medium|||||||||||
|[0352](https://leetcode-cn.com/problems/data-stream-as-disjoint-intervals)|Hard|||||||||||
|[0353](https://leetcode-cn.com/problems/design-snake-game)|Medium|||||||||||
|[0354](https://leetcode-cn.com/problems/russian-doll-envelopes)|Hard|||||||||||
|[0355](https://leetcode-cn.com/problems/design-twitter)|Medium|||||||||||
|[0356](https://leetcode-cn.com/problems/line-reflection)|Medium|||||||||||
|[0357](https://leetcode-cn.com/problems/count-numbers-with-unique-digits)|Medium|||||||||||
|[0358](https://leetcode-cn.com/problems/rearrange-string-k-distance-apart)|Hard|||||||||||
|[0359](https://leetcode-cn.com/problems/logger-rate-limiter)|Easy|||||||||||
|[0360](https://leetcode-cn.com/problems/sort-transformed-array)|Medium|||||||||||
|[0361](https://leetcode-cn.com/problems/bomb-enemy)|Medium|||||||||||
|[0362](https://leetcode-cn.com/problems/design-hit-counter)|Medium|||||||||||
|[0363](https://leetcode-cn.com/problems/max-sum-of-rectangle-no-larger-than-k)|Hard|||||||||||
|[0364](https://leetcode-cn.com/problems/nested-list-weight-sum-ii)|Medium|||||||||||
|[0365](https://leetcode-cn.com/problems/water-and-jug-problem)|Medium|||||||||||
|[0366](https://leetcode-cn.com/problems/find-leaves-of-binary-tree)|Medium|||||||||||
|[0367](https://leetcode-cn.com/problems/valid-perfect-square)|Easy|||||||||||
|[0368](https://leetcode-cn.com/problems/largest-divisible-subset)|Medium|||||||||||
|[0369](https://leetcode-cn.com/problems/plus-one-linked-list)|Medium|||||||||||
|[0370](https://leetcode-cn.com/problems/range-addition)|Medium|||||||||||
|[0371](https://leetcode-cn.com/problems/sum-of-two-integers)|Medium|||||||||||
|[0372](https://leetcode-cn.com/problems/super-pow)|Medium|||||||||||
|[0373](https://leetcode-cn.com/problems/find-k-pairs-with-smallest-sums)|Medium|||||||||||
|[0374](https://leetcode-cn.com/problems/guess-number-higher-or-lower)|Easy|||||||||||
|[0375](https://leetcode-cn.com/problems/guess-number-higher-or-lower-ii)|Medium|||||||||||
|[0376](https://leetcode-cn.com/problems/wiggle-subsequence)|Medium|||||||||||
|[0377](https://leetcode-cn.com/problems/combination-sum-iv)|Medium|||||||||||
|[0378](https://leetcode-cn.com/problems/kth-smallest-element-in-a-sorted-matrix)|Medium|||||||||||
|[0379](https://leetcode-cn.com/problems/design-phone-directory)|Medium|||||||||||
|[0380](https://leetcode-cn.com/problems/insert-delete-getrandom-o1)|Medium|||||||||||
|[0381](https://leetcode-cn.com/problems/insert-delete-getrandom-o1-duplicates-allowed)|Hard|||||||||||
|[0382](https://leetcode-cn.com/problems/linked-list-random-node)|Medium|||||||||||
|[0383](https://leetcode-cn.com/problems/ransom-note)|Easy|||||||||||
|[0384](https://leetcode-cn.com/problems/shuffle-an-array)|Medium|||||||||||
|[0385](https://leetcode-cn.com/problems/mini-parser)|Medium|||||||||||
|[0386](https://leetcode-cn.com/problems/lexicographical-numbers)|Medium|||||||||||
|[0387](https://leetcode-cn.com/problems/first-unique-character-in-a-string)|Easy|||||||||||
|[0388](https://leetcode-cn.com/problems/longest-absolute-file-path)|Medium|||||||||||
|[0389](https://leetcode-cn.com/problems/find-the-difference)|Easy|||||||||||
|[0390](https://leetcode-cn.com/problems/elimination-game)|Medium|||||||||||
|[0391](https://leetcode-cn.com/problems/perfect-rectangle)|Hard|||||||||||
|[0392](https://leetcode-cn.com/problems/is-subsequence)|Easy|||||||||||
|[0393](https://leetcode-cn.com/problems/utf-8-validation)|Medium|||||||||||
|[0394](https://leetcode-cn.com/problems/decode-string)|Medium|||||||||||
|[0395](https://leetcode-cn.com/problems/longest-substring-with-at-least-k-repeating-characters)|Medium|||||||||||
|[0396](https://leetcode-cn.com/problems/rotate-function)|Medium|||||||||||
|[0397](https://leetcode-cn.com/problems/integer-replacement)|Medium|||||||||||
|[0398](https://leetcode-cn.com/problems/random-pick-index)|Medium|||||||||||
|[0399](https://leetcode-cn.com/problems/evaluate-division)|Medium|||||||||||
|[0400](https://leetcode-cn.com/problems/nth-digit)|Medium|||||||||||
|[0401](https://leetcode-cn.com/problems/binary-watch)|Easy|||||||||||
|[0402](https://leetcode-cn.com/problems/remove-k-digits)|Medium|||||||||||
|[0403](https://leetcode-cn.com/problems/frog-jump)|Hard|||||||||||
|[0404](https://leetcode-cn.com/problems/sum-of-left-leaves)|Easy|||||||||||
|[0405](https://leetcode-cn.com/problems/convert-a-number-to-hexadecimal)|Easy|||||||||||
|[0406](https://leetcode-cn.com/problems/queue-reconstruction-by-height)|Medium|||||||||||
|[0407](https://leetcode-cn.com/problems/trapping-rain-water-ii)|Hard|||||||||||
|[0408](https://leetcode-cn.com/problems/valid-word-abbreviation)|Easy|||||||||||
|[0409](https://leetcode-cn.com/problems/longest-palindrome)|Easy|||||||||||
|[0410](https://leetcode-cn.com/problems/split-array-largest-sum)|Hard|||||||||||
|[0411](https://leetcode-cn.com/problems/minimum-unique-word-abbreviation)|Hard|||||||||||
|[0412](https://leetcode-cn.com/problems/fizz-buzz)|Easy|||||||||||
|[0413](https://leetcode-cn.com/problems/arithmetic-slices)|Medium|||||||||||
|[0414](https://leetcode-cn.com/problems/third-maximum-number)|Easy|||||||||||
|[0415](https://leetcode-cn.com/problems/add-strings)|Easy|||||||||||
|[0416](https://leetcode-cn.com/problems/partition-equal-subset-sum)|Medium|||||||||||
|[0417](https://leetcode-cn.com/problems/pacific-atlantic-water-flow)|Medium|||||||||||
|[0418](https://leetcode-cn.com/problems/sentence-screen-fitting)|Medium|||||||||||
|[0419](https://leetcode-cn.com/problems/battleships-in-a-board)|Medium|||||||||||
|[0420](https://leetcode-cn.com/problems/strong-password-checker)|Hard|||||||||||
|[0421](https://leetcode-cn.com/problems/maximum-xor-of-two-numbers-in-an-array)|Medium|||||||||||
|[0422](https://leetcode-cn.com/problems/valid-word-square)|Easy|||||||||||
|[0423](https://leetcode-cn.com/problems/reconstruct-original-digits-from-english)|Medium|||||||||||
|[0424](https://leetcode-cn.com/problems/longest-repeating-character-replacement)|Medium|||||||||||
|[0425](https://leetcode-cn.com/problems/word-squares)|Hard|||||||||||
|[0432](https://leetcode-cn.com/problems/all-oone-data-structure)|Hard|||||||||||
|[0433](https://leetcode-cn.com/problems/minimum-genetic-mutation)|Medium|||||||||||
|[0434](https://leetcode-cn.com/problems/number-of-segments-in-a-string)|Easy|||||||||||
|[0435](https://leetcode-cn.com/problems/non-overlapping-intervals)|Medium|||||||||||
|[0436](https://leetcode-cn.com/problems/find-right-interval)|Medium|||||||||||
|[0437](https://leetcode-cn.com/problems/path-sum-iii)|Medium|||||||||||
|[0438](https://leetcode-cn.com/problems/find-all-anagrams-in-a-string)|Medium|||||||||||
|[0439](https://leetcode-cn.com/problems/ternary-expression-parser)|Medium|||||||||||
|[0440](https://leetcode-cn.com/problems/k-th-smallest-in-lexicographical-order)|Hard|||||||||||
|[0441](https://leetcode-cn.com/problems/arranging-coins)|Easy|||||||||||
|[0442](https://leetcode-cn.com/problems/find-all-duplicates-in-an-array)|Medium|||||||||||
|[0443](https://leetcode-cn.com/problems/string-compression)|Medium|||||||||||
|[0444](https://leetcode-cn.com/problems/sequence-reconstruction)|Medium|||||||||||
|[0445](https://leetcode-cn.com/problems/add-two-numbers-ii)|Medium|||||||||||
|[0446](https://leetcode-cn.com/problems/arithmetic-slices-ii-subsequence)|Hard|||||||||||
|[0447](https://leetcode-cn.com/problems/number-of-boomerangs)|Medium|||||||||||
|[0448](https://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array)|Easy|||||||||||
|[0449](https://leetcode-cn.com/problems/serialize-and-deserialize-bst)|Medium|||||||||||
|[0450](https://leetcode-cn.com/problems/delete-node-in-a-bst)|Medium|||||||||||
|[0451](https://leetcode-cn.com/problems/sort-characters-by-frequency)|Medium|||||||||||
|[0452](https://leetcode-cn.com/problems/minimum-number-of-arrows-to-burst-balloons)|Medium|||||||||||
|[0453](https://leetcode-cn.com/problems/minimum-moves-to-equal-array-elements)|Easy|||||||||||
|[0454](https://leetcode-cn.com/problems/4sum-ii)|Medium|||||||||||
|[0455](https://leetcode-cn.com/problems/assign-cookies)|Easy|||||||||||
|[0456](https://leetcode-cn.com/problems/132-pattern)|Medium|||||||||||
|[0457](https://leetcode-cn.com/problems/circular-array-loop)|Medium|||||||||||
|[0458](https://leetcode-cn.com/problems/poor-pigs)|Hard|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0458.%20Poor%20Pigs/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0458.%20Poor%20Pigs/cpp1.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0458.%20Poor%20Pigs/go1/go1.go)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0458.%20Poor%20Pigs/java1.java)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0458.%20Poor%20Pigs/js1.js)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0458.%20Poor%20Pigs/php1.php)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0458.%20Poor%20Pigs/python1.py)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0458.%20Poor%20Pigs/rust1.rs)|||
|[0459](https://leetcode-cn.com/problems/repeated-substring-pattern)|Easy|||||||||||
|[0460](https://leetcode-cn.com/problems/lfu-cache)|Hard|||||||||||
|[0461](https://leetcode-cn.com/problems/hamming-distance)|Easy|||||||||||
|[0462](https://leetcode-cn.com/problems/minimum-moves-to-equal-array-elements-ii)|Medium|||||||||||
|[0463](https://leetcode-cn.com/problems/island-perimeter)|Easy|||||||||||
|[0464](https://leetcode-cn.com/problems/can-i-win)|Medium|||||||||||
|[0465](https://leetcode-cn.com/problems/optimal-account-balancing)|Hard|||||||||||
|[0466](https://leetcode-cn.com/problems/count-the-repetitions)|Hard|||||||||||
|[0467](https://leetcode-cn.com/problems/unique-substrings-in-wraparound-string)|Medium|||||||||||
|[0468](https://leetcode-cn.com/problems/validate-ip-address)|Medium|||||||||||
|[0469](https://leetcode-cn.com/problems/convex-polygon)|Medium|||||||||||
|[0471](https://leetcode-cn.com/problems/encode-string-with-shortest-length)|Hard|||||||||||
|[0472](https://leetcode-cn.com/problems/concatenated-words)|Hard|||||||||||
|[0473](https://leetcode-cn.com/problems/matchsticks-to-square)|Medium|||||||||||
|[0474](https://leetcode-cn.com/problems/ones-and-zeroes)|Medium|||||||||||
|[0475](https://leetcode-cn.com/problems/heaters)|Medium|||||||||||
|[0476](https://leetcode-cn.com/problems/number-complement)|Easy|||||||||||
|[0477](https://leetcode-cn.com/problems/total-hamming-distance)|Medium|||||||||||
|[0479](https://leetcode-cn.com/problems/largest-palindrome-product)|Hard|||||||||||
|[0480](https://leetcode-cn.com/problems/sliding-window-median)|Hard|||||||||||
|[0481](https://leetcode-cn.com/problems/magical-string)|Medium|||||||||||
|[0482](https://leetcode-cn.com/problems/license-key-formatting)|Easy|||||||||||
|[0483](https://leetcode-cn.com/problems/smallest-good-base)|Hard|||||||||||
|[0484](https://leetcode-cn.com/problems/find-permutation)|Medium|||||||||||
|[0485](https://leetcode-cn.com/problems/max-consecutive-ones)|Easy|||||||||||
|[0486](https://leetcode-cn.com/problems/predict-the-winner)|Medium|||||||||||
|[0487](https://leetcode-cn.com/problems/max-consecutive-ones-ii)|Medium|||||||||||
|[0488](https://leetcode-cn.com/problems/zuma-game)|Hard|||||||||||
|[1643](https://leetcode-cn.com/problems/kth-smallest-instructions)|Hard|||||||||||
|[0490](https://leetcode-cn.com/problems/the-maze)|Medium|||||||||||
|[0491](https://leetcode-cn.com/problems/increasing-subsequences)|Medium|||||||||||
|[0492](https://leetcode-cn.com/problems/construct-the-rectangle)|Easy|||||||||||
|[0493](https://leetcode-cn.com/problems/reverse-pairs)|Hard|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0493.%20Reverse%20Pairs/c1.c)||||||||||
|[0494](https://leetcode-cn.com/problems/target-sum)|Medium|||||||||||
|[0495](https://leetcode-cn.com/problems/teemo-attacking)|Medium|||||||||||
|[0496](https://leetcode-cn.com/problems/next-greater-element-i)|Easy|||||||||||
|[0498](https://leetcode-cn.com/problems/diagonal-traverse)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0498.%20Diagonal%20Traverse/c1.c)||||||||||
|[0499](https://leetcode-cn.com/problems/the-maze-iii)|Hard|||||||||||
|[0500](https://leetcode-cn.com/problems/keyboard-row)|Easy|||||||||||
|[0501](https://leetcode-cn.com/problems/find-mode-in-binary-search-tree)|Easy|||||||||||
|[0502](https://leetcode-cn.com/problems/ipo)|Hard|||||||||||
|[0503](https://leetcode-cn.com/problems/next-greater-element-ii)|Medium|||||||||||
|[0504](https://leetcode-cn.com/problems/base-7)|Easy|||||||||||
|[0505](https://leetcode-cn.com/problems/the-maze-ii)|Medium|||||||||||
|[0506](https://leetcode-cn.com/problems/relative-ranks)|Easy|||||||||||
|[0507](https://leetcode-cn.com/problems/perfect-number)|Easy|||||||||||
|[0508](https://leetcode-cn.com/problems/most-frequent-subtree-sum)|Medium|||||||||||
|[0510](https://leetcode-cn.com/problems/inorder-successor-in-bst-ii)|Medium|||||||||||
|[1059](https://leetcode-cn.com/problems/all-paths-from-source-lead-to-destination)|Medium|||||||||||
|[0513](https://leetcode-cn.com/problems/find-bottom-left-tree-value)|Medium|||||||||||
|[0514](https://leetcode-cn.com/problems/freedom-trail)|Hard|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0514.%20Freedom%20Trail/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0514.%20Freedom%20Trail/cpp1.cc)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0514.%20Freedom%20Trail/java1.java)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0514.%20Freedom%20Trail/js1.js)||||||
|[0515](https://leetcode-cn.com/problems/find-largest-value-in-each-tree-row)|Medium|||||||||||
|[0516](https://leetcode-cn.com/problems/longest-palindromic-subsequence)|Medium|||||||||||
|[0517](https://leetcode-cn.com/problems/super-washing-machines)|Hard|||||||||||
|[0518](https://leetcode-cn.com/problems/coin-change-2)|Medium|||||||||||
|[0520](https://leetcode-cn.com/problems/detect-capital)|Easy|||||||||||
|[0521](https://leetcode-cn.com/problems/longest-uncommon-subsequence-i)|Easy|||||||||||
|[0522](https://leetcode-cn.com/problems/longest-uncommon-subsequence-ii)|Medium|||||||||||
|[0523](https://leetcode-cn.com/problems/continuous-subarray-sum)|Medium|||||||||||
|[0524](https://leetcode-cn.com/problems/longest-word-in-dictionary-through-deleting)|Medium|||||||||||
|[0525](https://leetcode-cn.com/problems/contiguous-array)|Medium|||||||||||
|[0526](https://leetcode-cn.com/problems/beautiful-arrangement)|Medium|||||||||||
|[0527](https://leetcode-cn.com/problems/word-abbreviation)|Hard|||||||||||
|[1721](https://leetcode-cn.com/problems/swapping-nodes-in-a-linked-list)|Medium|||||||||||
|[0529](https://leetcode-cn.com/problems/minesweeper)|Medium|||||||||||
|[0530](https://leetcode-cn.com/problems/minimum-absolute-difference-in-bst)|Easy|||||||||||
|[0531](https://leetcode-cn.com/problems/lonely-pixel-i)|Medium|||||||||||
|[0532](https://leetcode-cn.com/problems/k-diff-pairs-in-an-array)|Medium|||||||||||
|[0533](https://leetcode-cn.com/problems/lonely-pixel-ii)|Medium|||||||||||
|[0535](https://leetcode-cn.com/problems/encode-and-decode-tinyurl)|Medium|||||||||||
|[0536](https://leetcode-cn.com/problems/construct-binary-tree-from-string)|Medium|||||||||||
|[0537](https://leetcode-cn.com/problems/complex-number-multiplication)|Medium|||||||||||
|[0538](https://leetcode-cn.com/problems/convert-bst-to-greater-tree)|Medium|||||||||||
|[0539](https://leetcode-cn.com/problems/minimum-time-difference)|Medium|||||||||||
|[0540](https://leetcode-cn.com/problems/single-element-in-a-sorted-array)|Medium|||||||||||
|[0541](https://leetcode-cn.com/problems/reverse-string-ii)|Easy|||||||||||
|[0542](https://leetcode-cn.com/problems/01-matrix)|Medium|||||||||||
|[0543](https://leetcode-cn.com/problems/diameter-of-binary-tree)|Easy|||||||||||
|[0544](https://leetcode-cn.com/problems/output-contest-matches)|Medium|||||||||||
|[0545](https://leetcode-cn.com/problems/boundary-of-binary-tree)|Medium|||||||||||
|[0546](https://leetcode-cn.com/problems/remove-boxes)|Hard|||||||||||
|[0547](https://leetcode-cn.com/problems/number-of-provinces)|Medium|||||||||||
|[0548](https://leetcode-cn.com/problems/split-array-with-equal-sum)|Medium|||||||||||
|[0549](https://leetcode-cn.com/problems/binary-tree-longest-consecutive-sequence-ii)|Medium|||||||||||
|[1730](https://leetcode-cn.com/problems/shortest-path-to-get-food)|Medium|||||||||||
|[0551](https://leetcode-cn.com/problems/student-attendance-record-i)|Easy|||||||||||
|[0552](https://leetcode-cn.com/problems/student-attendance-record-ii)|Hard|||||||||||
|[0553](https://leetcode-cn.com/problems/optimal-division)|Medium|||||||||||
|[0554](https://leetcode-cn.com/problems/brick-wall)|Medium|||||||||||
|[0555](https://leetcode-cn.com/problems/split-concatenated-strings)|Medium|||||||||||
|[0556](https://leetcode-cn.com/problems/next-greater-element-iii)|Medium|||||||||||
|[0557](https://leetcode-cn.com/problems/reverse-words-in-a-string-iii)|Easy|||||||||||
|[0560](https://leetcode-cn.com/problems/subarray-sum-equals-k)|Medium|||||||||||
|[0561](https://leetcode-cn.com/problems/array-partition-i)|Easy|||||||||||
|[0562](https://leetcode-cn.com/problems/longest-line-of-consecutive-one-in-matrix)|Medium|||||||||||
|[0563](https://leetcode-cn.com/problems/binary-tree-tilt)|Easy|||||||||||
|[0564](https://leetcode-cn.com/problems/find-the-closest-palindrome)|Hard|||||||||||
|[0565](https://leetcode-cn.com/problems/array-nesting)|Medium|||||||||||
|[0566](https://leetcode-cn.com/problems/reshape-the-matrix)|Easy|||||||||||
|[0567](https://leetcode-cn.com/problems/permutation-in-string)|Medium|||||||||||
|[0568](https://leetcode-cn.com/problems/maximum-vacation-days)|Hard|||||||||||
|[0572](https://leetcode-cn.com/problems/subtree-of-another-tree)|Easy|||||||||||
|[0573](https://leetcode-cn.com/problems/squirrel-simulation)|Medium|||||||||||
|[0575](https://leetcode-cn.com/problems/distribute-candies)|Easy|||||||||||
|[0576](https://leetcode-cn.com/problems/out-of-boundary-paths)|Medium|||||||||||
|[0581](https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray)|Medium|||||||||||
|[0582](https://leetcode-cn.com/problems/kill-process)|Medium|||||||||||
|[0583](https://leetcode-cn.com/problems/delete-operation-for-two-strings)|Medium|||||||||||
|[0587](https://leetcode-cn.com/problems/erect-the-fence)|Hard|||||||||||
|[0588](https://leetcode-cn.com/problems/design-in-memory-file-system)|Hard|||||||||||
|[0591](https://leetcode-cn.com/problems/tag-validator)|Hard|||||||||||
|[0592](https://leetcode-cn.com/problems/fraction-addition-and-subtraction)|Medium|||||||||||
|[0593](https://leetcode-cn.com/problems/valid-square)|Medium|||||||||||
|[0594](https://leetcode-cn.com/problems/longest-harmonious-subsequence)|Easy|||||||||||
|[0598](https://leetcode-cn.com/problems/range-addition-ii)|Easy|||||||||||
|[0599](https://leetcode-cn.com/problems/minimum-index-sum-of-two-lists)|Easy|||||||||||
|[0600](https://leetcode-cn.com/problems/non-negative-integers-without-consecutive-ones)|Hard|||||||||||
|[0604](https://leetcode-cn.com/problems/design-compressed-string-iterator)|Easy|||||||||||
|[0605](https://leetcode-cn.com/problems/can-place-flowers)|Easy|||||||||||
|[0606](https://leetcode-cn.com/problems/construct-string-from-binary-tree)|Easy|||||||||||
|[0609](https://leetcode-cn.com/problems/find-duplicate-file-in-system)|Medium|||||||||||
|[0611](https://leetcode-cn.com/problems/valid-triangle-number)|Medium|||||||||||
|[0616](https://leetcode-cn.com/problems/add-bold-tag-in-string)|Medium|||||||||||
|[0617](https://leetcode-cn.com/problems/merge-two-binary-trees)|Easy|||||||||||
|[0621](https://leetcode-cn.com/problems/task-scheduler)|Medium|||||||||||
|[0623](https://leetcode-cn.com/problems/add-one-row-to-tree)|Medium|||||||||||
|[0624](https://leetcode-cn.com/problems/maximum-distance-in-arrays)|Medium|||||||||||
|[0625](https://leetcode-cn.com/problems/minimum-factorization)|Medium|||||||||||
|[0628](https://leetcode-cn.com/problems/maximum-product-of-three-numbers)|Easy|||||||||||
|[0629](https://leetcode-cn.com/problems/k-inverse-pairs-array)|Hard|||||||||||
|[0630](https://leetcode-cn.com/problems/course-schedule-iii)|Hard|||||||||||
|[0631](https://leetcode-cn.com/problems/design-excel-sum-formula)|Hard|||||||||||
|[0632](https://leetcode-cn.com/problems/smallest-range-covering-elements-from-k-lists)|Hard|||||||||||
|[0633](https://leetcode-cn.com/problems/sum-of-square-numbers)|Medium|||||||||||
|[0634](https://leetcode-cn.com/problems/find-the-derangement-of-an-array)|Medium|||||||||||
|[0635](https://leetcode-cn.com/problems/design-log-storage-system)|Medium|||||||||||
|[0636](https://leetcode-cn.com/problems/exclusive-time-of-functions)|Medium|||||||||||
|[0637](https://leetcode-cn.com/problems/average-of-levels-in-binary-tree)|Easy|||||||||||
|[0638](https://leetcode-cn.com/problems/shopping-offers)|Medium|||||||||||
|[0639](https://leetcode-cn.com/problems/decode-ways-ii)|Hard|||||||||||
|[0640](https://leetcode-cn.com/problems/solve-the-equation)|Medium|||||||||||
|[0642](https://leetcode-cn.com/problems/design-search-autocomplete-system)|Hard|||||||||||
|[0643](https://leetcode-cn.com/problems/maximum-average-subarray-i)|Easy|||||||||||
|[0644](https://leetcode-cn.com/problems/maximum-average-subarray-ii)|Hard|||||||||||
|[0645](https://leetcode-cn.com/problems/set-mismatch)|Easy|||||||||||
|[0646](https://leetcode-cn.com/problems/maximum-length-of-pair-chain)|Medium|||||||||||
|[0647](https://leetcode-cn.com/problems/palindromic-substrings)|Medium|||||||||||
|[0648](https://leetcode-cn.com/problems/replace-words)|Medium|||||||||||
|[0649](https://leetcode-cn.com/problems/dota2-senate)|Medium|||||||||||
|[0650](https://leetcode-cn.com/problems/2-keys-keyboard)|Medium|||||||||||
|[0651](https://leetcode-cn.com/problems/4-keys-keyboard)|Medium|||||||||||
|[0652](https://leetcode-cn.com/problems/find-duplicate-subtrees)|Medium|||||||||||
|[0653](https://leetcode-cn.com/problems/two-sum-iv-input-is-a-bst)|Easy|||||||||||
|[0654](https://leetcode-cn.com/problems/maximum-binary-tree)|Medium|||||||||||
|[0655](https://leetcode-cn.com/problems/print-binary-tree)|Medium|||||||||||
|[0656](https://leetcode-cn.com/problems/coin-path)|Hard|||||||||||
|[0657](https://leetcode-cn.com/problems/robot-return-to-origin)|Easy|||||||||||
|[0658](https://leetcode-cn.com/problems/find-k-closest-elements)|Medium|||||||||||
|[0659](https://leetcode-cn.com/problems/split-array-into-consecutive-subsequences)|Medium|||||||||||
|[0660](https://leetcode-cn.com/problems/remove-9)|Hard|||||||||||
|[0661](https://leetcode-cn.com/problems/image-smoother)|Easy|||||||||||
|[0662](https://leetcode-cn.com/problems/maximum-width-of-binary-tree)|Medium|||||||||||
|[0663](https://leetcode-cn.com/problems/equal-tree-partition)|Medium|||||||||||
|[0664](https://leetcode-cn.com/problems/strange-printer)|Hard|||||||||||
|[0665](https://leetcode-cn.com/problems/non-decreasing-array)|Easy|||||||||||
|[0666](https://leetcode-cn.com/problems/path-sum-iv)|Medium|||||||||||
|[0667](https://leetcode-cn.com/problems/beautiful-arrangement-ii)|Medium|||||||||||
|[0668](https://leetcode-cn.com/problems/kth-smallest-number-in-multiplication-table)|Hard|||||||||||
|[0669](https://leetcode-cn.com/problems/trim-a-binary-search-tree)|Medium|||||||||||
|[0670](https://leetcode-cn.com/problems/maximum-swap)|Medium|||||||||||
|[0671](https://leetcode-cn.com/problems/second-minimum-node-in-a-binary-tree)|Easy|||||||||||
|[0672](https://leetcode-cn.com/problems/bulb-switcher-ii)|Medium|||||||||||
|[0673](https://leetcode-cn.com/problems/number-of-longest-increasing-subsequence)|Medium|||||||||||
|[0674](https://leetcode-cn.com/problems/longest-continuous-increasing-subsequence)|Easy|||||||||||
|[0675](https://leetcode-cn.com/problems/cut-off-trees-for-golf-event)|Hard|||||||||||
|[0676](https://leetcode-cn.com/problems/implement-magic-dictionary)|Medium|||||||||||
|[0677](https://leetcode-cn.com/problems/map-sum-pairs)|Medium|||||||||||
|[0678](https://leetcode-cn.com/problems/valid-parenthesis-string)|Medium|||||||||||
|[0679](https://leetcode-cn.com/problems/24-game)|Hard|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0679.%2024%20Game/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0679.%2024%20Game/cpp1.cc)||||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0679.%2024%20Game/rust1.rs)|||
|[0680](https://leetcode-cn.com/problems/valid-palindrome-ii)|Easy|||||||||||
|[0681](https://leetcode-cn.com/problems/next-closest-time)|Medium|||||||||||
|[0682](https://leetcode-cn.com/problems/baseball-game)|Easy|||||||||||
|[0683](https://leetcode-cn.com/problems/k-empty-slots)|Hard|||||||||||
|[0684](https://leetcode-cn.com/problems/redundant-connection)|Medium|||||||||||
|[0685](https://leetcode-cn.com/problems/redundant-connection-ii)|Hard|||||||||||
|[0686](https://leetcode-cn.com/problems/repeated-string-match)|Medium|||||||||||
|[0687](https://leetcode-cn.com/problems/longest-univalue-path)|Medium|||||||||||
|[0688](https://leetcode-cn.com/problems/knight-probability-in-chessboard)|Medium|||||||||||
|[0689](https://leetcode-cn.com/problems/maximum-sum-of-3-non-overlapping-subarrays)|Hard|||||||||||
|[0690](https://leetcode-cn.com/problems/employee-importance)|Easy|||||||||||
|[0691](https://leetcode-cn.com/problems/stickers-to-spell-word)|Hard|||||||||||
|[0692](https://leetcode-cn.com/problems/top-k-frequent-words)|Medium|||||||||||
|[0693](https://leetcode-cn.com/problems/binary-number-with-alternating-bits)|Easy|||||||||||
|[0694](https://leetcode-cn.com/problems/number-of-distinct-islands)|Medium|||||||||||
|[0695](https://leetcode-cn.com/problems/max-area-of-island)|Medium|||||||||||
|[0696](https://leetcode-cn.com/problems/count-binary-substrings)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0696.%20Count%20Binary%20Substrings/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0696.%20Count%20Binary%20Substrings/cpp1.cc)||||||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0696.%20Count%20Binary%20Substrings/rust1.rs)|||
|[0697](https://leetcode-cn.com/problems/degree-of-an-array)|Easy|||||||||||
|[0698](https://leetcode-cn.com/problems/partition-to-k-equal-sum-subsets)|Medium|||||||||||
|[0699](https://leetcode-cn.com/problems/falling-squares)|Hard|||||||||||
|[0711](https://leetcode-cn.com/problems/number-of-distinct-islands-ii)|Hard|||||||||||
|[0712](https://leetcode-cn.com/problems/minimum-ascii-delete-sum-for-two-strings)|Medium|||||||||||
|[0713](https://leetcode-cn.com/problems/subarray-product-less-than-k)|Medium|||||||||||
|[0714](https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee)|Medium|||||||||||
|[0715](https://leetcode-cn.com/problems/range-module)|Hard|||||||||||
|[0716](https://leetcode-cn.com/problems/max-stack)|Easy|||||||||||
|[0717](https://leetcode-cn.com/problems/1-bit-and-2-bit-characters)|Easy|||||||||||
|[0718](https://leetcode-cn.com/problems/maximum-length-of-repeated-subarray)|Medium|||||||||||
|[0719](https://leetcode-cn.com/problems/find-k-th-smallest-pair-distance)|Hard|||||||||||
|[0720](https://leetcode-cn.com/problems/longest-word-in-dictionary)|Easy|||||||||||
|[0721](https://leetcode-cn.com/problems/accounts-merge)|Medium|||||||||||
|[0722](https://leetcode-cn.com/problems/remove-comments)|Medium|||||||||||
|[0723](https://leetcode-cn.com/problems/candy-crush)|Medium|||||||||||
|[0724](https://leetcode-cn.com/problems/find-pivot-index)|Easy|||||||||||
|[0725](https://leetcode-cn.com/problems/split-linked-list-in-parts)|Medium|||||||||||
|[0726](https://leetcode-cn.com/problems/number-of-atoms)|Hard|||||||||||
|[0727](https://leetcode-cn.com/problems/minimum-window-subsequence)|Hard|||||||||||
|[0728](https://leetcode-cn.com/problems/self-dividing-numbers)|Easy|||||||||||
|[0729](https://leetcode-cn.com/problems/my-calendar-i)|Medium|||||||||||
|[0730](https://leetcode-cn.com/problems/count-different-palindromic-subsequences)|Hard|||||||||||
|[0731](https://leetcode-cn.com/problems/my-calendar-ii)|Medium|||||||||||
|[0732](https://leetcode-cn.com/problems/my-calendar-iii)|Hard|||||||||||
|[0733](https://leetcode-cn.com/problems/flood-fill)|Easy|||||||||||
|[0734](https://leetcode-cn.com/problems/sentence-similarity)|Easy|||||||||||
|[0735](https://leetcode-cn.com/problems/asteroid-collision)|Medium|||||||||||
|[0736](https://leetcode-cn.com/problems/parse-lisp-expression)|Hard|||||||||||
|[0737](https://leetcode-cn.com/problems/sentence-similarity-ii)|Medium|||||||||||
|[0738](https://leetcode-cn.com/problems/monotone-increasing-digits)|Medium|||||||||||
|[0739](https://leetcode-cn.com/problems/daily-temperatures)|Medium|||||||||||
|[0740](https://leetcode-cn.com/problems/delete-and-earn)|Medium|||||||||||
|[0741](https://leetcode-cn.com/problems/cherry-pickup)|Hard|||||||||||
|[0709](https://leetcode-cn.com/problems/to-lower-case)|Easy|||||||||||
|[0742](https://leetcode-cn.com/problems/closest-leaf-in-a-binary-tree)|Medium|||||||||||
|[0743](https://leetcode-cn.com/problems/network-delay-time)|Medium|||||||||||
|[0744](https://leetcode-cn.com/problems/find-smallest-letter-greater-than-target)|Easy|||||||||||
|[0745](https://leetcode-cn.com/problems/prefix-and-suffix-search)|Hard|||||||||||
|[0746](https://leetcode-cn.com/problems/min-cost-climbing-stairs)|Easy|||||||||||
|[0747](https://leetcode-cn.com/problems/largest-number-at-least-twice-of-others)|Easy|||||||||||
|[0748](https://leetcode-cn.com/problems/shortest-completing-word)|Easy|||||||||||
|[0749](https://leetcode-cn.com/problems/contain-virus)|Hard|||||||||||
|[0750](https://leetcode-cn.com/problems/number-of-corner-rectangles)|Medium|||||||||||
|[0751](https://leetcode-cn.com/problems/ip-to-cidr)|Easy|||||||||||
|[0752](https://leetcode-cn.com/problems/open-the-lock)|Medium|||||||||||
|[0753](https://leetcode-cn.com/problems/cracking-the-safe)|Hard|||||||||||
|[0754](https://leetcode-cn.com/problems/reach-a-number)|Medium|||||||||||
|[0755](https://leetcode-cn.com/problems/pour-water)|Medium|||||||||||
|[0756](https://leetcode-cn.com/problems/pyramid-transition-matrix)|Medium|||||||||||
|[0426](https://leetcode-cn.com/problems/convert-binary-search-tree-to-sorted-doubly-linked-list)|Medium|||||||||||
|[0757](https://leetcode-cn.com/problems/set-intersection-size-at-least-two)|Hard|||||||||||
|[0758](https://leetcode-cn.com/problems/bold-words-in-string)|Easy|||||||||||
|[0759](https://leetcode-cn.com/problems/employee-free-time)|Hard|||||||||||
|[0760](https://leetcode-cn.com/problems/find-anagram-mappings)|Easy|||||||||||
|[0761](https://leetcode-cn.com/problems/special-binary-string)|Hard|||||||||||
|[0429](https://leetcode-cn.com/problems/n-ary-tree-level-order-traversal)|Medium|||||||||||
|[0428](https://leetcode-cn.com/problems/serialize-and-deserialize-n-ary-tree)|Hard|||||||||||
|[0430](https://leetcode-cn.com/problems/flatten-a-multilevel-doubly-linked-list)|Medium|||||||||||
|[0762](https://leetcode-cn.com/problems/prime-number-of-set-bits-in-binary-representation)|Easy|||||||||||
|[0763](https://leetcode-cn.com/problems/partition-labels)|Medium|||||||||||
|[0764](https://leetcode-cn.com/problems/largest-plus-sign)|Medium|||||||||||
|[0765](https://leetcode-cn.com/problems/couples-holding-hands)|Hard|||||||||||
|[0431](https://leetcode-cn.com/problems/encode-n-ary-tree-to-binary-tree)|Hard|||||||||||
|[0427](https://leetcode-cn.com/problems/construct-quad-tree)|Medium|||||||||||
|[0558](https://leetcode-cn.com/problems/logical-or-of-two-binary-grids-represented-as-quad-trees)|Medium|||||||||||
|[0559](https://leetcode-cn.com/problems/maximum-depth-of-n-ary-tree)|Easy|||||||||||
|[0589](https://leetcode-cn.com/problems/n-ary-tree-preorder-traversal)|Easy|||||||||||
|[0590](https://leetcode-cn.com/problems/n-ary-tree-postorder-traversal)|Easy|||||||||||
|[0766](https://leetcode-cn.com/problems/toeplitz-matrix)|Easy|||||||||||
|[0767](https://leetcode-cn.com/problems/reorganize-string)|Medium|||||||||||
|[0768](https://leetcode-cn.com/problems/max-chunks-to-make-sorted-ii)|Hard|||||||||||
|[0769](https://leetcode-cn.com/problems/max-chunks-to-make-sorted)|Medium|||||||||||
|[0770](https://leetcode-cn.com/problems/basic-calculator-iv)|Hard|||||||||||
|[0771](https://leetcode-cn.com/problems/jewels-and-stones)|Easy|||||||||||
|[0700](https://leetcode-cn.com/problems/search-in-a-binary-search-tree)|Easy|||||||||||
|[0701](https://leetcode-cn.com/problems/insert-into-a-binary-search-tree)|Medium|||||||||||
|[0772](https://leetcode-cn.com/problems/basic-calculator-iii)|Hard|||||||||||
|[0702](https://leetcode-cn.com/problems/search-in-a-sorted-array-of-unknown-size)|Medium|||||||||||
|[0773](https://leetcode-cn.com/problems/sliding-puzzle)|Hard|||||||||||
|[0774](https://leetcode-cn.com/problems/minimize-max-distance-to-gas-station)|Hard|||||||||||
|[0703](https://leetcode-cn.com/problems/kth-largest-element-in-a-stream)|Easy|||||||||||
|[0775](https://leetcode-cn.com/problems/global-and-local-inversions)|Medium|||||||||||
|[0776](https://leetcode-cn.com/problems/split-bst)|Medium|||||||||||
|[0704](https://leetcode-cn.com/problems/binary-search)|Easy|||||||||||
|[0777](https://leetcode-cn.com/problems/swap-adjacent-in-lr-string)|Medium|||||||||||
|[0778](https://leetcode-cn.com/problems/swim-in-rising-water)|Hard|||||||||||
|[0779](https://leetcode-cn.com/problems/k-th-symbol-in-grammar)|Medium|||||||||||
|[0780](https://leetcode-cn.com/problems/reaching-points)|Hard|||||||||||
|[0781](https://leetcode-cn.com/problems/rabbits-in-forest)|Medium|||||||||||
|[0782](https://leetcode-cn.com/problems/transform-to-chessboard)|Hard|||||||||||
|[0783](https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes)|Easy|||||||||||
|[0784](https://leetcode-cn.com/problems/letter-case-permutation)|Medium|||||||||||
|[0785](https://leetcode-cn.com/problems/is-graph-bipartite)|Medium|||||||||||
|[0786](https://leetcode-cn.com/problems/k-th-smallest-prime-fraction)|Hard|||||||||||
|[0787](https://leetcode-cn.com/problems/cheapest-flights-within-k-stops)|Medium|||||||||||
|[0788](https://leetcode-cn.com/problems/rotated-digits)|Easy|||||||||||
|[0789](https://leetcode-cn.com/problems/escape-the-ghosts)|Medium|||||||||||
|[0790](https://leetcode-cn.com/problems/domino-and-tromino-tiling)|Medium|||||||||||
|[0791](https://leetcode-cn.com/problems/custom-sort-string)|Medium|||||||||||
|[0792](https://leetcode-cn.com/problems/number-of-matching-subsequences)|Medium|||||||||||
|[0793](https://leetcode-cn.com/problems/preimage-size-of-factorial-zeroes-function)|Hard|||||||||||
|[0794](https://leetcode-cn.com/problems/valid-tic-tac-toe-state)|Medium|||||||||||
|[0795](https://leetcode-cn.com/problems/number-of-subarrays-with-bounded-maximum)|Medium|||||||||||
|[0796](https://leetcode-cn.com/problems/rotate-string)|Easy|||||||||||
|[0797](https://leetcode-cn.com/problems/all-paths-from-source-to-target)|Medium|||||||||||
|[0798](https://leetcode-cn.com/problems/smallest-rotation-with-highest-score)|Hard|||||||||||
|[0799](https://leetcode-cn.com/problems/champagne-tower)|Medium|||||||||||
|[0705](https://leetcode-cn.com/problems/design-hashset)|Easy|||||||||||
|[0706](https://leetcode-cn.com/problems/design-hashmap)|Easy|||||||||||
|[0800](https://leetcode-cn.com/problems/similar-rgb-color)|Easy|||||||||||
|[0801](https://leetcode-cn.com/problems/minimum-swaps-to-make-sequences-increasing)|Medium|||||||||||
|[0802](https://leetcode-cn.com/problems/find-eventual-safe-states)|Medium|||||||||||
|[0803](https://leetcode-cn.com/problems/bricks-falling-when-hit)|Hard|||||||||||
|[0804](https://leetcode-cn.com/problems/unique-morse-code-words)|Easy|||||||||||
|[0805](https://leetcode-cn.com/problems/split-array-with-same-average)|Hard|||||||||||
|[0806](https://leetcode-cn.com/problems/number-of-lines-to-write-string)|Easy|||||||||||
|[0807](https://leetcode-cn.com/problems/max-increase-to-keep-city-skyline)|Medium|||||||||||
|[0808](https://leetcode-cn.com/problems/soup-servings)|Medium|||||||||||
|[0809](https://leetcode-cn.com/problems/expressive-words)|Medium|||||||||||
|[0810](https://leetcode-cn.com/problems/chalkboard-xor-game)|Hard|||||||||||
|[0811](https://leetcode-cn.com/problems/subdomain-visit-count)|Easy|||||||||||
|[0812](https://leetcode-cn.com/problems/largest-triangle-area)|Easy|||||||||||
|[0813](https://leetcode-cn.com/problems/largest-sum-of-averages)|Medium|||||||||||
|[0814](https://leetcode-cn.com/problems/binary-tree-pruning)|Medium|||||||||||
|[0815](https://leetcode-cn.com/problems/bus-routes)|Hard|||||||||||
|[0816](https://leetcode-cn.com/problems/ambiguous-coordinates)|Medium|||||||||||
|[0817](https://leetcode-cn.com/problems/linked-list-components)|Medium|||||||||||
|[0818](https://leetcode-cn.com/problems/race-car)|Hard|||||||||||
|[0819](https://leetcode-cn.com/problems/most-common-word)|Easy|||||||||||
|[0707](https://leetcode-cn.com/problems/design-linked-list)|Medium|||||||||||
|[0820](https://leetcode-cn.com/problems/short-encoding-of-words)|Medium|||||||||||
|[0821](https://leetcode-cn.com/problems/shortest-distance-to-a-character)|Easy|||||||||||
|[0822](https://leetcode-cn.com/problems/card-flipping-game)|Medium|||||||||||
|[0823](https://leetcode-cn.com/problems/binary-trees-with-factors)|Medium|||||||||||
|[0708](https://leetcode-cn.com/problems/insert-into-a-sorted-circular-linked-list)|Medium|||||||||||
|[0824](https://leetcode-cn.com/problems/goat-latin)|Easy|||||||||||
|[0825](https://leetcode-cn.com/problems/friends-of-appropriate-ages)|Medium|||||||||||
|[0826](https://leetcode-cn.com/problems/most-profit-assigning-work)|Medium|||||||||||
|[0827](https://leetcode-cn.com/problems/making-a-large-island)|Hard|||||||||||
|[0828](https://leetcode-cn.com/problems/count-unique-characters-of-all-substrings-of-a-given-string)|Hard|||||||||||
|[0829](https://leetcode-cn.com/problems/consecutive-numbers-sum)|Hard|||||||||||
|[0830](https://leetcode-cn.com/problems/positions-of-large-groups)|Easy|||||||||||
|[0831](https://leetcode-cn.com/problems/masking-personal-information)|Medium|||||||||||
|[0641](https://leetcode-cn.com/problems/design-circular-deque)|Medium|||||||||||
|[0622](https://leetcode-cn.com/problems/design-circular-queue)|Medium|||||||||||
|[0832](https://leetcode-cn.com/problems/flipping-an-image)|Easy|||||||||||
|[0833](https://leetcode-cn.com/problems/find-and-replace-in-string)|Medium|||||||||||
|[0834](https://leetcode-cn.com/problems/sum-of-distances-in-tree)|Hard|||||||||||
|[0835](https://leetcode-cn.com/problems/image-overlap)|Medium|||||||||||
|[0489](https://leetcode-cn.com/problems/robot-room-cleaner)|Hard|||||||||||
|[0836](https://leetcode-cn.com/problems/rectangle-overlap)|Easy|||||||||||
|[0837](https://leetcode-cn.com/problems/new-21-game)|Medium|||||||||||
|[0838](https://leetcode-cn.com/problems/push-dominoes)|Medium|||||||||||
|[0839](https://leetcode-cn.com/problems/similar-string-groups)|Hard|||||||||||
|[0840](https://leetcode-cn.com/problems/magic-squares-in-grid)|Medium|||||||||||
|[0841](https://leetcode-cn.com/problems/keys-and-rooms)|Medium|||||||||||
|[0842](https://leetcode-cn.com/problems/split-array-into-fibonacci-sequence)|Medium|||||||||||
|[0843](https://leetcode-cn.com/problems/guess-the-word)|Hard|||||||||||
|[0844](https://leetcode-cn.com/problems/backspace-string-compare)|Easy|||||||||||
|[0845](https://leetcode-cn.com/problems/longest-mountain-in-array)|Medium|||||||||||
|[0846](https://leetcode-cn.com/problems/hand-of-straights)|Medium|||||||||||
|[0847](https://leetcode-cn.com/problems/shortest-path-visiting-all-nodes)|Hard|||||||||||
|[0848](https://leetcode-cn.com/problems/shifting-letters)|Medium|||||||||||
|[0849](https://leetcode-cn.com/problems/maximize-distance-to-closest-person)|Medium|||||||||||
|[0850](https://leetcode-cn.com/problems/rectangle-area-ii)|Hard|||||||||||
|[0851](https://leetcode-cn.com/problems/loud-and-rich)|Medium|||||||||||
|[0852](https://leetcode-cn.com/problems/peak-index-in-a-mountain-array)|Easy|||||||||||
|[0853](https://leetcode-cn.com/problems/car-fleet)|Medium|||||||||||
|[0854](https://leetcode-cn.com/problems/k-similar-strings)|Hard|||||||||||
|[0855](https://leetcode-cn.com/problems/exam-room)|Medium|||||||||||
|[0856](https://leetcode-cn.com/problems/score-of-parentheses)|Medium|||||||||||
|[0857](https://leetcode-cn.com/problems/minimum-cost-to-hire-k-workers)|Hard|||||||||||
|[0858](https://leetcode-cn.com/problems/mirror-reflection)|Medium|||||||||||
|[0859](https://leetcode-cn.com/problems/buddy-strings)|Easy|||||||||||
|[0860](https://leetcode-cn.com/problems/lemonade-change)|Easy|||||||||||
|[0861](https://leetcode-cn.com/problems/score-after-flipping-matrix)|Medium|||||||||||
|[0862](https://leetcode-cn.com/problems/shortest-subarray-with-sum-at-least-k)|Hard|||||||||||
|[0863](https://leetcode-cn.com/problems/all-nodes-distance-k-in-binary-tree)|Medium|||||||||||
|[0710](https://leetcode-cn.com/problems/random-pick-with-blacklist)|Hard|||||||||||
|[0864](https://leetcode-cn.com/problems/shortest-path-to-get-all-keys)|Hard|||||||||||
|[0865](https://leetcode-cn.com/problems/smallest-subtree-with-all-the-deepest-nodes)|Medium|||||||||||
|[0866](https://leetcode-cn.com/problems/prime-palindrome)|Medium|||||||||||
|[0867](https://leetcode-cn.com/problems/transpose-matrix)|Easy|||||||||||
|[0868](https://leetcode-cn.com/problems/binary-gap)|Easy|||||||||||
|[0869](https://leetcode-cn.com/problems/reordered-power-of-2)|Medium|||||||||||
|[0870](https://leetcode-cn.com/problems/advantage-shuffle)|Medium|||||||||||
|[0871](https://leetcode-cn.com/problems/minimum-number-of-refueling-stops)|Hard|||||||||||
|[0470](https://leetcode-cn.com/problems/implement-rand10-using-rand7)|Medium|||||||||||
|[0872](https://leetcode-cn.com/problems/leaf-similar-trees)|Easy|||||||||||
|[0873](https://leetcode-cn.com/problems/length-of-longest-fibonacci-subsequence)|Medium|||||||||||
|[0874](https://leetcode-cn.com/problems/walking-robot-simulation)|Easy|||||||||||
|[0875](https://leetcode-cn.com/problems/koko-eating-bananas)|Medium|||||||||||
|[0876](https://leetcode-cn.com/problems/middle-of-the-linked-list)|Easy|||||||||||
|[0877](https://leetcode-cn.com/problems/stone-game)|Medium|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0877.%20Stone%20Game/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0877.%20Stone%20Game/cpp1.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0877.%20Stone%20Game/go1/go1.go)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0877.%20Stone%20Game/java1.java)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0877.%20Stone%20Game/js1.js)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0877.%20Stone%20Game/python1.py)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0877.%20Stone%20Game/rust1.rs)|||
|[0878](https://leetcode-cn.com/problems/nth-magical-number)|Hard|||||||||||
|[0879](https://leetcode-cn.com/problems/profitable-schemes)|Hard|||||||||||
|[0528](https://leetcode-cn.com/problems/random-pick-with-weight)|Medium|||||||||||
|[0519](https://leetcode-cn.com/problems/random-flip-matrix)|Medium|||||||||||
|[0497](https://leetcode-cn.com/problems/random-point-in-non-overlapping-rectangles)|Medium|||||||||||
|[0478](https://leetcode-cn.com/problems/generate-random-point-in-a-circle)|Medium|||||||||||
|[0880](https://leetcode-cn.com/problems/decoded-string-at-index)|Medium|||||||||||
|[0881](https://leetcode-cn.com/problems/boats-to-save-people)|Medium|||||||||||
|[0882](https://leetcode-cn.com/problems/reachable-nodes-in-subdivided-graph)|Hard|||||||||||
|[0883](https://leetcode-cn.com/problems/projection-area-of-3d-shapes)|Easy|||||||||||
|[0884](https://leetcode-cn.com/problems/uncommon-words-from-two-sentences)|Easy|||||||||||
|[0885](https://leetcode-cn.com/problems/spiral-matrix-iii)|Medium|||||||||||
|[0886](https://leetcode-cn.com/problems/possible-bipartition)|Medium|||||||||||
|[0887](https://leetcode-cn.com/problems/super-egg-drop)|Hard|||||||||||
|[0888](https://leetcode-cn.com/problems/fair-candy-swap)|Easy|||||||||||
|[0889](https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal)|Medium|||||||||||
|[0890](https://leetcode-cn.com/problems/find-and-replace-pattern)|Medium|||||||||||
|[0891](https://leetcode-cn.com/problems/sum-of-subsequence-widths)|Hard|||||||||||
|[0892](https://leetcode-cn.com/problems/surface-area-of-3d-shapes)|Easy|||||||||||
|[0893](https://leetcode-cn.com/problems/groups-of-special-equivalent-strings)|Easy|||||||||||
|[0894](https://leetcode-cn.com/problems/all-possible-full-binary-trees)|Medium|||||||||||
|[0895](https://leetcode-cn.com/problems/maximum-frequency-stack)|Hard|||||||||||
|[0896](https://leetcode-cn.com/problems/monotonic-array)|Easy|||||||||||
|[0897](https://leetcode-cn.com/problems/increasing-order-search-tree)|Easy|||||||||||
|[0898](https://leetcode-cn.com/problems/bitwise-ors-of-subarrays)|Medium|||||||||||
|[0899](https://leetcode-cn.com/problems/orderly-queue)|Hard|||||||||||
|[0900](https://leetcode-cn.com/problems/rle-iterator)|Medium|||||||||||
|[0901](https://leetcode-cn.com/problems/online-stock-span)|Medium|||||||||||
|[0902](https://leetcode-cn.com/problems/numbers-at-most-n-given-digit-set)|Hard|||||||||||
|[0903](https://leetcode-cn.com/problems/valid-permutations-for-di-sequence)|Hard|||||||||||
|[0904](https://leetcode-cn.com/problems/fruit-into-baskets)|Medium|||||||||||
|[0905](https://leetcode-cn.com/problems/sort-array-by-parity)|Easy|||||||||||
|[0906](https://leetcode-cn.com/problems/super-palindromes)|Hard|||||||||||
|[0907](https://leetcode-cn.com/problems/sum-of-subarray-minimums)|Medium|||||||||||
|[0908](https://leetcode-cn.com/problems/smallest-range-i)|Easy|||||||||||
|[0909](https://leetcode-cn.com/problems/snakes-and-ladders)|Medium|||||||||||
|[0910](https://leetcode-cn.com/problems/smallest-range-ii)|Medium|||||||||||
|[0911](https://leetcode-cn.com/problems/online-election)|Medium|||||||||||
|[0912](https://leetcode-cn.com/problems/sort-an-array)|Medium|||||||||||
|[0913](https://leetcode-cn.com/problems/cat-and-mouse)|Hard|||||||||||
|[0914](https://leetcode-cn.com/problems/x-of-a-kind-in-a-deck-of-cards)|Easy|||||||||||
|[0915](https://leetcode-cn.com/problems/partition-array-into-disjoint-intervals)|Medium|||||||||||
|[0916](https://leetcode-cn.com/problems/word-subsets)|Medium|||||||||||
|[0917](https://leetcode-cn.com/problems/reverse-only-letters)|Easy|||||||||||
|[0918](https://leetcode-cn.com/problems/maximum-sum-circular-subarray)|Medium|||||||||||
|[0919](https://leetcode-cn.com/problems/complete-binary-tree-inserter)|Medium|||||||||||
|[0920](https://leetcode-cn.com/problems/number-of-music-playlists)|Hard|||||||||||
|[0921](https://leetcode-cn.com/problems/minimum-add-to-make-parentheses-valid)|Medium|||||||||||
|[0922](https://leetcode-cn.com/problems/sort-array-by-parity-ii)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0922.%20Sort%20Array%20By%20Parity%20II/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0922.%20Sort%20Array%20By%20Parity%20II/cpp1.cc)|||||||||
|[0923](https://leetcode-cn.com/problems/3sum-with-multiplicity)|Medium|||||||||||
|[0924](https://leetcode-cn.com/problems/minimize-malware-spread)|Hard|||||||||||
|[0925](https://leetcode-cn.com/problems/long-pressed-name)|Easy|||||||||||
|[0926](https://leetcode-cn.com/problems/flip-string-to-monotone-increasing)|Medium|||||||||||
|[0927](https://leetcode-cn.com/problems/three-equal-parts)|Hard|||||||||||
|[0928](https://leetcode-cn.com/problems/minimize-malware-spread-ii)|Hard|||||||||||
|[0929](https://leetcode-cn.com/problems/unique-email-addresses)|Easy|||||||||||
|[0930](https://leetcode-cn.com/problems/binary-subarrays-with-sum)|Medium|||||||||||
|[0931](https://leetcode-cn.com/problems/minimum-falling-path-sum)|Medium|||||||||||
|[0932](https://leetcode-cn.com/problems/beautiful-array)|Medium|||||||||||
|[0933](https://leetcode-cn.com/problems/number-of-recent-calls)|Easy|||||||||||
|[0934](https://leetcode-cn.com/problems/shortest-bridge)|Medium|||||||||||
|[0935](https://leetcode-cn.com/problems/knight-dialer)|Medium|||||||||||
|[0936](https://leetcode-cn.com/problems/stamping-the-sequence)|Hard|||||||||||
|[0937](https://leetcode-cn.com/problems/reorder-data-in-log-files)|Easy|||||||||||
|[0938](https://leetcode-cn.com/problems/range-sum-of-bst)|Easy|||||||||||
|[0939](https://leetcode-cn.com/problems/minimum-area-rectangle)|Medium|||||||||||
|[0940](https://leetcode-cn.com/problems/distinct-subsequences-ii)|Hard|||||||||||
|[0941](https://leetcode-cn.com/problems/valid-mountain-array)|Easy|||||||||||
|[0942](https://leetcode-cn.com/problems/di-string-match)|Easy|||||||||||
|[0943](https://leetcode-cn.com/problems/find-the-shortest-superstring)|Hard|||||||||||
|[0944](https://leetcode-cn.com/problems/delete-columns-to-make-sorted)|Easy|||||||||||
|[0945](https://leetcode-cn.com/problems/minimum-increment-to-make-array-unique)|Medium|||||||||||
|[0946](https://leetcode-cn.com/problems/validate-stack-sequences)|Medium|||||||||||
|[0947](https://leetcode-cn.com/problems/most-stones-removed-with-same-row-or-column)|Medium|||||||||||
|[0948](https://leetcode-cn.com/problems/bag-of-tokens)|Medium|||||||||||
|[0949](https://leetcode-cn.com/problems/largest-time-for-given-digits)|Medium|||||||||||
|[0950](https://leetcode-cn.com/problems/reveal-cards-in-increasing-order)|Medium|||||||||||
|[0951](https://leetcode-cn.com/problems/flip-equivalent-binary-trees)|Medium|||||||||||
|[0952](https://leetcode-cn.com/problems/largest-component-size-by-common-factor)|Hard|||||||||||
|[0953](https://leetcode-cn.com/problems/verifying-an-alien-dictionary)|Easy|||||||||||
|[0954](https://leetcode-cn.com/problems/array-of-doubled-pairs)|Medium|||||||||||
|[0955](https://leetcode-cn.com/problems/delete-columns-to-make-sorted-ii)|Medium|||||||||||
|[0956](https://leetcode-cn.com/problems/tallest-billboard)|Hard|||||||||||
|[0957](https://leetcode-cn.com/problems/prison-cells-after-n-days)|Medium|||||||||||
|[0958](https://leetcode-cn.com/problems/check-completeness-of-a-binary-tree)|Medium|||||||||||
|[0959](https://leetcode-cn.com/problems/regions-cut-by-slashes)|Medium|||||||||||
|[0960](https://leetcode-cn.com/problems/delete-columns-to-make-sorted-iii)|Hard|||||||||||
|[0961](https://leetcode-cn.com/problems/n-repeated-element-in-size-2n-array)|Easy|||||||||||
|[0962](https://leetcode-cn.com/problems/maximum-width-ramp)|Medium|||||||||||
|[0963](https://leetcode-cn.com/problems/minimum-area-rectangle-ii)|Medium|||||||||||
|[0964](https://leetcode-cn.com/problems/least-operators-to-express-number)|Hard|||||||||||
|[0965](https://leetcode-cn.com/problems/univalued-binary-tree)|Easy|||||||||||
|[0966](https://leetcode-cn.com/problems/vowel-spellchecker)|Medium|||||||||||
|[0967](https://leetcode-cn.com/problems/numbers-with-same-consecutive-differences)|Medium|||||||||||
|[0968](https://leetcode-cn.com/problems/binary-tree-cameras)|Hard|||||||||||
|[0969](https://leetcode-cn.com/problems/pancake-sorting)|Medium|||||||||||
|[0970](https://leetcode-cn.com/problems/powerful-integers)|Medium|||||||||||
|[0971](https://leetcode-cn.com/problems/flip-binary-tree-to-match-preorder-traversal)|Medium|||||||||||
|[0972](https://leetcode-cn.com/problems/equal-rational-numbers)|Hard|||||||||||
|[0509](https://leetcode-cn.com/problems/fibonacci-number)|Easy|||||||||||
|[0973](https://leetcode-cn.com/problems/k-closest-points-to-origin)|Medium||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0973.%20K%20Closest%20Points%20to%20Origin/cpp1.cc)|||||||||
|[0974](https://leetcode-cn.com/problems/subarray-sums-divisible-by-k)|Medium|||||||||||
|[0975](https://leetcode-cn.com/problems/odd-even-jump)|Hard|||||||||||
|[0976](https://leetcode-cn.com/problems/largest-perimeter-triangle)|Easy|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0976.%20Largest%20Perimeter%20Triangle/c1.c)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0976.%20Largest%20Perimeter%20Triangle/cpp1.cc)|[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0976.%20Largest%20Perimeter%20Triangle/go1/go1.go)||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/0976.%20Largest%20Perimeter%20Triangle/js1.js)||||||
|[0977](https://leetcode-cn.com/problems/squares-of-a-sorted-array)|Easy|||||||||||
|[0978](https://leetcode-cn.com/problems/longest-turbulent-subarray)|Medium|||||||||||
|[0979](https://leetcode-cn.com/problems/distribute-coins-in-binary-tree)|Medium|||||||||||
|[0980](https://leetcode-cn.com/problems/unique-paths-iii)|Hard|||||||||||
|[0981](https://leetcode-cn.com/problems/time-based-key-value-store)|Medium|||||||||||
|[0982](https://leetcode-cn.com/problems/triples-with-bitwise-and-equal-to-zero)|Hard|||||||||||
|[0983](https://leetcode-cn.com/problems/minimum-cost-for-tickets)|Medium|||||||||||
|[0984](https://leetcode-cn.com/problems/string-without-aaa-or-bbb)|Medium|||||||||||
|[0985](https://leetcode-cn.com/problems/sum-of-even-numbers-after-queries)|Easy|||||||||||
|[0986](https://leetcode-cn.com/problems/interval-list-intersections)|Medium|||||||||||
|[0987](https://leetcode-cn.com/problems/vertical-order-traversal-of-a-binary-tree)|Hard|||||||||||
|[0988](https://leetcode-cn.com/problems/smallest-string-starting-from-leaf)|Medium|||||||||||
|[0989](https://leetcode-cn.com/problems/add-to-array-form-of-integer)|Easy|||||||||||
|[0990](https://leetcode-cn.com/problems/satisfiability-of-equality-equations)|Medium|||||||||||
|[0991](https://leetcode-cn.com/problems/broken-calculator)|Medium|||||||||||
|[0992](https://leetcode-cn.com/problems/subarrays-with-k-different-integers)|Hard|||||||||||
|[0993](https://leetcode-cn.com/problems/cousins-in-binary-tree)|Easy|||||||||||
|[0994](https://leetcode-cn.com/problems/rotting-oranges)|Medium|||||||||||
|[0995](https://leetcode-cn.com/problems/minimum-number-of-k-consecutive-bit-flips)|Hard|||||||||||
|[0996](https://leetcode-cn.com/problems/number-of-squareful-arrays)|Hard|||||||||||
|[0997](https://leetcode-cn.com/problems/find-the-town-judge)|Easy|||||||||||
|[0998](https://leetcode-cn.com/problems/maximum-binary-tree-ii)|Medium|||||||||||
|[0999](https://leetcode-cn.com/problems/available-captures-for-rook)|Easy|||||||||||
|[1000](https://leetcode-cn.com/problems/minimum-cost-to-merge-stones)|Hard|||||||||||
|[1001](https://leetcode-cn.com/problems/grid-illumination)|Hard|||||||||||
|[1002](https://leetcode-cn.com/problems/find-common-characters)|Easy|||||||||||
|[1003](https://leetcode-cn.com/problems/check-if-word-is-valid-after-substitutions)|Medium|||||||||||
|[1004](https://leetcode-cn.com/problems/max-consecutive-ones-iii)|Medium|||||||||||
|[1005](https://leetcode-cn.com/problems/maximize-sum-of-array-after-k-negations)|Easy|||||||||||
|[1006](https://leetcode-cn.com/problems/clumsy-factorial)|Medium|||||||||||
|[1007](https://leetcode-cn.com/problems/minimum-domino-rotations-for-equal-row)|Medium|||||||||||
|[1008](https://leetcode-cn.com/problems/construct-binary-search-tree-from-preorder-traversal)|Medium|||||||||||
|[1055](https://leetcode-cn.com/problems/shortest-way-to-form-string)|Medium|||||||||||
|[1057](https://leetcode-cn.com/problems/campus-bikes)|Medium|||||||||||
|[1058](https://leetcode-cn.com/problems/minimize-rounding-error-to-meet-target)|Medium|||||||||||
|[1009](https://leetcode-cn.com/problems/complement-of-base-10-integer)|Easy|||||||||||
|[1010](https://leetcode-cn.com/problems/pairs-of-songs-with-total-durations-divisible-by-60)|Medium|||||||||||
|[1011](https://leetcode-cn.com/problems/capacity-to-ship-packages-within-d-days)|Medium|||||||||||
|[1012](https://leetcode-cn.com/problems/numbers-with-repeated-digits)|Hard|||||||||||
|[1061](https://leetcode-cn.com/problems/lexicographically-smallest-equivalent-string)|Medium|||||||||||
|[1060](https://leetcode-cn.com/problems/missing-element-in-sorted-array)|Medium|||||||||||
|[1062](https://leetcode-cn.com/problems/longest-repeating-substring)|Medium|||||||||||
|[1063](https://leetcode-cn.com/problems/number-of-valid-subarrays)|Hard|||||||||||
|[1013](https://leetcode-cn.com/problems/partition-array-into-three-parts-with-equal-sum)|Easy|||||||||||
|[1014](https://leetcode-cn.com/problems/best-sightseeing-pair)|Medium|||||||||||
|[1015](https://leetcode-cn.com/problems/smallest-integer-divisible-by-k)|Medium|||||||||||
|[1016](https://leetcode-cn.com/problems/binary-string-with-substrings-representing-1-to-n)|Medium|||||||||||
|[1064](https://leetcode-cn.com/problems/fixed-point)|Easy|||||||||||
|[1066](https://leetcode-cn.com/problems/campus-bikes-ii)|Medium|||||||||||
|[1067](https://leetcode-cn.com/problems/digit-count-in-range)|Hard|||||||||||
|[1056](https://leetcode-cn.com/problems/confusing-number)|Easy|||||||||||
|[1017](https://leetcode-cn.com/problems/convert-to-base-2)|Medium|||||||||||
|[1018](https://leetcode-cn.com/problems/binary-prefix-divisible-by-5)|Easy|||||||||||
|[1019](https://leetcode-cn.com/problems/next-greater-node-in-linked-list)|Medium|||||||||||
|[1020](https://leetcode-cn.com/problems/number-of-enclaves)|Medium|||||||||||
|[1086](https://leetcode-cn.com/problems/high-five)|Easy|||||||||||
|[1065](https://leetcode-cn.com/problems/index-pairs-of-a-string)|Easy|||||||||||
|[1087](https://leetcode-cn.com/problems/brace-expansion)|Medium|||||||||||
|[1088](https://leetcode-cn.com/problems/confusing-number-ii)|Hard|||||||||||
|[1021](https://leetcode-cn.com/problems/remove-outermost-parentheses)|Easy|||||||||||
|[1022](https://leetcode-cn.com/problems/sum-of-root-to-leaf-binary-numbers)|Easy|||||||||||
|[1023](https://leetcode-cn.com/problems/camelcase-matching)|Medium|||||||||||
|[1024](https://leetcode-cn.com/problems/video-stitching)|Medium|||||||||||
|[1085](https://leetcode-cn.com/problems/sum-of-digits-in-the-minimum-number)|Easy|||||||||||
|[1099](https://leetcode-cn.com/problems/two-sum-less-than-k)|Easy|||||||||||
|[1100](https://leetcode-cn.com/problems/find-k-length-substrings-with-no-repeated-characters)|Medium||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/1100.%20Find%20K-Length%20Substrings%20With%20No%20Repeated%20Characters/cpp1.cc)|||||||||
|[1101](https://leetcode-cn.com/problems/the-earliest-moment-when-everyone-become-friends)|Medium|||||||||||
|[1025](https://leetcode-cn.com/problems/divisor-game)|Easy|||||||||||
|[1027](https://leetcode-cn.com/problems/longest-arithmetic-subsequence)|Medium|||||||||||
|[1118](https://leetcode-cn.com/problems/number-of-days-in-a-month)|Easy|||||||||||
|[1119](https://leetcode-cn.com/problems/remove-vowels-from-a-string)|Easy|||||||||||
|[1134](https://leetcode-cn.com/problems/armstrong-number)|Easy|||||||||||
|[1120](https://leetcode-cn.com/problems/maximum-average-subtree)|Medium|||||||||||
|[1026](https://leetcode-cn.com/problems/maximum-difference-between-node-and-ancestor)|Medium|||||||||||
|[1028](https://leetcode-cn.com/problems/recover-a-tree-from-preorder-traversal)|Hard|||||||||||
|[1030](https://leetcode-cn.com/problems/matrix-cells-in-distance-order)|Easy|||||||||||
|[1029](https://leetcode-cn.com/problems/two-city-scheduling)|Medium|||||||||||
|[1031](https://leetcode-cn.com/problems/maximum-sum-of-two-non-overlapping-subarrays)|Medium|||||||||||
|[1032](https://leetcode-cn.com/problems/stream-of-characters)|Hard|||||||||||
|[1133](https://leetcode-cn.com/problems/largest-unique-number)|Easy|||||||||||
|[1102](https://leetcode-cn.com/problems/path-with-maximum-minimum-value)|Medium|||||||||||
|[1135](https://leetcode-cn.com/problems/connecting-cities-with-minimum-cost)|Medium|||||||||||
|[1136](https://leetcode-cn.com/problems/parallel-courses)|Medium|||||||||||
|[1150](https://leetcode-cn.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array)|Easy|||||||||||
|[1033](https://leetcode-cn.com/problems/moving-stones-until-consecutive)|Easy|||||||||||
|[1034](https://leetcode-cn.com/problems/coloring-a-border)|Medium|||||||||||
|[1035](https://leetcode-cn.com/problems/uncrossed-lines)|Medium|||||||||||
|[1036](https://leetcode-cn.com/problems/escape-a-large-maze)|Hard|||||||||||
|[1151](https://leetcode-cn.com/problems/minimum-swaps-to-group-all-1s-together)|Medium|||||||||||
|[1152](https://leetcode-cn.com/problems/analyze-user-website-visit-pattern)|Medium|||||||||||
|[1039](https://leetcode-cn.com/problems/minimum-score-triangulation-of-polygon)|Medium|||||||||||
|[1160](https://leetcode-cn.com/problems/find-words-that-can-be-formed-by-characters)|Easy|||||||||||
|[1040](https://leetcode-cn.com/problems/moving-stones-until-consecutive-ii)|Medium|||||||||||
|[1038](https://leetcode-cn.com/problems/binary-search-tree-to-greater-sum-tree)|Medium|||||||||||
|[1037](https://leetcode-cn.com/problems/valid-boomerang)|Easy|||||||||||
|[1161](https://leetcode-cn.com/problems/maximum-level-sum-of-a-binary-tree)|Medium|||||||||||
|[1162](https://leetcode-cn.com/problems/as-far-from-land-as-possible)|Medium|||||||||||
|[1121](https://leetcode-cn.com/problems/divide-array-into-increasing-sequences)|Hard|||||||||||
|[1041](https://leetcode-cn.com/problems/robot-bounded-in-circle)|Medium|||||||||||
|[1042](https://leetcode-cn.com/problems/flower-planting-with-no-adjacent)|Medium|||||||||||
|[1043](https://leetcode-cn.com/problems/partition-array-for-maximum-sum)|Medium|||||||||||
|[1044](https://leetcode-cn.com/problems/longest-duplicate-substring)|Hard|||||||||||
|[1165](https://leetcode-cn.com/problems/single-row-keyboard)|Easy||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/1165.%20Single-Row%20Keyboard/cpp1.cc)|||||||||
|[1153](https://leetcode-cn.com/problems/string-transforms-into-another-string)|Hard|||||||||||
|[1166](https://leetcode-cn.com/problems/design-file-system)|Medium|||||||||||
|[1167](https://leetcode-cn.com/problems/minimum-cost-to-connect-sticks)|Medium|||||||||||
|[1046](https://leetcode-cn.com/problems/last-stone-weight)|Easy|||||||||||
|[1047](https://leetcode-cn.com/problems/remove-all-adjacent-duplicates-in-string)|Easy|||||||||||
|[1048](https://leetcode-cn.com/problems/longest-string-chain)|Medium|||||||||||
|[1049](https://leetcode-cn.com/problems/last-stone-weight-ii)|Medium|||||||||||
|[1180](https://leetcode-cn.com/problems/count-substrings-with-only-one-distinct-letter)|Easy|||||||||||
|[1181](https://leetcode-cn.com/problems/before-and-after-puzzle)|Medium|||||||||||
|[1163](https://leetcode-cn.com/problems/last-substring-in-lexicographical-order)|Hard|||||||||||
|[1182](https://leetcode-cn.com/problems/shortest-distance-to-target-color)|Medium|||||||||||
|[1051](https://leetcode-cn.com/problems/height-checker)|Easy|||||||||||
|[1052](https://leetcode-cn.com/problems/grumpy-bookstore-owner)|Medium|||||||||||
|[1053](https://leetcode-cn.com/problems/previous-permutation-with-one-swap)|Medium|||||||||||
|[1054](https://leetcode-cn.com/problems/distant-barcodes)|Medium|||||||||||
|[1196](https://leetcode-cn.com/problems/how-many-apples-can-you-put-into-the-basket)|Easy|||||||||||
|[1197](https://leetcode-cn.com/problems/minimum-knight-moves)|Medium|||||||||||
|[1198](https://leetcode-cn.com/problems/find-smallest-common-element-in-all-rows)|Medium|||||||||||
|[1168](https://leetcode-cn.com/problems/optimize-water-distribution-in-a-village)|Hard|||||||||||
|[1074](https://leetcode-cn.com/problems/number-of-submatrices-that-sum-to-target)|Hard|||||||||||
|[1071](https://leetcode-cn.com/problems/greatest-common-divisor-of-strings)|Easy|||||||||||
|[1072](https://leetcode-cn.com/problems/flip-columns-for-maximum-number-of-equal-rows)|Medium|||||||||||
|[1073](https://leetcode-cn.com/problems/adding-two-negabinary-numbers)|Medium|||||||||||
|[1213](https://leetcode-cn.com/problems/intersection-of-three-sorted-arrays)|Easy|||||||||||
|[1214](https://leetcode-cn.com/problems/two-sum-bsts)|Medium|||||||||||
|[1215](https://leetcode-cn.com/problems/stepping-numbers)|Medium|||||||||||
|[1183](https://leetcode-cn.com/problems/maximum-number-of-ones)|Hard|||||||||||
|[1078](https://leetcode-cn.com/problems/occurrences-after-bigram)|Easy|||||||||||
|[1080](https://leetcode-cn.com/problems/insufficient-nodes-in-root-to-leaf-paths)|Medium|||||||||||
|[1081](https://leetcode-cn.com/problems/smallest-subsequence-of-distinct-characters)|Medium|||||||||||
|[1079](https://leetcode-cn.com/problems/letter-tile-possibilities)|Medium|||||||||||
|[1228](https://leetcode-cn.com/problems/missing-number-in-arithmetic-progression)|Easy|||||||||||
|[1229](https://leetcode-cn.com/problems/meeting-scheduler)|Medium|||||||||||
|[1230](https://leetcode-cn.com/problems/toss-strange-coins)|Medium|||||||||||
|[1199](https://leetcode-cn.com/problems/minimum-time-to-build-blocks)|Hard|||||||||||
|[1089](https://leetcode-cn.com/problems/duplicate-zeros)|Easy|||||||||||
|[1090](https://leetcode-cn.com/problems/largest-values-from-labels)|Medium|||||||||||
|[1092](https://leetcode-cn.com/problems/shortest-common-supersequence)|Hard|||||||||||
|[1091](https://leetcode-cn.com/problems/shortest-path-in-binary-matrix)|Medium|||||||||||
|[1243](https://leetcode-cn.com/problems/array-transformation)|Easy|||||||||||
|[1244](https://leetcode-cn.com/problems/design-a-leaderboard)|Medium|||||||||||
|[1245](https://leetcode-cn.com/problems/tree-diameter)|Medium|||||||||||
|[1216](https://leetcode-cn.com/problems/valid-palindrome-iii)|Hard|||||||||||
|[1093](https://leetcode-cn.com/problems/statistics-from-a-large-sample)|Medium|||||||||||
|[1094](https://leetcode-cn.com/problems/car-pooling)|Medium|||||||||||
|[1095](https://leetcode-cn.com/problems/find-in-mountain-array)|Hard|||||||||||
|[1096](https://leetcode-cn.com/problems/brace-expansion-ii)|Hard|||||||||||
|[1256](https://leetcode-cn.com/problems/encode-number)|Medium|||||||||||
|[1257](https://leetcode-cn.com/problems/smallest-common-region)|Medium|||||||||||
|[1258](https://leetcode-cn.com/problems/synonymous-sentences)|Medium|||||||||||
|[1231](https://leetcode-cn.com/problems/divide-chocolate)|Hard|||||||||||
|[1104](https://leetcode-cn.com/problems/path-in-zigzag-labelled-binary-tree)|Medium|||||||||||
|[1103](https://leetcode-cn.com/problems/distribute-candies-to-people)|Easy|||||||||||
|[1105](https://leetcode-cn.com/problems/filling-bookcase-shelves)|Medium|||||||||||
|[1106](https://leetcode-cn.com/problems/parsing-a-boolean-expression)|Hard||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/1106.%20Parsing%20A%20Boolean%20Expression/cpp1.cc)|||||||||
|[1271](https://leetcode-cn.com/problems/hexspeak)|Easy|||||||||||
|[1272](https://leetcode-cn.com/problems/remove-interval)|Medium|||||||||||
|[1273](https://leetcode-cn.com/problems/delete-tree-nodes)|Medium|||||||||||
|[1246](https://leetcode-cn.com/problems/palindrome-removal)|Hard|||||||||||
|[1108](https://leetcode-cn.com/problems/defanging-an-ip-address)|Easy|||||||||||
|[1109](https://leetcode-cn.com/problems/corporate-flight-bookings)|Medium|||||||||||
|[1110](https://leetcode-cn.com/problems/delete-nodes-and-return-forest)|Medium|||||||||||
|[1111](https://leetcode-cn.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings)|Medium|||||||||||
|[1619](https://leetcode-cn.com/problems/mean-of-array-after-removing-some-elements)|Easy|||||||||||
|[1286](https://leetcode-cn.com/problems/iterator-for-combination)|Medium|||||||||||
|[1291](https://leetcode-cn.com/problems/sequential-digits)|Medium|||||||||||
|[1259](https://leetcode-cn.com/problems/handshakes-that-dont-cross)|Hard|||||||||||
|[1122](https://leetcode-cn.com/problems/relative-sort-array)|Easy|||||||||||
|[1123](https://leetcode-cn.com/problems/lowest-common-ancestor-of-deepest-leaves)|Medium|||||||||||
|[1124](https://leetcode-cn.com/problems/longest-well-performing-interval)|Medium|||||||||||
|[1125](https://leetcode-cn.com/problems/smallest-sufficient-team)|Hard|||||||||||
|[1287](https://leetcode-cn.com/problems/element-appearing-more-than-25-in-sorted-array)|Easy|||||||||||
|[1288](https://leetcode-cn.com/problems/remove-covered-intervals)|Medium|||||||||||
|[1627](https://leetcode-cn.com/problems/graph-connectivity-with-threshold)|Hard|||||||||||
|[1289](https://leetcode-cn.com/problems/minimum-falling-path-sum-ii)|Hard|||||||||||
|[1128](https://leetcode-cn.com/problems/number-of-equivalent-domino-pairs)|Easy|||||||||||
|[1130](https://leetcode-cn.com/problems/minimum-cost-tree-from-leaf-values)|Medium|||||||||||
|[1129](https://leetcode-cn.com/problems/shortest-path-with-alternating-colors)|Medium|||||||||||
|[1131](https://leetcode-cn.com/problems/maximum-of-absolute-value-expression)|Medium|||||||||||
|[1299](https://leetcode-cn.com/problems/replace-elements-with-greatest-element-on-right-side)|Easy|||||||||||
|[1300](https://leetcode-cn.com/problems/sum-of-mutated-array-closest-to-target)|Medium|||||||||||
|[1274](https://leetcode-cn.com/problems/number-of-ships-in-a-rectangle)|Hard|||||||||||
|[1301](https://leetcode-cn.com/problems/number-of-paths-with-max-score)|Hard|||||||||||
|[1137](https://leetcode-cn.com/problems/n-th-tribonacci-number)|Easy|||||||||||
|[1138](https://leetcode-cn.com/problems/alphabet-board-path)|Medium|||||||||||
|[1139](https://leetcode-cn.com/problems/largest-1-bordered-square)|Medium|||||||||||
|[1140](https://leetcode-cn.com/problems/stone-game-ii)|Medium|||||||||||
|[1313](https://leetcode-cn.com/problems/decompress-run-length-encoded-list)|Easy|||||||||||
|[1314](https://leetcode-cn.com/problems/matrix-block-sum)|Medium|||||||||||
|[1315](https://leetcode-cn.com/problems/sum-of-nodes-with-even-valued-grandparent)|Medium|||||||||||
|[1316](https://leetcode-cn.com/problems/distinct-echo-substrings)|Hard|||||||||||
|[1144](https://leetcode-cn.com/problems/decrease-elements-to-make-array-zigzag)|Medium|||||||||||
|[1145](https://leetcode-cn.com/problems/binary-tree-coloring-game)|Medium|||||||||||
|[1146](https://leetcode-cn.com/problems/snapshot-array)|Medium|||||||||||
|[1143](https://leetcode-cn.com/problems/longest-common-subsequence)|Medium|||||||||||
|[1147](https://leetcode-cn.com/problems/longest-chunked-palindrome-decomposition)|Hard|||||||||||
|[1328](https://leetcode-cn.com/problems/break-a-palindrome)|Medium|||||||||||
|[1329](https://leetcode-cn.com/problems/sort-the-matrix-diagonally)|Medium|||||||||||
|[1302](https://leetcode-cn.com/problems/deepest-leaves-sum)|Medium|||||||||||
|[1330](https://leetcode-cn.com/problems/reverse-subarray-to-maximize-array-value)|Hard|||||||||||
|[1331](https://leetcode-cn.com/problems/rank-transform-of-an-array)|Easy|||||||||||
|[1632](https://leetcode-cn.com/problems/rank-transform-of-a-matrix)|Hard|||||||||||
|[1154](https://leetcode-cn.com/problems/day-of-the-year)|Easy|||||||||||
|[1156](https://leetcode-cn.com/problems/swap-for-longest-repeated-character-substring)|Medium|||||||||||
|[1157](https://leetcode-cn.com/problems/online-majority-element-in-subarray)|Hard|||||||||||
|[1155](https://leetcode-cn.com/problems/number-of-dice-rolls-with-target-sum)|Medium|||||||||||
|[1171](https://leetcode-cn.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list)|Medium|||||||||||
|[1172](https://leetcode-cn.com/problems/dinner-plate-stacks)|Hard|||||||||||
|[1236](https://leetcode-cn.com/problems/web-crawler)|Medium|||||||||||
|[1169](https://leetcode-cn.com/problems/invalid-transactions)|Medium|||||||||||
|[1170](https://leetcode-cn.com/problems/compare-strings-by-frequency-of-the-smallest-character)|Medium|||||||||||
|[1360](https://leetcode-cn.com/problems/number-of-days-between-two-dates)|Easy|||||||||||
|[1361](https://leetcode-cn.com/problems/validate-binary-tree-nodes)|Medium|||||||||||
|[1362](https://leetcode-cn.com/problems/closest-divisors)|Medium|||||||||||
|[1363](https://leetcode-cn.com/problems/largest-multiple-of-three)|Hard|||||||||||
|[1175](https://leetcode-cn.com/problems/prime-arrangements)|Easy|||||||||||
|[1176](https://leetcode-cn.com/problems/diet-plan-performance)|Easy|||||||||||
|[1177](https://leetcode-cn.com/problems/can-make-palindrome-from-substring)|Medium|||||||||||
|[1178](https://leetcode-cn.com/problems/number-of-valid-words-for-each-puzzle)|Hard|||||||||||
|[1507](https://leetcode-cn.com/problems/reformat-date)|Easy|||||||||||
|[1390](https://leetcode-cn.com/problems/four-divisors)|Medium|||||||||||
|[1382](https://leetcode-cn.com/problems/balance-a-binary-search-tree)|Medium|||||||||||
|[1425](https://leetcode-cn.com/problems/constrained-subsequence-sum)|Hard|||||||||||
|[1184](https://leetcode-cn.com/problems/distance-between-bus-stops)|Easy|||||||||||
|[1186](https://leetcode-cn.com/problems/maximum-subarray-sum-with-one-deletion)|Medium|||||||||||
|[1185](https://leetcode-cn.com/problems/day-of-the-week)|Easy|||||||||||
|[1187](https://leetcode-cn.com/problems/make-array-strictly-increasing)|Hard|||||||||||
|[1550](https://leetcode-cn.com/problems/three-consecutive-odds)|Easy|||||||||||
|[1483](https://leetcode-cn.com/problems/kth-ancestor-of-a-tree-node)|Hard|||||||||||
|[1189](https://leetcode-cn.com/problems/maximum-number-of-balloons)|Easy|||||||||||
|[1190](https://leetcode-cn.com/problems/reverse-substrings-between-each-pair-of-parentheses)|Medium|||||||||||
|[1191](https://leetcode-cn.com/problems/k-concatenation-maximum-sum)|Medium|||||||||||
|[1192](https://leetcode-cn.com/problems/critical-connections-in-a-network)|Hard|||||||||||
|[1405](https://leetcode-cn.com/problems/longest-happy-string)|Medium|||||||||||
|[1200](https://leetcode-cn.com/problems/minimum-absolute-difference)|Easy|||||||||||
|[1201](https://leetcode-cn.com/problems/ugly-number-iii)|Medium|||||||||||
|[1202](https://leetcode-cn.com/problems/smallest-string-with-swaps)|Medium|||||||||||
|[1203](https://leetcode-cn.com/problems/sort-items-by-groups-respecting-dependencies)|Hard|||||||||||
|[1207](https://leetcode-cn.com/problems/unique-number-of-occurrences)|Easy|||||||||||
|[1209](https://leetcode-cn.com/problems/remove-all-adjacent-duplicates-in-string-ii)|Medium|||||||||||
|[1208](https://leetcode-cn.com/problems/get-equal-substrings-within-budget)|Medium|||||||||||
|[1210](https://leetcode-cn.com/problems/minimum-moves-to-reach-target-with-rotations)|Hard|||||||||||
|[1706](https://leetcode-cn.com/problems/where-will-the-ball-fall)|Medium|||||||||||
|[1514](https://leetcode-cn.com/problems/path-with-maximum-probability)|Medium|||||||||||
|[1217](https://leetcode-cn.com/problems/minimum-cost-to-move-chips-to-the-same-position)|Easy|||||||||||
|[1218](https://leetcode-cn.com/problems/longest-arithmetic-subsequence-of-given-difference)|Medium|||||||||||
|[1219](https://leetcode-cn.com/problems/path-with-maximum-gold)|Medium|||||||||||
|[1220](https://leetcode-cn.com/problems/count-vowels-permutation)|Hard|||||||||||
|[1206](https://leetcode-cn.com/problems/design-skiplist)|Hard|||||||||||
|[1221](https://leetcode-cn.com/problems/split-a-string-in-balanced-strings)|Easy|||||||||||
|[1222](https://leetcode-cn.com/problems/queens-that-can-attack-the-king)|Medium|||||||||||
|[1223](https://leetcode-cn.com/problems/dice-roll-simulation)|Medium|||||||||||
|[1224](https://leetcode-cn.com/problems/maximum-equal-frequency)|Hard|||||||||||
|[1427](https://leetcode-cn.com/problems/perform-string-shifts)|Easy|||||||||||
|[1232](https://leetcode-cn.com/problems/check-if-it-is-a-straight-line)|Easy|||||||||||
|[1233](https://leetcode-cn.com/problems/remove-sub-folders-from-the-filesystem)|Medium|||||||||||
|[1234](https://leetcode-cn.com/problems/replace-the-substring-for-balanced-string)|Medium|||||||||||
|[1235](https://leetcode-cn.com/problems/maximum-profit-in-job-scheduling)|Hard|||||||||||
|[1237](https://leetcode-cn.com/problems/find-positive-integer-solution-for-a-given-equation)|Medium|||||||||||
|[1238](https://leetcode-cn.com/problems/circular-permutation-in-binary-representation)|Medium|||||||||||
|[1239](https://leetcode-cn.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters)|Medium|||||||||||
|[1240](https://leetcode-cn.com/problems/tiling-a-rectangle-with-the-fewest-squares)|Hard|||||||||||
|[1227](https://leetcode-cn.com/problems/airplane-seat-assignment-probability)|Medium|||||||||||
|[1726](https://leetcode-cn.com/problems/tuple-with-same-product)|Medium|||||||||||
|[1429](https://leetcode-cn.com/problems/first-unique-number)|Medium|||||||||||
|[1691](https://leetcode-cn.com/problems/maximum-height-by-stacking-cuboids)|Hard|||||||||||
|[1247](https://leetcode-cn.com/problems/minimum-swaps-to-make-strings-equal)|Medium|||||||||||
|[1248](https://leetcode-cn.com/problems/count-number-of-nice-subarrays)|Medium|||||||||||
|[1249](https://leetcode-cn.com/problems/minimum-remove-to-make-valid-parentheses)|Medium|||||||||||
|[1250](https://leetcode-cn.com/problems/check-if-it-is-a-good-array)|Hard|||||||||||
|[1428](https://leetcode-cn.com/problems/leftmost-column-with-at-least-a-one)|Medium|||||||||||
|[1252](https://leetcode-cn.com/problems/cells-with-odd-values-in-a-matrix)|Easy|||||||||||
|[1253](https://leetcode-cn.com/problems/reconstruct-a-2-row-binary-matrix)|Medium|||||||||||
|[1254](https://leetcode-cn.com/problems/number-of-closed-islands)|Medium|||||||||||
|[1255](https://leetcode-cn.com/problems/maximum-score-words-formed-by-letters)|Hard|||||||||||
|[1618](https://leetcode-cn.com/problems/maximum-font-to-fit-a-sentence-in-a-screen)|Medium|||||||||||
|[1260](https://leetcode-cn.com/problems/shift-2d-grid)|Easy|||||||||||
|[1261](https://leetcode-cn.com/problems/find-elements-in-a-contaminated-binary-tree)|Medium|||||||||||
|[1262](https://leetcode-cn.com/problems/greatest-sum-divisible-by-three)|Medium|||||||||||
|[1263](https://leetcode-cn.com/problems/minimum-moves-to-move-a-box-to-their-target-location)|Hard|||||||||||
|[1426](https://leetcode-cn.com/problems/counting-elements)|Easy|||||||||||
|[1266](https://leetcode-cn.com/problems/minimum-time-visiting-all-points)|Easy|||||||||||
|[1267](https://leetcode-cn.com/problems/count-servers-that-communicate)|Medium|||||||||||
|[1268](https://leetcode-cn.com/problems/search-suggestions-system)|Medium|||||||||||
|[1269](https://leetcode-cn.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps)|Hard|||||||||||
|[1275](https://leetcode-cn.com/problems/find-winner-on-a-tic-tac-toe-game)|Easy|||||||||||
|[1276](https://leetcode-cn.com/problems/number-of-burgers-with-no-waste-of-ingredients)|Medium|||||||||||
|[1277](https://leetcode-cn.com/problems/count-square-submatrices-with-all-ones)|Medium|||||||||||
|[1278](https://leetcode-cn.com/problems/palindrome-partitioning-iii)|Hard|||||||||||
|[1265](https://leetcode-cn.com/problems/print-immutable-linked-list-in-reverse)|Medium|||||||||||
|[1281](https://leetcode-cn.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer)|Easy|||||||||||
|[1282](https://leetcode-cn.com/problems/group-the-people-given-the-group-size-they-belong-to)|Medium|||||||||||
|[1283](https://leetcode-cn.com/problems/find-the-smallest-divisor-given-a-threshold)|Medium|||||||||||
|[1284](https://leetcode-cn.com/problems/minimum-number-of-flips-to-convert-binary-matrix-to-zero-matrix)|Hard|||||||||||
|[1290](https://leetcode-cn.com/problems/convert-binary-number-in-a-linked-list-to-integer)|Easy|||||||||||
|[1292](https://leetcode-cn.com/problems/maximum-side-length-of-a-square-with-sum-less-than-or-equal-to-threshold)|Medium|||||||||||
|[1293](https://leetcode-cn.com/problems/shortest-path-in-a-grid-with-obstacles-elimination)|Hard|||||||||||
|[1295](https://leetcode-cn.com/problems/find-numbers-with-even-number-of-digits)|Easy|||||||||||
|[1296](https://leetcode-cn.com/problems/divide-array-in-sets-of-k-consecutive-numbers)|Medium|||||||||||
|[1297](https://leetcode-cn.com/problems/maximum-number-of-occurrences-of-a-substring)|Medium|||||||||||
|[1298](https://leetcode-cn.com/problems/maximum-candies-you-can-get-from-boxes)|Hard|||||||||||
|[1304](https://leetcode-cn.com/problems/find-n-unique-integers-sum-up-to-zero)|Easy|||||||||||
|[1305](https://leetcode-cn.com/problems/all-elements-in-two-binary-search-trees)|Medium|||||||||||
|[1306](https://leetcode-cn.com/problems/jump-game-iii)|Medium|||||||||||
|[1307](https://leetcode-cn.com/problems/verbal-arithmetic-puzzle)|Hard|||||||||||
|[1430](https://leetcode-cn.com/problems/check-if-a-string-is-a-valid-sequence-from-root-to-leaves-path-in-a-binary-tree)|Medium|||||||||||
|[1309](https://leetcode-cn.com/problems/decrypt-string-from-alphabet-to-integer-mapping)|Easy||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/1309.%20Decrypt%20String%20from%20Alphabet%20to%20Integer%20Mapping/cpp1.cc)|||||||||
|[1310](https://leetcode-cn.com/problems/xor-queries-of-a-subarray)|Medium|||||||||||
|[1311](https://leetcode-cn.com/problems/get-watched-videos-by-your-friends)|Medium|||||||||||
|[1312](https://leetcode-cn.com/problems/minimum-insertion-steps-to-make-a-string-palindrome)|Hard|||||||||||
|[1317](https://leetcode-cn.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers)|Easy|||||||||||
|[1318](https://leetcode-cn.com/problems/minimum-flips-to-make-a-or-b-equal-to-c)|Medium|||||||||||
|[1319](https://leetcode-cn.com/problems/number-of-operations-to-make-network-connected)|Medium|||||||||||
|[1320](https://leetcode-cn.com/problems/minimum-distance-to-type-a-word-using-two-fingers)|Hard|||||||||||
|[1342](https://leetcode-cn.com/problems/number-of-steps-to-reduce-a-number-to-zero)|Easy|||||||||||
|[1343](https://leetcode-cn.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold)|Medium|||||||||||
|[1344](https://leetcode-cn.com/problems/angle-between-hands-of-a-clock)|Medium|||||||||||
|[1345](https://leetcode-cn.com/problems/jump-game-iv)|Hard|||||||||||
|[1323](https://leetcode-cn.com/problems/maximum-69-number)|Easy|||||||||||
|[1324](https://leetcode-cn.com/problems/print-words-vertically)|Medium|||||||||||
|[1325](https://leetcode-cn.com/problems/delete-leaves-with-a-given-value)|Medium|||||||||||
|[1326](https://leetcode-cn.com/problems/minimum-number-of-taps-to-open-to-water-a-garden)|Hard|||||||||||
|[1332](https://leetcode-cn.com/problems/remove-palindromic-subsequences)|Easy|||||||||||
|[1333](https://leetcode-cn.com/problems/filter-restaurants-by-vegan-friendly-price-and-distance)|Medium|||||||||||
|[1334](https://leetcode-cn.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance)|Medium|||||||||||
|[1335](https://leetcode-cn.com/problems/minimum-difficulty-of-a-job-schedule)|Hard|||||||||||
|[1356](https://leetcode-cn.com/problems/sort-integers-by-the-number-of-1-bits)|Easy|||||||||||
|[1357](https://leetcode-cn.com/problems/apply-discount-every-n-orders)|Medium|||||||||||
|[1358](https://leetcode-cn.com/problems/number-of-substrings-containing-all-three-characters)|Medium||[1](https://github.com/leet/leet/blob/main/questions/Algorithms/1358.%20Number%20of%20Substrings%20Containing%20All%20Three%20Characters/cpp1.cc)|||||||||
|[1359](https://leetcode-cn.com/problems/count-all-valid-pickup-and-delivery-options)|Hard|||||||||||
|[1337](https://leetcode-cn.com/problems/the-k-weakest-rows-in-a-matrix)|Easy|||||||||||
|[1338](https://leetcode-cn.com/problems/reduce-array-size-to-the-half)|Medium|||||||||||
|[1339](https://leetcode-cn.com/problems/maximum-product-of-splitted-binary-tree)|Medium|||||||||||
|[1340](https://leetcode-cn.com/problems/jump-game-v)|Hard|||||||||||
|[1346](https://leetcode-cn.com/problems/check-if-n-and-its-double-exist)|Easy|||||||||||
|[1347](https://leetcode-cn.com/problems/minimum-number-of-steps-to-make-two-strings-anagram)|Medium|||||||||||
|[1348](https://leetcode-cn.com/problems/tweet-counts-per-frequency)|Medium|||||||||||
|[1349](https://leetcode-cn.com/problems/maximum-students-taking-exam)|Hard|||||||||||
|[1370](https://leetcode-cn.com/problems/increasing-decreasing-string)|Easy|||||||||||
|[1371](https://leetcode-cn.com/problems/find-the-longest-substring-containing-vowels-in-even-counts)|Medium|||||||||||
|[1372](https://leetcode-cn.com/problems/longest-zigzag-path-in-a-binary-tree)|Medium|||||||||||
|[1373](https://leetcode-cn.com/problems/maximum-sum-bst-in-binary-tree)|Hard|||||||||||
|[1351](https://leetcode-cn.com/problems/count-negative-numbers-in-a-sorted-matrix)|Easy|||||||||||
|[1352](https://leetcode-cn.com/problems/product-of-the-last-k-numbers)|Medium|||||||||||
|[1353](https://leetcode-cn.com/problems/maximum-number-of-events-that-can-be-attended)|Medium|||||||||||
|[1354](https://leetcode-cn.com/problems/construct-target-array-with-multiple-sums)|Hard|||||||||||
|[1365](https://leetcode-cn.com/problems/how-many-numbers-are-smaller-than-the-current-number)|Easy|||||||||||
|[1366](https://leetcode-cn.com/problems/rank-teams-by-votes)|Medium|||||||||||
|[1367](https://leetcode-cn.com/problems/linked-list-in-binary-tree)|Medium|||||||||||
|[1368](https://leetcode-cn.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid)|Hard|||||||||||
|[1385](https://leetcode-cn.com/problems/find-the-distance-value-between-two-arrays)|Easy|||||||||||
|[1386](https://leetcode-cn.com/problems/cinema-seat-allocation)|Medium|||||||||||
|[1387](https://leetcode-cn.com/problems/sort-integers-by-the-power-value)|Medium|||||||||||
|[1388](https://leetcode-cn.com/problems/pizza-with-3n-slices)|Hard|||||||||||
|[1374](https://leetcode-cn.com/problems/generate-a-string-with-characters-that-have-odd-counts)|Easy|||||||||||
|[1375](https://leetcode-cn.com/problems/bulb-switcher-iii)|Medium|||||||||||
|[1376](https://leetcode-cn.com/problems/time-needed-to-inform-all-employees)|Medium|||||||||||
|[1377](https://leetcode-cn.com/problems/frog-position-after-t-seconds)|Hard|||||||||||
|[1380](https://leetcode-cn.com/problems/lucky-numbers-in-a-matrix)|Easy|||||||||||
|[1381](https://leetcode-cn.com/problems/design-a-stack-with-increment-operation)|Medium|||||||||||
|[1379](https://leetcode-cn.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree)|Medium|||||||||||
|[1383](https://leetcode-cn.com/problems/maximum-performance-of-a-team)|Hard|||||||||||
|[1399](https://leetcode-cn.com/problems/count-largest-group)|Easy|||||||||||
|[1401](https://leetcode-cn.com/problems/circle-and-rectangle-overlapping)|Medium|||||||||||
|[1400](https://leetcode-cn.com/problems/construct-k-palindrome-strings)|Medium|||||||||||
|[1402](https://leetcode-cn.com/problems/reducing-dishes)|Hard|||||||||||
|[1389](https://leetcode-cn.com/problems/create-target-array-in-the-given-order)|Easy|||||||||||
|[1391](https://leetcode-cn.com/problems/check-if-there-is-a-valid-path-in-a-grid)|Medium|||||||||||
|[1392](https://leetcode-cn.com/problems/longest-happy-prefix)|Hard|||||||||||
|[1394](https://leetcode-cn.com/problems/find-lucky-integer-in-an-array)|Easy|||||||||||
|[1395](https://leetcode-cn.com/problems/count-number-of-teams)|Medium|||||||||||
|[1396](https://leetcode-cn.com/problems/design-underground-system)|Medium|||||||||||
|[1397](https://leetcode-cn.com/problems/find-all-good-strings)|Hard|||||||||||
|[1413](https://leetcode-cn.com/problems/minimum-value-to-get-positive-step-by-step-sum)|Easy|||||||||||
|[1414](https://leetcode-cn.com/problems/find-the-minimum-number-of-fibonacci-numbers-whose-sum-is-k)|Medium|||||||||||
|[1415](https://leetcode-cn.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n)|Medium|||||||||||
|[1416](https://leetcode-cn.com/problems/restore-the-array)|Hard|||||||||||
|[1403](https://leetcode-cn.com/problems/minimum-subsequence-in-non-increasing-order)|Easy|||||||||||
|[1404](https://leetcode-cn.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one)|Medium|||||||||||
|[1406](https://leetcode-cn.com/problems/stone-game-iii)|Hard|||||||||||
|[1408](https://leetcode-cn.com/problems/string-matching-in-an-array)|Easy|||||||||||
|[1409](https://leetcode-cn.com/problems/queries-on-a-permutation-with-key)|Medium|||||||||||
|[1410](https://leetcode-cn.com/problems/html-entity-parser)|Medium|||||||||||
|[1411](https://leetcode-cn.com/problems/number-of-ways-to-paint-n-3-grid)|Hard|||||||||||
|[1431](https://leetcode-cn.com/problems/kids-with-the-greatest-number-of-candies)|Easy|||||||||||
|[1432](https://leetcode-cn.com/problems/max-difference-you-can-get-from-changing-an-integer)|Medium|||||||||||
|[1433](https://leetcode-cn.com/problems/check-if-a-string-can-break-another-string)|Medium|||||||||||
|[1434](https://leetcode-cn.com/problems/number-of-ways-to-wear-different-hats-to-each-other)|Hard|||||||||||
|[1417](https://leetcode-cn.com/problems/reformat-the-string)|Easy|||||||||||
|[1418](https://leetcode-cn.com/problems/display-table-of-food-orders-in-a-restaurant)|Medium|||||||||||
|[1419](https://leetcode-cn.com/problems/minimum-number-of-frogs-croaking)|Medium|||||||||||
|[1420](https://leetcode-cn.com/problems/build-array-where-you-can-find-the-maximum-exactly-k-comparisons)|Hard|||||||||||
|[1422](https://leetcode-cn.com/problems/maximum-score-after-splitting-a-string)|Easy|||||||||||
|[1423](https://leetcode-cn.com/problems/maximum-points-you-can-obtain-from-cards)|Medium|||||||||||
|[1424](https://leetcode-cn.com/problems/diagonal-traverse-ii)|Medium|||||||||||
|[1446](https://leetcode-cn.com/problems/consecutive-characters)|Easy|||||||||||
|[1447](https://leetcode-cn.com/problems/simplified-fractions)|Medium|||||||||||
|[1448](https://leetcode-cn.com/problems/count-good-nodes-in-binary-tree)|Medium|||||||||||
|[1449](https://leetcode-cn.com/problems/form-largest-integer-with-digits-that-add-up-to-target)|Hard|||||||||||
|[1436](https://leetcode-cn.com/problems/destination-city)|Easy|||||||||||
|[1437](https://leetcode-cn.com/problems/check-if-all-1s-are-at-least-length-k-places-away)|Easy|||||||||||
|[1438](https://leetcode-cn.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit)|Medium|||||||||||
|[1439](https://leetcode-cn.com/problems/find-the-kth-smallest-sum-of-a-matrix-with-sorted-rows)|Hard|||||||||||
|[1441](https://leetcode-cn.com/problems/build-an-array-with-stack-operations)|Easy|||||||||||
|[1442](https://leetcode-cn.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor)|Medium|||||||||||
|[1443](https://leetcode-cn.com/problems/minimum-time-to-collect-all-apples-in-a-tree)|Medium|||||||||||
|[1444](https://leetcode-cn.com/problems/number-of-ways-of-cutting-a-pizza)|Hard|||||||||||
|[1460](https://leetcode-cn.com/problems/make-two-arrays-equal-by-reversing-sub-arrays)|Easy|||||||||||
|[1461](https://leetcode-cn.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k)|Medium|||||||||||
|[1462](https://leetcode-cn.com/problems/course-schedule-iv)|Medium|||||||||||
|[1463](https://leetcode-cn.com/problems/cherry-pickup-ii)|Hard|||||||||||
|[1450](https://leetcode-cn.com/problems/number-of-students-doing-homework-at-a-given-time)|Easy|||||||||||
|[1451](https://leetcode-cn.com/problems/rearrange-words-in-a-sentence)|Medium|||||||||||
|[1452](https://leetcode-cn.com/problems/people-whose-list-of-favorite-companies-is-not-a-subset-of-another-list)|Medium|||||||||||
|[1453](https://leetcode-cn.com/problems/maximum-number-of-darts-inside-of-a-circular-dartboard)|Hard|||||||||||
|[1455](https://leetcode-cn.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence)|Easy|||||||||||
|[1456](https://leetcode-cn.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length)|Medium|||||||||||
|[1457](https://leetcode-cn.com/problems/pseudo-palindromic-paths-in-a-binary-tree)|Medium|||||||||||
|[1458](https://leetcode-cn.com/problems/max-dot-product-of-two-subsequences)|Hard|||||||||||
|[1475](https://leetcode-cn.com/problems/final-prices-with-a-special-discount-in-a-shop)|Easy|||||||||||
|[1478](https://leetcode-cn.com/problems/allocate-mailboxes)|Hard|||||||||||
|[1476](https://leetcode-cn.com/problems/subrectangle-queries)|Medium|||||||||||
|[1477](https://leetcode-cn.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum)|Medium|||||||||||
|[1464](https://leetcode-cn.com/problems/maximum-product-of-two-elements-in-an-array)|Easy|||||||||||
|[1465](https://leetcode-cn.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts)|Medium|||||||||||
|[1466](https://leetcode-cn.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero)|Medium|||||||||||
|[1467](https://leetcode-cn.com/problems/probability-of-a-two-boxes-having-the-same-number-of-distinct-balls)|Hard|||||||||||
|[1470](https://leetcode-cn.com/problems/shuffle-the-array)|Easy|||||||||||
|[1471](https://leetcode-cn.com/problems/the-k-strongest-values-in-an-array)|Medium|||||||||||
|[1472](https://leetcode-cn.com/problems/design-browser-history)|Medium|||||||||||
|[1473](https://leetcode-cn.com/problems/paint-house-iii)|Hard|||||||||||
|[1491](https://leetcode-cn.com/problems/average-salary-excluding-the-minimum-and-maximum-salary)|Easy|||||||||||
|[1492](https://leetcode-cn.com/problems/the-kth-factor-of-n)|Medium|||||||||||
|[1493](https://leetcode-cn.com/problems/longest-subarray-of-1s-after-deleting-one-element)|Medium|||||||||||
|[1494](https://leetcode-cn.com/problems/parallel-courses-ii)|Hard|||||||||||
|[1480](https://leetcode-cn.com/problems/running-sum-of-1d-array)|Easy|||||||||||
|[1481](https://leetcode-cn.com/problems/least-number-of-unique-integers-after-k-removals)|Medium|||||||||||
|[1482](https://leetcode-cn.com/problems/minimum-number-of-days-to-make-m-bouquets)|Medium|||||||||||
|[1469](https://leetcode-cn.com/problems/find-all-the-lonely-nodes)|Easy|||||||||||
|[1486](https://leetcode-cn.com/problems/xor-operation-in-an-array)|Easy|||||||||||
|[1487](https://leetcode-cn.com/problems/making-file-names-unique)|Medium|||||||||||
|[1488](https://leetcode-cn.com/problems/avoid-flood-in-the-city)|Medium|||||||||||
|[1489](https://leetcode-cn.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree)|Hard|||||||||||
|[1508](https://leetcode-cn.com/problems/range-sum-of-sorted-subarray-sums)|Medium|||||||||||
|[1509](https://leetcode-cn.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves)|Medium|||||||||||
|[1510](https://leetcode-cn.com/problems/stone-game-iv)|Hard|||||||||||
|[1474](https://leetcode-cn.com/problems/delete-n-nodes-after-m-nodes-of-a-linked-list)|Easy|||||||||||
|[1496](https://leetcode-cn.com/problems/path-crossing)|Easy|||||||||||
|[1497](https://leetcode-cn.com/problems/check-if-array-pairs-are-divisible-by-k)|Medium|||||||||||
|[1498](https://leetcode-cn.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition)|Medium|||||||||||
|[1499](https://leetcode-cn.com/problems/max-value-of-equation)|Hard|||||||||||
|[1484](https://leetcode-cn.com/problems/clone-binary-tree-with-random-pointer)|Medium|||||||||||
|[1502](https://leetcode-cn.com/problems/can-make-arithmetic-progression-from-sequence)|Easy|||||||||||
|[1503](https://leetcode-cn.com/problems/last-moment-before-all-ants-fall-out-of-a-plank)|Medium|||||||||||
|[1504](https://leetcode-cn.com/problems/count-submatrices-with-all-ones)|Medium|||||||||||
|[1505](https://leetcode-cn.com/problems/minimum-possible-integer-after-at-most-k-adjacent-swaps-on-digits)|Hard|||||||||||
|[1523](https://leetcode-cn.com/problems/count-odd-numbers-in-an-interval-range)|Easy|||||||||||
|[1524](https://leetcode-cn.com/problems/number-of-sub-arrays-with-odd-sum)|Medium|||||||||||
|[1525](https://leetcode-cn.com/problems/number-of-good-ways-to-split-a-string)|Medium|||||||||||
|[1526](https://leetcode-cn.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array)|Hard|||||||||||
|[1490](https://leetcode-cn.com/problems/clone-n-ary-tree)|Medium|||||||||||
|[1512](https://leetcode-cn.com/problems/number-of-good-pairs)|Easy|||||||||||
|[1513](https://leetcode-cn.com/problems/number-of-substrings-with-only-1s)|Medium|||||||||||
|[1531](https://leetcode-cn.com/problems/string-compression-ii)|Hard|||||||||||
|[1515](https://leetcode-cn.com/problems/best-position-for-a-service-centre)|Hard|||||||||||
|[1500](https://leetcode-cn.com/problems/design-a-file-sharing-system)|Medium|||||||||||
|[1518](https://leetcode-cn.com/problems/water-bottles)|Easy|||||||||||
|[1519](https://leetcode-cn.com/problems/number-of-nodes-in-the-sub-tree-with-the-same-label)|Medium|||||||||||
|[1520](https://leetcode-cn.com/problems/maximum-number-of-non-overlapping-substrings)|Hard|||||||||||
|[1521](https://leetcode-cn.com/problems/find-a-value-of-a-mysterious-function-closest-to-target)|Hard|||||||||||
|[1539](https://leetcode-cn.com/problems/kth-missing-positive-number)|Easy|||||||||||
|[1540](https://leetcode-cn.com/problems/can-convert-string-in-k-moves)|Medium|||||||||||
|[1541](https://leetcode-cn.com/problems/minimum-insertions-to-balance-a-parentheses-string)|Medium|||||||||||
|[1546](https://leetcode-cn.com/problems/maximum-number-of-non-overlapping-subarrays-with-sum-equals-target)|Medium|||||||||||
|[1506](https://leetcode-cn.com/problems/find-root-of-n-ary-tree)|Medium|||||||||||
|[1528](https://leetcode-cn.com/problems/shuffle-string)|Easy|||||||||||
|[1529](https://leetcode-cn.com/problems/bulb-switcher-iv)|Medium|||||||||||
|[1530](https://leetcode-cn.com/problems/number-of-good-leaf-nodes-pairs)|Medium|||||||||||
|[1516](https://leetcode-cn.com/problems/move-sub-tree-of-n-ary-tree)|Hard|||||||||||
|[1534](https://leetcode-cn.com/problems/count-good-triplets)|Easy|||||||||||
|[1535](https://leetcode-cn.com/problems/find-the-winner-of-an-array-game)|Medium|||||||||||
|[1536](https://leetcode-cn.com/problems/minimum-swaps-to-arrange-a-binary-grid)|Medium|||||||||||
|[1537](https://leetcode-cn.com/problems/get-the-maximum-score)|Hard|||||||||||
|[1556](https://leetcode-cn.com/problems/thousand-separator)|Easy|||||||||||
|[1557](https://leetcode-cn.com/problems/minimum-number-of-vertices-to-reach-all-nodes)|Medium|||||||||||
|[1558](https://leetcode-cn.com/problems/minimum-numbers-of-function-calls-to-make-target-array)|Medium|||||||||||
|[1559](https://leetcode-cn.com/problems/detect-cycles-in-2d-grid)|Hard|||||||||||
|[1522](https://leetcode-cn.com/problems/diameter-of-n-ary-tree)|Medium|||||||||||
|[1544](https://leetcode-cn.com/problems/make-the-string-great)|Easy|||||||||||
|[1545](https://leetcode-cn.com/problems/find-kth-bit-in-nth-binary-string)|Medium|||||||||||
|[1542](https://leetcode-cn.com/problems/find-longest-awesome-substring)|Hard|||||||||||
|[1547](https://leetcode-cn.com/problems/minimum-cost-to-cut-a-stick)|Hard|||||||||||
|[1533](https://leetcode-cn.com/problems/find-the-index-of-the-large-integer)|Medium|||||||||||
|[1551](https://leetcode-cn.com/problems/minimum-operations-to-make-array-equal)|Medium|||||||||||
|[1552](https://leetcode-cn.com/problems/magnetic-force-between-two-balls)|Medium|||||||||||
|[1553](https://leetcode-cn.com/problems/minimum-number-of-days-to-eat-n-oranges)|Hard|||||||||||
|[1572](https://leetcode-cn.com/problems/matrix-diagonal-sum)|Easy|||||||||||
|[1573](https://leetcode-cn.com/problems/number-of-ways-to-split-a-string)|Medium|||||||||||
|[1574](https://leetcode-cn.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted)|Medium|||||||||||
|[1575](https://leetcode-cn.com/problems/count-all-possible-routes)|Hard|||||||||||
|[1538](https://leetcode-cn.com/problems/guess-the-majority-in-a-hidden-array)|Medium|||||||||||
|[1560](https://leetcode-cn.com/problems/most-visited-sector-in-a-circular-track)|Easy|||||||||||
|[1561](https://leetcode-cn.com/problems/maximum-number-of-coins-you-can-get)|Medium|||||||||||
|[1562](https://leetcode-cn.com/problems/find-latest-group-of-size-m)|Medium|||||||||||
|[1563](https://leetcode-cn.com/problems/stone-game-v)|Hard|||||||||||
|[1548](https://leetcode-cn.com/problems/the-most-similar-path-in-a-graph)|Hard|||||||||||
|[1566](https://leetcode-cn.com/problems/detect-pattern-of-length-m-repeated-k-or-more-times)|Easy|||||||||||
|[1567](https://leetcode-cn.com/problems/maximum-length-of-subarray-with-positive-product)|Medium|||||||||||
|[1568](https://leetcode-cn.com/problems/minimum-number-of-days-to-disconnect-island)|Hard|||||||||||
|[1569](https://leetcode-cn.com/problems/number-of-ways-to-reorder-array-to-get-same-bst)|Hard|||||||||||
|[1588](https://leetcode-cn.com/problems/sum-of-all-odd-length-subarrays)|Easy|||||||||||
|[1590](https://leetcode-cn.com/problems/make-sum-divisible-by-p)|Medium|||||||||||
|[1589](https://leetcode-cn.com/problems/maximum-sum-obtained-of-any-permutation)|Medium|||||||||||
|[1591](https://leetcode-cn.com/problems/strange-printer-ii)|Hard|||||||||||
|[1554](https://leetcode-cn.com/problems/strings-differ-by-one-character)|Medium|||||||||||
|[1576](https://leetcode-cn.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters)|Easy|||||||||||
|[1577](https://leetcode-cn.com/problems/number-of-ways-where-square-of-number-is-equal-to-product-of-two-numbers)|Medium|||||||||||
|[1578](https://leetcode-cn.com/problems/minimum-deletion-cost-to-avoid-repeating-letters)|Medium|||||||||||
|[1579](https://leetcode-cn.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable)|Hard|||||||||||
|[1564](https://leetcode-cn.com/problems/put-boxes-into-the-warehouse-i)|Medium|||||||||||
|[1582](https://leetcode-cn.com/problems/special-positions-in-a-binary-matrix)|Easy|||||||||||
|[1583](https://leetcode-cn.com/problems/count-unhappy-friends)|Medium|||||||||||
|[1584](https://leetcode-cn.com/problems/min-cost-to-connect-all-points)|Medium|||||||||||
|[1585](https://leetcode-cn.com/problems/check-if-string-is-transformable-with-substring-sort-operations)|Hard|||||||||||
|[1603](https://leetcode-cn.com/problems/design-parking-system)|Easy|||||||||||
|[1604](https://leetcode-cn.com/problems/alert-using-same-key-card-three-or-more-times-in-a-one-hour-period)|Medium|||||||||||
|[1606](https://leetcode-cn.com/problems/find-servers-that-handled-most-number-of-requests)|Hard|||||||||||
|[1605](https://leetcode-cn.com/problems/find-valid-matrix-given-row-and-column-sums)|Medium|||||||||||
|[1570](https://leetcode-cn.com/problems/dot-product-of-two-sparse-vectors)|Medium|||||||||||
|[1592](https://leetcode-cn.com/problems/rearrange-spaces-between-words)|Easy|||||||||||
|[1593](https://leetcode-cn.com/problems/split-a-string-into-the-max-number-of-unique-substrings)|Medium|||||||||||
|[1594](https://leetcode-cn.com/problems/maximum-non-negative-product-in-a-matrix)|Medium|||||||||||
|[1595](https://leetcode-cn.com/problems/minimum-cost-to-connect-two-groups-of-points)|Hard|||||||||||
|[1580](https://leetcode-cn.com/problems/put-boxes-into-the-warehouse-ii)|Medium|||||||||||
|[1598](https://leetcode-cn.com/problems/crawler-log-folder)|Easy|||||||||||
|[1599](https://leetcode-cn.com/problems/maximum-profit-of-operating-a-centennial-wheel)|Medium|||||||||||
|[1600](https://leetcode-cn.com/problems/throne-inheritance)|Medium|||||||||||
|[1601](https://leetcode-cn.com/problems/maximum-number-of-achievable-transfer-requests)|Hard|||||||||||
|[1621](https://leetcode-cn.com/problems/number-of-sets-of-k-non-overlapping-line-segments)|Medium|||||||||||
|[1620](https://leetcode-cn.com/problems/coordinate-with-maximum-network-quality)|Medium|||||||||||
|[1728](https://leetcode-cn.com/problems/cat-and-mouse-ii)|Hard|||||||||||
|[1622](https://leetcode-cn.com/problems/fancy-sequence)|Hard|||||||||||
|[1586](https://leetcode-cn.com/problems/binary-search-tree-iterator-ii)|Medium|||||||||||
|[1608](https://leetcode-cn.com/problems/special-array-with-x-elements-greater-than-or-equal-x)|Easy|||||||||||
|[1609](https://leetcode-cn.com/problems/even-odd-tree)|Medium|||||||||||
|[1611](https://leetcode-cn.com/problems/minimum-one-bit-operations-to-make-integers-zero)|Hard|||||||||||
|[1610](https://leetcode-cn.com/problems/maximum-number-of-visible-points)|Hard|||||||||||
|[1597](https://leetcode-cn.com/problems/build-binary-expression-tree-from-infix-expression)|Hard|||||||||||
|[1614](https://leetcode-cn.com/problems/maximum-nesting-depth-of-the-parentheses)|Easy|||||||||||
|[1615](https://leetcode-cn.com/problems/maximal-network-rank)|Medium|||||||||||
|[1616](https://leetcode-cn.com/problems/split-two-strings-to-make-palindrome)|Medium|||||||||||
|[1617](https://leetcode-cn.com/problems/count-subtrees-with-max-distance-between-cities)|Hard|||||||||||
|[1636](https://leetcode-cn.com/problems/sort-array-by-increasing-frequency)|Easy|||||||||||
|[1637](https://leetcode-cn.com/problems/widest-vertical-area-between-two-points-containing-no-points)|Medium|||||||||||
|[1638](https://leetcode-cn.com/problems/count-substrings-that-differ-by-one-character)|Medium|||||||||||
|[1639](https://leetcode-cn.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary)|Hard|||||||||||
|[1602](https://leetcode-cn.com/problems/find-nearest-right-node-in-binary-tree)|Medium|||||||||||
|[1624](https://leetcode-cn.com/problems/largest-substring-between-two-equal-characters)|Easy|||||||||||
|[1625](https://leetcode-cn.com/problems/lexicographically-smallest-string-after-applying-operations)|Medium|||||||||||
|[1626](https://leetcode-cn.com/problems/best-team-with-no-conflicts)|Medium|||||||||||
|[1612](https://leetcode-cn.com/problems/check-if-two-expression-trees-are-equivalent)|Medium|||||||||||
|[1629](https://leetcode-cn.com/problems/slowest-key)|Easy|||||||||||
|[1630](https://leetcode-cn.com/problems/arithmetic-subarrays)|Medium|||||||||||
|[1631](https://leetcode-cn.com/problems/path-with-minimum-effort)|Medium|||||||||||
|[1652](https://leetcode-cn.com/problems/defuse-the-bomb)|Easy|||||||||||
|[1653](https://leetcode-cn.com/problems/minimum-deletions-to-make-string-balanced)|Medium|||||||||||
|[1654](https://leetcode-cn.com/problems/minimum-jumps-to-reach-home)|Medium|||||||||||
|[1655](https://leetcode-cn.com/problems/distribute-repeating-integers)|Hard|||||||||||
|[1640](https://leetcode-cn.com/problems/check-array-formation-through-concatenation)|Easy|||||||||||
|[1641](https://leetcode-cn.com/problems/count-sorted-vowel-strings)|Medium|||||||||||
|[1642](https://leetcode-cn.com/problems/furthest-building-you-can-reach)|Medium|||||||||||
|[1668](https://leetcode-cn.com/problems/maximum-repeating-substring)|Easy|||||||||||
|[1669](https://leetcode-cn.com/problems/merge-in-between-linked-lists)|Medium|||||||||||
|[1671](https://leetcode-cn.com/problems/minimum-number-of-removals-to-make-mountain-array)|Hard|||||||||||
|[1670](https://leetcode-cn.com/problems/design-front-middle-back-queue)|Medium|||||||||||
|[1628](https://leetcode-cn.com/problems/design-an-expression-tree-with-evaluate-function)|Medium|||||||||||
|[1646](https://leetcode-cn.com/problems/get-maximum-in-generated-array)|Easy|||||||||||
|[1647](https://leetcode-cn.com/problems/minimum-deletions-to-make-character-frequencies-unique)|Medium|||||||||||
|[1648](https://leetcode-cn.com/problems/sell-diminishing-valued-colored-balls)|Medium|||||||||||
|[1649](https://leetcode-cn.com/problems/create-sorted-array-through-instructions)|Hard|||||||||||
|[1634](https://leetcode-cn.com/problems/add-two-polynomials-represented-as-linked-lists)|Medium|||||||||||
|[1656](https://leetcode-cn.com/problems/design-an-ordered-stream)|Easy|||||||||||
|[1658](https://leetcode-cn.com/problems/minimum-operations-to-reduce-x-to-zero)|Medium|||||||||||
|[1657](https://leetcode-cn.com/problems/determine-if-two-strings-are-close)|Medium|||||||||||
|[1659](https://leetcode-cn.com/problems/maximize-grid-happiness)|Hard|||||||||||
|[1644](https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree-ii)|Medium|||||||||||
|[1662](https://leetcode-cn.com/problems/check-if-two-string-arrays-are-equivalent)|Easy|||||||||||
|[1663](https://leetcode-cn.com/problems/smallest-string-with-a-given-numeric-value)|Medium|||||||||||
|[1664](https://leetcode-cn.com/problems/ways-to-make-a-fair-array)|Medium|||||||||||
|[1665](https://leetcode-cn.com/problems/minimum-initial-energy-to-finish-tasks)|Hard|||||||||||
|[1684](https://leetcode-cn.com/problems/count-the-number-of-consistent-strings)|Easy|||||||||||
|[1685](https://leetcode-cn.com/problems/sum-of-absolute-differences-in-a-sorted-array)|Medium|||||||||||
|[1686](https://leetcode-cn.com/problems/stone-game-vi)|Medium|||||||||||
|[1687](https://leetcode-cn.com/problems/delivering-boxes-from-storage-to-ports)|Hard|||||||||||
|[1650](https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree-iii)|Medium|||||||||||
|[1672](https://leetcode-cn.com/problems/richest-customer-wealth)|Easy|||||||||||
|[1673](https://leetcode-cn.com/problems/find-the-most-competitive-subsequence)|Medium|||||||||||
|[1674](https://leetcode-cn.com/problems/minimum-moves-to-make-array-complementary)|Medium|||||||||||
|[1675](https://leetcode-cn.com/problems/minimize-deviation-in-array)|Hard|||||||||||
|[1660](https://leetcode-cn.com/problems/correct-a-binary-tree)|Medium|||||||||||
|[1678](https://leetcode-cn.com/problems/goal-parser-interpretation)|Easy|||||||||||
|[1679](https://leetcode-cn.com/problems/max-number-of-k-sum-pairs)|Medium|||||||||||
|[1681](https://leetcode-cn.com/problems/minimum-incompatibility)|Hard|||||||||||
|[1680](https://leetcode-cn.com/problems/concatenation-of-consecutive-binary-numbers)|Medium|||||||||||
|[1700](https://leetcode-cn.com/problems/number-of-students-unable-to-eat-lunch)|Easy|||||||||||
|[1701](https://leetcode-cn.com/problems/average-waiting-time)|Medium|||||||||||
|[1702](https://leetcode-cn.com/problems/maximum-binary-string-after-change)|Medium|||||||||||
|[1703](https://leetcode-cn.com/problems/minimum-adjacent-swaps-for-k-consecutive-ones)|Hard|||||||||||
|[1688](https://leetcode-cn.com/problems/count-of-matches-in-tournament)|Easy|||||||||||
|[1689](https://leetcode-cn.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers)|Medium|||||||||||
|[1690](https://leetcode-cn.com/problems/stone-game-vii)|Medium|||||||||||
|[1714](https://leetcode-cn.com/problems/sum-of-special-evenly-spaced-elements-in-array)|Hard|||||||||||
|[1666](https://leetcode-cn.com/problems/change-the-root-of-a-binary-tree)|Medium|||||||||||
|[1694](https://leetcode-cn.com/problems/reformat-phone-number)|Easy|||||||||||
|[1695](https://leetcode-cn.com/problems/maximum-erasure-value)|Medium|||||||||||
|[1696](https://leetcode-cn.com/problems/jump-game-vi)|Medium|||||||||||
|[1697](https://leetcode-cn.com/problems/checking-existence-of-edge-length-limited-paths)|Hard|||||||||||
|[1676](https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree-iv)|Medium|||||||||||
|[1716](https://leetcode-cn.com/problems/calculate-money-in-leetcode-bank)|Easy|||||||||||
|[1717](https://leetcode-cn.com/problems/maximum-score-from-removing-substrings)|Medium|||||||||||
|[1718](https://leetcode-cn.com/problems/construct-the-lexicographically-largest-valid-sequence)|Medium|||||||||||
|[1719](https://leetcode-cn.com/problems/number-of-ways-to-reconstruct-a-tree)|Hard|||||||||||
|[1682](https://leetcode-cn.com/problems/longest-palindromic-subsequence-ii)|Medium|||||||||||
|[1704](https://leetcode-cn.com/problems/determine-if-string-halves-are-alike)|Easy|||||||||||
|[1705](https://leetcode-cn.com/problems/maximum-number-of-eaten-apples)|Medium|||||||||||
|[1723](https://leetcode-cn.com/problems/find-minimum-time-to-finish-all-jobs)|Hard|||||||||||
|[1707](https://leetcode-cn.com/problems/maximum-xor-with-an-element-from-array)|Hard|||||||||||
|[1692](https://leetcode-cn.com/problems/count-ways-to-distribute-candies)|Hard|||||||||||
|[1710](https://leetcode-cn.com/problems/maximum-units-on-a-truck)|Easy|||||||||||
|[1711](https://leetcode-cn.com/problems/count-good-meals)|Medium|||||||||||
|[1712](https://leetcode-cn.com/problems/ways-to-split-array-into-three-subarrays)|Medium|||||||||||
|[1713](https://leetcode-cn.com/problems/minimum-operations-to-make-a-subsequence)|Hard|||||||||||
|[1732](https://leetcode-cn.com/problems/find-the-highest-altitude)|Easy|||||||||||
|[1733](https://leetcode-cn.com/problems/minimum-number-of-people-to-teach)|Medium|||||||||||
|[1734](https://leetcode-cn.com/problems/decode-xored-permutation)|Medium|||||||||||
|[1735](https://leetcode-cn.com/problems/count-ways-to-make-array-with-product)|Hard|||||||||||
|[1698](https://leetcode-cn.com/problems/number-of-distinct-substrings-in-a-string)|Medium|||||||||||
|[1720](https://leetcode-cn.com/problems/decode-xored-array)|Easy|||||||||||
|[1722](https://leetcode-cn.com/problems/minimize-hamming-distance-after-swap-operations)|Medium|||||||||||
|[1725](https://leetcode-cn.com/problems/number-of-rectangles-that-can-form-the-largest-square)|Easy|||||||||||
|[1742](https://leetcode-cn.com/problems/maximum-number-of-balls-in-a-box)|Easy|||||||||||
|[1727](https://leetcode-cn.com/problems/largest-submatrix-with-rearrangements)|Medium|||||||||||
|[1708](https://leetcode-cn.com/problems/largest-subarray-length-k)|Easy|||||||||||
|[1748](https://leetcode-cn.com/problems/sum-of-unique-elements)|Easy|||||||||||
|[1749](https://leetcode-cn.com/problems/maximum-absolute-sum-of-any-subarray)|Medium|||||||||||
|[1750](https://leetcode-cn.com/problems/minimum-length-of-string-after-deleting-similar-ends)|Medium|||||||||||
|[1751](https://leetcode-cn.com/problems/maximum-number-of-events-that-can-be-attended-ii)|Hard|||||||||||
|[1736](https://leetcode-cn.com/problems/latest-time-by-replacing-hidden-digits)|Easy|||||||||||
|[1737](https://leetcode-cn.com/problems/change-minimum-characters-to-satisfy-one-of-three-conditions)|Medium|||||||||||
|[1738](https://leetcode-cn.com/problems/find-kth-largest-xor-coordinate-value)|Medium|||||||||||
|[1739](https://leetcode-cn.com/problems/building-boxes)|Hard|||||||||||
|[1724](https://leetcode-cn.com/problems/checking-existence-of-edge-length-limited-paths-ii)|Hard|||||||||||
|[1743](https://leetcode-cn.com/problems/restore-the-array-from-adjacent-pairs)|Medium|||||||||||
|[1745](https://leetcode-cn.com/problems/palindrome-partitioning-iv)|Hard|||||||||||
|[1744](https://leetcode-cn.com/problems/can-you-eat-your-favorite-candy-on-your-favorite-day)|Medium|||||||||||
|[1763](https://leetcode-cn.com/problems/longest-nice-substring)|Easy|||||||||||
|[1764](https://leetcode-cn.com/problems/form-array-by-concatenating-subarrays-of-another-array)|Medium|||||||||||
|[1766](https://leetcode-cn.com/problems/tree-of-coprimes)|Hard|||||||||||
|[1765](https://leetcode-cn.com/problems/map-of-highest-peak)|Medium|||||||||||
|[1752](https://leetcode-cn.com/problems/check-if-array-is-sorted-and-rotated)|Easy|||||||||||
|[1753](https://leetcode-cn.com/problems/maximum-score-from-removing-stones)|Medium|||||||||||
|[1754](https://leetcode-cn.com/problems/largest-merge-of-two-strings)|Medium|||||||||||
|[1755](https://leetcode-cn.com/problems/closest-subsequence-sum)|Hard|||||||||||
|[1740](https://leetcode-cn.com/problems/find-distance-in-a-binary-tree)|Medium|||||||||||
|[1758](https://leetcode-cn.com/problems/minimum-changes-to-make-alternating-binary-string)|Easy|||||||||||
|[1759](https://leetcode-cn.com/problems/count-number-of-homogenous-substrings)|Medium|||||||||||
|[1760](https://leetcode-cn.com/problems/minimum-limit-of-balls-in-a-bag)|Medium|||||||||||
|[1761](https://leetcode-cn.com/problems/minimum-degree-of-a-connected-trio-in-a-graph)|Hard|||||||||||
|[1779](https://leetcode-cn.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate)|Easy|||||||||||
|[1780](https://leetcode-cn.com/problems/check-if-number-is-a-sum-of-powers-of-three)|Medium|||||||||||
|[1781](https://leetcode-cn.com/problems/sum-of-beauty-of-all-substrings)|Medium|||||||||||
|[1782](https://leetcode-cn.com/problems/count-pairs-of-nodes)|Hard|||||||||||
|[1746](https://leetcode-cn.com/problems/maximum-subarray-sum-after-one-operation)|Medium|||||||||||
|[1768](https://leetcode-cn.com/problems/merge-strings-alternately)|Easy|||||||||||
|[1769](https://leetcode-cn.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box)|Medium|||||||||||
|[1770](https://leetcode-cn.com/problems/maximum-score-from-performing-multiplication-operations)|Medium|||||||||||
|[1771](https://leetcode-cn.com/problems/maximize-palindrome-length-from-subsequences)|Hard|||||||||||
|[1773](https://leetcode-cn.com/problems/count-items-matching-a-rule)|Easy|||||||||||
|[1774](https://leetcode-cn.com/problems/closest-dessert-cost)|Medium|||||||||||
|[1775](https://leetcode-cn.com/problems/equal-sum-arrays-with-minimum-number-of-operations)|Medium|||||||||||
|[1776](https://leetcode-cn.com/problems/car-fleet-ii)|Hard|||||||||||
|[1756](https://leetcode-cn.com/problems/design-most-recently-used-queue)|Medium|||||||||||
|[1796](https://leetcode-cn.com/problems/second-largest-digit-in-a-string)|Easy|||||||||||
|[1797](https://leetcode-cn.com/problems/design-authentication-manager)|Medium|||||||||||
|[1799](https://leetcode-cn.com/problems/maximize-score-after-n-operations)|Hard|||||||||||
|[1803](https://leetcode-cn.com/problems/count-pairs-with-xor-in-a-range)|Hard|||||||||||
|[1762](https://leetcode-cn.com/problems/buildings-with-an-ocean-view)|Medium|||||||||||
|[1784](https://leetcode-cn.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones)|Easy|||||||||||
|[1785](https://leetcode-cn.com/problems/minimum-elements-to-add-to-form-a-given-sum)|Medium|||||||||||
|[1786](https://leetcode-cn.com/problems/number-of-restricted-paths-from-first-to-last-node)|Medium|||||||||||
|[1787](https://leetcode-cn.com/problems/make-the-xor-of-all-segments-equal-to-zero)|Hard|||||||||||
|[1790](https://leetcode-cn.com/problems/check-if-one-string-swap-can-make-strings-equal)|Easy|||||||||||
|[1791](https://leetcode-cn.com/problems/find-center-of-star-graph)|Medium|||||||||||
|[1792](https://leetcode-cn.com/problems/maximum-average-pass-ratio)|Medium|||||||||||
|[1793](https://leetcode-cn.com/problems/maximum-score-of-a-good-subarray)|Hard|||||||||||
|[1772](https://leetcode-cn.com/problems/sort-features-by-popularity)|Medium|||||||||||
|[1800](https://leetcode-cn.com/problems/maximum-ascending-subarray-sum)|Easy|||||||||||
|[1801](https://leetcode-cn.com/problems/number-of-orders-in-the-backlog)|Medium|||||||||||
|[1802](https://leetcode-cn.com/problems/maximum-value-at-a-given-index-in-a-bounded-array)|Medium|||||||||||
|[1798](https://leetcode-cn.com/problems/maximum-number-of-consecutive-values-you-can-make)|Medium|||||||||||
|[1778](https://leetcode-cn.com/problems/shortest-path-in-a-hidden-grid)|Medium|||||||||||
|[1805](https://leetcode-cn.com/problems/number-of-different-integers-in-a-string)|Easy|||||||||||
|[1807](https://leetcode-cn.com/problems/evaluate-the-bracket-pairs-of-a-string)|Medium|||||||||||
|[1806](https://leetcode-cn.com/problems/minimum-number-of-operations-to-reinitialize-a-permutation)|Medium|||||||||||
|[1808](https://leetcode-cn.com/problems/maximize-number-of-nice-divisors)|Hard|||||||||||
|[1788](https://leetcode-cn.com/problems/maximize-the-beauty-of-the-garden)|Hard|||||||||||
|[1794](https://leetcode-cn.com/problems/count-pairs-of-equal-substrings-with-minimum-difference)|Medium|||||||||||
|[1804](https://leetcode-cn.com/problems/implement-trie-ii-prefix-tree)|Medium|||||||||||
|[1810](https://leetcode-cn.com/problems/minimum-path-cost-in-a-hidden-grid)|Medium|||||||||||
|[LCP 02](https://leetcode-cn.com/problems/deep-dark-fraction)|Easy|||||||||||
|[LCP 04](https://leetcode-cn.com/problems/broken-board-dominoes)|Hard|||||||||||
|[LCP 05](https://leetcode-cn.com/problems/coin-bonus)|Hard|||||||||||
|[LCP 03](https://leetcode-cn.com/problems/programmable-robot)|Medium|||||||||||
|[LCP 01](https://leetcode-cn.com/problems/guess-numbers)|Easy|||||||||||
|[LCP 06](https://leetcode-cn.com/problems/na-ying-bi)|Easy|||||||||||
|[LCP 08](https://leetcode-cn.com/problems/ju-qing-hong-fa-shi-jian)|Medium|||||||||||
|[LCP 23](https://leetcode-cn.com/problems/er94lq)|Medium|||||||||||
|[LCP 14](https://leetcode-cn.com/problems/qie-fen-shu-zu)|Hard|||||||||||
|[LCP 10](https://leetcode-cn.com/problems/er-cha-shu-ren-wu-diao-du)|Hard|||||||||||
|[LCP 07](https://leetcode-cn.com/problems/chuan-di-xin-xi)|Easy|||||||||||
|[LCP 16](https://leetcode-cn.com/problems/you-le-yuan-de-you-lan-ji-hua)|Hard|||||||||||
|[LCP 11](https://leetcode-cn.com/problems/qi-wang-ge-shu-tong-ji)|Easy|||||||||||
|[LCP 12](https://leetcode-cn.com/problems/xiao-zhang-shua-ti-ji-hua)|Medium|||||||||||
|[LCP 15](https://leetcode-cn.com/problems/you-le-yuan-de-mi-gong)|Hard|||||||||||
|[LCP 09](https://leetcode-cn.com/problems/zui-xiao-tiao-yue-ci-shu)|Hard|||||||||||
|[LCP 13](https://leetcode-cn.com/problems/xun-bao)|Hard|||||||||||
|[LCP 19](https://leetcode-cn.com/problems/UlBDOe)|Medium|||||||||||
|[LCP 24](https://leetcode-cn.com/problems/5TxKeK)|Hard|||||||||||
|[LCP 26](https://leetcode-cn.com/problems/hSRGyL)|Hard|||||||||||
|[LCP 20](https://leetcode-cn.com/problems/meChtZ)|Hard|||||||||||
|[LCP 21](https://leetcode-cn.com/problems/Za25hA)|Hard|||||||||||
|[LCP 25](https://leetcode-cn.com/problems/Uh984O)|Hard|||||||||||
|[LCP 17](https://leetcode-cn.com/problems/nGK0Fy)|Easy|||||||||||
|[LCP 22](https://leetcode-cn.com/problems/ccw6C7)|Easy|||||||||||
|[LCP 18](https://leetcode-cn.com/problems/2vYnGI)|Easy|||||||||||
|[LCP 27](https://leetcode-cn.com/problems/IQvJ9i)|Hard|||||||||||

</details>

<details>

  <summary>Database</summary>

|Index|Difficulty|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|[0175](https://leetcode-cn.com/problems/combine-two-tables)|Easy|||||||||[1](https://github.com/leet/leet/blob/main/questions/Database/0175.%20Combine%20Two%20Tables/sql1.sql)||
|[0176](https://leetcode-cn.com/problems/second-highest-salary)|Easy|||||||||||
|[0177](https://leetcode-cn.com/problems/nth-highest-salary)|Medium|||||||||||
|[0178](https://leetcode-cn.com/problems/rank-scores)|Medium|||||||||||
|[0180](https://leetcode-cn.com/problems/consecutive-numbers)|Medium|||||||||||
|[0181](https://leetcode-cn.com/problems/employees-earning-more-than-their-managers)|Easy|||||||||||
|[0182](https://leetcode-cn.com/problems/duplicate-emails)|Easy|||||||||||
|[0183](https://leetcode-cn.com/problems/customers-who-never-order)|Easy|||||||||||
|[0184](https://leetcode-cn.com/problems/department-highest-salary)|Medium|||||||||||
|[0185](https://leetcode-cn.com/problems/department-top-three-salaries)|Hard|||||||||||
|[0196](https://leetcode-cn.com/problems/delete-duplicate-emails)|Easy|||||||||||
|[0197](https://leetcode-cn.com/problems/rising-temperature)|Easy|||||||||||
|[0262](https://leetcode-cn.com/problems/trips-and-users)|Hard|||||||||||
|[0569](https://leetcode-cn.com/problems/median-employee-salary)|Hard|||||||||||
|[0570](https://leetcode-cn.com/problems/managers-with-at-least-5-direct-reports)|Medium|||||||||||
|[0571](https://leetcode-cn.com/problems/find-median-given-frequency-of-numbers)|Hard|||||||||||
|[0574](https://leetcode-cn.com/problems/winning-candidate)|Medium|||||||||||
|[0577](https://leetcode-cn.com/problems/employee-bonus)|Easy|||||||||||
|[0578](https://leetcode-cn.com/problems/get-highest-answer-rate-question)|Medium|||||||||||
|[0579](https://leetcode-cn.com/problems/find-cumulative-salary-of-an-employee)|Hard|||||||||||
|[0580](https://leetcode-cn.com/problems/count-student-number-in-departments)|Medium|||||||||||
|[0584](https://leetcode-cn.com/problems/find-customer-referee)|Easy|||||||||||
|[0585](https://leetcode-cn.com/problems/investments-in-2016)|Medium|||||||||||
|[0586](https://leetcode-cn.com/problems/customer-placing-the-largest-number-of-orders)|Easy|||||||||||
|[0595](https://leetcode-cn.com/problems/big-countries)|Easy|||||||||||
|[0596](https://leetcode-cn.com/problems/classes-more-than-5-students)|Easy|||||||||||
|[0597](https://leetcode-cn.com/problems/friend-requests-i-overall-acceptance-rate)|Easy|||||||||||
|[0601](https://leetcode-cn.com/problems/human-traffic-of-stadium)|Hard|||||||||||
|[0602](https://leetcode-cn.com/problems/friend-requests-ii-who-has-the-most-friends)|Medium|||||||||||
|[0603](https://leetcode-cn.com/problems/consecutive-available-seats)|Easy|||||||||||
|[0607](https://leetcode-cn.com/problems/sales-person)|Easy|||||||||||
|[0608](https://leetcode-cn.com/problems/tree-node)|Medium|||||||||||
|[0610](https://leetcode-cn.com/problems/triangle-judgement)|Easy|||||||||||
|[0612](https://leetcode-cn.com/problems/shortest-distance-in-a-plane)|Medium|||||||||||
|[0613](https://leetcode-cn.com/problems/shortest-distance-in-a-line)|Easy|||||||||||
|[0614](https://leetcode-cn.com/problems/second-degree-follower)|Medium|||||||||||
|[0615](https://leetcode-cn.com/problems/average-salary-departments-vs-company)|Hard|||||||||||
|[0618](https://leetcode-cn.com/problems/students-report-by-geography)|Hard|||||||||||
|[0619](https://leetcode-cn.com/problems/biggest-single-number)|Easy|||||||||||
|[0620](https://leetcode-cn.com/problems/not-boring-movies)|Easy|||||||||||
|[0626](https://leetcode-cn.com/problems/exchange-seats)|Medium|||||||||||
|[0627](https://leetcode-cn.com/problems/swap-salary)|Easy|||||||||||
|[1045](https://leetcode-cn.com/problems/customers-who-bought-all-products)|Medium|||||||||||
|[1050](https://leetcode-cn.com/problems/actors-and-directors-who-cooperated-at-least-three-times)|Easy|||||||||||
|[1068](https://leetcode-cn.com/problems/product-sales-analysis-i)|Easy|||||||||||
|[1069](https://leetcode-cn.com/problems/product-sales-analysis-ii)|Easy|||||||||||
|[1070](https://leetcode-cn.com/problems/product-sales-analysis-iii)|Medium|||||||||||
|[1075](https://leetcode-cn.com/problems/project-employees-i)|Easy|||||||||||
|[1076](https://leetcode-cn.com/problems/project-employees-ii)|Easy|||||||||||
|[1077](https://leetcode-cn.com/problems/project-employees-iii)|Medium|||||||||||
|[1082](https://leetcode-cn.com/problems/sales-analysis-i)|Easy|||||||||||
|[1083](https://leetcode-cn.com/problems/sales-analysis-ii)|Easy|||||||||||
|[1084](https://leetcode-cn.com/problems/sales-analysis-iii)|Easy|||||||||||
|[0511](https://leetcode-cn.com/problems/game-play-analysis-i)|Easy|||||||||||
|[0512](https://leetcode-cn.com/problems/game-play-analysis-ii)|Easy|||||||||||
|[0534](https://leetcode-cn.com/problems/game-play-analysis-iii)|Medium|||||||||||
|[0550](https://leetcode-cn.com/problems/game-play-analysis-iv)|Medium|||||||||||
|[1097](https://leetcode-cn.com/problems/game-play-analysis-v)|Hard|||||||||||
|[1098](https://leetcode-cn.com/problems/unpopular-books)|Medium|||||||||||
|[1107](https://leetcode-cn.com/problems/new-users-daily-count)|Medium|||||||||||
|[1112](https://leetcode-cn.com/problems/highest-grade-for-each-student)|Medium|||||||||||
|[1113](https://leetcode-cn.com/problems/reported-posts)|Easy|||||||||||
|[1126](https://leetcode-cn.com/problems/active-businesses)|Medium|||||||||||
|[1127](https://leetcode-cn.com/problems/user-purchase-platform)|Hard|||||||||||
|[1132](https://leetcode-cn.com/problems/reported-posts-ii)|Medium|||||||||||
|[1141](https://leetcode-cn.com/problems/user-activity-for-the-past-30-days-i)|Easy|||||||||||
|[1142](https://leetcode-cn.com/problems/user-activity-for-the-past-30-days-ii)|Easy|||||||||||
|[1148](https://leetcode-cn.com/problems/article-views-i)|Easy|||||||||||
|[1149](https://leetcode-cn.com/problems/article-views-ii)|Medium|||||||||||
|[1158](https://leetcode-cn.com/problems/market-analysis-i)|Medium|||||||||||
|[1159](https://leetcode-cn.com/problems/market-analysis-ii)|Hard|||||||||||
|[1164](https://leetcode-cn.com/problems/product-price-at-a-given-date)|Medium|||||||||||
|[1173](https://leetcode-cn.com/problems/immediate-food-delivery-i)|Easy|||||||||||
|[1174](https://leetcode-cn.com/problems/immediate-food-delivery-ii)|Medium|||||||||||
|[1179](https://leetcode-cn.com/problems/reformat-department-table)|Easy|||||||||||
|[1193](https://leetcode-cn.com/problems/monthly-transactions-i)|Medium|||||||||||
|[1194](https://leetcode-cn.com/problems/tournament-winners)|Hard|||||||||||
|[1204](https://leetcode-cn.com/problems/last-person-to-fit-in-the-elevator)|Medium|||||||||||
|[1205](https://leetcode-cn.com/problems/monthly-transactions-ii)|Medium|||||||||||
|[1211](https://leetcode-cn.com/problems/queries-quality-and-percentage)|Easy|||||||||||
|[1212](https://leetcode-cn.com/problems/team-scores-in-football-tournament)|Medium|||||||||||
|[1225](https://leetcode-cn.com/problems/report-contiguous-dates)|Hard|||||||||||
|[1241](https://leetcode-cn.com/problems/number-of-comments-per-post)|Easy|||||||||||
|[1251](https://leetcode-cn.com/problems/average-selling-price)|Easy|||||||||||
|[1264](https://leetcode-cn.com/problems/page-recommendations)|Medium|||||||||||
|[1270](https://leetcode-cn.com/problems/all-people-report-to-the-given-manager)|Medium|||||||||||
|[1280](https://leetcode-cn.com/problems/students-and-examinations)|Easy|||||||||||
|[1285](https://leetcode-cn.com/problems/find-the-start-and-end-number-of-continuous-ranges)|Medium|||||||||||
|[1294](https://leetcode-cn.com/problems/weather-type-in-each-country)|Easy|||||||||||
|[1303](https://leetcode-cn.com/problems/find-the-team-size)|Easy|||||||||||
|[1308](https://leetcode-cn.com/problems/running-total-for-different-genders)|Medium|||||||||||
|[1321](https://leetcode-cn.com/problems/restaurant-growth)|Medium|||||||||||
|[1322](https://leetcode-cn.com/problems/ads-performance)|Easy|||||||||||
|[1327](https://leetcode-cn.com/problems/list-the-products-ordered-in-a-period)|Easy|||||||||||
|[1336](https://leetcode-cn.com/problems/number-of-transactions-per-visit)|Hard|||||||||||
|[1341](https://leetcode-cn.com/problems/movie-rating)|Medium|||||||||||
|[1350](https://leetcode-cn.com/problems/students-with-invalid-departments)|Easy|||||||||||
|[1355](https://leetcode-cn.com/problems/activity-participants)|Medium|||||||||||
|[1364](https://leetcode-cn.com/problems/number-of-trusted-contacts-of-a-customer)|Medium|||||||||||
|[1369](https://leetcode-cn.com/problems/get-the-second-most-recent-activity)|Hard|||||||||||
|[1378](https://leetcode-cn.com/problems/replace-employee-id-with-the-unique-identifier)|Easy|||||||||||
|[1384](https://leetcode-cn.com/problems/total-sales-amount-by-year)|Hard|||||||||||
|[1393](https://leetcode-cn.com/problems/capital-gainloss)|Medium|||||||||||
|[1398](https://leetcode-cn.com/problems/customers-who-bought-products-a-and-b-but-not-c)|Medium|||||||||||
|[1407](https://leetcode-cn.com/problems/top-travellers)|Easy|||||||||||
|[1412](https://leetcode-cn.com/problems/find-the-quiet-students-in-all-exams)|Hard|||||||||||
|[1421](https://leetcode-cn.com/problems/npv-queries)|Medium|||||||||||
|[1435](https://leetcode-cn.com/problems/create-a-session-bar-chart)|Easy|||||||||||
|[1440](https://leetcode-cn.com/problems/evaluate-boolean-expression)|Medium|||||||||||
|[1445](https://leetcode-cn.com/problems/apples-oranges)|Medium|||||||||||
|[1454](https://leetcode-cn.com/problems/active-users)|Medium|||||||||||
|[1459](https://leetcode-cn.com/problems/rectangles-area)|Medium|||||||||||
|[1468](https://leetcode-cn.com/problems/calculate-salaries)|Medium|||||||||||
|[1479](https://leetcode-cn.com/problems/sales-by-day-of-the-week)|Hard|||||||||||
|[1485](https://leetcode-cn.com/problems/group-sold-products-by-the-date)|Easy|||||||||||
|[1495](https://leetcode-cn.com/problems/friendly-movies-streamed-last-month)|Easy|||||||||||
|[1501](https://leetcode-cn.com/problems/countries-you-can-safely-invest-in)|Medium|||||||||||
|[1511](https://leetcode-cn.com/problems/customer-order-frequency)|Easy|||||||||||
|[1517](https://leetcode-cn.com/problems/find-users-with-valid-e-mails)|Easy|||||||||||
|[1527](https://leetcode-cn.com/problems/patients-with-a-condition)|Easy|||||||||||
|[1532](https://leetcode-cn.com/problems/the-most-recent-three-orders)|Medium|||||||||||
|[1543](https://leetcode-cn.com/problems/fix-product-name-format)|Easy|||||||||||
|[1549](https://leetcode-cn.com/problems/the-most-recent-orders-for-each-product)|Medium|||||||||||
|[1555](https://leetcode-cn.com/problems/bank-account-summary)|Medium|||||||||||
|[1565](https://leetcode-cn.com/problems/unique-orders-and-customers-per-month)|Easy|||||||||||
|[1571](https://leetcode-cn.com/problems/warehouse-manager)|Easy|||||||||||
|[1581](https://leetcode-cn.com/problems/customer-who-visited-but-did-not-make-any-transactions)|Easy|||||||||||
|[1587](https://leetcode-cn.com/problems/bank-account-summary-ii)|Easy|||||||||||
|[1596](https://leetcode-cn.com/problems/the-most-frequently-ordered-products-for-each-customer)|Medium|||||||||||
|[1607](https://leetcode-cn.com/problems/sellers-with-no-sales)|Easy|||||||||||
|[1613](https://leetcode-cn.com/problems/find-the-missing-ids)|Medium|||||||||||
|[1623](https://leetcode-cn.com/problems/all-valid-triplets-that-can-represent-a-country)|Easy|||||||||||
|[1633](https://leetcode-cn.com/problems/percentage-of-users-attended-a-contest)|Easy|||||||||||
|[1635](https://leetcode-cn.com/problems/hopper-company-queries-i)|Hard|||||||||||
|[1645](https://leetcode-cn.com/problems/hopper-company-queries-ii)|Hard|||||||||||
|[1651](https://leetcode-cn.com/problems/hopper-company-queries-iii)|Hard|||||||||||
|[1661](https://leetcode-cn.com/problems/average-time-of-process-per-machine)|Easy|||||||||||
|[1667](https://leetcode-cn.com/problems/fix-names-in-a-table)|Easy|||||||||||
|[1677](https://leetcode-cn.com/problems/products-worth-over-invoices)|Easy|||||||||||
|[1683](https://leetcode-cn.com/problems/invalid-tweets)|Easy|||||||||||
|[1693](https://leetcode-cn.com/problems/daily-leads-and-partners)|Easy|||||||||||
|[1699](https://leetcode-cn.com/problems/number-of-calls-between-two-persons)|Medium|||||||||||
|[1709](https://leetcode-cn.com/problems/biggest-window-between-visits)|Medium|||||||||||
|[1715](https://leetcode-cn.com/problems/count-apples-and-oranges)|Medium|||||||||||
|[1729](https://leetcode-cn.com/problems/find-followers-count)|Easy|||||||||||
|[1731](https://leetcode-cn.com/problems/the-number-of-employees-which-report-to-each-employee)|Easy|||||||||||
|[1741](https://leetcode-cn.com/problems/find-total-time-spent-by-each-employee)|Easy|||||||||||
|[1747](https://leetcode-cn.com/problems/leetflex-banned-accounts)|Medium|||||||||||
|[1757](https://leetcode-cn.com/problems/recyclable-and-low-fat-products)|Easy|||||||||||
|[1767](https://leetcode-cn.com/problems/find-the-subtasks-that-did-not-execute)|Hard|||||||||||
|[1777](https://leetcode-cn.com/problems/products-price-for-each-store)|Easy|||||||||||
|[1783](https://leetcode-cn.com/problems/grand-slam-titles)|Medium|||||||||||
|[1789](https://leetcode-cn.com/problems/primary-department-for-each-employee)|Easy|||||||||||
|[1795](https://leetcode-cn.com/problems/rearrange-products-table)|Easy|||||||||||
|[1809](https://leetcode-cn.com/problems/ad-free-sessions)|Easy|||||||||||

</details>

<details>

  <summary>Shell</summary>

|Index|Difficulty|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|[0192](https://leetcode-cn.com/problems/word-frequency)|Medium||||||||||[1](https://github.com/leet/leet/blob/main/questions/Shell/0192.%20Word%20Frequency/bash1.sh)|
|[0193](https://leetcode-cn.com/problems/valid-phone-numbers)|Easy||||||||||[1](https://github.com/leet/leet/blob/main/questions/Shell/0193.%20Valid%20Phone%20Numbers/bash1.sh) [2](https://github.com/leet/leet/blob/main/questions/Shell/0193.%20Valid%20Phone%20Numbers/bash2.sh)|
|[0194](https://leetcode-cn.com/problems/transpose-file)|Medium||||||||||[1](https://github.com/leet/leet/blob/main/questions/Shell/0194.%20Transpose%20File/bash1.sh)|
|[0195](https://leetcode-cn.com/problems/tenth-line)|Easy||||||||||[1](https://github.com/leet/leet/blob/main/questions/Shell/0195.%20Tenth%20Line/bash1.sh) [2](https://github.com/leet/leet/blob/main/questions/Shell/0195.%20Tenth%20Line/bash2.sh)|

</details>

<details>

  <summary>Concurrency</summary>

|Index|Difficulty|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|[1117](https://leetcode-cn.com/problems/building-h2o)|Medium|||||||||||
|[1115](https://leetcode-cn.com/problems/print-foobar-alternately)|Medium|||||||||||
|[1114](https://leetcode-cn.com/problems/print-in-order)|Easy|||||||||||
|[1188](https://leetcode-cn.com/problems/design-bounded-blocking-queue)|Medium|||||||||||
|[1116](https://leetcode-cn.com/problems/print-zero-even-odd)|Medium|||||||||||
|[1195](https://leetcode-cn.com/problems/fizz-buzz-multithreaded)|Medium|||||||||||
|[1226](https://leetcode-cn.com/problems/the-dining-philosophers)|Medium|||||||||||
|[1242](https://leetcode-cn.com/problems/web-crawler-multithreaded)|Medium|||||||||||
|[1279](https://leetcode-cn.com/problems/traffic-light-controlled-intersection)|Easy|||||||||||

</details>

<details>

  <summary>LCCI</summary>

|Index|Difficulty|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|[面试题 01.01](https://leetcode-cn.com/problems/is-unique-lcci)|Easy|||||||||||
|[面试题 01.02](https://leetcode-cn.com/problems/check-permutation-lcci)|Easy|||||||||||
|[面试题 01.03](https://leetcode-cn.com/problems/string-to-url-lcci)|Easy|||||||||||
|[面试题 01.06](https://leetcode-cn.com/problems/compress-string-lcci)|Easy|||||||||||
|[面试题 01.09](https://leetcode-cn.com/problems/string-rotation-lcci)|Easy|||||||||||
|[面试题 02.01](https://leetcode-cn.com/problems/remove-duplicate-node-lcci)|Easy|||||||||||
|[面试题 02.06](https://leetcode-cn.com/problems/palindrome-linked-list-lcci)|Easy|||||||||||
|[面试题 02.07](https://leetcode-cn.com/problems/intersection-of-two-linked-lists-lcci)|Easy|||||||||||
|[面试题 02.08](https://leetcode-cn.com/problems/linked-list-cycle-lcci)|Medium|||||||||||
|[面试题 03.02](https://leetcode-cn.com/problems/min-stack-lcci)|Easy|||||||||||
|[面试题 03.04](https://leetcode-cn.com/problems/implement-queue-using-stacks-lcci)|Easy|||||||||||
|[面试题 04.01](https://leetcode-cn.com/problems/route-between-nodes-lcci)|Medium|||||||||||
|[面试题 03.01](https://leetcode-cn.com/problems/three-in-one-lcci)|Easy|||||||||||
|[面试题 03.05](https://leetcode-cn.com/problems/sort-of-stacks-lcci)|Medium|||||||||||
|[面试题 04.02](https://leetcode-cn.com/problems/minimum-height-tree-lcci)|Easy|||||||||||
|[面试题 04.03](https://leetcode-cn.com/problems/list-of-depth-lcci)|Medium|||||||||||
|[面试题 04.04](https://leetcode-cn.com/problems/check-balance-lcci)|Easy|||||||||||
|[面试题 04.05](https://leetcode-cn.com/problems/legal-binary-search-tree-lcci)|Medium|||||||||||
|[面试题 04.06](https://leetcode-cn.com/problems/successor-lcci)|Medium|||||||||||
|[面试题 04.08](https://leetcode-cn.com/problems/first-common-ancestor-lcci)|Medium|||||||||||
|[面试题 05.01](https://leetcode-cn.com/problems/insert-into-bits-lcci)|Easy|||||||||||
|[面试题 05.06](https://leetcode-cn.com/problems/convert-integer-lcci)|Easy|||||||||||
|[面试题 05.07](https://leetcode-cn.com/problems/exchange-lcci)|Easy|||||||||||
|[面试题 05.04](https://leetcode-cn.com/problems/closed-number-lcci)|Medium|||||||||||
|[面试题 01.04](https://leetcode-cn.com/problems/palindrome-permutation-lcci)|Easy|||||||||||
|[面试题 01.07](https://leetcode-cn.com/problems/rotate-matrix-lcci)|Medium|||||||||||
|[面试题 01.08](https://leetcode-cn.com/problems/zero-matrix-lcci)|Medium|||||||||||
|[面试题 02.03](https://leetcode-cn.com/problems/delete-middle-node-lcci)|Easy|||||||||||
|[面试题 02.05](https://leetcode-cn.com/problems/sum-lists-lcci)|Medium|||||||||||
|[面试题 03.03](https://leetcode-cn.com/problems/stack-of-plates-lcci)|Medium|||||||||||
|[面试题 05.08](https://leetcode-cn.com/problems/draw-line-lcci)|Medium|||||||||||
|[面试题 08.01](https://leetcode-cn.com/problems/three-steps-problem-lcci)|Easy|||||||||||
|[面试题 08.04](https://leetcode-cn.com/problems/power-set-lcci)|Medium|||||||||||
|[面试题 08.05](https://leetcode-cn.com/problems/recursive-mulitply-lcci)|Medium|||||||||||
|[面试题 08.09](https://leetcode-cn.com/problems/bracket-lcci)|Medium|||||||||||
|[面试题 08.10](https://leetcode-cn.com/problems/color-fill-lcci)|Easy|||||||||||
|[面试题 08.13](https://leetcode-cn.com/problems/pile-box-lcci)|Hard|||||||||||
|[面试题 05.02](https://leetcode-cn.com/problems/bianry-number-to-string-lcci)|Medium|||||||||||
|[面试题 03.06](https://leetcode-cn.com/problems/animal-shelter-lcci)|Easy|||||||||||
|[面试题 04.10](https://leetcode-cn.com/problems/check-subtree-lcci)|Medium|||||||||||
|[面试题 05.03](https://leetcode-cn.com/problems/reverse-bits-lcci)|Easy|||||||||||
|[面试题 08.11](https://leetcode-cn.com/problems/coin-lcci)|Medium|||||||||||
|[面试题 10.03](https://leetcode-cn.com/problems/search-rotate-array-lcci)|Medium|||||||||||
|[面试题 08.12](https://leetcode-cn.com/problems/eight-queens-lcci)|Hard|||||||||||
|[面试题 08.03](https://leetcode-cn.com/problems/magic-index-lcci)|Easy|||||||||||
|[面试题 08.07](https://leetcode-cn.com/problems/permutation-i-lcci)|Medium|||||||||||
|[面试题 10.05](https://leetcode-cn.com/problems/sparse-array-search-lcci)|Easy|||||||||||
|[面试题 16.01](https://leetcode-cn.com/problems/swap-numbers-lcci)|Medium|||||||||||
|[面试题 16.02](https://leetcode-cn.com/problems/words-frequency-lcci)|Medium|||||||||||
|[面试题 16.03](https://leetcode-cn.com/problems/intersection-lcci)|Hard|||||||||||
|[面试题 16.04](https://leetcode-cn.com/problems/tic-tac-toe-lcci)|Medium|||||||||||
|[面试题 16.06](https://leetcode-cn.com/problems/smallest-difference-lcci)|Medium|||||||||||
|[面试题 08.08](https://leetcode-cn.com/problems/permutation-ii-lcci)|Medium|||||||||||
|[面试题 16.07](https://leetcode-cn.com/problems/maximum-lcci)|Easy|||||||||||
|[面试题 16.09](https://leetcode-cn.com/problems/operations-lcci)|Medium|||||||||||
|[面试题 16.10](https://leetcode-cn.com/problems/living-people-lcci)|Medium|||||||||||
|[面试题 16.11](https://leetcode-cn.com/problems/diving-board-lcci)|Easy|||||||||||
|[面试题 16.13](https://leetcode-cn.com/problems/bisect-squares-lcci)|Medium|||||||||||
|[面试题 16.14](https://leetcode-cn.com/problems/best-line-lcci)|Medium|||||||||||
|[面试题 16.15](https://leetcode-cn.com/problems/master-mind-lcci)|Easy|||||||||||
|[面试题 16.16](https://leetcode-cn.com/problems/sub-sort-lcci)|Medium|||||||||||
|[面试题 16.17](https://leetcode-cn.com/problems/contiguous-sequence-lcci)|Easy|||||||||||
|[面试题 16.18](https://leetcode-cn.com/problems/pattern-matching-lcci)|Medium|||||||||||
|[面试题 16.19](https://leetcode-cn.com/problems/pond-sizes-lcci)|Medium|||||||||||
|[面试题 01.05](https://leetcode-cn.com/problems/one-away-lcci)|Medium|||||||||||
|[面试题 02.02](https://leetcode-cn.com/problems/kth-node-from-end-of-list-lcci)|Easy|||||||||||
|[面试题 02.04](https://leetcode-cn.com/problems/partition-list-lcci)|Medium|||||||||||
|[面试题 04.12](https://leetcode-cn.com/problems/paths-with-sum-lcci)|Medium|||||||||||
|[面试题 04.09](https://leetcode-cn.com/problems/bst-sequences-lcci)|Hard|||||||||||
|[面试题 08.02](https://leetcode-cn.com/problems/robot-in-a-grid-lcci)|Medium|||||||||||
|[面试题 10.01](https://leetcode-cn.com/problems/sorted-merge-lcci)|Easy|||||||||||
|[面试题 10.11](https://leetcode-cn.com/problems/peaks-and-valleys-lcci)|Medium|||||||||||
|[面试题 08.06](https://leetcode-cn.com/problems/hanota-lcci)|Easy|||||||||||
|[面试题 10.09](https://leetcode-cn.com/problems/sorted-matrix-search-lcci)|Medium|||||||||||
|[面试题 16.05](https://leetcode-cn.com/problems/factorial-zeros-lcci)|Easy|||||||||||
|[面试题 16.08](https://leetcode-cn.com/problems/english-int-lcci)|Hard|||||||||||
|[面试题 17.12](https://leetcode-cn.com/problems/binode-lcci)|Easy|||||||||||
|[面试题 17.13](https://leetcode-cn.com/problems/re-space-lcci)|Medium|||||||||||
|[面试题 17.14](https://leetcode-cn.com/problems/smallest-k-lcci)|Medium|||||||||||
|[面试题 17.15](https://leetcode-cn.com/problems/longest-word-lcci)|Medium|||||||||||
|[面试题 17.16](https://leetcode-cn.com/problems/the-masseuse-lcci)|Easy|||||||||||
|[面试题 17.17](https://leetcode-cn.com/problems/multi-search-lcci)|Medium|||||||||||
|[面试题 17.01](https://leetcode-cn.com/problems/add-without-plus-lcci)|Easy|||||||||||
|[面试题 16.25](https://leetcode-cn.com/problems/lru-cache-lcci)|Medium|||||||||||
|[面试题 16.26](https://leetcode-cn.com/problems/calculator-lcci)|Medium|||||||||||
|[面试题 17.20](https://leetcode-cn.com/problems/continuous-median-lcci)|Hard|||||||||||
|[面试题 17.21](https://leetcode-cn.com/problems/volume-of-histogram-lcci)|Hard|||||||||||
|[面试题 17.22](https://leetcode-cn.com/problems/word-transformer-lcci)|Medium|||||||||||
|[面试题 08.14](https://leetcode-cn.com/problems/boolean-evaluation-lcci)|Medium|||||||||||
|[面试题 17.04](https://leetcode-cn.com/problems/missing-number-lcci)|Easy|||||||||||
|[面试题 17.05](https://leetcode-cn.com/problems/find-longest-subarray-lcci)|Medium|||||||||||
|[面试题 17.06](https://leetcode-cn.com/problems/number-of-2s-in-range-lcci)|Hard|||||||||||
|[面试题 17.07](https://leetcode-cn.com/problems/baby-names-lcci)|Medium|||||||||||
|[面试题 17.08](https://leetcode-cn.com/problems/circus-tower-lcci)|Medium|||||||||||
|[面试题 17.09](https://leetcode-cn.com/problems/get-kth-magic-number-lcci)|Medium|||||||||||
|[面试题 17.10](https://leetcode-cn.com/problems/find-majority-element-lcci)|Easy|||||||||||
|[面试题 17.11](https://leetcode-cn.com/problems/find-closest-lcci)|Medium|||||||||||
|[面试题 10.02](https://leetcode-cn.com/problems/group-anagrams-lcci)|Medium|||||||||||
|[面试题 10.10](https://leetcode-cn.com/problems/rank-from-stream-lcci)|Medium|||||||||||
|[面试题 16.24](https://leetcode-cn.com/problems/pairs-with-sum-lcci)|Medium|||||||||||
|[面试题 17.18](https://leetcode-cn.com/problems/shortest-supersequence-lcci)|Medium|||||||||||
|[面试题 17.19](https://leetcode-cn.com/problems/missing-two-lcci)|Hard|||||||||||
|[面试题 17.23](https://leetcode-cn.com/problems/max-black-square-lcci)|Medium|||||||||||
|[面试题 17.24](https://leetcode-cn.com/problems/max-submatrix-lcci)|Hard|||||||||||
|[面试题 16.20](https://leetcode-cn.com/problems/t9-lcci)|Medium|||||||||||
|[面试题 16.21](https://leetcode-cn.com/problems/sum-swap-lcci)|Medium|||||||||||
|[面试题 17.25](https://leetcode-cn.com/problems/word-rectangle-lcci)|Hard|||||||||||
|[面试题 16.22](https://leetcode-cn.com/problems/langtons-ant-lcci)|Medium|||||||||||
|[面试题 17.26](https://leetcode-cn.com/problems/sparse-similarity-lcci)|Hard|||||||||||

</details>

<details>

  <summary>LCOF</summary>

|Index|Difficulty|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|[剑指 Offer 09](https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof)|Easy|||||||||||
|[剑指 Offer 10- I](https://leetcode-cn.com/problems/fei-bo-na-qi-shu-lie-lcof)|Easy|||||||||||
|[剑指 Offer 03](https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof)|Easy|||||||||||
|[剑指 Offer 04](https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof)|Medium|||||||||||
|[剑指 Offer 10- II](https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof)|Easy|||||||||||
|[剑指 Offer 11](https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof)|Easy|||||||||||
|[剑指 Offer 12](https://leetcode-cn.com/problems/ju-zhen-zhong-de-lu-jing-lcof)|Medium|||||||||||
|[剑指 Offer 05](https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof)|Easy|||||||||||
|[剑指 Offer 13](https://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof)|Medium|||||||||||
|[剑指 Offer 06](https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof)|Easy|||||||||||
|[剑指 Offer 07](https://leetcode-cn.com/problems/zhong-jian-er-cha-shu-lcof)|Medium|||||||||||
|[剑指 Offer 14- I](https://leetcode-cn.com/problems/jian-sheng-zi-lcof)|Medium|||||||||||
|[剑指 Offer 14- II](https://leetcode-cn.com/problems/jian-sheng-zi-ii-lcof)|Medium|||||||||||
|[剑指 Offer 25](https://leetcode-cn.com/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof)|Easy|||||||||||
|[剑指 Offer 26](https://leetcode-cn.com/problems/shu-de-zi-jie-gou-lcof)|Medium|||||||||||
|[剑指 Offer 27](https://leetcode-cn.com/problems/er-cha-shu-de-jing-xiang-lcof)|Easy|||||||||||
|[剑指 Offer 28](https://leetcode-cn.com/problems/dui-cheng-de-er-cha-shu-lcof)|Easy|||||||||||
|[剑指 Offer 20](https://leetcode-cn.com/problems/biao-shi-shu-zhi-de-zi-fu-chuan-lcof)|Medium|||||||||||
|[剑指 Offer 21](https://leetcode-cn.com/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof)|Easy|||||||||||
|[剑指 Offer 15](https://leetcode-cn.com/problems/er-jin-zhi-zhong-1de-ge-shu-lcof)|Easy|||||||||||
|[剑指 Offer 29](https://leetcode-cn.com/problems/shun-shi-zhen-da-yin-ju-zhen-lcof)|Easy|||||||||||
|[剑指 Offer 22](https://leetcode-cn.com/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof)|Easy|||||||||||
|[剑指 Offer 16](https://leetcode-cn.com/problems/shu-zhi-de-zheng-shu-ci-fang-lcof)|Medium|||||||||||
|[剑指 Offer 17](https://leetcode-cn.com/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof)|Easy|||||||||||
|[剑指 Offer 19](https://leetcode-cn.com/problems/zheng-ze-biao-da-shi-pi-pei-lcof)|Hard|||||||||||
|[剑指 Offer 24](https://leetcode-cn.com/problems/fan-zhuan-lian-biao-lcof)|Easy|||||||||||
|[剑指 Offer 18](https://leetcode-cn.com/problems/shan-chu-lian-biao-de-jie-dian-lcof)|Easy|||||||||||
|[剑指 Offer 35](https://leetcode-cn.com/problems/fu-za-lian-biao-de-fu-zhi-lcof)|Medium|||||||||||
|[剑指 Offer 40](https://leetcode-cn.com/problems/zui-xiao-de-kge-shu-lcof)|Easy|||||||||||
|[面试题30](https://leetcode-cn.com/problems/bao-han-minhan-shu-de-zhan-lcof)|Easy|||||||||||
|[剑指 Offer 41](https://leetcode-cn.com/problems/shu-ju-liu-zhong-de-zhong-wei-shu-lcof)|Hard|||||||||||
|[剑指 Offer 42](https://leetcode-cn.com/problems/lian-xu-zi-shu-zu-de-zui-da-he-lcof)|Easy|||||||||||
|[剑指 Offer 36](https://leetcode-cn.com/problems/er-cha-sou-suo-shu-yu-shuang-xiang-lian-biao-lcof)|Medium|||||||||||
|[剑指 Offer 31](https://leetcode-cn.com/problems/zhan-de-ya-ru-dan-chu-xu-lie-lcof)|Medium|||||||||||
|[剑指 Offer 37](https://leetcode-cn.com/problems/xu-lie-hua-er-cha-shu-lcof)|Hard|||||||||||
|[剑指 Offer 38](https://leetcode-cn.com/problems/zi-fu-chuan-de-pai-lie-lcof)|Medium|||||||||||
|[剑指 Offer 43](https://leetcode-cn.com/problems/1nzheng-shu-zhong-1chu-xian-de-ci-shu-lcof)|Hard|||||||||||
|[剑指 Offer 39](https://leetcode-cn.com/problems/shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof)|Easy|||||||||||
|[剑指 Offer 32 - I](https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof)|Medium|||||||||||
|[剑指 Offer 32 - II](https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof)|Easy|||||||||||
|[剑指 Offer 44](https://leetcode-cn.com/problems/shu-zi-xu-lie-zhong-mou-yi-wei-de-shu-zi-lcof)|Medium|||||||||||
|[剑指 Offer 32 - III](https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-iii-lcof)|Medium|||||||||||
|[剑指 Offer 33](https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-hou-xu-bian-li-xu-lie-lcof)|Medium|||||||||||
|[剑指 Offer 50](https://leetcode-cn.com/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof)|Easy|||||||||||
|[面试题34](https://leetcode-cn.com/problems/er-cha-shu-zhong-he-wei-mou-yi-zhi-de-lu-jing-lcof)|Medium|||||||||||
|[剑指 Offer 51](https://leetcode-cn.com/problems/shu-zu-zhong-de-ni-xu-dui-lcof)|Hard|||||||||||
|[剑指 Offer 55 - I](https://leetcode-cn.com/problems/er-cha-shu-de-shen-du-lcof)|Easy|||||||||||
|[剑指 Offer 56 - I](https://leetcode-cn.com/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-lcof)|Medium|||||||||||
|[剑指 Offer 56 - II](https://leetcode-cn.com/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-ii-lcof)|Medium|||||||||||
|[剑指 Offer 57](https://leetcode-cn.com/problems/he-wei-sde-liang-ge-shu-zi-lcof)|Easy|||||||||||
|[剑指 Offer 45](https://leetcode-cn.com/problems/ba-shu-zu-pai-cheng-zui-xiao-de-shu-lcof)|Medium|||||||||||
|[剑指 Offer 57 - II](https://leetcode-cn.com/problems/he-wei-sde-lian-xu-zheng-shu-xu-lie-lcof)|Easy|||||||||||
|[剑指 Offer 46](https://leetcode-cn.com/problems/ba-shu-zi-fan-yi-cheng-zi-fu-chuan-lcof)|Medium|||||||||||
|[剑指 Offer 52](https://leetcode-cn.com/problems/liang-ge-lian-biao-de-di-yi-ge-gong-gong-jie-dian-lcof)|Easy|||||||||||
|[剑指 Offer 47](https://leetcode-cn.com/problems/li-wu-de-zui-da-jie-zhi-lcof)|Medium|||||||||||
|[剑指 Offer 58 - I](https://leetcode-cn.com/problems/fan-zhuan-dan-ci-shun-xu-lcof)|Easy|||||||||||
|[剑指 Offer 53 - I](https://leetcode-cn.com/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof)|Easy|||||||||||
|[剑指 Offer 58 - II](https://leetcode-cn.com/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof)|Easy|||||||||||
|[剑指 Offer 53 - II](https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof)|Easy|||||||||||
|[剑指 Offer 48](https://leetcode-cn.com/problems/zui-chang-bu-han-zhong-fu-zi-fu-de-zi-zi-fu-chuan-lcof)|Medium|||||||||||
|[剑指 Offer 54](https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof)|Easy|||||||||||
|[剑指 Offer 49](https://leetcode-cn.com/problems/chou-shu-lcof)|Medium|||||||||||
|[剑指 Offer 65](https://leetcode-cn.com/problems/bu-yong-jia-jian-cheng-chu-zuo-jia-fa-lcof)|Easy|||||||||||
|[剑指 Offer 59 - I](https://leetcode-cn.com/problems/hua-dong-chuang-kou-de-zui-da-zhi-lcof)|Easy|||||||||||
|[剑指 Offer 59 - II](https://leetcode-cn.com/problems/dui-lie-de-zui-da-zhi-lcof)|Medium|||||||||||
|[剑指 Offer 66](https://leetcode-cn.com/problems/gou-jian-cheng-ji-shu-zu-lcof)|Medium|||||||||||
|[剑指 Offer 60](https://leetcode-cn.com/problems/nge-tou-zi-de-dian-shu-lcof)|Medium|||||||||||
|[剑指 Offer 67](https://leetcode-cn.com/problems/ba-zi-fu-chuan-zhuan-huan-cheng-zheng-shu-lcof)|Medium|||||||||||
|[剑指 Offer 61](https://leetcode-cn.com/problems/bu-ke-pai-zhong-de-shun-zi-lcof)|Easy|||||||||||
|[剑指 Offer 55 - II](https://leetcode-cn.com/problems/ping-heng-er-cha-shu-lcof)|Easy|||||||||||
|[剑指 Offer 62](https://leetcode-cn.com/problems/yuan-quan-zhong-zui-hou-sheng-xia-de-shu-zi-lcof)|Easy|||||||||||
|[剑指 Offer 63](https://leetcode-cn.com/problems/gu-piao-de-zui-da-li-run-lcof)|Medium|||||||||||
|[剑指 Offer 64](https://leetcode-cn.com/problems/qiu-12n-lcof)|Medium|||||||||||
|[剑指 Offer 68 - I](https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-zui-jin-gong-gong-zu-xian-lcof)|Easy|||||||||||
|[剑指 Offer 68 - II](https://leetcode-cn.com/problems/er-cha-shu-de-zui-jin-gong-gong-zu-xian-lcof)|Easy|||||||||||

</details>
