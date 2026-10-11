// ------------------------------- solution begin -------------------------------
const drawLine = (length: number, w: number, x1: number, x2: number, y: number): number[] => {
  const res: number[] = new Array(length).fill(0);
  const perRow = Math.floor(w / 32);
  for (let x = x1; x <= x2; x++) {
    const group = y * perRow + Math.floor(x / 32);
    const bit = 31 - (x % 32);
    res[group] = res[group] | (1 << bit);
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

console.log(`Input:  length = 1, w = 32, x1 = 30, x2 = 31, y = 0`);
console.log(`Output: [${drawLine(1, 32, 30, 31, 0).join(', ')}]`);
