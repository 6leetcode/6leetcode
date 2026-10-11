import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const search = (nums: number[], target: number): number => {
  let lo = 0;
  let hi = nums.length - 1;
  while (lo <= hi) {
    const mid = lo + Math.floor((hi - lo) / 2);
    if (nums[mid] === target) return mid;
    if (nums[lo] <= nums[mid]) {
      if (target >= nums[lo] && target < nums[mid]) {
        hi = mid - 1;
      } else {
        lo = mid + 1;
      }
    } else {
      if (target > nums[mid] && target <= nums[hi]) {
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    }
  }
  return -1;
};
// ------------------------------- solution end ---------------------------------

const input1 = [4, 5, 6, 7, 0, 1, 2];
const input2 = 0;
console.log(`Input:  ${array(input1)} ${input2}`);
console.log(`Output: ${search(input1, input2)}`);
