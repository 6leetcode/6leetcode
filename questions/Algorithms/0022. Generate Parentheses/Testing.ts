// ------------------------------- solution begin -------------------------------
const generateParenthesis = (n: number): string[] => {
  const res: string[] = [];

  const backtrack = (cur: string, open: number, close: number) => {
    if (cur.length === n * 2) {
      res.push(cur);
      return;
    }
    if (open < n) backtrack(cur + '(', open + 1, close);
    if (close < open) backtrack(cur + ')', open, close + 1);
  };

  backtrack('', 0, 0);
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = 3;
console.log(`Input:  ${input}`);
console.log(`Output: ${JSON.stringify(generateParenthesis(input))}`);
