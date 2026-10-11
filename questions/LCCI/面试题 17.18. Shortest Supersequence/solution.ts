// ------------------------------- solution begin -------------------------------
const shortestSeq = (big: number[], small: number[]): number[] => {
  const need = new Set(small);
  let bestLen = big.length + 1;
  let best: number[] = [-1, -1];
  for (let l = 0; l < big.length; l++) {
    if (!need.has(big[l])) continue;
    const seen = new Set<number>();
    let r = l;
    while (r < big.length) {
      if (need.has(big[r])) {
        seen.add(big[r]);
        if (seen.size === need.size) break;
      }
      r++;
    }
    if (seen.size === need.size && r - l + 1 < bestLen) {
      bestLen = r - l + 1;
      best = [l, r];
    }
  }
  return best[0] === -1 ? [] : best;
};
// ------------------------------- solution end ---------------------------------

const big = [7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7];
const small = [1, 5, 9];
console.log(`Input:  big = [${big.join(', ')}], small = [${small.join(', ')}]`);
console.log(`Output: [${shortestSeq(big, small).join(', ')}]`);
