import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const largestNumber = (nums: number[]): string => {
  nums.sort((a, b) => {
    const ab = `${a}${b}`;
    const ba = `${b}${a}`;
    return ba.localeCompare(ab);
  });
  if (nums[0] === 0) return '0';
  return nums.join('');
};
// ------------------------------- solution end ---------------------------------

const input = [3, 30, 34, 5, 9];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${largestNumber(input)}`);
