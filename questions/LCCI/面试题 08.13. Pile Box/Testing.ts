// ------------------------------- solution begin -------------------------------
const pileBox = (box: number[][]): number => {
  box.sort((a, b) => a[0] - b[0] || a[1] - b[1] || a[2] - b[2]);
  const n = box.length;
  const dp: number[] = new Array(n).fill(0);
  let best = 0;
  for (let i = 0; i < n; i++) {
    dp[i] = box[i][2];
    for (let j = 0; j < i; j++) {
      if (box[j][0] < box[i][0] && box[j][1] < box[i][1] && box[j][2] < box[i][2]) {
        dp[i] = Math.max(dp[i], dp[j] + box[i][2]);
      }
    }
    best = Math.max(best, dp[i]);
  }
  return best;
};
// ------------------------------- solution end ---------------------------------

const box = [
  [1, 1, 1],
  [2, 2, 2],
  [3, 3, 3],
];
console.log(`Input:  [[1,1,1],[2,2,2],[3,3,3]]`);
console.log(`Output: ${pileBox(box)}`);
