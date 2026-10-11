import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const removeDuplicates = (nums: number[]): number => {
  if (nums.length <= 2) return nums.length;
  let i = 2;
  for (let j = 2; j < nums.length; j++) {
    if (nums[j] !== nums[i - 2]) {
      nums[i] = nums[j];
      i++;
    }
  }
  return i;
};
// ------------------------------- solution end ---------------------------------

const input = [1, 1, 1, 2, 2, 3];
console.log(`Input:  ${array(input)}`);
const k = removeDuplicates(input);
console.log(`Output: ${k}, ${array(input.slice(0, k))}`);
