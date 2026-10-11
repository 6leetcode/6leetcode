import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const searchRange = (nums: number[], target: number): number[] => {
  const lowerBound = (t: number): number => {
    let lo = 0;
    let hi = nums.length;
    while (lo < hi) {
      const mid = lo + Math.floor((hi - lo) / 2);
      if (nums[mid] < t) {
        lo = mid + 1;
      } else {
        hi = mid;
      }
    }
    return lo;
  };

  const lo = lowerBound(target);
  const hi = lowerBound(target + 1) - 1;
  if (lo < nums.length && nums[lo] === target) return [lo, hi];
  return [-1, -1];
};
// ------------------------------- solution end ---------------------------------

const input1 = [5, 7, 7, 8, 8, 10];
const input2 = 8;
console.log(`Input:  ${array(input1)} ${input2}`);
console.log(`Output: ${array(searchRange(input1, input2))}`);
