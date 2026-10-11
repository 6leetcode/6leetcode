// ------------------------------- solution begin -------------------------------
const numDistinct = (s: string, t: string): number => {
  const m = t.length;
  const dp: number[] = new Array(m + 1).fill(0);
  dp[0] = 1;
  for (const c of s) {
    for (let j = m; j >= 1; j--) {
      if (c === t[j - 1]) {
        dp[j] += dp[j - 1];
      }
    }
  }
  return dp[m];
};
// ------------------------------- solution end ---------------------------------

const cases: [string, string][] = [
  ["rabbbit", "rabbit"],
  ["babgbag", "bag"],
  ["ddd", "dd"],
];

for (const [s, t] of cases) {
  console.log(`Input:  "${s}", "${t}"`);
  console.log(`Output: ${numDistinct(s, t)}`);
}
