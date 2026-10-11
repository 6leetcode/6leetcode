// ------------------------------- solution begin -------------------------------
const bestLine = (points: number[][]): number[] => {
  let bestCount = 2;
  let bestI = 0;
  let bestJ = 1;
  for (let i = 0; i < points.length; i++) {
    for (let j = i + 1; j < points.length; j++) {
      const dx = points[j][0] - points[i][0];
      const dy = points[j][1] - points[i][1];
      let count = 2;
      for (let k = 0; k < points.length; k++) {
        if (k === i || k === j) continue;
        const ddx = points[k][0] - points[i][0];
        const ddy = points[k][1] - points[i][1];
        if (dx * ddy === dy * ddx) count++;
      }
      if (count > bestCount) {
        bestCount = count;
        bestI = i;
        bestJ = j;
      }
    }
  }
  return [bestI, bestJ];
};
// ------------------------------- solution end ---------------------------------

const points = [
  [0, 0],
  [1, 1],
  [1, 0],
  [2, 0],
];
console.log(`Input:  [[0,0],[1,1],[1,0],[2,0]]`);
console.log(`Output: [${bestLine(points).join(', ')}]`);
