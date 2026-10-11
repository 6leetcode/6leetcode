// ------------------------------- solution begin -------------------------------
const removeDuplicates = (nums: number[]): number => {
  if (nums.length === 0) return 0;
  let i = 0;
  for (let j = 1; j < nums.length; j++) {
    if (nums[j] !== nums[i]) {
      i++;
      nums[i] = nums[j];
    }
  }
  return i + 1;
};
// ------------------------------- solution end ---------------------------------

import array from '../../library/typescript/array';

const input = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4];
console.log(`Input:  ${array(input)}`);
const k = removeDuplicates(input);
console.log(`Output: ${k}, ${array(input.slice(0, k))}`);
