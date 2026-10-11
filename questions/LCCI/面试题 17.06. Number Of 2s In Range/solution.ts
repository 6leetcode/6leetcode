// ------------------------------- solution begin -------------------------------
const numberOf2sInRange = (n: number): number => {
  let count = 0;
  for (let factor = 1; factor <= n; factor *= 10) {
    const cur = Math.floor(n / factor) % 10;
    const higher = Math.floor(n / (factor * 10));
    const lower = n % factor;
    if (cur < 2) count += higher * factor;
    else if (cur === 2) count += higher * factor + lower + 1;
    else count += (higher + 1) * factor;
  }
  return count;
};
// ------------------------------- solution end ---------------------------------

const input = 25;
console.log(`Input:  ${input}`);
console.log(`Output: ${numberOf2sInRange(input)}`);
