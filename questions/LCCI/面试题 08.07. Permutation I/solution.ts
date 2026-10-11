// ------------------------------- solution begin -------------------------------
const permutation = (S: string): string[] => {
  const res: string[] = [];
  const used: boolean[] = new Array(S.length).fill(false);
  const cur: string[] = [];
  const dfs = () => {
    if (cur.length === S.length) {
      res.push(cur.join(''));
      return;
    }
    for (let i = 0; i < S.length; i++) {
      if (used[i]) continue;
      used[i] = true;
      cur.push(S[i]);
      dfs();
      cur.pop();
      used[i] = false;
    }
  };
  dfs();
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = 'qwe';
console.log(`Input:  ${input}`);
console.log(`Output: ${JSON.stringify(permutation(input))}`);
