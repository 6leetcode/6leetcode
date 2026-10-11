import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const missingNumber = (nums: number[]): number => {
  let res = nums.length;
  for (let i = 0; i < nums.length; i++) res ^= i ^ nums[i];
  return res;
};
// ------------------------------- solution end ---------------------------------

const nums = [9, 6, 4, 2, 3, 5, 7, 0, 1];
console.log(`Input:  ${array(nums)}`);
console.log(`Output: ${missingNumber(nums)}`);
