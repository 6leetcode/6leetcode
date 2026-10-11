import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const subsetsWithDup = (nums: number[]): number[][] => {
  nums.sort((a, b) => a - b);
  const res: number[][] = [];
  const cur: number[] = [];

  const dfs = (start: number) => {
    res.push([...cur]);
    for (let i = start; i < nums.length; i++) {
      if (i > start && nums[i] === nums[i - 1]) continue;
      cur.push(nums[i]);
      dfs(i + 1);
      cur.pop();
    }
  };

  dfs(0);
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = [1, 2, 2];
console.log(`Input:  [${input.join(', ')}]`);
console.log(`Output: ${matrix(subsetsWithDup(input))}`);
