// ------------------------------- solution begin -------------------------------
const intersection = (start1: number[], end1: number[], start2: number[], end2: number[]): number[] => {
  const [x1, y1] = start1;
  const [x2, y2] = end1;
  const [x3, y3] = start2;
  const [x4, y4] = end2;
  const d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
  if (Math.abs(d) > 1e-12) {
    const t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / d;
    const u = ((x1 - x3) * (y1 - y2) - (y1 - y3) * (x1 - x2)) / d;
    if (t >= -1e-9 && t <= 1 + 1e-9 && u >= -1e-9 && u <= 1 + 1e-9) {
      return [x1 + t * (x2 - x1), y1 + t * (y2 - y1)];
    }
    return [];
  }
  const onSegment = (p: number[], a: number[], b: number[]): boolean => {
    const cross = (b[0] - a[0]) * (p[1] - a[1]) - (b[1] - a[1]) * (p[0] - a[0]);
    if (Math.abs(cross) > 1e-9) return false;
    return (
      Math.min(a[0], b[0]) <= p[0] &&
      p[0] <= Math.max(a[0], b[0]) &&
      Math.min(a[1], b[1]) <= p[1] &&
      p[1] <= Math.max(a[1], b[1])
    );
  };
  const candidates: number[][] = [];
  for (const p of [start1, end1]) if (onSegment(p, start2, end2)) candidates.push(p);
  for (const p of [start2, end2]) if (onSegment(p, start1, end1)) candidates.push(p);
  if (candidates.length === 0) return [];
  candidates.sort((a, b) => a[0] - b[0] || a[1] - b[1]);
  return [candidates[0][0], candidates[0][1]];
};
// ------------------------------- solution end ---------------------------------

console.log(`Input:  line1 = {0, 0}, {1, 0}; line2 = {1, 1}, {0, -1}`);
console.log(`Output: {${intersection([0, 0], [1, 0], [1, 1], [0, -1]).join(', ')}}`);
