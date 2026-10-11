// ------------------------------- solution begin -------------------------------
const isValidSudoku = (board: string[][]): boolean => {
  const rows: boolean[][] = Array.from({ length: 9 }, () => new Array(9).fill(false));
  const cols: boolean[][] = Array.from({ length: 9 }, () => new Array(9).fill(false));
  const boxes: boolean[][] = Array.from({ length: 9 }, () => new Array(9).fill(false));
  for (let i = 0; i < 9; i++) {
    for (let j = 0; j < 9; j++) {
      const c = board[i][j];
      if (c === '.') continue;
      const d = c.charCodeAt(0) - '1'.charCodeAt(0);
      const b = Math.floor(i / 3) * 3 + Math.floor(j / 3);
      if (rows[i][d] || cols[j][d] || boxes[b][d]) return false;
      rows[i][d] = cols[j][d] = boxes[b][d] = true;
    }
  }
  return true;
};
// ------------------------------- solution end ---------------------------------

const raw = [
  '..9748...',
  '7........',
  '.2.1.9...',
  '..7...24.',
  '.64.1.59.',
  '.98...3..',
  '...8.3.2.',
  '........6',
  '...2759..',
];
const board = raw.map((row) => row.split(''));
console.log(`Input:  ${raw.join('')}`);
console.log(`Output: ${isValidSudoku(board)}`);
