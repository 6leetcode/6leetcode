// ------------------------------- solution begin -------------------------------
const exist = (board: string[][], word: string): boolean => {
  const rows = board.length;
  const cols = board[0].length;

  const dfs = (i: number, j: number, idx: number): boolean => {
    if (idx === word.length) return true;
    if (i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] !== word[idx]) return false;
    const tmp = board[i][j];
    board[i][j] = '#';
    const found =
      dfs(i + 1, j, idx + 1) ||
      dfs(i - 1, j, idx + 1) ||
      dfs(i, j + 1, idx + 1) ||
      dfs(i, j - 1, idx + 1);
    board[i][j] = tmp;
    return found;
  };

  for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {
      if (dfs(i, j, 0)) return true;
    }
  }
  return false;
};
// ------------------------------- solution end ---------------------------------

const board = [
  ['A', 'B', 'C', 'E'],
  ['S', 'F', 'C', 'S'],
  ['A', 'D', 'E', 'E'],
];
const word = 'ABCCED';
console.log(`Input:  ${JSON.stringify(board)} ${word}`);
console.log(`Output: ${exist(board, word)}`);
