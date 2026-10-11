import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const minimumTotal = (triangle: number[][]): number => {
  const dp: number[] = [...triangle[triangle.length - 1]];
  for (let i = triangle.length - 2; i >= 0; i--) {
    for (let j = 0; j <= i; j++) {
      dp[j] = triangle[i][j] + Math.min(dp[j], dp[j + 1]);
    }
  }
  return dp[0];
};
// ------------------------------- solution end ---------------------------------

const cases: number[][][] = [
  [[2], [3, 4], [6, 5, 7], [4, 1, 8, 3]],
  [[-10]],
];

for (const triangle of cases) {
  console.log(`Input:  ${matrix(triangle)}`);
  console.log(`Output: ${minimumTotal(triangle)}`);
}
