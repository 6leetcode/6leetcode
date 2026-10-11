// ------------------------------- solution begin -------------------------------
const waysToChange = (n: number): number => {
  const MOD = 1000000007;
  const coins = [1, 5, 10, 25];
  const dp: number[] = new Array(n + 1).fill(0);
  dp[0] = 1;
  for (const coin of coins) {
    for (let i = coin; i <= n; i++) {
      dp[i] = (dp[i] + dp[i - coin]) % MOD;
    }
  }
  return dp[n];
};
// ------------------------------- solution end ---------------------------------

const input = 10;
console.log(`Input:  ${input}`);
console.log(`Output: ${waysToChange(input)}`);
