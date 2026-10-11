// ------------------------------- solution begin -------------------------------
const searchMatrix = (matrix: number[][], target: number): boolean => {
  if (matrix.length === 0) return false;
  let i = 0;
  let j = matrix[0].length - 1;
  while (i < matrix.length && j >= 0) {
    if (matrix[i][j] === target) return true;
    if (matrix[i][j] > target) {
      j--;
    } else {
      i++;
    }
  }
  return false;
};
// ------------------------------- solution end ---------------------------------

const matrix = [
  [1, 4, 7, 11, 15],
  [2, 5, 8, 12, 19],
  [3, 6, 9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30],
];
console.log(`Input:  matrix (sorted rows/cols), target = 5`);
console.log(`Output: ${searchMatrix(matrix, 5)}`);
