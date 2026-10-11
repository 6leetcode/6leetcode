import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const majorityElement = (nums: number[]): number => {
  nums.sort((a, b) => a - b);
  return nums[Math.floor(nums.length / 2)];
};
// ------------------------------- solution end ---------------------------------

const input = [-1, -1, 2147483647];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${majorityElement(input)}`);
