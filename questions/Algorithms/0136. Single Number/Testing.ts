import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const singleNumber = (nums: number[]): number => {
  let result = 0;
  for (const num of nums) result ^= num;
  return result;
};
// ------------------------------- solution end ---------------------------------

const input = [4, 1, 2, 1, 2];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${singleNumber(input)}`);
