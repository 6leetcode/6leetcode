import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const rotate = (matrix: number[][]): void => {
  const n = matrix.length;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      [matrix[i][j], matrix[j][i]] = [matrix[j][i], matrix[i][j]];
    }
  }
  for (let i = 0; i < n; i++) {
    matrix[i].reverse();
  }
};
// ------------------------------- solution end ---------------------------------

const input = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];
console.log(`Input:  ${matrix(input)}`);
rotate(input);
console.log(`Output: ${matrix(input)}`);
