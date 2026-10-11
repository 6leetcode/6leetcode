// ------------------------------- solution begin -------------------------------
const intToRoman = (num: number): string => {
  const symbols = ['M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I'];
  const values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
  let result = '';

  for (let i = 0; i < values.length && num > 0; i++) {
    while (num >= values[i]) {
      num -= values[i];
      result += symbols[i];
    }
  }

  return result;
};
// ------------------------------- solution end ---------------------------------

const input = 3;
console.log(`Input:  ${input}`);
console.log(`Output: ${intToRoman(input)}`);
