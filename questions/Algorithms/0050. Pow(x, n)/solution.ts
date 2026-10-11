// ------------------------------- solution begin -------------------------------
const myPow = (x: number, n: number): number => {
  let base = x;
  let e = n;
  if (e < 0) {
    base = 1 / base;
    e = -e;
  }
  let res = 1;
  while (e > 0) {
    if (e & 1) res *= base;
    base *= base;
    e = Math.floor(e / 2);
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const input1 = 2.0;
const input2 = 10;
console.log(`Input:  ${input1} ${input2}`);
console.log(`Output: ${myPow(input1, input2)}`);
