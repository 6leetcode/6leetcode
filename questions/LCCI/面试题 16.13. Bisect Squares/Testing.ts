// ------------------------------- solution begin -------------------------------
const cutSquares = (square1: number[], square2: number[]): number[] => {
  const c1x = square1[0] + square1[2] / 2;
  const c1y = square1[1] + square1[2] / 2;
  const c2x = square2[0] + square2[2] / 2;
  const c2y = square2[1] + square2[2] / 2;
  if (Math.abs(c1x - c2x) < 1e-12) {
    const bottom = Math.min(square1[1], square2[1]);
    const top = Math.max(square1[1] + square1[2], square2[1] + square2[2]);
    return [c1x, bottom, c1x, top];
  }
  const k = (c2y - c1y) / (c2x - c1x);
  const b = c1y - k * c1x;
  const pts: number[][] = [];
  for (const sq of [square1, square2]) {
    const x0 = sq[0];
    const y0 = sq[1];
    const side = sq[2];
    for (const x of [x0, x0 + side]) {
      const y = k * x + b;
      if (y >= y0 - 1e-6 && y <= y0 + side + 1e-6) pts.push([x, y]);
    }
    if (Math.abs(k) > 1e-12) {
      for (const y of [y0, y0 + side]) {
        const x = (y - b) / k;
        if (x >= x0 - 1e-6 && x <= x0 + side + 1e-6) pts.push([x, y]);
      }
    }
  }
  pts.sort((a, c) => a[0] - c[0] || a[1] - c[1]);
  return [pts[0][0], pts[0][1], pts[pts.length - 1][0], pts[pts.length - 1][1]];
};
// ------------------------------- solution end ---------------------------------

console.log(`Input:  square1 = {-1, -1, 2}, square2 = {0, -1, 2}`);
console.log(`Output: {${cutSquares([-1, -1, 2], [0, -1, 2]).join(', ')}}`);
