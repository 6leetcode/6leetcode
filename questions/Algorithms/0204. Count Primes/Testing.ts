// ------------------------------- solution begin -------------------------------
const countPrimes = (n: number): number => {
  if (n < 2) return 0;
  const isPrim: boolean[] = new Array(n).fill(true);
  for (let i = 2; i * i < n; i++) {
    if (isPrim[i]) {
      for (let j = i * i; j < n; j += i) isPrim[j] = false;
    }
  }
  let count = 0;
  for (let i = 2; i < n; i++) if (isPrim[i]) count++;
  return count;
};
// ------------------------------- solution end ---------------------------------

const input = 10;
console.log(`Input:  ${input}`);
console.log(`Output: ${countPrimes(input)}`);
