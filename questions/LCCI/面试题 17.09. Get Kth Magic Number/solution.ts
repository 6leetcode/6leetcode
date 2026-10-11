// ------------------------------- solution begin -------------------------------
const getKthMagicNumber = (k: number): number => {
  const dp: number[] = new Array(k).fill(1);
  let i3 = 0;
  let i5 = 0;
  let i7 = 0;
  for (let i = 1; i < k; i++) {
    const n3 = dp[i3] * 3;
    const n5 = dp[i5] * 5;
    const n7 = dp[i7] * 7;
    const m = Math.min(n3, n5, n7);
    dp[i] = m;
    if (m === n3) i3++;
    if (m === n5) i5++;
    if (m === n7) i7++;
  }
  return dp[k - 1];
};
// ------------------------------- solution end ---------------------------------

const input = 5;
console.log(`Input:  ${input}`);
console.log(`Output: ${getKthMagicNumber(input)}`);
