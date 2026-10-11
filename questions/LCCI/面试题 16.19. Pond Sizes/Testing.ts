// ------------------------------- solution begin -------------------------------
const pondSizes = (land: number[][]): number[] => {
  const rows = land.length;
  const cols = land[0].length;
  const dfs = (r: number, c: number): number => {
    if (r < 0 || r >= rows || c < 0 || c >= cols || land[r][c] !== 0) return 0;
    land[r][c] = -1;
    let size = 1;
    for (let dr = -1; dr <= 1; dr++) {
      for (let dc = -1; dc <= 1; dc++) {
        if (dr !== 0 || dc !== 0) size += dfs(r + dr, c + dc);
      }
    }
    return size;
  };
  const res: number[] = [];
  for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {
      if (land[i][j] === 0) res.push(dfs(i, j));
    }
  }
  res.sort((a, b) => a - b);
  return res;
};
// ------------------------------- solution end ---------------------------------

const land = [
  [0, 2, 1, 0],
  [0, 1, 0, 1],
  [1, 1, 0, 1],
  [0, 1, 0, 1],
];
console.log(`Input:  [[0,2,1,0],[0,1,0,1],[1,1,0,1],[0,1,0,1]]`);
console.log(`Output: [${pondSizes(land).join(', ')}]`);
