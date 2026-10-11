import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const combine = (n: number, k: number): number[][] => {
  const res: number[][] = [];
  const cur: number[] = [];

  const dfs = (start: number) => {
    if (cur.length === k) {
      res.push([...cur]);
      return;
    }
    for (let i = start; i <= n; i++) {
      cur.push(i);
      dfs(i + 1);
      cur.pop();
    }
  };

  dfs(1);
  return res;
};
// ------------------------------- solution end ---------------------------------

const n = 4;
const k = 2;
console.log(`Input:  ${n} ${k}`);
console.log(`Output: ${matrix(combine(n, k))}`);
