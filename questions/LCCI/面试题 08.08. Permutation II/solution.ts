// ------------------------------- solution begin -------------------------------
const permutation = (S: string): string[] => {
  const s = S.split('').sort();
  const n = s.length;
  const res: string[] = [];
  const used: boolean[] = new Array(n).fill(false);
  const cur: string[] = [];
  const dfs = () => {
    if (cur.length === n) {
      res.push(cur.join(''));
      return;
    }
    for (let i = 0; i < n; i++) {
      if (used[i]) continue;
      if (i > 0 && s[i] === s[i - 1] && !used[i - 1]) continue;
      used[i] = true;
      cur.push(s[i]);
      dfs();
      cur.pop();
      used[i] = false;
    }
  };
  dfs();
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = 'qqe';
console.log(`Input:  ${input}`);
console.log(`Output: ${JSON.stringify(permutation(input))}`);
