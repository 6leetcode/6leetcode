import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const merge = (intervals: number[][]): number[][] => {
  intervals.sort((a, b) => a[0] - b[0]);
  const res: number[][] = [];
  for (const [L, R] of intervals) {
    if (res.length === 0 || res[res.length - 1][1] < L) {
      res.push([L, R]);
    } else if (R > res[res.length - 1][1]) {
      res[res.length - 1][1] = R;
    }
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = [
  [1, 4],
  [4, 5],
];
console.log(`Input:  ${matrix(input)}`);
console.log(`Output: ${matrix(merge(input))}`);
