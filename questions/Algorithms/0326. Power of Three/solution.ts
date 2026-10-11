// ------------------------------- solution begin -------------------------------
const isPowerOfThree = (n: number): boolean => n > 0 && 1162261467 % n === 0;
// ------------------------------- solution end ---------------------------------

const input = 27;
console.log(`Input:  ${input}`);
console.log(`Output: ${isPowerOfThree(input)}`);
