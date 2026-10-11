import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const majorityElement = (nums: number[]): number => {
  let candidate = nums[0];
  let count = 1;
  for (let i = 1; i < nums.length; i++) {
    if (count === 0) {
      candidate = nums[i];
      count = 1;
    } else if (nums[i] === candidate) {
      count++;
    } else {
      count--;
    }
  }
  return candidate;
};
// ------------------------------- solution end ---------------------------------

const input = [-1, -1, 2147483647];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${majorityElement(input)}`);
