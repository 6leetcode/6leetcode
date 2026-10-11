// ------------------------------- solution begin -------------------------------
const wordBreak = (s: string, wordDict: string[]): boolean => {
  const n = s.length;
  const dp = new Array<boolean>(n + 1).fill(false);
  dp[0] = true;
  for (let i = 1; i <= n; i++) {
    for (const w of wordDict) {
      if (i >= w.length && dp[i - w.length] && s.slice(i - w.length, i) === w) {
        dp[i] = true;
        break;
      }
    }
  }
  return dp[n];
};
// ------------------------------- solution end ---------------------------------

const run = (s: string, wordDict: string[]): void => {
  console.log(`Input:  s = "${s}", wordDict = ${JSON.stringify(wordDict)}`);
  console.log(`Output: ${wordBreak(s, wordDict)}`);
};

run("leetcode", ["leet", "code"]);
run("applepenapple", ["apple", "pen"]);
run("catsandog", ["cats", "dog", "sand", "and", "cat"]);
