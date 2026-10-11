// ------------------------------- solution begin -------------------------------
const maxBlackSquare = (matrix: number[][]): number => {
  const n = matrix.length;
  const dp: number[][] = Array.from({ length: n }, () => new Array(n).fill(0));
  let best = 0;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < matrix[i].length; j++) {
      if (matrix[i][j] === 1) {
        if (i === 0 || j === 0) dp[i][j] = 1;
        else dp[i][j] = Math.min(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]) + 1;
        best = Math.max(best, dp[i][j]);
      }
    }
  }
  return best;
};
// ------------------------------- solution end ---------------------------------

const matrix = [
  [0, 1, 1, 1],
  [1, 1, 1, 1],
  [0, 1, 1, 1],
  [0, 1, 1, 1],
];
console.log(`Input:  [[0,1,1,1],[1,1,1,1],[0,1,1,1],[0,1,1,1]]`);
console.log(`Output: ${maxBlackSquare(matrix)}`);
