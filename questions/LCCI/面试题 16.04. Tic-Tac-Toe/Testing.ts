// ------------------------------- solution begin -------------------------------
const tictactoe = (board: string[]): string => {
  const n = board.length;
  const win = (ch: string): boolean => {
    for (let i = 0; i < n; i++) {
      let row = true;
      let col = true;
      for (let j = 0; j < n; j++) {
        if (board[i][j] !== ch) row = false;
        if (board[j][i] !== ch) col = false;
      }
      if (row || col) return true;
    }
    let d1 = true;
    let d2 = true;
    for (let i = 0; i < n; i++) {
      if (board[i][i] !== ch) d1 = false;
      if (board[i][n - 1 - i] !== ch) d2 = false;
    }
    return d1 || d2;
  };
  if (win('X')) return 'X';
  if (win('O')) return 'O';
  for (const row of board) if (row.includes(' ')) return 'Pending';
  return 'Draw';
};
// ------------------------------- solution end ---------------------------------

const board = ['O X', ' XO', 'X O'];
console.log(`Input:  ["O X", " XO", "X O"]`);
console.log(`Output: ${tictactoe(board)}`);
