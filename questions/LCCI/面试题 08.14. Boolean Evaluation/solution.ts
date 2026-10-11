// ------------------------------- solution begin -------------------------------
const countEval = (s: string, result: number): number => {
  const memo = new Map<string, number>();
  const solve = (i: number, j: number, want: number): number => {
    if (i === j) return (s.charCodeAt(i) - 48) === want ? 1 : 0;
    const key = `${i},${j},${want}`;
    if (memo.has(key)) return memo.get(key)!;
    let total = 0;
    for (let k = i + 1; k < j; k += 2) {
      const op = s[k];
      const l0 = solve(i, k - 1, 0);
      const l1 = solve(i, k - 1, 1);
      const r0 = solve(k + 1, j, 0);
      const r1 = solve(k + 1, j, 1);
      let t: number;
      let f: number;
      if (op === '&') {
        t = l1 * r1;
        f = (l0 + l1) * (r0 + r1) - t;
      } else if (op === '|') {
        f = l0 * r0;
        t = (l0 + l1) * (r0 + r1) - f;
      } else {
        t = l0 * r1 + l1 * r0;
        f = l0 * r0 + l1 * r1;
      }
      total += want ? t : f;
    }
    memo.set(key, total);
    return total;
  };
  return solve(0, s.length - 1, result);
};
// ------------------------------- solution end ---------------------------------

const s = '1^0|0|1';
const result = 0;
console.log(`Input:  s = ${s}, result = ${result}`);
console.log(`Output: ${countEval(s, result)}`);
