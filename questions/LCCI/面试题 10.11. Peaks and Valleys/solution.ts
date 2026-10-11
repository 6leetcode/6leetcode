import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const wiggleSort = (nums: number[]): void => {
  nums.sort((a, b) => a - b);
  for (let i = 0; i + 1 < nums.length; i += 2) {
    [nums[i], nums[i + 1]] = [nums[i + 1], nums[i]];
  }
};
// ------------------------------- solution end ---------------------------------

const input = [5, 3, 1, 2, 3];
console.log(`Input:  ${array(input)}`);
wiggleSort(input);
console.log(`Output: ${array(input)}`);
