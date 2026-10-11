// ------------------------------- solution begin -------------------------------
const totalNQueens = (n: number): number => {
  let count = 0;
  const cols: number[] = new Array(n).fill(-1);

  const isSafe = (row: number, col: number): boolean => {
    for (let r = 0; r < row; r++) {
      if (cols[r] === col || Math.abs(cols[r] - col) === Math.abs(r - row)) return false;
    }
    return true;
  };

  const backtrack = (row: number) => {
    if (row === n) {
      count++;
      return;
    }
    for (let col = 0; col < n; col++) {
      if (isSafe(row, col)) {
        cols[row] = col;
        backtrack(row + 1);
      }
    }
  };

  backtrack(0);
  return count;
};
// ------------------------------- solution end ---------------------------------

const input = 4;
console.log(`Input:  ${input}`);
console.log(`Output: ${totalNQueens(input)}`);
