// ------------------------------- solution begin -------------------------------
const reverse = (x: number): number => {
  const sign = x < 0 ? -1 : 1;
  let n = Math.abs(x);
  let y = 0;

  while (n > 0) {
    y = y * 10 + (n % 10);
    n = Math.floor(n / 10);
  }

  y *= sign;
  if (y < -(2 ** 31) || y > 2 ** 31 - 1) return 0;
  return y;
};
// ------------------------------- solution end ---------------------------------

const input = 12345;
console.log(`Input:  ${input}`);
console.log(`Output: ${reverse(input)}`);
