import array from '../../library/typescript/array';
import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const permute = (nums: number[]): number[][] => {
  const res: number[][] = [];
  const used = new Array(nums.length).fill(false);
  const cur: number[] = [];

  const backtrack = () => {
    if (cur.length === nums.length) {
      res.push([...cur]);
      return;
    }
    for (let i = 0; i < nums.length; i++) {
      if (used[i]) continue;
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

const input = [1, 2, 3];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${matrix(permute(input))}`);
