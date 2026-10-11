// ------------------------------- solution begin -------------------------------
const maximum = (a: number, b: number): number => {
  const diff = a - b;
  const k = (diff < 0 ? -1 : 0) & 1;
  return a * (1 - k) + b * k;
};
// ------------------------------- solution end ---------------------------------

const a = 1;
const b = 2;
console.log(`Input:  a = ${a}, b = ${b}`);
console.log(`Output: ${maximum(a, b)}`);
