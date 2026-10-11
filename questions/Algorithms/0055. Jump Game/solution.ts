import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const canJump = (nums: number[]): boolean => {
  let rightmost = 0;
  for (let i = 0; i < nums.length; i++) {
    if (i <= rightmost) {
      rightmost = Math.max(rightmost, i + nums[i]);
      if (rightmost >= nums.length - 1) return true;
    }
  }
  return false;
};
// ------------------------------- solution end ---------------------------------

const input = [3, 2, 1, 0, 4];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${canJump(input)}`);
