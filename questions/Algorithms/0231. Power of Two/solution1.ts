// ------------------------------- solution begin -------------------------------
const isPowerOfTwo = (n: number): boolean => {
  let cnt = 0; // num of bits 1
  for (; n > 0; n >>= 1) {
    if (n & 1) {
      cnt++;
      if (cnt > 1) return false;
    }
  }
  return cnt === 1;
};
// ------------------------------- solution end ---------------------------------

const input = 16;
console.log(`Input:  ${input}`);
console.log(`Output: ${isPowerOfTwo(input)}`);
