// ------------------------------- solution begin -------------------------------
const generateParenthesis = (n: number): string[] => {
  const res: string[] = [];
  const cur: string[] = [];
  const backtrack = (open: number, close: number) => {
    if (cur.length === n * 2) {
      res.push(cur.join(''));
      return;
    }
    if (open < n) {
      cur.push('(');
      backtrack(open + 1, close);
      cur.pop();
    }
    if (close < open) {
      cur.push(')');
      backtrack(open, close + 1);
      cur.pop();
    }
  };
  backtrack(0, 0);
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = 3;
console.log(`Input:  ${input}`);
console.log(`Output: ${JSON.stringify(generateParenthesis(input))}`);
