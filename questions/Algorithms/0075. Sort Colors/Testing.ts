import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const sortColors = (nums: number[]): void => {
  let ptr = 0;
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] === 0) {
      [nums[i], nums[ptr]] = [nums[ptr], nums[i]];
      ptr++;
    }
  }
  for (let i = ptr; i < nums.length; i++) {
    if (nums[i] === 1) {
      [nums[i], nums[ptr]] = [nums[ptr], nums[i]];
      ptr++;
    }
  }
};
// ------------------------------- solution end ---------------------------------

const input = [2, 0, 2, 1, 1, 0];
console.log(`Input:  ${array(input)}`);
sortColors(input);
console.log(`Output: ${array(input)}`);
