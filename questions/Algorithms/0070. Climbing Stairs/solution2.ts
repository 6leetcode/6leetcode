// ------------------------------- solution begin -------------------------------
const climbStairs = (n: number): number => {
  // with this formal `$\frac{\frac{1+\sqrt{5}^{n}}{2}-\frac{1-\sqrt{5}^{n}}{2}}{\sqrt{5}}$`
  const s = Math.sqrt(5);
  return Math.floor((Math.pow((1 + s) / 2, n + 1) + Math.pow((1 - s) / 2, n + 1)) / s + 0.5);
};
// ------------------------------- solution end ---------------------------------

const input = 10;
console.log(`Input:  ${input}`);
console.log(`Output: ${climbStairs(input)}`);
