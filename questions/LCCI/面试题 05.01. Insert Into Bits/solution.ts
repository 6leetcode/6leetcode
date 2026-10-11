// ------------------------------- solution begin -------------------------------
const insertBits = (N: number, M: number, i: number, j: number): number => {
  const mask = ((1 << (j - i + 1)) - 1) << i;
  N &= ~mask;
  N |= M << i;
  return N;
};
// ------------------------------- solution end ---------------------------------

console.log(`Input:  N = 10000000000, M = 10011, i = 2, j = 6`);
console.log(`Output: ${insertBits(1024, 19, 2, 6)}`);
