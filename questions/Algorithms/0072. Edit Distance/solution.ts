// ------------------------------- solution begin -------------------------------
const minDistance = (word1: string, word2: string): number => {
  const m = word1.length;
  const n = word2.length;
  const dp: number[] = Array.from({ length: n + 1 }, (_, j) => j);
  for (let i = 1; i <= m; i++) {
    let prev = dp[0];
    dp[0] = i;
    for (let j = 1; j <= n; j++) {
      const tmp = dp[j];
      if (word1[i - 1] === word2[j - 1]) {
        dp[j] = prev;
      } else {
        dp[j] = 1 + Math.min(prev, dp[j], dp[j - 1]);
      }
      prev = tmp;
    }
  }
  return dp[n];
};
// ------------------------------- solution end ---------------------------------

const word1 = 'horse';
const word2 = 'ros';
console.log(`Input:  ${word1} ${word2}`);
console.log(`Output: ${minDistance(word1, word2)}`);
