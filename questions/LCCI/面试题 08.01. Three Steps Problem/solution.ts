// ------------------------------- solution begin -------------------------------
const waysToStep = (n: number): number => {
  const MOD = 1000000007;
  if (n === 1) return 1;
  if (n === 2) return 2;
  if (n === 3) return 4;
  let a = 1;
  let b = 2;
  let c = 4;
  for (let i = 4; i <= n; i++) {
    const d = (a + b + c) % MOD;
    a = b;
    b = c;
    c = d;
  }
  return c;
};
// ------------------------------- solution end ---------------------------------

const input = 5;
console.log(`Input:  ${input}`);
console.log(`Output: ${waysToStep(input)}`);
