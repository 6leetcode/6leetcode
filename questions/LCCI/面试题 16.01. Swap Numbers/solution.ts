import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const swapNumbers = (numbers: number[]): void => {
  numbers[0] ^= numbers[1];
  numbers[1] ^= numbers[0];
  numbers[0] ^= numbers[1];
};
// ------------------------------- solution end ---------------------------------

const input = [1, 2];
console.log(`Input:  ${array(input)}`);
swapNumbers(input);
console.log(`Output: ${array(input)}`);
