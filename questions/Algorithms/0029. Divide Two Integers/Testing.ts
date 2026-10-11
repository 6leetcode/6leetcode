// ------------------------------- solution begin -------------------------------
const divide = (dividend: number, divisor: number): number => {
  if (dividend === -2147483648 && divisor === -1) return 2147483647;
  const sign = (dividend > 0) !== (divisor > 0) ? -1 : 1;
  let a = Math.abs(dividend);
  let b = Math.abs(divisor);
  let res = 0;
  while (a >= b) {
    let temp = b;
    let multiple = 1;
    while (a >= temp * 2) {
      temp *= 2;
      multiple *= 2;
    }
    a -= temp;
    res += multiple;
  }
  return sign * res;
};
// ------------------------------- solution end ---------------------------------

const input1 = 10;
const input2 = 3;
console.log(`Input:  ${input1} ${input2}`);
console.log(`Output: ${divide(input1, input2)}`);
