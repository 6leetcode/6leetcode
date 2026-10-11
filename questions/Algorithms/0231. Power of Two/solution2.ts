// ------------------------------- solution begin -------------------------------
const isPowerOfTwo = (n: number): boolean => n > 0 && (n & (n - 1)) === 0;
// ------------------------------- solution end ---------------------------------

const input = 16;
console.log(`Input:  ${input}`);
console.log(`Output: ${isPowerOfTwo(input)}`);
