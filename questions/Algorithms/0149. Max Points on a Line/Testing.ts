import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const gcd = (a: number, b: number): number => {
  a = Math.abs(a);
  b = Math.abs(b);
  while (b !== 0) {
    const t = a % b;
    a = b;
    b = t;
  }
  return a;
};

const maxPoints = (points: number[][]): number => {
  const n = points.length;
  if (n < 3) return n;

  let best = 1;
  for (let i = 0; i < n; i++) {
    const cnt = new Map<string, number>();
    for (let j = i + 1; j < n; j++) {
      let dy = points[j][1] - points[i][1];
      let dx = points[j][0] - points[i][0];
      let g = gcd(dy, dx);
      if (g === 0) g = 1;
      dy /= g;
      dx /= g;
      if (dx < 0 || (dx === 0 && dy < 0)) {
        dy = -dy;
        dx = -dx;
      }
      const key = `${dy},${dx}`;
      const c = (cnt.get(key) ?? 0) + 1;
      cnt.set(key, c);
      if (c + 1 > best) best = c + 1;
    }
  }
  return best;
};
// ------------------------------- solution end ---------------------------------

const run = (points: number[][]): void => {
  console.log(`Input:  ${matrix(points)}`);
  console.log(`Output: ${maxPoints(points.map((p) => [...p]))}`);
};

run([[1, 1], [2, 2], [3, 3]]);
run([[1, 1], [3, 2], [5, 3], [4, 1], [2, 3], [1, 4]]);
