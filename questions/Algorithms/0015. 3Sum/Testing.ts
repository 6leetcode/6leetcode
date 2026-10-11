import array from '../../library/typescript/array';
import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const threeSum = (nums: number[]): number[][] => {
  nums.sort((a, b) => a - b);
  const res: number[][] = [];

  for (let i = 0; i < nums.length - 2; i++) {
    if (nums[i] > 0) break;
    if (i > 0 && nums[i] === nums[i - 1]) continue;
    let left = i + 1;
    let right = nums.length - 1;
    while (left < right) {
      const sum = nums[i] + nums[left] + nums[right];
      if (sum < 0) {
        left++;
      } else if (sum > 0) {
        right--;
      } else {
        res.push([nums[i], nums[left], nums[right]]);
        while (left < right && nums[left] === nums[left + 1]) left++;
        while (left < right && nums[right] === nums[right - 1]) right--;
        left++;
        right--;
      }
    }
  }

  return res;
};
// ------------------------------- solution end ---------------------------------

const input = [-1, 0, 1, 2, -1, -4];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${matrix(threeSum(input))}`);
