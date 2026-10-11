// ------------------------------- solution begin -------------------------------
const multiply = (A: number, B: number): number => {
  if (A < B) return multiply(B, A);
  if (B === 0) return 0;
  if (B === 1) return A;
  if (B & 1) return A + multiply(A, B - 1);
  return multiply(A << 1, B >> 1);
};
// ------------------------------- solution end ---------------------------------

const A = 3;
const B = 4;
console.log(`Input:  A = ${A}, B = ${B}`);
console.log(`Output: ${multiply(A, B)}`);
