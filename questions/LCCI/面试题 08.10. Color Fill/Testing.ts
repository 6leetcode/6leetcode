// ------------------------------- solution begin -------------------------------
const floodFill = (image: number[][], sr: number, sc: number, newColor: number): number[][] => {
  const oldColor = image[sr][sc];
  if (oldColor === newColor) return image;
  const rows = image.length;
  const cols = image[0].length;
  const dfs = (r: number, c: number) => {
    if (r < 0 || r >= rows || c < 0 || c >= cols || image[r][c] !== oldColor) return;
    image[r][c] = newColor;
    dfs(r + 1, c);
    dfs(r - 1, c);
    dfs(r, c + 1);
    dfs(r, c - 1);
  };
  dfs(sr, sc);
  return image;
};
// ------------------------------- solution end ---------------------------------

const image = [
  [1, 1, 1],
  [1, 1, 0],
  [1, 0, 1],
];
console.log(`Input:  [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2`);
console.log(`Output: ${JSON.stringify(floodFill(image, 1, 1, 2))}`);
