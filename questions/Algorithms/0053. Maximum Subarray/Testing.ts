import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const maxSubArray = (nums: number[]): number => {
  let pre = 0;
  let maxAns = nums[0];
  for (const x of nums) {
    pre = Math.max(pre + x, x);
    maxAns = Math.max(maxAns, pre);
  }
  return maxAns;
};
// ------------------------------- solution end ---------------------------------

const input = [-2, 1, -3, 4, -1, 2, 1, -5, 4];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${maxSubArray(input)}`);
