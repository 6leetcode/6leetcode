// ------------------------------- solution begin -------------------------------
const solveSudoku = (board: string[][]): void => {
  const rows: boolean[][] = Array.from({ length: 9 }, () => new Array(9).fill(false));
  const cols: boolean[][] = Array.from({ length: 9 }, () => new Array(9).fill(false));
  const boxes: boolean[][] = Array.from({ length: 9 }, () => new Array(9).fill(false));
  const empties: [number, number][] = [];
  for (let i = 0; i < 9; i++) {
    for (let j = 0; j < 9; j++) {
      const c = board[i][j];
      if (c === '.') {
        empties.push([i, j]);
      } else {
        const d = c.charCodeAt(0) - '1'.charCodeAt(0);
        rows[i][d] = cols[j][d] = boxes[Math.floor(i / 3) * 3 + Math.floor(j / 3)][d] = true;
      }
    }
  }

  const solve = (idx: number): boolean => {
    if (idx === empties.length) return true;
    const [i, j] = empties[idx];
    const b = Math.floor(i / 3) * 3 + Math.floor(j / 3);
    for (let d = 0; d < 9; d++) {
      if (!rows[i][d] && !cols[j][d] && !boxes[b][d]) {
        board[i][j] = String.fromCharCode('1'.charCodeAt(0) + d);
        rows[i][d] = cols[j][d] = boxes[b][d] = true;
        if (solve(idx + 1)) return true;
        rows[i][d] = cols[j][d] = boxes[b][d] = false;
        board[i][j] = '.';
      }
    }
    return false;
  };

  solve(0);
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
solveSudoku(board);
console.log(`Output: ${board.map((row) => row.join('')).join('')}`);
