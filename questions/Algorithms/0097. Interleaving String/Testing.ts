// ------------------------------- solution begin -------------------------------
const isInterleave = (s1: string, s2: string, s3: string): boolean => {
  const n = s1.length;
  const m = s2.length;
  if (n + m !== s3.length) return false;
  const f: boolean[][] = Array.from({ length: n + 1 }, () => new Array(m + 1).fill(false));
  f[0][0] = true;
  for (let i = 0; i <= n; i++) {
    for (let j = 0; j <= m; j++) {
      const p = i + j - 1;
      if (i > 0) f[i][j] = f[i][j] || (f[i - 1][j] && s1[i - 1] === s3[p]);
      if (j > 0) f[i][j] = f[i][j] || (f[i][j - 1] && s2[j - 1] === s3[p]);
    }
  }
  return f[n][m];
};
// ------------------------------- solution end ---------------------------------

console.log(`Input:  aabcc, dbbca, aadbbbaccc`);
console.log(`Output: ${isInterleave('aabcc', 'dbbca', 'aadbbbaccc')}`);
