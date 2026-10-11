// ------------------------------- solution begin -------------------------------
const reverseBits = (num: number): number => {
  let best = 0;
  let prev = 0;
  let cur = 0;
  for (let i = 0; i < 32; i++) {
    if (((num >> i) & 1) === 1) {
      cur++;
    } else {
      best = Math.max(best, prev + cur + 1);
      prev = cur;
      cur = 0;
    }
  }
  best = Math.max(best, prev + cur + 1);
  return Math.min(best, 32);
};
// ------------------------------- solution end ---------------------------------

const input = 1775;
console.log(`Input:  ${input}`);
console.log(`Output: ${reverseBits(input)}`);
