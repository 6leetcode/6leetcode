// ------------------------------- solution begin -------------------------------
const findRotateSteps = (ring: string, key: string): number => {
  const n = ring.length;
  const m = key.length;
  const pos: Record<string, number[]> = {};
  for (let i = 0; i < n; i++) {
    const c = ring[i];
    (pos[c] ||= []).push(i);
  }
  const inf = Number.MAX_SAFE_INTEGER;
  const dp: number[][] = Array.from({ length: m }, () => new Array(n).fill(inf));
  for (const i of pos[key[0]]) dp[0][i] = Math.min(i, n - i) + 1;
  for (let i = 1; i < m; i++) {
    for (const j of pos[key[i]]) {
      for (const k of pos[key[i - 1]]) {
        const d = Math.abs(j - k);
        dp[i][j] = Math.min(dp[i][j], dp[i - 1][k] + Math.min(d, n - d) + 1);
      }
    }
  }
  return Math.min(...dp[m - 1]);
};
// ------------------------------- solution end ---------------------------------

const input1 = 'godding';
const input2 = 'gd';
console.log(`Input:  ${input1} ${input2}`);
console.log(`Output: ${findRotateSteps(input1, input2)}`);
