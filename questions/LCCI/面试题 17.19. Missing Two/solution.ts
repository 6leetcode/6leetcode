// ------------------------------- solution begin -------------------------------
const missingTwo = (nums: number[]): number[] => {
  const n = nums.length + 2;
  const sumAll = (n * (n + 1)) / 2;
  const sqAll = (n * (n + 1) * (2 * n + 1)) / 6;
  let sum = 0;
  let sq = 0;
  for (const x of nums) {
    sum += x;
    sq += x * x;
  }
  const ds = sumAll - sum;
  const dq = sqAll - sq;
  const diff = Math.round(Math.sqrt(2 * dq - ds * ds));
  const a = Math.round((ds + diff) / 2);
  const b = ds - a;
  return [a, b];
};
// ------------------------------- solution end ---------------------------------

const nums = [2, 3];
console.log(`Input:  [${nums.join(', ')}]`);
console.log(`Output: [${missingTwo(nums).join(', ')}]`);
