// ------------------------------- solution begin -------------------------------
const isUgly = (num: number): boolean => {
  if (num < 1) return false;
  for (const f of [2, 3, 5]) {
    while (num % f === 0) num /= f;
  }
  return num === 1;
};
// ------------------------------- solution end ---------------------------------

const input = 14;
console.log(`Input:  ${input}`);
console.log(`Output: ${isUgly(input)}`);
