import array from '../../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const majorityElement = (nums: number[]): number => {
  let candidate = nums[0];
  let count = 0;
  for (const x of nums) {
    if (count === 0) candidate = x;
    count += x === candidate ? 1 : -1;
  }
  const c = nums.filter((x) => x === candidate).length;
  return c > nums.length / 2 ? candidate : -1;
};
// ------------------------------- solution end ---------------------------------

const nums = [1, 2, 5, 9, 5, 9, 5, 5, 5];
console.log(`Input:  ${array(nums)}`);
console.log(`Output: ${majorityElement(nums)}`);
