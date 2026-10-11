import array from '../../library/typescript/array';
import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const spiralOrder = (matrix: number[][]): number[] => {
  const order: number[] = [];
  if (matrix.length === 0 || matrix[0].length === 0) return order;
  const rows = matrix.length;
  const cols = matrix[0].length;
  let left = 0;
  let right = cols - 1;
  let top = 0;
  let bottom = rows - 1;
  while (left <= right && top <= bottom) {
    for (let c = left; c <= right; c++) order.push(matrix[top][c]);
    for (let r = top + 1; r <= bottom; r++) order.push(matrix[r][right]);
    if (left < right && top < bottom) {
      for (let c = right - 1; c > left; c--) order.push(matrix[bottom][c]);
      for (let r = bottom; r > top; r--) order.push(matrix[r][left]);
    }
    left++;
    right--;
    top++;
    bottom--;
  }
  return order;
};
// ------------------------------- solution end ---------------------------------

const input = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];
console.log(`Input:  ${matrix(input)}`);
console.log(`Output: ${array(spiralOrder(input))}`);
