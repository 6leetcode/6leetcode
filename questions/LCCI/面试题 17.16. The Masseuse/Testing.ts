import array from '../../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const massage = (nums: number[]): number => {
  let prev = 0;
  let cur = 0;
  for (const x of nums) {
    const tmp = cur;
    cur = Math.max(cur, prev + x);
    prev = tmp;
  }
  return cur;
};
// ------------------------------- solution end ---------------------------------

const nums = [1, 2, 3, 1];
console.log(`Input:  ${array(nums)}`);
console.log(`Output: ${massage(nums)}`);
