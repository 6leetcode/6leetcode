// ------------------------------- solution begin -------------------------------
const solve = (board: string[][]): void => {
  if (board.length === 0) return;
  const rows = board.length;
  const cols = board[0].length;

  const dfs = (i: number, j: number): void => {
    if (i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] !== 'O') return;
    board[i][j] = '#';
    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i, j + 1);
    dfs(i, j - 1);
  };

  for (let i = 0; i < rows; i++) {
    dfs(i, 0);
    dfs(i, cols - 1);
  }
  for (let j = 0; j < cols; j++) {
    dfs(0, j);
    dfs(rows - 1, j);
  }

  for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {
      if (board[i][j] === 'O') board[i][j] = 'X';
      else if (board[i][j] === '#') board[i][j] = 'O';
    }
  }
};
// ------------------------------- solution end ---------------------------------

const t1 = [
  ['X', 'X', 'X', 'X'],
  ['X', 'O', 'O', 'X'],
  ['X', 'X', 'O', 'X'],
  ['X', 'O', 'X', 'X'],
];
console.log(`Input:  ${JSON.stringify(t1)}`);
solve(t1);
console.log(`Output: ${JSON.stringify(t1)}`);

const t2 = [['X']];
console.log(`Input:  ${JSON.stringify(t2)}`);
solve(t2);
console.log(`Output: ${JSON.stringify(t2)}`);
