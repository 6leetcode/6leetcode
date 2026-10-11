import array from '../../library/typescript/array';
import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const fourSum = (nums: number[], target: number): number[][] => {
  nums.sort((a, b) => a - b);
  const n = nums.length;
  const res: number[][] = [];

  for (let i = 0; i < n - 3; i++) {
    if (i > 0 && nums[i] === nums[i - 1]) continue;
    for (let j = i + 1; j < n - 2; j++) {
      if (j > i + 1 && nums[j] === nums[j - 1]) continue;
      let left = j + 1;
      let right = n - 1;
      while (left < right) {
        const sum = nums[i] + nums[j] + nums[left] + nums[right];
        if (sum < target) {
          left++;
        } else if (sum > target) {
          right--;
        } else {
          res.push([nums[i], nums[j], nums[left], nums[right]]);
          while (left < right && nums[left] === nums[left + 1]) left++;
          while (left < right && nums[right] === nums[right - 1]) right--;
          left++;
          right--;
        }
      }
    }
  }

  return res;
};
// ------------------------------- solution end ---------------------------------

const input1 = [1, 0, -1, 0, -2, 2];
const input2 = 0;
console.log(`Input:  ${array(input1)} ${input2}`);
console.log(`Output: ${matrix(fourSum(input1, input2))}`);
