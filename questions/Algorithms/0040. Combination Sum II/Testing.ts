import array from '../../library/typescript/array';
import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const combinationSum2 = (candidates: number[], target: number): number[][] => {
  candidates.sort((a, b) => a - b);
  const res: number[][] = [];
  const cur: number[] = [];

  const dfs = (start: number, remain: number) => {
    if (remain === 0) {
      res.push([...cur]);
      return;
    }
    for (let i = start; i < candidates.length; i++) {
      if (candidates[i] > remain) break;
      if (i > start && candidates[i] === candidates[i - 1]) continue;
      cur.push(candidates[i]);
      dfs(i + 1, remain - candidates[i]);
      cur.pop();
    }
  };

  dfs(0, target);
  return res;
};
// ------------------------------- solution end ---------------------------------

const input1 = [10, 1, 2, 7, 6, 1, 5];
const input2 = 8;
console.log(`Input:  ${array(input1)} ${input2}`);
console.log(`Output: ${matrix(combinationSum2(input1, input2))}`);
