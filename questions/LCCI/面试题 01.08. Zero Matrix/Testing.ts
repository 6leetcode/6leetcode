import matrix from '../../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const setZeroes = (matrix: number[][]): void => {
  const m = matrix.length;
  const n = matrix[0].length;
  let firstRow = false;
  let firstCol = false;
  for (let j = 0; j < n; j++) if (matrix[0][j] === 0) firstRow = true;
  for (let i = 0; i < m; i++) if (matrix[i][0] === 0) firstCol = true;
  for (let i = 1; i < m; i++) {
    for (let j = 1; j < n; j++) {
      if (matrix[i][j] === 0) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }
  for (let i = 1; i < m; i++) {
    for (let j = 1; j < n; j++) {
      if (matrix[i][0] === 0 || matrix[0][j] === 0) matrix[i][j] = 0;
    }
  }
  if (firstRow) for (let j = 0; j < n; j++) matrix[0][j] = 0;
  if (firstCol) for (let i = 0; i < m; i++) matrix[i][0] = 0;
};
// ------------------------------- solution end ---------------------------------

const input = [
  [1, 1, 1],
  [1, 0, 1],
  [1, 1, 1],
];
console.log(`Input:  ${matrix(input)}`);
setZeroes(input);
console.log(`Output: ${matrix(input)}`);
