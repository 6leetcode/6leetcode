// ------------------------------- solution begin -------------------------------
const pathWithObstacles = (obstacleGrid: number[][]): number[][] => {
  const rows = obstacleGrid.length;
  const cols = obstacleGrid[0].length;
  const visited: boolean[][] = Array.from({ length: rows }, () => new Array(cols).fill(false));
  const path: number[][] = [];

  const dfs = (r: number, c: number): boolean => {
    if (r >= rows || c >= cols || obstacleGrid[r][c] === 1 || visited[r][c]) return false;
    visited[r][c] = true;
    if ((r === rows - 1 && c === cols - 1) || dfs(r + 1, c) || dfs(r, c + 1)) {
      path.push([r, c]);
      return true;
    }
    return false;
  };

  if (!dfs(0, 0)) return [];
  path.reverse();
  return path;
};
// ------------------------------- solution end ---------------------------------

const input = [
  [0, 0, 0],
  [0, 1, 0],
  [0, 0, 0],
];
console.log(`Input:  [[0,0,0],[0,1,0],[0,0,0]]`);
console.log(`Output: ${JSON.stringify(pathWithObstacles(input))}`);
