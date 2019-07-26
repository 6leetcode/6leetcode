# LeetCode

LeetCode Solutions.

### Solutions file rules

- Each problem is organized according to the title number.
- Each problem folder has a description file which one named `readme.md`.
- There can be multiple solutions for the same language in each folder, ranked according to the degree of algorithm optimization, and the file name prefix is the language name. For example: the performance of `c1.c` is better than the performance of `c2.c`.
- Each problem solution must contain a `main` function that contains all the test cases that can be thought of, making it easy to run offline. The solution function is written separately as a separate function.

### How to test problem's solution offline

- Entering a language environment requires only `make $language`. For example, the environment that enters Python is `make python`. It may take some time to enter a certain environment for the first time. The `Docker` image will be compiled first.
- All files in this directory will be mapped to the `/app` directory of `Container`.
- The environment of `Container` may be `Debian` or `Alpine`.

### Solutions list
