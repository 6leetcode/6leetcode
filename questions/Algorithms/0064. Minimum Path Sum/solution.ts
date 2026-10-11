import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const minPathSum = (grid: number[][]): number => {
  const m = grid.length;
  const n = grid[0].length;
  const dp: number[] = new Array(n).fill(0);
  dp[0] = grid[0][0];
  for (let j = 1; j < n; j++) dp[j] = dp[j - 1] + grid[0][j];
  for (let i = 1; i < m; i++) {
    dp[0] += grid[i][0];
    for (let j = 1; j < n; j++) {
      dp[j] = Math.min(dp[j], dp[j - 1]) + grid[i][j];
    }
  }
  return dp[n - 1];
};
// ------------------------------- solution end ---------------------------------

const input = [
  [1, 3, 1],
  [1, 5, 1],
  [4, 2, 1],
];
console.log(`Input:  ${matrix(input)}`);
console.log(`Output: ${minPathSum(input)}`);
