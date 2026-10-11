// ------------------------------- solution begin -------------------------------
const pairSums = (nums: number[], target: number): number[][] => {
  nums.sort((a, b) => a - b);
  const res: number[][] = [];
  let i = 0;
  let j = nums.length - 1;
  while (i < j) {
    const sum = nums[i] + nums[j];
    if (sum < target) {
      i++;
    } else if (sum > target) {
      j--;
    } else {
      res.push([nums[i], nums[j]]);
      i++;
      j--;
    }
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const nums = [5, 6, 5, 6];
console.log(`Input:  nums = [5,6,5,6], target = 11`);
console.log(`Output: ${JSON.stringify(pairSums(nums, 11))}`);
