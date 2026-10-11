import array from '../../library/typescript/array';
import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const subsets = (nums: number[]): number[][] => {
  const res: number[][] = [];
  const cur: number[] = [];

  const dfs = (start: number) => {
    res.push([...cur]);
    for (let i = start; i < nums.length; i++) {
      cur.push(nums[i]);
      dfs(i + 1);
      cur.pop();
    }
  };

  dfs(0);
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = [1, 2, 3];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${matrix(subsets(input))}`);
