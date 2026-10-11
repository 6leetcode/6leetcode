// ------------------------------- solution begin -------------------------------
const minCut = (s: string): number => {
  const n = s.length;
  if (n <= 1) return 0;

  const pal: boolean[][] = Array.from({ length: n }, () => new Array(n).fill(false));
  for (let i = n - 1; i >= 0; i--) {
    for (let j = i; j < n; j++) {
      if (s[i] === s[j] && (j - i < 2 || pal[i + 1][j - 1])) {
        pal[i][j] = true;
      }
    }
  }

  const dp: number[] = new Array(n).fill(0);
  for (let i = 0; i < n; i++) {
    if (pal[0][i]) {
      dp[i] = 0;
      continue;
    }
    dp[i] = i;
    for (let j = 1; j <= i; j++) {
      if (pal[j][i]) {
        dp[i] = Math.min(dp[i], dp[j - 1] + 1);
      }
    }
  }
  return dp[n - 1];
};
// ------------------------------- solution end ---------------------------------

for (const s of ['aab', 'a', 'ab']) {
  console.log(`Input:  ${s}`);
  console.log(`Output: ${minCut(s)}`);
}
