// ------------------------------- solution begin -------------------------------
const trailingZeroes = (n: number): number => {
  let count = 0;
  while (n >= 5) {
    n = Math.floor(n / 5);
    count += n;
  }
  return count;
};
// ------------------------------- solution end ---------------------------------

const input = 5;
console.log(`Input:  ${input}`);
console.log(`Output: ${trailingZeroes(input)}`);
