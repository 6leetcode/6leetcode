import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const searchMatrix = (matrix: number[][], target: number): boolean => {
  if (matrix.length === 0) return false;
  let i = 0;
  let j = matrix[0].length - 1;
  while (i < matrix.length && j >= 0) {
    if (matrix[i][j] === target) return true;
    if (matrix[i][j] > target) j--;
    else i++;
  }
  return false;
};
// ------------------------------- solution end ---------------------------------

const input1 = [
  [1, 3, 5, 7],
  [10, 11, 16, 20],
  [23, 30, 34, 50],
];
const input2 = 11;
console.log(`Input:  ${matrix(input1)} ${input2}`);
console.log(`Output: ${searchMatrix(input1, input2)}`);
