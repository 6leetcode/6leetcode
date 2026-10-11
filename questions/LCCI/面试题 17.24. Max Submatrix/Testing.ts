// ------------------------------- solution begin -------------------------------
const getMaxMatrix = (matrix: number[][]): number[] => {
  const rows = matrix.length;
  const cols = matrix[0].length;
  let best = -Infinity;
  let res = [0, 0, 0, 0];
  for (let top = 0; top < rows; top++) {
    const colSum: number[] = new Array(cols).fill(0);
    for (let bottom = top; bottom < rows; bottom++) {
      for (let j = 0; j < cols; j++) colSum[j] += matrix[bottom][j];
      let cur = 0;
      let start = 0;
      for (let j = 0; j < cols; j++) {
        if (cur <= 0) {
          cur = colSum[j];
          start = j;
        } else {
          cur += colSum[j];
        }
        if (cur > best) {
          best = cur;
          res = [top, start, bottom, j];
        }
      }
    }
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const matrix = [
  [-1, 0, 0],
  [0, -1, 0],
];
console.log(`Input:  [[-1,0,0],[0,-1,0]]`);
console.log(`Output: [${getMaxMatrix(matrix).join(', ')}]`);
