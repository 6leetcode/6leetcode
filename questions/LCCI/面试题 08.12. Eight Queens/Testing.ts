// ------------------------------- solution begin -------------------------------
const solveNQueens = (n: number): string[][] => {
  const res: string[][] = [];
  const cols: number[] = new Array(n).fill(-1);
  const isSafe = (row: number, col: number): boolean => {
    for (let r = 0; r < row; r++) {
      if (cols[r] === col || Math.abs(cols[r] - col) === Math.abs(r - row)) return false;
    }
    return true;
  };
  const backtrack = (row: number) => {
    if (row === n) {
      const board: string[] = [];
      for (let i = 0; i < n; i++) {
        const line = new Array(n).fill('.');
        line[cols[i]] = 'Q';
        board.push(line.join(''));
      }
      res.push(board);
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
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = 4;
console.log(`Input:  ${input}`);
console.log(`Output: ${JSON.stringify(solveNQueens(input))}`);
