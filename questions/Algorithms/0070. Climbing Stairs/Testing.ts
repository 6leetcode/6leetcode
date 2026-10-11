// ------------------------------- solution begin -------------------------------
const climbStairs = (n: number): number => {
  let prev = 0;
  let cur = 1;
  for (let i = 1; i <= n; i++) {
    [prev, cur] = [cur, prev + cur];
  }
  return cur;
};
// ------------------------------- solution end ---------------------------------

const input = 10;
console.log(`Input:  ${input}`);
console.log(`Output: ${climbStairs(input)}`);
