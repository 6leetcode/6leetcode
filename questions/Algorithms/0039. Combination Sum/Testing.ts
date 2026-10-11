import array from '../../library/typescript/array';
import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const combinationSum = (candidates: number[], target: number): number[][] => {
  const res: number[][] = [];
  const cur: number[] = [];

  const dfs = (start: number, remain: number) => {
    if (remain === 0) {
      res.push([...cur]);
      return;
    }
    for (let i = start; i < candidates.length; i++) {
      if (candidates[i] > remain) continue;
      cur.push(candidates[i]);
      dfs(i, remain - candidates[i]);
      cur.pop();
    }
  };

  dfs(0, target);
  return res;
};
// ------------------------------- solution end ---------------------------------

const input1 = [2, 3, 6, 7];
const input2 = 7;
console.log(`Input:  ${array(input1)} ${input2}`);
console.log(`Output: ${matrix(combinationSum(input1, input2))}`);
