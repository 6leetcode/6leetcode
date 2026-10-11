import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const threeSumClosest = (nums: number[], target: number): number => {
  nums.sort((a, b) => a - b);
  let ans = nums[0] + nums[1] + nums[nums.length - 1];

  for (let i = 0; i < nums.length - 2; i++) {
    let left = i + 1;
    let right = nums.length - 1;
    while (left < right) {
      const sum = nums[i] + nums[left] + nums[right];
      if (Math.abs(target - ans) > Math.abs(target - sum)) {
        ans = sum;
      }
      if (sum < target) left++;
      else right--;
    }
  }

  return ans;
};
// ------------------------------- solution end ---------------------------------

const input1 = [-1, 2, 1, -4];
const input2 = 2;
console.log(`Input:  ${array(input1)} ${input2}`);
console.log(`Output: ${threeSumClosest(input1, input2)}`);
