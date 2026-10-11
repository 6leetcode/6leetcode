import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const moveZeroes = (nums: number[]): void => {
  let left = 0;
  for (let right = 0; right < nums.length; right++) {
    if (nums[right] !== 0) {
      [nums[left], nums[right]] = [nums[right], nums[left]];
      left++;
    }
  }
};
// ------------------------------- solution end ---------------------------------

const input = [0, 1, 0, 3, 12];
console.log(`Input:  ${array(input)}`);
moveZeroes(input);
console.log(`Output: ${array(input)}`);
