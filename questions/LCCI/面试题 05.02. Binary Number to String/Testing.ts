// ------------------------------- solution begin -------------------------------
const printBin = (num: number): string => {
  let res = '0.';
  while (num > 0 && res.length < 32) {
    num *= 2;
    if (num >= 1) {
      res += '1';
      num -= 1;
    } else {
      res += '0';
    }
  }
  return num > 0 ? 'ERROR' : res;
};
// ------------------------------- solution end ---------------------------------

const input = 0.625;
console.log(`Input:  ${input}`);
console.log(`Output: ${printBin(input)}`);
