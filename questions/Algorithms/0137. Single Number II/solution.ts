import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const singleNumber = (nums: number[]): number => {
  let ones = 0;
  let twos = 0;
  for (const num of nums) {
    ones = ones ^ (num & ~twos);
    twos = twos ^ (num & ~ones);
  }
  return ones;
};
// ------------------------------- solution end ---------------------------------

const input = [0, 1, 0, 1, 0, 1, 99];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${singleNumber(input)}`);
