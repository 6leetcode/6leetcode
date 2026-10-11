// ------------------------------- solution begin -------------------------------
const findMagicIndex = (nums: number[]): number => {
  const search = (lo: number, hi: number): number => {
    if (lo > hi) return -1;
    const mid = Math.floor((lo + hi) / 2);
    if (nums[mid] === mid) return mid;
    const res = search(lo, Math.min(mid - 1, nums[mid]));
    if (res !== -1) return res;
    return search(Math.max(mid + 1, nums[mid]), hi);
  };
  return search(0, nums.length - 1);
};
// ------------------------------- solution end ---------------------------------

const nums = [1, 1, 1];
console.log(`Input:  [1, 1, 1]`);
console.log(`Output: ${findMagicIndex(nums)}`);
