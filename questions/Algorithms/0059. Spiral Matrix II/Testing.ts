import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const generateMatrix = (n: number): number[][] => {
  const m: number[][] = Array.from({ length: n }, () => new Array(n).fill(0));
  let top = 0;
  let bottom = n - 1;
  let left = 0;
  let right = n - 1;
  let num = 1;
  while (top <= bottom && left <= right) {
    for (let c = left; c <= right; c++) m[top][c] = num++;
    top++;
    for (let r = top; r <= bottom; r++) m[r][right] = num++;
    right--;
    if (top <= bottom) {
      for (let c = right; c >= left; c--) m[bottom][c] = num++;
      bottom--;
    }
    if (left <= right) {
      for (let r = bottom; r >= top; r--) m[r][left] = num++;
      left++;
    }
  }
  return m;
};
// ------------------------------- solution end ---------------------------------

const input = 3;
console.log(`Input:  ${input}`);
console.log(`Output: ${matrix(generateMatrix(input))}`);
