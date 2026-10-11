// ------------------------------- solution begin -------------------------------
const mySqrt = (x: number): number => {
  let r = Math.floor(Math.sqrt(x));
  while ((r + 1) * (r + 1) <= x) r++;
  while (r * r > x) r--;
  return r;
};
// ------------------------------- solution end ---------------------------------

const input = 8;
console.log(`Input:  ${input}`);
console.log(`Output: ${mySqrt(input)}`);
