import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const jump = (nums: number[]): number => {
  let jumps = 0;
  let curEnd = 0;
  let farthest = 0;
  for (let i = 0; i < nums.length - 1; i++) {
    farthest = Math.max(farthest, i + nums[i]);
    if (i === curEnd) {
      jumps++;
      curEnd = farthest;
    }
  }
  return jumps;
};
// ------------------------------- solution end ---------------------------------

const input = [2, 3, 1, 1, 4];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${jump(input)}`);
