import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const searchInsert = (nums: number[], target: number): number => {
  let lo = 0;
  let hi = nums.length;
  while (lo < hi) {
    const mid = lo + Math.floor((hi - lo) / 2);
    if (nums[mid] < target) {
      lo = mid + 1;
    } else {
      hi = mid;
    }
  }
  return lo;
};
// ------------------------------- solution end ---------------------------------

const input1 = [1, 3, 5, 6];
const input2 = 5;
console.log(`Input:  ${array(input1)} ${input2}`);
console.log(`Output: ${searchInsert(input1, input2)}`);
