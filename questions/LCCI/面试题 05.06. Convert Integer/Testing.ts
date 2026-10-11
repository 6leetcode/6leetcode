// ------------------------------- solution begin -------------------------------
const convertInteger = (A: number, B: number): number => {
  let x = (A ^ B) >>> 0;
  let count = 0;
  while (x) {
    count += x & 1;
    x >>>= 1;
  }
  return count;
};
// ------------------------------- solution end ---------------------------------

const A = 29;
const B = 15;
console.log(`Input:  A = ${A}, B = ${B}`);
console.log(`Output: ${convertInteger(A, B)}`);
