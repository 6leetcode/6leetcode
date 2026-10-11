import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const plusOne = (digits: number[]): number[] => {
  let carry = 1;
  for (let i = digits.length - 1; i >= 0; i--) {
    const sum = digits[i] + carry;
    digits[i] = sum % 10;
    carry = Math.floor(sum / 10);
  }
  if (carry === 1) digits.unshift(1);
  return digits;
};
// ------------------------------- solution end ---------------------------------

const input = [9, 9];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${array(plusOne(input))}`);
