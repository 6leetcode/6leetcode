import array from '../../library/typescript/array';
import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const permuteUnique = (nums: number[]): number[][] => {
  nums.sort((a, b) => a - b);
  const n = nums.length;
  const res: number[][] = [];
  const cur: number[] = [];
  const used = new Array(n).fill(false);

  const backtrack = () => {
    if (cur.length === n) {
      res.push([...cur]);
      return;
    }
    for (let i = 0; i < n; i++) {
      if (used[i]) continue;
      if (i > 0 && nums[i] === nums[i - 1] && !used[i - 1]) continue;
      used[i] = true;
      cur.push(nums[i]);
      backtrack();
      cur.pop();
      used[i] = false;
    }
  };

  backtrack();
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = [1, 1, 2];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${matrix(permuteUnique(input))}`);
