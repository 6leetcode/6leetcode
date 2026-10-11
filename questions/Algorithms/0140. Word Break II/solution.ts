// ------------------------------- solution begin -------------------------------
const wordBreak = (s: string, wordDict: string[]): string[] => {
  const dict = new Set<string>(wordDict);
  const memo = new Map<number, string[]>();

  const dfs = (start: number): string[] => {
    if (memo.has(start)) {
      return memo.get(start)!;
    }
    if (start === s.length) {
      return [""];
    }
    const res: string[] = [];
    for (let end = start + 1; end <= s.length; end++) {
      const w = s.slice(start, end);
      if (dict.has(w)) {
        for (const tail of dfs(end)) {
          res.push(tail === "" ? w : `${w} ${tail}`);
        }
      }
    }
    memo.set(start, res);
    return res;
  };

  return dfs(0);
};
// ------------------------------- solution end ---------------------------------

const run = (s: string, wordDict: string[]): void => {
  console.log(`Input:  s = "${s}", wordDict = ${JSON.stringify(wordDict)}`);
  console.log(`Output: ${JSON.stringify(wordBreak(s, wordDict))}`);
};

run("catsanddog", ["cat", "cats", "and", "sand", "dog"]);
run("pineapplepenapple", ["apple", "pen", "applepen", "pine", "pineapple"]);
run("catsandog", ["cats", "dog", "sand", "and", "cat"]);
